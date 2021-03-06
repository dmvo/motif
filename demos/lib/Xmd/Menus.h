/* $XConsortium: Menus.h /main/5 1995/07/15 20:43:45 drk $ */
/*
 * @OPENGROUP_COPYRIGHT@
 * COPYRIGHT NOTICE
 * Copyright (c) 1990, 1991, 1992, 1993 Open Software Foundation, Inc.
 * Copyright (c) 1996, 1997, 1998, 1999, 2000 The Open Group
 * ALL RIGHTS RESERVED (MOTIF).  See the file named COPYRIGHT.MOTIF for
 * the full copyright text.
 * 
 * This software is subject to an open license. It may only be
 * used on, with or for operating systems which are themselves open
 * source systems. You must contact The Open Group for a license
 * allowing distribution and sublicensing of this software on, with,
 * or for operating systems which are not Open Source programs.
 * 
 * See http://www.opengroup.org/openmotif/license for full
 * details of the license agreement. Any use, reproduction, or
 * distribution of the program constitutes recipient's acceptance of
 * this agreement.
 * 
 * EXCEPT AS EXPRESSLY SET FORTH IN THIS AGREEMENT, THE PROGRAM IS
 * PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, EITHER EXPRESS OR IMPLIED INCLUDING, WITHOUT LIMITATION, ANY
 * WARRANTIES OR CONDITIONS OF TITLE, NON-INFRINGEMENT, MERCHANTABILITY
 * OR FITNESS FOR A PARTICULAR PURPOSE
 * 
 * EXCEPT AS EXPRESSLY SET FORTH IN THIS AGREEMENT, NEITHER RECIPIENT
 * NOR ANY CONTRIBUTORS SHALL HAVE ANY LIABILITY FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING WITHOUT LIMITATION LOST PROFITS), HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OR DISTRIBUTION OF THE PROGRAM OR THE
 * EXERCISE OF ANY RIGHTS GRANTED HEREUNDER, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGES.
 * 
 */
/*
 * HISTORY
 */

/* Ensure that the file be included only once. */
#ifndef _XmdMenus_h
#define _XmdMenus_h

/* Menu types which can be requested */

typedef enum { FILE_MENU, EDIT_MENU, SELECTED_MENU, OPTIONS_MENU, VIEW_MENU,
		 HELP_MENU, POPUPS, OBJECT_POPUP_MENU, BACKGROUND_POPUP_MENU,
		 OTHER_POPUP_MENU } XmdMenuType;

/* Free advice.  The menu elements are returned in arrays which can be
   used with XtManageChildren.  If you are going to use most of the
   items,  then use XtManageChildren and unmanage and/or make 
   insensitive the few which are unused.  Otherwise use XtManageChild
   on each individual widget.

   By default,  the required elements are already managed and nothing
   else is. (Exception: the FILE_PRINT widget is managed,  also the
   HELP menu doesn't quite follow this rule) */

/* indecis of menu items */

/********************************************************
 * Popup menus - unimplemented yet
 ********************************************************/

/* Selectable element popup menu */

enum { OBJECT_PROPERTIES, OBJECT_OPEN, OBJECT_UNDO, OBJECT_REPEAT,
	 OBJECT_DRAG, OBJECT_SIZE, OBJECT_DUPLICATE, OBJECT_COPY_TO,
	 OBJECT_MOVE_TO, OBJECT_RENAME, OBJECT_CUT, OBJECT_COPY,
	 OBJECT_COPY_LINK, OBJECT_COPY_SPECIAL, OBJECT_PASTE,
	 OBJECT_PASTE_LINK, OBJECT_PASTE_SPECIAL, OBJECT_INSERT,
	 OBJECT_PRIMARY_COPY, OBJECT_PRIMARY_MOVE,
	 OBJECT_PRIMARY_LINK, OBJECT_CLEAR, OBJECT_DELETE,
	 OBJECT_SELECT_ALL, OBJECT_SELECT_PASTED, OBJECT_RESELECT,
	 OBJECT_PRINT, OBJECT_HELP };

