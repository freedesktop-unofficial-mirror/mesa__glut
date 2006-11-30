/*
 * Mesa 3-D graphics library
 * Version:  6.5
 * Copyright (C) 1995-2006  Brian Paul
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

/*
 * Library for glut using mesa fbdev driver
 *
 * Written by Sean D'Epagnier (c) 2006
 */

#include <stdlib.h>
#include <GL/gl.h>

void glutEstablishOverlay(void)
{
   exit(0);
}

void glutUseLayer(GLenum layer)
{
}

void glutRemoveOverlay(void)
{
}

void glutPostOverlayRedisplay(void)
{
}

void glutPostWindowOverlayRedisplay(int win)
{
}

void glutShowOverlay(void)
{
}

void glutHideOverlay(void)
{
}
