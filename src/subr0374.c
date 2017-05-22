/* $Id: subr0374.c,v 1.3 1999/05/31 23:35:43 sybalsky Exp $ (C) Copyright Venue, All Rights Reserved  */
static char *id = "$Id: subr0374.c,v 1.3 1999/05/31 23:35:43 sybalsky Exp $ Copyright (C) Venue";


/************************************************************************/
/*									*/
/*	(C) Copyright 1989-95 Venue. All Rights Reserved.		*/
/*	Manufactured in the United States of America.			*/
/*									*/
/*	The contents of this file are proprietary information 		*/
/*	belonging to Venue, and are provided to you under license.	*/
/*	They may not be further distributed or disclosed to third	*/
/*	parties without the specific permission of Venue.		*/
/*									*/
/************************************************************************/

#include "version.h"


/********************************************************/
/*
	subr_k_trace()

		subr----0130 for katana trace
		first argument is base address of
		error message in Lisp.
		second argument is length of message.
*/
/********************************************************/

#include <stdio.h>
#include "lispemul.h"
#include "adr68k.h"
#include "lspglob.h"

subr_k_trace(LispPTR *args)
{
	int	len;
	char	*base;

	len = 0xFFFF & args[1];
	base = (char *)Addr68k_from_LADDR(args[0]);
	while(len-- > 0)
		putc(*base++ , stderr);
	putc('\n', stderr);
	return(0);
}
