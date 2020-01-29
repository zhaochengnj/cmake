project(CASE2)

set (CASE2_LIB_SRC
	${CMAKE_CURRENT_SOURCE_DIR}/hello.cpp
)
add_library(case2 ${CASE2_LIB_SRC})


set (CASE2_APP_SRC 
	${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)
add_executable(case2_out ${CASE2_APP_SRC})
target_link_libraries(case2_out case2)
