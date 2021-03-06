/* $Id: XCursors.h,v 1.2 1999/01/03 02:05:48 sybalsky Exp $ (C) Copyright Venue, All Rights Reserved  */
/*
*
*		Author: Mitsunori Matsuda
*		Date  : August 29, 1988
*/



/************************************************************************/
/*									*/
/*	(C) Copyright 1989-92 Venue. All Rights Reserved.		*/
/*	Manufactured in the United States of America.			*/
/*									*/
/************************************************************************/


char horizscrollcursor_bitmap[]={
	  0x00, 0x00
	, 0x00, 0x00
	, 0x00, 0x00
	, 0x00, 0x00
	, 0x00, 0x00
	, 0x00, 0x00
	, 0x08, 0x20
	, 0x18, 0x30
	, 0x38, 0x38
	, 0x78, 0x3C
	, 0xFF, 0xFE
	, 0xFF, 0xFE
	, 0x78, 0x3C
	, 0x38, 0x38
	, 0x18, 0x30
	, 0x08, 0x20
};

LISP_CURSOR horizscroll_cursor = {
		  1
		, horizscrollcursor_bitmap
		, horizscrollcursor_bitmap
		, 7
		, 5
		, NULL
};
	


char horizthumbcursor_bitmap[]={
	  0x00, 0x00
	, 0x00, 0x00
	, 0x00, 0x00
	, 0x02, 0x00
	, 0x02, 0x00
	, 0x0A, 0x80
	, 0x0A, 0x80
	, 0x0A, 0x80
	, 0x2A, 0xA0
	, 0x2A, 0xA0
	, 0x2A, 0xA0
	, 0xAA, 0xA8
	, 0xAA, 0xA8
	, 0xAA, 0xA8
	, 0xAA, 0xA8
	, 0xAA, 0xA8
};

LISP_CURSOR horizthumb_cursor = {
		  1
		, horizthumbcursor_bitmap
		, horizthumbcursor_bitmap
		, 6
		, 8
		, NULL
};
	


char scrolldowncursor_bitmap[]={
		  0x03, 0x80
		, 0x03, 0x80
		, 0x03, 0x80
		, 0x03, 0x80
		, 0x03, 0x80
		, 0x03, 0x80
		, 0x03, 0x80
		, 0x1F, 0xF0
		, 0x1F, 0xF0
		, 0x0F, 0xE0
		, 0x0F, 0xE0
		, 0x07, 0xC0	
		, 0x07, 0xC0	
		, 0x03, 0x80
		, 0x03, 0x80
		, 0x01, 0x00
};

LISP_CURSOR scrolldown_cursor = {
		  1
		, scrolldowncursor_bitmap
		, scrolldowncursor_bitmap
		, 7
		, 15
		, NULL
};
	


char scrollleftcursor_bitmap[]={
	  0x00, 0x00
	, 0x00, 0x00
	, 0x00, 0x00
	, 0x00, 0x00
	, 0x00, 0x00
	, 0x00, 0x00
	, 0x00, 0x80
	, 0x03, 0x80
	, 0x0F, 0x80
	, 0x3F, 0x80
	, 0xFF, 0xFF
	, 0xFF, 0xFF
	, 0x3F, 0x80
	, 0x0F, 0x80
	, 0x03, 0x80
	, 0x00, 0x80
};

LISP_CURSOR scrollleft_cursor = {
		  1
		, scrollleftcursor_bitmap
		, scrollleftcursor_bitmap
		, 8
		, 5
		, NULL
};
	


char scrollrightcursor_bitmap[]={
	  0x00, 0x00
	, 0x00, 0x00
	, 0x00, 0x00
	, 0x00, 0x00
	, 0x00, 0x00
	, 0x00, 0x00
	, 0x01, 0x00
	, 0x01, 0xC0
	, 0x01, 0xF0
	, 0x01, 0xFC
	, 0xFF, 0xFF
	, 0xFF, 0xFF
	, 0x01, 0xFC
	, 0x01, 0xF0
	, 0x01, 0xC0
	, 0x01, 0x00
};

LISP_CURSOR scrollright_cursor = {
		  1
		, scrollrightcursor_bitmap
		, scrollrightcursor_bitmap
		, 7
		, 5
		, NULL
};
	


char scrollupcursor_bitmap[]={
		  0x01, 0x00
		, 0x03, 0x80
		, 0x03, 0x80
		, 0x07, 0xC0	
		, 0x07, 0xC0	
		, 0x0F, 0xE0
		, 0x0F, 0xE0
		, 0x1F, 0xF0
		, 0x1F, 0xF0
		, 0x03, 0x80
		, 0x03, 0x80
		, 0x03, 0x80
		, 0x03, 0x80
		, 0x03, 0x80
		, 0x03, 0x80
		, 0x03, 0x80
};

LISP_CURSOR scrollup_cursor = {
		  1
		, scrollupcursor_bitmap
		, scrollupcursor_bitmap
		, 7
		, 15
		, NULL
};
	


char vertscrollcursor_bitmap[]={
		  0x01, 0x00
		, 0x03, 0x80
		, 0x03, 0x80
		, 0x07, 0xC0	
		, 0x07, 0xC0	
		, 0x0F, 0xE0
		, 0x03, 0x80
		, 0x03, 0x80
		, 0x03, 0x80
		, 0x03, 0x80
		, 0x0F, 0xE0
		, 0x07, 0xC0	
		, 0x07, 0xC0	
		, 0x03, 0x80
		, 0x03, 0x80
		, 0x01, 0x00
};

LISP_CURSOR vertscroll_cursor = {
		  1
		, vertscrollcursor_bitmap
		, vertscrollcursor_bitmap
		, 7
		, 15
		, NULL
};
	


char vertthumbcursor_bitmap[]={
		 0x00,0x00
		,0x00,0x1f
		,0x00,0x00
		,0x00,0xff
		,0x00,0x00
		,0x07,0xff
		,0x00,0x00
		,0x1f,0xff
		,0x00,0x00
		,0x07,0xff
		,0x00,0x00
		,0x00,0xff
		,0x00,0x00
		,0x00,0x1f
		,0x00,0x00
		,0x00,0x00
};

LISP_CURSOR vertthumb_cursor = {
		  1
		, vertthumbcursor_bitmap
		, vertthumbcursor_bitmap
		, 8
		, 8
		, NULL
};
	
