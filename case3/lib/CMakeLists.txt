set (CASE3_LIB_SRC
	${CMAKE_CURRENT_SOURCE_DIR}/hello.cpp
)

set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

add_library(case3 ${CASE3_LIB_SRC})
