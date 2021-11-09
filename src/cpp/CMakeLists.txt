set( headers
	reverse_string.hpp
	ListNode.hpp
	swap_nodes_pairs.hpp
	reverse_linked_list.hpp
	factorial.hpp
	fib.hpp
)

set( sources
	reverse_string.cpp
	ListNode.cpp
	swap_nodes_pairs.cpp
	reverse_linked_list.cpp
	factorial.cpp
	fib.cpp
)

add_library( algos STATIC ${sources} ${headers} )

add_subdirectory( test )
