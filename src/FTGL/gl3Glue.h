/*
 *  gl3Glue.h
 *
 *  Created by david on 5/11/09.
 *  Copyright 2009 n/a. All rights reserved.
 *
 */

#ifndef FTGL_GL3_GLUE_H
#define FTGL_GL3_GLUE_H

#ifdef __ANDROID__
#include <GLES3/gl3.h>
#else
#include "GL3/gl3w.h"
#endif

#include <stdio.h>
#include <assert.h>

#ifdef __cplusplus
extern "C" {
#endif
	
	extern void ftglBegin( GLenum prim );
	
	extern void ftglVertex3f( float x, float y, float z );
	
	extern void ftglVertex2f( float x, float y);
	
	extern void ftglTexCoord2f( GLfloat s, GLfloat t );
	
	extern void ftglEnd();
	
	extern void ftglError(const char* source);
	
#ifdef __cplusplus
}
#endif



#endif
