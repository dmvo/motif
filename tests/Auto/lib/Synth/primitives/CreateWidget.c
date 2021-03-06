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
#ifdef REV_INFO
#ifndef lint
static char rcsid[] = "$XConsortium: CreateWidget.c /main/7 1995/07/14 11:38:03 drk $"
#endif
#endif
/***********************************************************************
  	@(#)CreateWidget.c	1.3.1.1	Date:1/22/91
  	Author: TAT
	History:
            05/30/90 SJS add to sccs
	Calls:

	Summary:
            Call all InformExpectedAction functions associated with an
        expose event.

        INPUTS
            widget - the widget (assumed already created but not realized)

        OUTPUTS
            none

        RETURNS 
            nothing
************************************************************************/

#include <AutoMessages.h>
#include "xislib.h"

void xisCreateWidget(widget)
Widget widget;
{
    XisObjectRecord *object;
    XisObjectRecord *current_object;

    object = (XisObjectRecord *)NULL;

    xisProcessObjects();

    object = xisFindObjectFromWidget(widget);
    if (object == NULL_Object)
      AutoMessage(_AutoMessages[WARNMSG94]);

    /* Call all relavent InformExpectedActions functions for EventExpose */
  
    current_object = object;
    xisInform.is_valid = 1;
    xisInform.action_obj = object;
    xisInform.pointer_obj = NULL;
    xisInform.modifier_key_status = 0;
    xisInform.button_num = 0;
    xisInform.key_code = 0;
    xisInform.num_clicks = 0;
    xisInform.edge_code = 0;
    xisInform.event_code = EventExpose;

    while (current_object != NULL) {

        if (current_object->proc_InformExpectedActions != NULL) {
            xisInform.current_obj = current_object;
            (*current_object->proc_InformExpectedActions)(EventExpose); 
        }
        current_object = current_object->parent;
    }

    xisInform.is_valid = 0;

} /* End xisCreateWidget() */
