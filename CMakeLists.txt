CMAKE_MINIMUM_REQUIRED(VERSION 3.1)

PROJECT(test_boost_compute VERSION 0.0.1)

SET(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_STANDARD 11)


SET(boost_include "/usr/local/Cellar/boost/1.72.0_2/include")

INCLUDE_DIRECTORIES(${boost_include})

SET(SRC_LIST main.cpp DTS/Algebra.cpp DTS/Algebra.hpp)
ADD_EXECUTABLE(boost_compute ${SRC_LIST})

IF(APPLE)
    TARGET_LINK_LIBRARIES(boost_compute "-framework OpenCL")
ENDIF(APPLE)
