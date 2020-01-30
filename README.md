markdown(https://help.github.com/articles/markdown-basics/)

# project
* project( projectname [cxx])
* PROJECT_SOURCE_DIR 代码路径
* PROJECT_BINARY_DIR buil路径

# set
* SET(VAR [VALUE])
* SET(SRC_LIST main.c t1.c t2.c)

# 输出
* MESSAGE([SEND_ERROR | STATUS | FATAL_ERROR] "message to display" ...)

# 路径
* INCLUDE_DIRECTORIES
* LINK_DIRECTORIES(directory1 directory2 ...)
* CMAKE_INCLUDE_PATH
* CMAKE_LIBRARY_PATH
* export CMAKE_INCLUDE_PATH=/usr/include/hello

# link
* TARGET_LINK_LIBRARIES(target library1)
* TARGET_LINK_LIBRARIES(main libhello.so)
* TARGET_LINK_LIBRARIES(main libhello.a)

# component
* SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
* SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
* ADD_EXECUTABLE(hello ${SRC_LIST})
* ADD_LIBRARY(hello SHARED ${LIBHELLO_SRC})
* ADD_LIBRARY(hello_static STATIC ${LIBHELLO_SRC})
* SET_TARGET_PROPERTIES(hello_static PROPERTIES OUTPUT_NAME "hello")

# 其它
* CMAKE_CURRENT_SOURCE_DIR
* CMAKE_CURRRENT_BINARY_DIR
* ADD_SUBDIRECTORY(source_dir [binary_dir] [EXCLUDE_FROM_ALL])

# cpp-flag -case5
ref(https://cmake.org/pipermail/cmake/2006-February/008370.html)

SET(CMAKE_CXX_FLAGS "-Wall")
SET(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2 -g")
SET(CMAKE_CXX_FLAGS_RELEASE "-O2")
SET(CMAKE_CXX_FLAGS_DEBUG  "-O0 -g")

cmake .. -DCMAKE_BUILD_TYPE=Debug
make VERBOSE=1
/usr/bin/g++    -Wall -O0 -g   -o CMakeFiles/test.dir/main.cpp.o -c /media/diskb/github/test/main.cpp

cmake .. -DCMAKE_BUILD_TYPE=Release
make VERBOSE=1
/usr/bin/g++    -Wall -O2   -o CMakeFiles/test.dir/main.cpp.o -c /media/diskb/github/test/main.cpp

cmake .. -DCMAKE_BUILD_TYPE=RELWITHDEBINFO
make VERBOSE=1
/usr/bin/g++    -Wall -O2 -g   -o CMakeFiles/test.dir/main.cpp.o -c /media/diskb/github/test/main.cpp

# 内部宏-case5
* cmake .. -DCMAKE_BUILD_TYPE=DEBUG -DCMAKE_CXX_FLAGS="-DOUTPUT"
* make VERBOSE=1
* ./CMakeFiles/test.dir/link.txt:1:/usr/bin/g++  -DOUTPUT -Wall -O0 -g  -rdynamic CMakeFiles/test.dir/main.o  -o test
