/*
    Copyright � 1995-2001, The AROS Development Team. All rights reserved.
    $Id$

    Desc: Graphics function WaitBOVP()
    Lang: english
*/
#include <graphics/view.h>

/*****************************************************************************

    NAME */
#include <clib/graphics_protos.h>

	AROS_LH1(void, WaitBOVP,

/*  SYNOPSIS */
	AROS_LHA(struct ViewPort *, vp, A0),

/*  LOCATION */
	struct GfxBase *, GfxBase, 67, Graphics)

/*  FUNCTION

    INPUTS
	vp - pointer to ViewPort structure

    RESULT
	None.

    NOTES

    EXAMPLE

    BUGS

    SEE ALSO

    INTERNALS

    HISTORY

*****************************************************************************/
{
    AROS_LIBFUNC_INIT
    AROS_LIBBASE_EXT_DECL(struct GfxBase *,GfxBase)

#warning TODO: Write graphics/WaitBOVP()
    aros_print_not_implemented ("WaitBOVP");

    AROS_LIBFUNC_EXIT
} /* WaitBOVP */
