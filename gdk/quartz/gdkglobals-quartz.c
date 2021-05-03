/* gdkglobals-quartz.c
 *
 * Copyright (C) 2005 Imendio AB
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#include "config.h"
#include "gdktypes.h"
#include "gdkprivate.h"
#include "gdkquartz.h"

GdkDisplay *_gdk_display = NULL;
GdkScreen *_gdk_screen = NULL;
GdkWindow *_gdk_root = NULL;

GdkOSXVersion
gdk_quartz_osx_version (void)
{
  return GDK_OSX_NEW;
}

static gboolean fix_modifiers = FALSE;

void
gdk_quartz_set_fix_modifiers (gboolean fix)
{
  fix_modifiers = fix;
}

gboolean
gdk_quartz_get_fix_modifiers (void)
{
  return fix_modifiers;
}

gboolean
gdk_quartz_supports_gesture_events (void)
{
  return TRUE;
}
