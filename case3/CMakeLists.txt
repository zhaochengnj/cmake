project(CASE3)

MESSAGE(STATUS "PROJECT_SOURCE_DIR=${PROJECT_SOURCE_DIR}")
MESSAGE(STATUS "PROJECT_BINARY_DIR=${PROJECT_BINARY_DIR}")

include_directories(
	${PROJECT_SOURCE_DIR}/lib
)
add_subdirectory(app)
add_subdirectory(lib)
