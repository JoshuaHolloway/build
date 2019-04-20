cmake_minimum_required(VERSION 3.10.2)
project(MyProject VERSION 1.0.0)

add_library(
	say-hello STATIC
	hello.hpp
	hello.cpp	
)

# (<executable> <source>)
add_executable(josh main.cpp)

# (<executable-linking-into> <link-interface-mode> <name-of-library-linking-into-executable>)
target_link_libraries(josh PRIVATE say-hello)
