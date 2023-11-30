/* ***** BEGIN LICENSE BLOCK *****
 * Source last modified: $Id: cnts.c,v 1.1 2005/07/13 17:22:20 rggammon Exp $
 *
 * Portions Copyright (c) 1995-2005 RealNetworks, Inc. All Rights Reserved.
 *
 * The contents of this file, and the files included with this file,
 * are subject to the current version of the RealNetworks Public
 * Source License (the "RPSL") available at
 * http://www.helixcommunity.org/content/rpsl unless you have licensed
 * the file under the current version of the RealNetworks Community
 * Source License (the "RCSL") available at
 * http://www.helixcommunity.org/content/rcsl, in which case the RCSL
 * will apply. You may also obtain the license terms directly from
 * RealNetworks.  You may not use this file except in compliance with
 * the RPSL or, if you have a valid RCSL with RealNetworks applicable
 * to this file, the RCSL.  Please see the applicable RPSL or RCSL for
 * the rights, obligations and limitations governing use of the
 * contents of the file.
 *
 * This file is part of the Helix DNA Technology. RealNetworks is the
 * developer of the Original Code and owns the copyrights in the
 * portions it created.
 *
 * This file, and the files included with this file, is distributed
 * and made available on an 'AS IS' basis, WITHOUT WARRANTY OF ANY
 * KIND, EITHER EXPRESS OR IMPLIED, AND REALNETWORKS HEREBY DISCLAIMS
 * ALL SUCH WARRANTIES, INCLUDING WITHOUT LIMITATION, ANY WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, QUIET
 * ENJOYMENT OR NON-INFRINGEMENT.
 *
 * Technology Compatibility Kit Test Suite(s) Location:
 *    http://www.helixcommunity.org/content/tck
 *
 * Contributor(s):
 *
 * ***** END LICENSE BLOCK ***** */

#include <stdlib.h>
#include <stdio.h>
#include <float.h>
#include <math.h>
#include <assert.h>

// to match asm code, equality goes to higher index

typedef struct
{
	int bits;
	int index;
}
BI;

// low=table a,  high = table b
static const int table_quad[] = {
	0x00040001,
	0x00050005,
	0x00050005,
	0x00060007,
	0x00050005,
	0x00060008,
	0x00060007,
	0x00070009,
	0x00050005,
	0x00060007,
	0x00060007,
	0x00070009,
	0x00060007,
	0x00070009,
	0x00070009,
	0x0008000A,
};

/*---------
BI CountBits0Short(void *table, int ix[][192], int n);
BI CountBits1Short(void *table, int ix[][192], int n);
BI CountBits2Short(void *table, int ix[][192], int n);
BI CountBits3Short(void *table, int ix[][192], int n);
BI CountBits4Short(void *table, int ix[][192], int n);
BI CountBits5Short(void *table, int ix[][192], int n);
BI CountBitsQuad(int ix[][192], int nquads);  // short and long same
------------*/

/*---------------------------------------------------------------*/
BI
CountBits0Short ( void *table, int ix[], int n )
{
	BI bi;

	bi.bits = bi.index = 0;
	return bi;
}

/*---------------------------------------------------------------*/
BI
CountBits1Short ( int table[][2], int ix[][192], int n )
{
	int i, bits, b0, b1, w;
	BI bi;

	if ( n <= 0 )
	{
		bi.bits = bi.index = 0;
		return bi;
	}

	bits = 0;

	for ( w = 0; w < 3; w++ )
	{
		for ( i = 0; i < n; i += 2 )
		{
			bits += table[ix[w][i]][ix[w][i + 1]];
		}
	}

	b0 = bits & 0xFFFF;
	b1 = ( bits >> 16 ) & 0xFFFF;
	if ( b0 < b1 )
	{
		bi.bits = b0;
		bi.index = 0;
	}
	else
	{
		bi.bits = b1;
		bi.index = 1;
	}

	return bi;
}

