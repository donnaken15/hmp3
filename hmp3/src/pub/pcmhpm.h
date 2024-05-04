/* ***** BEGIN LICENSE BLOCK *****
 * Source last modified: 2024-04-10, Case
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

#ifndef _PCMHPM_H_
#define _PCMHPM_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

	typedef struct
	{
		int channels;
		int bits;
		int rate;       /* sample rate e.g. 44100 */
		int type;       /* 1: linear pcm (integer), 3: pcm (float), anything else unsupported (u-law etc) */
		int bigendian;
	}
	F_INFO;

	int pcmhead_file ( FILE *handle, unsigned char *buf, int nbuf, F_INFO * f_info, uint64_t *data_size );
// parse wave header in endian independent way
// fill in F_INFO struct
// return offset to start of audio data, returns 0 for fail

  // big-little endian conversion
	int cvt_to_pcm_init ( int nch, int bits, int is_source_bigendian ) ;
	int cvt_to_pcm ( unsigned char *pcm, int bytes_in ) ;

#ifdef __cplusplus
}
#endif

#endif   //  _PCMHPM_H_
