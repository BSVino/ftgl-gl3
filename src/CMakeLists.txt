find_package(Freetype REQUIRED)

include_directories(${FTGL_GL3_SOURCE_DIR}/src
                    ${FTGL_GL3_BINARY_DIR}
                    ${FTGL_GL3_INCLUDE_DIR}
                    ${FREETYPE_INCLUDE_DIRS}
					${GL3W_INCLUDE_DIR})

set(FTGL_GL3_SOURCES
    FTBuffer.cpp
    FTCharmap.cpp
    FTCharmap.h
    FTCharToGlyphIndexMap.h
    FTContour.cpp
    FTContour.h
    FTFace.cpp
    FTFace.h
    FTGlyphContainer.cpp
    FTGlyphContainer.h
    FTInternals.h
    FTLibrary.cpp
    FTLibrary.h
    FTList.h
    FTPoint.cpp
    FTSize.cpp
    FTSize.h
    FTVector.h
    FTVectoriser.cpp
    FTVectoriser.h
    FTUnicode.h
)

add_library(ftgl-gl3 STATIC ${FTGL_GL3_SOURCES})
