/* ***** BEGIN LICENSE BLOCK *****
 * Source last modified: $Id: tcp.h,v 1.1 2005/07/13 17:22:21 rggammon Exp $
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

57, 0,

/*-- partition --*/
	1, 1, 2, 2, 3, 3, 4, 4, 5, 5,
	6, 6, 7, 7, 8, 8, 9, 9, 10, 10,
	11, 11, 12, 12, 13, 13, 14, 14, 15, 15,
	16, 16, 17, 19, 20, 22, 23, 25, 26, 28,
	29, 31, 32, 34, 35, 37, 38, 40, 41, 44,
	45, 48, 49, 52, 53, 56, 57, 60, 61, 64,
	65, 69, 70, 74, 75, 80, 81, 86, 87, 93,
	94, 100, 101, 108, 109, 116, 117, 124, 125, 134,
	135, 144, 145, 155, 156, 166, 167, 177, 178, 192,
	193, 207, 208, 222, 223, 243, 244, 264, 265, 286,
	287, 314, 315, 342, 343, 371, 372, 401, 402, 431,
	432, 469, 470, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

/*-- bval --*/
	0.00, 0.43, 0.86, 1.29, 1.72, 2.15, 2.58, 3.01, 3.45, 3.88,
	4.28, 4.67, 5.06, 5.42, 5.77, 6.11, 6.73, 7.61, 8.44, 9.21,
	9.88, 10.51, 11.11, 11.65, 12.24, 12.85, 13.41, 13.94, 14.42, 14.86,
	15.32, 15.79, 16.26, 16.73, 17.19, 17.62, 18.05, 18.45, 18.83, 19.21,
	19.60, 20.00, 20.38, 20.74, 21.12, 21.48, 21.84, 22.20, 22.56, 22.91,
	23.26, 23.60, 23.95, 24.30, 24.65, 25.00, 25.33, 0.00, 0.00, 0.00,
	0.0, 0.0, 0.0, 0.0,

/*-- valmin --*/
	0.0, 0.0, 0.0, 20.0, 20.0, 20.0, 20.0, 20.0, 20.0, 20.0,
	20.0, 20.0, 20.0, 20.0, 20.0, 17.0, 17.0, 15.0, 10.0, 7.0,
	7.0, 4.4, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5,
	4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5,
	4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5,
	4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 3.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,

/*-- tmn --*/
	24.5, 24.5, 24.5, 24.5, 24.5, 24.5, 24.5, 24.5, 24.5, 24.5,
	24.5, 24.5, 24.5, 24.5, 24.5, 24.5, 24.5, 24.5, 24.5, 24.5,
	24.5, 25.0, 25.6, 26.2, 26.7, 27.4, 27.9, 28.4, 28.9, 29.4,
	29.8, 30.3, 30.8, 31.2, 31.7, 32.1, 32.5, 32.9, 33.3, 33.7,
	34.1, 34.5, 34.9, 35.2, 35.6, 36.0, 36.3, 36.7, 37.1, 37.4,
	37.8, 38.1, 38.4, 38.8, 39.1, 39.5, 39.8, 0.0, 0.0, 0.0,
	0.0, 0.0, 0.0, 0.0,

/*-- table tcp convolution partition 48000 --*/

/*-- generation by tgena.c               --*/
	58, 0,

/*-- partition --*/
	1, 1, 2, 2, 3, 3, 4, 4, 5, 5,
	6, 6, 7, 7, 8, 8, 9, 9, 10, 10,
	11, 11, 12, 12, 13, 13, 14, 14, 15, 15,
	16, 16, 17, 17, 18, 20, 21, 23, 24, 26,
	27, 29, 30, 32, 33, 35, 36, 38, 39, 41,
	42, 45, 46, 49, 50, 53, 54, 57, 58, 62,
	63, 67, 68, 72, 73, 77, 78, 83, 84, 89,
	90, 95, 96, 103, 104, 111, 112, 120, 121, 129,
	130, 138, 139, 149, 150, 160, 161, 173, 174, 187,
	188, 201, 202, 219, 220, 238, 239, 257, 258, 283,
	284, 309, 310, 335, 336, 363, 364, 391, 392, 423,
	424, 465, 466, 507, 508, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

