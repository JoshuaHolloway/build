/*
 *	MLengiendemo.c
 *
 *	This is a simple program that illustrates how to call the MATLAB
 *	Engine functions from a C program for windows
 *
 *      Note: 
 *      Use the Lcc or Microsoft Visual C++ compiler to build engwindemo.exe. 
 *      The source code in engwindemo.c is not supported for other compilers.
 *
 * Copyright 1984-2003 The MathWorks, Inc.
 */
#include <windows.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "engine.h"  // MATLAB Engine Header File required for building in Visual Studio 
/*
 *
 *	Also made the following changes to the to the project build properties
 *	- Additional header file path:   C:\Program Files\MATLAB\R2014a\extern\include
 *	- Additional library file path:  C:\Program Files\MATLAB\R2014a\extern\lib\win64\microsoft  
 *	- Additional libraries:  libmx.lib, libmat.lib. libeng.lib
 *
 */


#include "gaussian3x3.h" // We are going to develop a Gaussian filter in C

#define BUFSIZE 256

int PASCAL WinMain (HINSTANCE hInstance,
                    HINSTANCE hPrevInstance,
                    LPSTR     lpszCmdLine,
                    int       nCmdShow)

{
	Engine *ep;						// Pointer to an MATLAB Engine
	mxArray *Igray = NULL, *I_size, *PSNR; // Pointer to an MATLAB variables
	char buffer[BUFSIZE+1];

	/*
	 * Start the MATLAB engine 
	 *	- MATLAB runs in the background
	 *	- Access to MATLAB command prompt 
	 *	- Visibility to workspace variables
	 */
	ep = engOpen(NULL);
	

	/*
	 * PART I
	 *
	 *	We will work with MATLAB interactively to:
	 *		- Quickly inject retrieve and preprocess images before hardware/firmware is ready
	 *		- Visualize data using MATLAB plots 
	 */
	engEvalString(ep, "cd MATLAB_Demo_Files");
	engEvalString(ep, "img = imread('Toy_Candy_Image.jpg');");	// Read in image to process
	engEvalString(ep, "Igray = rgb2gray(img);");		// Convert to grayscale
	engEvalString(ep, "IgraySize = size(Igray);");		// Image size in datatype of custom Code
	engEvalString(ep, "figure; imshow(Igray);");		// Display image to verify

	/* MATLAB has built in plotting and handling for matrix manipulation 
	 * Typically a lot of C Code
	 *
	 *	Access to complete list of MATLAB functions for quick function prototyping 
	 *  Call prebuilt MATLAB scripts to fill gaps and for helper functions 
	 *	Generate C code to implement back into application
	 */

	engEvalString(ep, "Thresh_Fn(1)");  // Call entire MATLAB scripts/functions and pass arguments
	

	/*
	 * Retrieve data from MATLAB to process in C code
	 * Data marshalling  
	 */
	
	Igray = engGetVariable(ep, "Igray");								// Pointer to MATLAB variable
	const uint8_t* Ip = static_cast<uint8_t*>(mxGetData(Igray));		// Pointer in C variable
	
	I_size  = engGetVariable(ep,"IgraySize");							// Pointer to MATLAB variable
	const double* I_sizep = static_cast<double*>(mxGetData(I_size));	// Pointer in C variable

	mxArray* output = mxCreateNumericMatrix(mxGetM(Igray), mxGetN(Igray), mxUINT8_CLASS, mxREAL);	// Pointer to MATLAB variable
	uint8_t* outputp = static_cast<uint8_t*>(mxGetData(output));									// Pointer in C variable
	
	
	/*
	 * Your custom C implementation of a 3x3 Gaussian Filter
	 */
	fngaussian3x3(Ip, I_sizep, outputp);  // Custom function working on data from MATLAB


	/* Push C results to MATLAB workspace for 
	 * Visualization
	 * Analysis 
	 * And Testing 
	 */

	engPutVariable(ep, "output", output);
	engEvalString(ep, "figure; imshow(output);");						// Display the results for visual analysis
	engEvalString(ep, "PSNR = Test_Gaussian_C(Igray, output, .5)");		// Compare results with the prototyped output
	
	PSNR = engGetVariable(ep, "PSNR");									// Pointer to MATLAB variable 
	const double* I_psnr = static_cast<double*>(mxGetData(PSNR));		// Pointer in C variable


	/*
	 * We're done! Free memory, close MATLAB engine and exit.
	 */
	mxDestroyArray(Igray);
	mxDestroyArray(I_size);

	
	return(0);
}
