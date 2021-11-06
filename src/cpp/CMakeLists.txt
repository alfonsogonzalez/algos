set( headers
	reverse_string.hpp
	swap_nodes_pairs.hpp
)

set( sources
	reverse_string.cpp
	swap_nodes_pairs.cpp
)

add_library( algos STATIC ${sources} ${headers} )

add_subdirectory( test )
