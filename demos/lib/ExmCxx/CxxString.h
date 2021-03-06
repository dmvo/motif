/* $XConsortium: CxxString.h /main/4 1995/07/15 20:42:28 drk $ */
/*
 *  @OPENGROUP_COPYRIGHT@
 *  COPYRIGHT NOTICE
 *  Copyright (c) 1990, 1991, 1992, 1993 Open Software Foundation, Inc.
 *  Copyright (c) 1996, 1997, 1998, 1999, 2000 The Open Group
 *  ALL RIGHTS RESERVED (MOTIF). See the file named COPYRIGHT.MOTIF for
 *  the full copyright text.
 *  
 *  This software is subject to an open license. It may only be
 *  used on, with or for operating systems which are themselves open
 *  source systems. You must contact The Open Group for a license
 *  allowing distribution and sublicensing of this software on, with,
 *  or for operating systems which are not Open Source programs.
 *  
 *  See http://www.opengroup.org/openmotif/license for full
 *  details of the license agreement. Any use, reproduction, or
 *  distribution of the program constitutes recipient's acceptance of
 *  this agreement.
 *  
 *  EXCEPT AS EXPRESSLY SET FORTH IN THIS AGREEMENT, THE PROGRAM IS
 *  PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 *  KIND, EITHER EXPRESS OR IMPLIED INCLUDING, WITHOUT LIMITATION, ANY
 *  WARRANTIES OR CONDITIONS OF TITLE, NON-INFRINGEMENT, MERCHANTABILITY
 *  OR FITNESS FOR A PARTICULAR PURPOSE
 *  
 *  EXCEPT AS EXPRESSLY SET FORTH IN THIS AGREEMENT, NEITHER RECIPIENT
 *  NOR ANY CONTRIBUTORS SHALL HAVE ANY LIABILITY FOR ANY DIRECT,
 *  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 *  DAMAGES (INCLUDING WITHOUT LIMITATION LOST PROFITS), HOWEVER CAUSED
 *  AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OR DISTRIBUTION OF THE PROGRAM OR THE
 *  EXERCISE OF ANY RIGHTS GRANTED HEREUNDER, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGES.
 */
/*
 * HISTORY
 */

/*
 * CxxString.h - Class definitions for CxxString
 */

#ifndef _ExmCxxString_h
#define _ExmCxxString_h

#ifdef __cplusplus

#include "./CxxSimple.h"
#include <Xm/AccTextT.h> /* header file for AccessTextual trait */


/**********************************
 * Widget class record definition *
 **********************************/

class ExmCxxStringClass : public ExmCxxSimpleClass {
  friend class ExmCxxString;
public:
  ExmCxxStringClass( char*		name,
		    WidgetClass	        parent,
		    Cardinal		widgetSize,
		    XtProc		class_init,
		    XtActionList	actions,
		    Cardinal		num_actions,
		    XtResourceList	resources,
		    Cardinal		num_resources,
		    XtInitProc		cxx_cast);
    
 // public static methods
  static  void      ClassInitialize();

protected:
  virtual void      class_part_initialize(); 
  unsigned char     default_render_table_type;
};

/* Define a new enumerated type. */
typedef enum { ExmCENTER_STRING, ExmSTART_STRING_LEFT_SIDE,
                     ExmSTART_STRING_RIGHT_SIDE} ExmHowAligned;


/* Define string equivalents of new resource names. */
#define ExmNcompoundString "compoundString"
#define ExmCCompoundString "CompoundString"


typedef struct _exmCxxStringPart
{
 /* Provide space for the five resources of ExmString. */
	XmString		compound_string;
	unsigned char		alignment;
        XmRenderTable           render_table;
        Boolean                 recompute_size;

        ExmHowAligned           text_starts_here; 
} ExmCxxStringPart;


class ExmCxxString : public ExmCxxSimple {
  friend class ExmCxxStringClass;
  friend class ExmCxxStringActions;
public:
  ExmCxxStringPart string;

  ~ExmCxxString();

  // core class part
  virtual void	    initialize(Widget req_w, ArgList, Cardinal*);
  virtual Boolean   set_values(Widget old_w, Widget req_w,
                               ArgList, Cardinal*);
  virtual void resize();
  virtual XtGeometryResult query_geometry(XtWidgetGeometry*, XtWidgetGeometry*);

  // override certain methods of primitive class extension record.
  virtual Boolean             widget_baseline(Dimension** dim, int* nb);
  virtual Boolean             widget_display_rect(XRectangle*);
    
  // override certain methods of simple class 
  virtual void draw_visual(void);
  virtual void create_gc(void);
  virtual void calc_visual_size(void);
  
  // provide methods for string class 
  virtual void AlignmentDirection(void);

  static void DefaultFont (Widget, int, XrmValue*);
  static void GetValuesCompoundString(Widget, int, XtArgVal *);

  static XtPointer StringGetValue(Widget, int);
  static void StringSetValue(Widget, XtPointer, int);
  static int StringPreferredFormat(Widget);

 public:
  // static class-methods: passed as parameter to class_rec static constructor.
  static void _MakeCxxWidget(Widget, Widget new_w, ArgList, Cardinal*);
};

typedef class ExmCxxStringClass     *ExmCxxStringWidgetClass;
typedef class ExmCxxString          *ExmCxxStringWidget;

externalref   ExmCxxStringClass      exmCxxStringClassRec;
#endif /* __cplusplus */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
extern Widget ExmCreateCxxString(Widget, char*, ArgList, Cardinal);
#ifdef __cplusplus
}
#endif /* __cplusplus */

externalref WidgetClass exmCxxStringWidgetClass;

#endif /* _ExmCxxString_h */
