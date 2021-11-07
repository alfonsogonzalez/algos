set( headers
	reverse_string.hpp
	ListNode.hpp
	swap_nodes_pairs.hpp
)

set( sources
	reverse_string.cpp
	ListNode.cpp
	swap_nodes_pairs.cpp
)

add_library( algos STATIC ${sources} ${headers} )

add_subdirectory( test )
