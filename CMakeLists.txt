project(FTGL_GL3)

cmake_minimum_required(VERSION 2.4)
cmake_policy(VERSION 2.4)

find_package(OpenGL REQUIRED)

option(GL3W_INCLUDE_DIR "Location of gl3w" "/usr/local/include")

add_subdirectory(src)

#--------------------------------------------------------------------
# Create shared configuration header
#--------------------------------------------------------------------
configure_file(${FTGL_GL3_SOURCE_DIR}/config.h.in 
               ${FTGL_GL3_BINARY_DIR}/config.h @ONLY)


