/* 
 * strstr.c --
 *
 *	Source code for the "strstr" library routine.
 *
 * Copyright (c) 1988-1993 The Regents of the University of California.
 * All rights reserved.

 */

#ifndef lint
static char rcsid[] = "$Header: /user6/ouster/tcl/compat/RCS/strstr.c,v 1.2 93/03/19 15:25:40 ouster Exp $ SPRITE (Berkeley)";
#endif /* not lint */

/*
 *----------------------------------------------------------------------
 *
 * strstr --
 *
 *	Locate the first instance of a substring in a string.
 *
 * Results:
 *	If string contains substring, the return value is the
 *	location of the first matching instance of substring
 *	in string.  If string doesn't contain substring, the
 *	return value is 0.  Matching is done on an exact
 *	character-for-character basis with no wildcards or special
 *	characters.
 *
 * Side effects:
 *	None.
 *
 *----------------------------------------------------------------------
 */
 
/* String to search. */
/* Substring to try to find in string. */
char *strstr(register char *string, char *substring)
{
    register char *a, *b;

    /* First scan quickly through the two strings looking for a
     * single-character match.  When it's found, then compare the
     * rest of the substring.
     */

    b = substring;
    if (*b == 0) { // strstr returns string when substring is the empty string (zero length).
		return string;
    }
    for ( ; *string != 0; string += 1) {
		if (*string != *b) // look for the first character-match
			continue;
		a = string;
		while (1) {
			if (*b == 0) // We reached the end of substring, and everything is the same so far... 
				return string; // ...Return pointer to beginning of the successfully-found substring
			if (*a++ != *b++)
				break;
		}
		b = substring;
	}
    return (char *) 0; // string does not contain substring
}
