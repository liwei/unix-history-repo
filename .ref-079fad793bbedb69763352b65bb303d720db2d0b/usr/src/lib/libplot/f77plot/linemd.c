/*-
 * Copyright (c) 1980, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * %sccs.include.proprietary.c%
 */

#ifndef lint
static char sccsid[] = "@(#)linemd.c	8.1 (Berkeley) %G%";
#endif /* not lint */

linemd_(s, len)
register char *s;
long len;
{
	char buf[256];
	register char *cp, *cend;

	cp = buf;
	cend = cp + (len < 255 ? len : 255 );
	while ( cp < cend  && *s != ' ') 
		*cp++ = *s++;
	*cp = 0;
	linemod( buf );
}