/*---------------------------------------------------------------*/
BI
CountBits2Short ( int table[][4], int ix[][192], int n )
{
	int i, bits, b0, b1, w;
	BI bi;

	if ( n <= 0 )
	{
		bi.bits = bi.index = 0;
		return bi;
	}

	bits = 0;
	for ( w = 0; w < 3; w++ )
	{
		for ( i = 0; i < n; i += 2 )
		{
			bits += table[ix[w][i]][ix[w][i + 1]];
		}
	}

	b0 = bits & 0xFFFF;
	b1 = ( bits >> 16 ) & 0xFFFF;
	if ( b0 < b1 )
	{
		bi.bits = b0;
		bi.index = 0;
	}
	else
	{
		bi.bits = b1;
		bi.index = 1;
	}

	return bi;
}

/*---------------------------------------------------------------*/
BI
CountBits3Short ( int table[][8][2], int ix[][192], int n )
{
	int i, bits0, bits1, b0, b1, w;
	BI bi;

	if ( n <= 0 )
	{
		bi.bits = bi.index = 0;
		return bi;
	}

	bits0 = bits1 = 0;
	for ( w = 0; w < 3; w++ )
	{
		for ( i = 0; i < n; i += 2 )
		{
			bits0 += table[ix[w][i]][ix[w][i + 1]][0];
			bits1 += table[ix[w][i]][ix[w][i + 1]][1];
		}
	}

	b0 = bits0 & 0xFFFF;
	b1 = ( bits0 >> 16 ) & 0xFFFF;
	if ( b0 < b1 )
	{
		bi.bits = b0;
		bi.index = 0;
	}
	else
	{
		bi.bits = b1;
		bi.index = 1;
	}

	b0 = bits1 & 0xFFFF;
	b1 = ( bits1 >> 16 ) & 0xFFFF;
	if ( b0 <= bi.bits )
	{
		bi.bits = b0;
		bi.index = 2;
	}

	if ( b1 <= bi.bits )
	{
		bi.bits = b1;
		bi.index = 3;
	}

	return bi;
}

/*---------------------------------------------------------------*/
BI
CountBits4Short ( int table[][16], int ix[][192], int n )
{
	int i, bits, b0, b1, w;
	BI bi;

	if ( n <= 0 )
	{
		bi.bits = bi.index = 0;
		return bi;
	}

	bits = 0;
	for ( w = 0; w < 3; w++ )
	{
		for ( i = 0; i < n; i += 2 )
		{
			bits += table[ix[w][i]][ix[w][i + 1]];
		}
	}

	b0 = bits & 0xFFFF;
	b1 = ( bits >> 16 ) & 0xFFFF;
	if ( b0 < b1 )
	{
		bi.bits = b0;
		bi.index = 0;
	}
	else
	{
		bi.bits = b1;
		bi.index = 1;
	}

	return bi;
}

/*---------------------------------------------------------------*/
BI
CountBits5Short ( int table[][16], int ix[][192], int n )       // linbits
{
	int i, bits, b0, b1, ix0, ix1, w;
	BI bi;

	if ( n <= 0 )
	{
		bi.bits = bi.index = 0;
		return bi;
	}

	bits = 0;
	for ( w = 0; w < 3; w++ )
	{
		for ( i = 0; i < n; i += 2 )
		{
			ix0 = ix[w][i];
			if ( ix0 > 15 )
				ix0 = 15;
			ix1 = ix[w][i + 1];
			if ( ix1 > 15 )
				ix1 = 15;
			bits += table[ix0][ix1];
		}
	}

	b0 = bits & 0xFFFF;
	b1 = ( bits >> 16 ) & 0xFFFF;
	if ( b0 < b1 )
	{
		bi.bits = b0;
		bi.index = 0;
	}
	else
	{
		bi.bits = b1;
		bi.index = 1;
	}

	return bi;
}

/*---------------------------------------------------------------*/
