// gaussian3x3.cpp : Defines the exported functions for the DLL application.
//

#include <stdint.h>
#include "gaussian3x3.h"



/* 
  image   - input image
  imsize  - image size (size 2)
  output  - output image, should be allocated outside this scope
  */
 void fngaussian3x3(const uint8_t* image, const double* imsize,  uint8_t* output)
{
	int firstInd  = 0;
	int secondInd = 0;

	int firstDim  = *(imsize);
	int secondDim = *(imsize+1);

	double pixelValue = 0;
	// Perform 3x3 gaussing filtering ignoring 1pixel boundaries all around
	for(firstInd=1; firstInd< firstDim-1; firstInd++){
		for(secondInd=1; secondInd< secondDim-1; secondInd++){			

			pixelValue = 
				  image[firstDim*(secondInd-1)+firstInd-1] *0.1118
				+ image[firstDim*(secondInd-1)+firstInd]  *0.1141
				+ image[firstDim*(secondInd-1)+firstInd+1] *0.1118

				+ image[firstDim*secondInd+firstInd-1] *0.1118
				+ image[firstDim*secondInd+firstInd]  *0.1141
				+ image[firstDim*secondInd+firstInd+1] *0.1118

				+ image[firstDim*(secondInd+1)+firstInd-1] *0.1118
				+ image[firstDim*(secondInd+1)+firstInd]  *0.1141
				+ image[firstDim*(secondInd+1)+firstInd+1] *0.1118;

			output[firstDim*secondInd+firstInd	] = (uint8_t)pixelValue;
		}
	}
}

