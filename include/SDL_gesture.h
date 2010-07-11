/*
    SDL - Simple DirectMedia Layer
    Copyright (C) 1997-2010 Sam Lantinga

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

    Sam Lantinga
    slouken@libsdl.org
*/

/**
 *  \file SDL_gesture.h
 *  
 *  Include file for SDL gesture event handling.
 */

#ifndef _SDL_gesture_h
#define _SDL_gesture_h

#include "SDL_stdinc.h"
#include "SDL_error.h"
#include "SDL_video.h"

#include "begin_code.h"
/* Set up for C function definitions, even when using C++ */
#ifdef __cplusplus
/* *INDENT-OFF* */
extern "C" {
/* *INDENT-ON* */
#endif


/* Function prototypes */

/**
 *  \brief Begin Recording a gesture on the specified touch, or all touches (-1)
 *
 *
 */
  extern DECLSPEC int SDLCALL SDL_RecordGesture(int touchId);


/**
 *  \brief Save all currently loaded Dollar Gesture templates
 *
 *
 */
  extern DECLSPEC int SDLCALL SDL_SaveAllDollarTemplates(FILE *fp);

/**
 *  \brief Save a currently loaded Dollar Gesture template
 *
 *
 */
  extern DECLSPEC int 
  SDLCALL SDL_SaveDollarTemplate(unsigned long gestureId,FILE *fp);


/**
 *  \brief Load Dollar Gesture templates from a file
 *
 *
 */
  extern DECLSPEC int SDLCALL SDL_LoadDollarTemplates(int touchId, FILE *fp);



/* Ends C function definitions when using C++ */
#ifdef __cplusplus
/* *INDENT-OFF* */
}
/* *INDENT-ON* */
#endif
#include "close_code.h"

#endif /* _SDL_gesture_h */

/* vi: set ts=4 sw=4 expandtab: */
