/*
 *  ftOpenGLES.h
 *  iPhonefonts
 *
 *  Created by david on 5/11/09.
 *  Copyright 2009 n/a. All rights reserved.
 *
 */

#ifndef FTGL_ES_GLUE_H
#define FTGL_ES_GLUE_H

#ifdef WIN32

    // Under windows avoid including <windows.h> is overrated.
    // Sure, it can be avoided and "name space pollution" can be
    // avoided, but why? It really doesn't make that much difference
    // these days.
    #define  WIN32_LEAN_AND_MEAN
    #include <windows.h>

    #ifndef __gl_h_
        #include <GL/gl.h>
        #include <GL/glu.h>
    #endif

#endif
#define GL_CLAMP_TO_EDGE                  0x812F

#include <stdio.h>
#include <assert.h>

#ifdef __cplusplus
extern "C" {
#endif
	
	extern void ftglInitImmediateModeGL();
	
	extern void ftglBegin( GLenum prim );
	
	extern void ftglVertex3f( float x, float y, float z );
	
	extern void ftglVertex2f( float x, float y);
	
	extern void ftglColor4f( GLfloat r, GLfloat g, GLfloat b, GLfloat a );
		
	extern void ftglTexCoord2f( GLfloat s, GLfloat t );
	
	extern void ftglEnd();
	
	extern void ftglError(const char* source);
	
#ifdef __cplusplus
}
#endif



#endif