/*-- bval --*/
	0.00, 0.05, 0.94, 1.41, 1.88, 2.34, 2.81, 3.28, 3.75, 4.20,
	4.63, 5.05, 5.44, 5.83, 6.19, 6.52, 6.86, 7.49, 8.40, 9.24,
	9.97, 10.65, 11.28, 11.86, 12.39, 12.96, 13.56, 14.12, 14.62, 15.14,
	15.67, 16.15, 16.58, 17.02, 17.44, 17.84, 18.24, 18.66, 19.07, 19.47,
	19.85, 20.23, 20.63, 21.02, 21.40, 21.76, 22.12, 22.47, 22.83, 23.18,
	23.53, 23.88, 24.23, 24.58, 24.93, 25.27, 25.61, 25.82, 0.00, 0.00,
	0.0, 0.0, 0.0, 0.0,

/*-- valmin --*/
	0.0, 0.0, 0.0, 20.0, 20.0, 20.0, 20.0, 20.0, 20.0, 20.0,
	20.0, 20.0, 20.0, 20.0, 20.0, 17.0, 17.0, 15.0, 10.0, 7.0,
	7.0, 4.4, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5,
	4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5,
	4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5,
	4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 3.5, 3.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,

/*-- tmn --*/
	24.5, 24.5, 24.5, 24.5, 24.5, 24.5, 24.5, 24.5, 24.5, 24.5,
	24.5, 24.5, 24.5, 24.5, 24.5, 24.5, 24.5, 24.5, 24.5, 24.5,
	24.5, 25.1, 25.8, 26.4, 26.9, 27.5, 28.1, 28.6, 29.1, 29.6,
	30.2, 30.7, 31.1, 31.5, 31.9, 32.3, 32.7, 33.2, 33.6, 34.0,
	34.3, 34.7, 35.1, 35.5, 35.9, 36.3, 36.6, 37.0, 37.3, 37.7,
	38.0, 38.4, 38.7, 39.1, 39.4, 39.8, 40.1, 40.3, 0.0, 0.0,
	0.0, 0.0, 0.0, 0.0,

/*-- table tcp convolution partition 32000 --*/

/*-- generation by tgena.c               --*/
	49, 0,

/*-- partition --*/
	1, 1, 2, 4, 5, 7, 8, 10, 11, 13,
	14, 16, 17, 19, 20, 22, 23, 25, 26, 28,
	29, 31, 32, 34, 35, 37, 38, 41, 42, 45,
	46, 49, 50, 53, 54, 57, 58, 61, 62, 65,
	66, 70, 71, 75, 76, 81, 82, 87, 88, 93,
	94, 99, 100, 106, 107, 113, 114, 120, 121, 129,
	130, 138, 139, 148, 149, 159, 160, 170, 171, 183,
	184, 196, 197, 210, 211, 225, 226, 240, 241, 258,
	259, 279, 280, 300, 301, 326, 327, 354, 355, 382,
	383, 420, 421, 458, 459, 496, 497, 513, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

/*-- bval --*/
	0.00, 0.63, 1.56, 2.50, 3.44, 4.34, 5.17, 5.94, 6.63, 7.28,
	7.90, 8.50, 9.06, 9.65, 10.28, 10.87, 11.41, 11.92, 12.39, 12.83,
	13.29, 13.78, 14.27, 14.76, 15.22, 15.63, 16.06, 16.47, 16.86, 17.25,
	17.65, 18.05, 18.42, 18.81, 19.18, 19.55, 19.93, 20.29, 20.65, 21.02,
	21.38, 21.74, 22.10, 22.44, 22.79, 23.14, 23.49, 23.83, 24.07, 0.00,
	0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00,
	0.0, 0.0, 0.0, 0.0,

/*-- valmin --*/
	0.0, 0.0, 20.0, 20.0, 20.0, 20.0, 20.0, 20.0, 17.0, 15.0,
	15.0, 10.0, 7.0, 7.0, 4.4, 4.4, 4.5, 4.5, 4.5, 4.5,
	4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5,
	4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5,
	4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 4.5, 0.0,
	0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,

/*-- tmn --*/
	24.5, 24.5, 24.5, 24.5, 24.5, 24.5, 24.5, 24.5, 24.5, 24.5,
	24.5, 24.5, 24.5, 24.5, 24.8, 25.4, 25.9, 26.4, 26.9, 27.3,
	27.8, 28.3, 28.8, 29.3, 29.7, 30.1, 30.6, 31.0, 31.4, 31.8,
	32.2, 32.5, 32.9, 33.3, 33.7, 34.1, 34.4, 34.8, 35.2, 35.5,
	35.9, 36.2, 36.6, 36.9, 37.3, 37.6, 38.0, 38.3, 38.6, 0.0,
	0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,

/* done */