/* Background popup menu */

enum { BACKGROUND_UNDO, BACKGROUND_REPEAT, BACKGROUND_NEW,
	 BACKGROUND_DUPLICATE, BACKGROUND_COPY_TO, BACKGROUND_MOVE_TO,
	 BACKGROUND_CUT, BACKGROUND_COPY, BACKGROUND_COPY_LINK,
	 BACKGROUND_COPY_SPECIAL, BACKGROUND_PASTE,
	 BACKGROUND_PASTE_LINK, BACKGROUND_PASTE_SPECIAL,
	 BACKGROUND_INSERT, BACKGROUND_PRIMARY_COPY,
	 BACKGROUND_PRIMARY_MOVE, BACKGROUND_PRIMARY_LINK,
	 BACKGROUND_CLEAR, BACKGROUND_DELETE, BACKGROUND_SELECT_ALL,
	 BACKGROUND_UNSELECT_ALL, BACKGROUND_SELECT_PASTED,
	 BACKGROUND_RESELECT, BACKGROUND_PRINT_ALL,
	 BACKGROUND_PRINT_SELECTED, BACKGROUND_HELP };

/* Other element popup menu */

enum { OTHER_COPY, OTHER_COPY_SPECIAL, OTHER_PASTE, OTHER_PASTE_SPECIAL,
	 OTHER_HELP };

/********************************************************
 * Pulldown menus - unimplemented yet
 ********************************************************/

/* File menu */

enum { FILE_NEW, FILE_OPEN, FILE_SAVE, FILE_SAVE_AS, FILE_REVERT,
	 FILE_SEP1, FILE_COPY_TO, FILE_DRAG, FILE_PRINT,
	 FILE_PRINT_SETUP, FILE_SEP2, FILE_CLOSE, FILE_EXIT,
     	 FILE_END };

/* Selected menu */

enum { SELECTED_PROPERTIES, SELECTED_NEW, SELECTED_OPEN,
	 SELECTED_SEP1, SELECTED_COPY_TO, SELECTED_MOVE_TO,
	 SELECTED_SEP2, SELECTED_CLEAR, SELECTED_DELETE,
	 SELECTED_PRINT, SELECTED_EXIT, SELECTED_END };

/* Edit menu */

enum { EDIT_UNDO, EDIT_REPEAT, EDIT_DRAG, EDIT_SIZE, EDIT_DUPLICATE,
	 EDIT_SEP1, EDIT_CUT, EDIT_COPY, EDIT_COPY_LINK,
	 EDIT_COPY_SPECIAL, EDIT_PASTE, EDIT_PASTE_LINK,
	 EDIT_PASTE_SPECIAL, EDIT_INSERT, EDIT_SEP2,
	 EDIT_PRIMARY_COPY, EDIT_PRIMARY_MOVE, EDIT_PRIMARY_LINK,
	 EDIT_SEP3, EDIT_CLEAR, EDIT_DELETE, EDIT_SELECT_ALL,
	 EDIT_SEP4, EDIT_UNSELECT_ALL, EDIT_SELECT_PASTED, EDIT_RESELECT,
	 EDIT_END };

/* View menu */

enum { VIEW_CHANGE, VIEW_NEW, VIEW_SEP, VIEW_INCLUDE, VIEW_SORT,
	 VIEW_FIND, VIEW_END };

/* Help menu */

enum { HELP_OVERVIEW, HELP_SEP1, HELP_INDEX, HELP_TOC, HELP_TASKS,
	 HELP_REFERENCE, HELP_TUTORIAL, HELP_KEYBOARD, HELP_MOUSE,
	 HELP_ON_ITEM, HELP_SEP2, HELP_USING_HELP, HELP_ABOUT,
	 HELP_END };


/* Returns cascade button for pulldown menu,  menu for popup menu,
   widgetlist returned in allocated storage in array. */
extern Widget XmdCreateMenu(XmdMenuType, Widget parent,  
			    WidgetList *array, Cardinal *size);

#endif /* _XmdMenus_h */
