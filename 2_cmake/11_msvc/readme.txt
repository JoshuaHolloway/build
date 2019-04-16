Visual C++ without Visual Studio
https://youtu.be/nGnKmEkNBkw

CMake in Visual Studio Code
https://youtu.be/wP4cwAtU-g8

• MSBuild is used to compile and link.
• Ninja can be used in its place.
• Visual Studio is the entire suite of products as well as the IDE that acts as the front-end to these products.
• Visual C++ is the name of the toolchain used for C++ programs and project.
• Visual C++ is sometimes shortened to MSVC
• Visual C++ also has the following command line based products:
   -CL.exe:   Compiler
   -Link.exe: Linker
• nMake is a partial re-implementation of the standard Unix make.

• vcvarsall.bat sets all the environment variables:
> C:\apps\VS\2019\Community\VC\Auxiliary\Build\vcvarsall.bat x64

• To run this at startup, you can add it to:
  C:\Users\josh\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup
• Anything in this folder will run at startup.
• You can add a startup.bat file if desired.
• Instead of using the startup option previously described, you can create a shell.bat script and place the vcvarsall.bat command in the shell script:
@echo off
call “C:\apps\VS\2019\Community\VC\Auxiliary\Build\vcvarsall.bat” x64

• We can specify to run our shell script at program startup by modifying the properties of the command prompt by appending the following to 
    o Command Prompt Properties -> Shortcut -> Target:
      /k D:\startup\shell.bat
-------------------------------------------------------------------------------
Visual Studio Versions: (https://en.wikipedia.org/wiki/Microsoft_Visual_Studio)
             vcvarsall.bat
             cl.exe
2008     9
2010	10	
2012	11	
2013	12	
2015	14	
2017	15	C:\apps\VS\2017\Community\VC\Auxiliary\Build\vcvarsall.bat
            C:\apps\VS\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe

2019	16	C:\apps\VS\2019\Community\VC\Auxiliary\Build\vcvarsall.bat
            C:\apps\VS\2019\Community\VC\Tools\MSVC\14.20.27508\bin\Hostx64\x64\cl.exe

-------------------------------------------------------------------------------
• Print help options:
> "C:\apps\VS\2019\Community\VC\Tools\MSVC\14.20.27508\bin\Hostx64\x64\cl.exe" /?

• If already ran vcvarsall.bat (or if using the x64 Native Tools Command Prompt):
> cl /?

-------------------------------------------------------------------------------
Compiler Flags:
/Zi	        Generate Debug Info
	
Terminal Commands:
del .*x	    Remove all files with .x extension
-------------------------------------------------------------------------------	
VS-Debugger IDE
devenv <exe_name>.exe
• Go into properties in VS debugger (right click on <exe_name> -> properties)
• F11 to start debugging and stop on first line
-------------------------------------------------------------------------------	
Unicode vs ANSI:
•	Many functions that take strings have an ANSI and a Wide character version (UTC-16)
•	In Windows, every function that takes a string is actually a different function via a macro
    o Inside windows.h there is a #define that uses A or W version depending on whether we are compiling in ANSI or Unicode mode.
         By default, if you just call CL then ANSI is used by default
-------------------------------------------------------------------------------	
Linking Libraries 
• When we compile the program Windows needs to bind to us
    o Windows needs to find the places in our .exe where we tried to call it.
         It needs to be able to go into our .exe and patch those locations to point to its own code that is running at that time in memory
         To do this windows uses an import library
         When you link together the obj files to create the executable, the compiler has to have a library that says here are the functions that 
          we are going to call that are in windows and the compiler will put little markers in to tell where it should go when windows actually loads it.
• The compiler puts in at least one import library by default named kernel32.dll
    o So you can call into the kernel without explicitly importing anything
    o But if you call into anything else (e.g. the UI-system in user32.dll) we must explicitly include it which is done by just appending the .lib file 
      to the end of the compiler line (user32.lib)
         If we don’t specify the import libraries we need then we get an unresolved external symbol error.
-------------------------------------------------------------------------------	
Environment-Variables
> set

• Note INCLUDE, LIB, and LIBPATH:
    o INCLUDE is a list of diretory's where Visual-C++ will look for include files by default.
    o LIB is a list of directory's where the linker will search for library files.

> echo %INCLUDE%
> echo %LIB%
-------------------------------------------------------------------------------	
