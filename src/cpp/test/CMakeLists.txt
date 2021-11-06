
add_executable( reverse_string.t reverse_string.t.cpp )
target_link_libraries( reverse_string.t PUBLIC
	gtest_main
	algos
)

add_test(
	NAME reverse_string.t
	COMMAND reverse_string.t
)