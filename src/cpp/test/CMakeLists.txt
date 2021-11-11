
add_executable( reverse_string.t reverse_string.t.cpp )
target_link_libraries( reverse_string.t PUBLIC
	gtest_main
	algos
)
add_test(
	NAME reverse_string.t
	COMMAND reverse_string.t
)

add_executable( ListNode.t ListNode.t.cpp )
target_link_libraries( ListNode.t PUBLIC
	gtest_main
	algos
)
add_test(
	NAME ListNode.t
	COMMAND ListNode.t
)

add_executable( swap_nodes_pairs.t swap_nodes_pairs.t.cpp )
target_link_libraries( swap_nodes_pairs.t PUBLIC
	gtest_main
	algos
)
add_test(
	NAME swap_nodes_pairs.t
	COMMAND swap_nodes_pairs.t
)

add_executable( reverse_linked_list.t reverse_linked_list.t.cpp )
target_link_libraries( reverse_linked_list.t PUBLIC
	gtest_main
	algos
)
add_test(
	NAME reverse_linked_list.t
	COMMAND reverse_linked_list.t
)

add_executable( factorial.t factorial.t.cpp )
target_link_libraries( factorial.t PUBLIC
	gtest_main
	algos
)
add_test(
	NAME factorial.t
	COMMAND factorial.t
)

add_executable( fib.t fib.t.cpp )
target_link_libraries( fib.t PUBLIC
	gtest_main
	algos
)
add_test(
	NAME fib.t
	COMMAND fib.t
)

add_executable( BinTreeTraverser.t BinTreeTraverser.t.cpp )
target_link_libraries( BinTreeTraverser.t PUBLIC
	gtest_main
	algos
)
add_test(
	NAME BinTreeTraverser.t
	COMMAND BinTreeTraverser.t
)
