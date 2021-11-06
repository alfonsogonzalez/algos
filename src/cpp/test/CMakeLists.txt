
add_executable( reverse_string.t reverse_string.t.cpp )
target_link_libraries( reverse_string.t PUBLIC
	gtest_main
	algos
)
add_test(
	NAME reverse_string.t
	COMMAND reverse_string.t
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