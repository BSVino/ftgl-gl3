LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := ftgl3

LOCAL_C_INCLUDES := $(LOCAL_PATH)/src $(LOCAL_PATH)/../freetype-2.3.11/include

LOCAL_SRC_FILES := \
    src/FTBuffer.cpp \
    src/FTCharmap.cpp \
    src/FTContour.cpp \
    src/FTFace.cpp \
    src/FTGlyphContainer.cpp \
    src/FTLibrary.cpp \
    src/FTPoint.cpp \
    src/FTSize.cpp \
    src/FTVectoriser.cpp \
    src/FTGL/gl3Glue.cpp \
    src/FTFont/FTFont.cpp \
    src/FTFont/FTFontGlue.cpp \
    src/FTFont/FTTextureFont.cpp \
    src/FTGlyph/FTGlyph.cpp \
    src/FTGlyph/FTGlyphGlue.cpp \
    src/FTGlyph/FTTextureGlyph.cpp \
    src/FTLayout/FTLayout.cpp \
    src/FTLayout/FTLayoutGlue.cpp \
    src/FTLayout/FTSimpleLayout.cpp \

LOCAL_SHARED_LIBRARIES := freetype

LOCAL_LDLIBS := -lGLESv3

include $(BUILD_SHARED_LIBRARY)
