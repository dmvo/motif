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
static char rcsid[] = "$XConsortium: GetObjFrWidg.c /main/7 1995/07/14 11:32:00 drk $"
#endif
#endif
/***********************************************************************
  	@(#)GetObjFrWidg.c	1.6.1.1	Date:1/22/91
  	Author: TAT
	History:
            05/24/90 SJS add to sccs
            08/23/90 SJS do not check instance
            09/21/90 SJS do not check object_type
	Calls:

	Summary:
            Looks up the object record associated with the given widget
	The definition of what this function *SHOULD* do needs to be
	addressed. Not passing in the object_type or instance is
	questionable in my mind
	THIS FUNCTION DOES SOMETHING SIMILAR TO xisFindObjectFromWidget().
	This one does brute force for loop, other does depth-first search.

        INPUTS
            none

        OUTPUTS
            none

        RETURNS
            Pointer to statically allocated object record.
************************************************************************/
#include "xislib.h"

XisObjectRecord *xisGetObjectFromWidget(widget)
Widget widget;
{
    int i;
   
    for (i=0; i < xisMaxObjectNum; i++) {
        if ( (xisObjects[i].in_use) && (xisObjects[i].id.widget == widget))
            return (&xisObjects[i]);
    }

    return(NULL_Object);

} /* End xisGetObjectFromWidget() */
