/* $TOG: AutoMessages.c /main/6 1999/04/23 18:12:32 jff $ */
/*p
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

#include "AutoMessages.h"

char * _AutoMessages[] = {
"SIGNAL** :  Automation: hangup signal received: Closing input/output files...            Begin exiting ... please standby ... ",
"SIGNAL** :  Automation: interrupt signal received: Closing input/output files...            Begin exiting ... please standby ... ",
"SIGNAL** :  Automation: quit signal received: Closing input/output files...            Begin exiting ... please standby ... ",
"SIGNAL** : Automation: kill signal received: Closing input/output files...            Begin exiting ... please standby ... ", 
"SIGNAL** : Automation: segmentation violation signal received: Closing input/output files...            Begin exiting ... please standby ... ",
"SIGNAL** : Automation: arithmetic exception signal received: Closing input/output files...            Begin exiting ... please standby ... ",
"SIGNAL** : Automation: illegal instruction signal received: Closing input/output files...            Begin exiting ... please standby ... ",
"SIGNAL** : Automation: software termination signal received: Closing input/output files...            Begin exiting ... please standby ... ", 
"SIGNAL** : Automation: abort signal received: Closing input/output files...            Begin exiting ... please standby ... ", 
"SIGNAL** : Automation: bus error signal received: Closing input/output files...            Begin exiting ... please standby ... ",
"SIGNAL** : Automation: bad argument to system call signal received: Closing input/output files...            Begin exiting ... please standby ... ",
"SIGNAL** : Automation: undetermined signal received: Closing input/output files...            Begin exiting ... please standby ...", 
"SCRWARNING** : LocatePointer : Max and Min valid only for Text and List Widgets",
"SCRWARNING** : DragRelative : Incorrect Direction",
"SCRWARNING** : DragSliderValue : Incorrect Direction",
"SCRWARNING** : Invalid size specified for window resize",
"SCRWARNING** : Can not move icon inside iconBox",
"SCRWARNING** : Illegal group specified for WindowItemCheck",
"SCRWARNING** : Window not iconified",
"SCRWARNING** : Menu not visible",
"SCRWARNING** : Window is in iconic state",
"SCRWARNING** : Illegal item_name for WindowItemCheck.",
"SCRWARNING** : Requested object not visible - xisMovePointerTo ()",
"SCRWARNING** : Requested object does not exist - xisMovePointerTo ()",
"SCRWARNING** : Item no. specified (%d) is > than total no. of menu items (%d)",
"SCRWARNING** : Item no. specified (%d) is > than Max no. of menu items (%d)",
"SCRWARNING** : Menu item %s NOT present in the WindowMenu.",
"SCRWARNING** : Menu item %d (%s) insensitive.",                
"SCRWARNING** : Move and Size not currently supported through MenuSelect. Please use WindowMove and WindowResize.",
"SCRWARNING** : AutoDragSliderValue: Null widget returned",
"SCRWARNING** : AutoDragSliderValue: command must be used on a ScrollBar or Scale Widget",
"SCRWARNING** : AutoDragSliderValue: composite child is not a ScrollBar",
"SCRWARNING** : GetWidgetID: XtNameToWidget() Failed on %s",
"SCRWARNING** : WindowMaximize : Command failure",
"SCRWARNING** : WindowNormalize : Command failure",
"SCRWARNING** : WindowIconify : Command failure",
"SCRWARNING** : WindowDeiconify : Command failure",
"SCRWARNING** : WindowFocus : Command Failure",
"SCRWARNING** : WindowClick : Command Failure",
"SCRWARNING** : WindowMenuPost : Command Failure",
"SCRWARNING** : WindowMenuUnpost : Command failure",
"SCRWARNING** : IconMenuPost : Command failure",
"SCRWARNING** : IconMenuUnpost : Command failure",
"SCRWARNING** : WindowMenuSelect : Command failure",
"SCRWARNING** : IconMenuSelect : Command failure",
"SCRWARNING** : WindowResize : Command failure",
"SCRWARNING** : WindowMove : Command failure",
"SCRWARNING** : WindowItemCheck : Command failure",
"SCRWARNING** : IconMove : Command failure",
"SCRWARNING** : InputString: Key %c is not supported",
"SCRWARNING** : Can't move over object! Will ignore xisMovePointerTo()",
"SCRWARNING** : xisRestorePointer() called without first calling xisSavePointer()",
"SCRWARNING** : WindowRaise : Command failure",
"AUTOWARNING** : System: Fork() failed on system call",
"AUTOWARNING** : ProcessKey : Unknown Key",
"AUTOWARNING** : AutoParseAndGenerateCommands : Invalid Command",
"AUTOWARNING** : GetXMask : Unknown Mask",
"AUTOWARNING** : Get Button : Unknown Button",
"AUTOWARNING** : Get Component : Unknown Component",
"AUTOWARNING** : CreateWidget: Null widget_info",
"AUTOWARNING** : PopupShellCreate: Null widget_info",
"AUTOWARNING** : SetValues: Null widget_info",
"AUTOWARNING** : DestroyWidget: Null widget_info",
"AUTOWARNING** : No known good image exists in image file for this testcase",
"AUTOWARNING** : %s Image record file has corrupt data",
"AUTOWARNING** : Recovery : Visual screen appearance not checked for this testcase", 
"AUTOWARNING** : Pixmap error in allocating image data: no more space",
"AUTOWARNING** : Pixmap error in creating XImage",
"AUTOWARNING** : Got NULL widget in xisMapWidget",
"AUTOWARNING** : Location of Destination Object is not in hierarchy",
"AUTOWARNING** : Current Object and Destination Object are not the same",
"AUTOWARNING** : Bad direction code '%d' sent to xisMovePointerTo ()",
"AUTOWARNING** : ...will assume direction Move Right",
"AUTOWARNING** : Could not find window to send release to",
"AUTOWARNING** : Got NULL widget in xisUnmapWidget ()",
"AUTOWARNING** : XmString value corrupt in resource '%s'",
"AUTOWARNING** : %s truncated to %d chars",
"AUTOWARNING** : Number of allowed assertions exceeded.",
"AUTOWARNING** : %s mvsAllocColor<1> failure",
"AUTOWARNING** : %s could not alloc Black color",
"AUTOWARNING** : %s mvsAllocColor<2> failure",
"AUTOWARNING** : color table black pixel not equal to XBlackPixel()",
"AUTOWARNING** : Black default for non-pixel",
"AUTOWARNING** : %s mvsAllocColor<3> failure",
"AUTOWARNING** : mvsAssignParentVal(): no parent of %d",
"AUTOWARNING** : mvsAssignParentRes(): no parent of %d",
"AUTOWARNING** : mvsAssignResInWidget: %s resource refers to NULL widget",
"AUTOWARNING** : mvsAssignValInWidget: %s resource refers to NULL widget",
"AUTOWARNING** : mvsAssignValInParentWidget: Illegal argument values",
"AUTOWARNING** : mvsAssignValInWidRefWidget: Illegal argument values",
"AUTOWARNING** : In mvsFreeWidgetInfo passed bad widget_info",
"AUTOWARNING** : mvsAllocColor() failed in mvsSetupNewWidgetInfo()",
"AUTOWARNING** : mvsCreateWidget called with NULL parent_info",
"AUTOWARNING** : Created widget was re-parented out of hierarchy",
"AUTOWARNING** : xisFreeObject():Did not find child in parent list",
"AUTOWARNING** : Session info being used in %s without prior BeginSession call!",
"AUTOWARNING** : xisGetDragDistance() called with invalid Inform record",
"AUTOWARNING** : in xisPortableRandom() j=%d is out of range",
"AUTOWARNING** : %s Synthesized 2 consecutive button %d presses--will recover by releasing mouse button",
"AUTOWARNING** : Unknown event type '%d' passed to xisSendEvent()",
"AUTOWARNING** : %s Pressing mouse button with pointer grab existing",
"AUTOWARNING** : xisIsActiveKey() not called while in InformExpectedActions()",
"AUTOWARNING** : xisIsActiveWidget() not called while in InformExpectedActions()",
"AUTOWARNING** : xisIsActiveButton() called while not in InformExpectedActions()",
"AUTOWARNING** : xisIsKeyboardFocusRegion(): invalid xisInform record",
"AUTOWARNING** : xisIsPointerOverRegion(): invalid In form record",
"AUTOWARNING** : xisIsPointerOverWidget() called with invalid Inform record",  
"AUTOWARNING** : xisIsSelectedRegion(): invalid Inform record",
"AUTOWARNING** : xisIsWidgetInKeyboardFocus() Called with invalid xisInform record",
"AUTOWARNING** : xisIsParentWidgetInKeyboardFocus() Called with invalid xisInform record",
"AUTOWARNING** : xisIsWidgetSelected() called with invalid xisInform record",
"AUTOWARNING** : synthesized 2 button %d releases in a row without any press!",
"AUTOWARNING** : Bump up size of color_cache[MAX_COLORS] array",
"AUTOWARNING** : Geometry request for NULL widget in mvsGetWidgetGeometry",
"AUTOWARNING** : XGetGeometry() failure in mvsGetWidgetGeometry",
"AUTOWARNING** : Bad XTranslateCoordinates return status in mvsGetWidgetGeometry",
"AUTOWARNING** : Bad resource type=%d in mvsCompareResources()",
"AUTOWARNING** : Unknown arg type=#%d in ConvertToType()",
"AUTOWARNING** : mvsCopyReplace1Arg() :Invalid resource name '%s'",
"AUTOWARNING** : bad resource type code=%d in mvsCopyResource",
"AUTOWARNING** : bad resource type code=%d in mvsFreeResource",
"AUTOWARNING** : bad resource type '%s' passed to mvsGetLocalResource()",
"AUTOWARNING** : mvsGetParentResource(): No parent to find %s's value",
"AUTOWARNING** : bad internal resource type code=%d in mvsFreeIntRes",
"AUTOWARNING** : mvsGetInternalResource(): Bad internal resource name '%s'",
"AUTOWARNING** : mvsGetParentIntRes(): No parent to find %s's value",
"AUTOWARNING** : %s Bad arg name '%s'",
"AUTOWARNING** : %s Bad type code=%d",
"AUTOWARNING** : mvsSetIntToDefaults():default conversion not allowed",
"AUTOWARNING** : got timer callback with bad timer_id!!!",
"AUTOWARNING** : unknown ref_type=%d in ResourceValueToString", 
"AUTOWARNING** : %s called before display open",
"AUTOWARNING** : %s NULL function", 
"AUTOWARNING** : %s Source resource name '%s' invalid",
"AUTOWARNING** : %s Destination resource '%s' invalid",
"AUTOWARNING** : %s Incompatible resource types %s & %s",
"AUTOWARNING** : %s Bad destination resource '%s'",
"AUTOWARNING** : %s Bad operation (use ADD/SUBTRACT)",
"AUTOWARNING** : mvsFreeWidgetInfo() widget_info not connected",
"AUTOWARNING** : Bad function type in ProcessKey",
"AUTOWARNING** : AutoParseAndGenerateCommands: Commands exhausted",
"AUTOWARNING** : Object NULL",
"AUTOWARNING** : Bad function in AutoTraceKeyAction",
"AUTOWARNING** : Wrong Gravity in Window Resize",
"AUTOWARNING** : Pointer not on root window anymore!!",
"AUTOWARNING** : Pointer not on root window anymore!",
"AUTOWARNING** : xisCreateWidget called with uncreated widget",
"AUTOWARNING** : It is not permissible to create a Sash widget alone",
"AUTOWARNING** : It is not permissible to create a TearOffButton widget alone",
"AUTOWARNING** : can't open image file for input!",
"AUTOWARNING** : can't open image file for output!",
"AUTOWARNING** : <mvsCreateWidget> NULL widget pointer",
"AUTOWARNING** : <mvsCreateWidget> Gadget Child of Shell",
"AUTOWARNING** : %s Exceeded MAX_NUM_OBJECTS(xislib.h)",
"AUTOWARNING** : %s XQueryTree() failure",
"AUTOWARNING** : %s called with NULL display",
"AUTOWARNING** : %s called with NULL app_context",
"AUTOWARNING** : %s called with NULL get_subobjects", 
"AUTOWARNING** : %s called with NULL get_object_type_name_func",
"AUTOWARNING** : %s called with NULL display", 
"AUTOWARNING** : %s called with NULL get_subobjects",
"AUTOWARNING** : %s called with NULL get_object_type_name_func",
"AUTOWARNING** : %s called with NULL get_widget_class_name_func",
"AUTOWARNING** : %s called with NULL window_to_widget_func",
"AUTOWARNING** : %s called with NULL trace_msg_func", 
"AUTOWARNING** : %s called with NULL warning_msg_func", 
"AUTOWARNING** : Key %s is undefined(Check your motif key bindings)",
"AUTOWARNING** : %s called with NULL error_msg_func", 
"AUTOWARNING** : bad resource name '%s' passed to mvsGetLocalResource()",
"AUTOWARNING** : bad resource type code=%d in mvsLoadResources",
"AUTOWARNING** : mvsGetParentResource(): No parent to find %s's value",
"AUTOWARNING** : bad resource type code=%d in mvsSetLocalValues",
"AUTOWARNING** : MAX_NUM_WIDGET_INFOS exceeded: increase",
"AUTOWARNING** : %s:< Image file record data corrupt!",
"AUTOWARNING** : System: execvp() command failure errno = %d", 
"AUTOWARNING** : Recovery: Don't check visuals for this testcase",
"AUTOWARNING** : Recovery: Pixmap checking disabled through remainder of test",
"AUTOWARNING** : Bad event type %d sent to xisPrintEvent",
"AUTOWARNING** : Could not gettimeofday",
"AUTOWARNING** : AutoGetTime not start or end time",
"AUTOWARNING** : Could not get string context",
"AUTOWARNING** : FontType is XFontSet",
"AUTOWARNING** : Selection value is NULL!",
"VISERROR** : no more colors available in color_alloc array",
"VISERROR** : Color name '%s' not found in color table!",
"VISERROR** : %s called with NULL Display",
"VISERROR** : %s called with NULL trace_msg_func",
"VISERROR** : called with NULL warning_msg_func",
"VISERROR** : CompareVisual: Expected %d x %d and found %d x %d for %s",
"VISERROR** : CompareVisual: XGetImage failed for %s",
"VISERROR** : CompareVisual: picture %s: pixel at x=%d:y=%d: Over foreign object",
"VISERROR** : CompareVisual: Bad pixel value read from data file: %d at x=%d:y=%d",
"VISERROR** : CompareVisual: picture %s: pixel at x=%d:y=%d: expected %d: received %d",
"VISERROR** : Out of avail slots in mvsRecIdTable in generate",
"VISERROR** : XGetImage returns 0 in generate_pixmap()",
"VISERROR** : Exiting program",
"VISERROR** : mvsInitVisualInfo() called with NULL display",
"VISERROR** : XGetVisualInfo returned NULL in mvsInitVisualInfo()",
"VISERROR** : can't open image file for input!",
"VISERROR** : unrecognizable visual mode '%d' in mvsOpenVisual",
"VISERROR** : XAllocColor() in mvsAllocNamedColor() failed!",
"VISERROR** : Recovery: try to allocated closest match RGB pixel myself.",
"VISERROR** : Recovery plan failed; will just use white pixel instead.",
"VISERROR** : mvsAllocNumFromPixel() could not find pixel %d",
"VISERROR** : Recovery: returning alloc_num=0",
"VISERROR** : Alloced too many unique colors in CompPixmap; Bump up MAX_UNIQUE_COLORS.",
"VISERROR** : bad mode=%d in mvsCheckVisual()",
"VISERROR** : checking rgb database: could not allocate '%s'",
"VISERROR** : checking rgb database: color '%s' red=%x: expected=%x",
"VISERROR** : checking rgb database: color '%s' green=%x: expected=%x",
"VISERROR** : checking rgb database: color '%s' blue=%x: expected=%x",
"VISERROR** : checking rgb database: could not allocate '%s'",
"VISERROR** : checking rgb database: color '%s' red=%x: expected=%x",
"VISERROR** : checking rgb database: color '%s' green=%x: expected=%x",
"VISERROR** : checking rgb database: color '%s' blue=%x: expected=%x",
"VISERROR** : Could not write num_recids to beginning of image file!",
"VISERROR** : CompareVisual: picture %s contains a foreign object",
"VISERROR** : CompareVisual: Visual image of widget %s incorrect!!",       
"VISERROR** : Bad pixel value '%d' passed to mvsFreeUniqueColor",
"VISERROR** : Pixel '%d' freed too many times in mvsFreeUniqueColor",
"VISERROR** : Bad char set name '%s': trying default '%s'",
"VISERROR** : Char set '%s' could not be loaded: substituting an appropriate replacement.",
"VISERROR** : mvsNumAvailPixmaps > MAX_PIXMAPS! Bump up MAX_PIXMAPS",
"VISERROR** : Unable to load mvs font:\t'%s'",
"VISERROR** : mvsInitVisual() could not allocate black color!",
"VISERROR** : mvsInitVisual() could not allocate white color!",
"VISERROR** : Could not alloc %s color in OpenVisual()",
"VISERROR** : mvsSetVisualMode() received bad mode: %d",
"VISERROR** : Unable to find valid widget at location %d,%d",
"VISERROR** : Unable to find widget info for widget %s",
"VISERROR** : Freeing pixel %d one too many times!",
"AUTOMESSAGE** : DumpWindow: xwd -id %s -out %s for widget %s",
"AUTOMESSAGE** : Performance measuring turned on",
"AUTOMESSAGE** : Performance measuring turned off",
"PERFORMANCE_MESSAGE** : Automation command duration is %d.%03d seconds"
};                 
