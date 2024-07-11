include_directories(inc)

include(marcus_maths.cmake)

add_library(${MARCUS_MATHS_LIB_NAME} ${MARCUS_MATHS_SRC_DIR}/marcus_maths.c)
