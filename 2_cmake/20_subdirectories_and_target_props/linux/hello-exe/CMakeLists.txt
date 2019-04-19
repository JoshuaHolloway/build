# (<executable> <source>)
add_executable(josh main.cpp)

# (<executable-linking-into> <link-interface-mode> <name-of-library-linking-into-executable>)
target_link_libraries(josh PRIVATE say-hello)