project(cmake)
add_subdirectory(case1)
get_property(ALL_CASE1_SRC_LIST_G GLOBAL PROPERTY CASE1_SRC_LIST_G)
add_executable(case1_out ${ALL_CASE1_SRC_LIST_G})
