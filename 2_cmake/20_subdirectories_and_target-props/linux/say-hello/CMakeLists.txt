add_library(
	say-hello STATIC
	say-hello/src/hello.hpp
	say-hello/src/hello.cpp	
)

# (<name-of-target> <interface-mode> <list-of-directories>)
target_include_directories(say-hello PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

#${CMAKE_CURRENT_SOURCE_DIR} refers to the directory that owns the currently-being processed CMakeLists.txt file 
#-i.e., linux/say-hello