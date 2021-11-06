set( headers
	reverse_string.hpp
)

set( sources
	reverse_string.cpp
)

add_library( algos STATIC ${sources} ${headers} )

add_subdirectory( test )
