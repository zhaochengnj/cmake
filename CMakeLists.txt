project(cmake)

add_subdirectory(case1)
add_subdirectory(case2)
add_subdirectory(case3)
add_subdirectory(case4)
#get_property(ALL_CASE1_SRC_LIST_G GLOBAL PROPERTY CASE1_SRC_LIST_G)
#include_directories(
#	${PROJECT_SOURCE_DIR}/case1
#)

#add_executable(case1_out ${ALL_CASE1_SRC_LIST_G})
