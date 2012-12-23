/*
 * ctype-impl.c
 *
 *  Created on: 23/dic/2012
 *      Author: AndreaFrancesco
 */

char __lookupTableChar[] = {0x1,
		0x1,
		0x1,
		0x1,
		0x1,
		0x1,
		0x1,
		0x1,
		0x1,
		0x5,
		0x5,
		0x5,
		0x5,
		0x5,
		0x1,
		0x1,
		0x1,
		0x1,
		0x1,
		0x1,
		0x1,
		0x1,
		0x1,
		0x1,
		0x1,
		0x1,
		0x1,
		0x1,
		0x1,
		0x1,
		0x1,
		0x1,
		0xC,
		0x28,
		0x28,
		0x28,
		0x28,
		0x28,
		0x28,
		0x28,
		0x28,
		0x28,
		0x28,
		0x28,
		0x28,
		0x28,
		0x28,
		0x28,
		0x1A,
		0x1A,
		0x1A,
		0x1A,
		0x1A,
		0x1A,
		0x1A,
		0x1A,
		0x1A,
		0x1A,
		0x28,
		0x28,
		0x28,
		0x28,
		0x28,
		0x28,
		0x28,
		0xFFFFFF98,
		0xFFFFFF98,
		0xFFFFFF98,
		0xFFFFFF98,
		0xFFFFFF98,
		0xFFFFFF98,
		0xFFFFFF88,
		0xFFFFFF88,
		0xFFFFFF88,
		0xFFFFFF88,
		0xFFFFFF88,
		0xFFFFFF88,
		0xFFFFFF88,
		0xFFFFFF88,
		0xFFFFFF88,
		0xFFFFFF88,
		0xFFFFFF88,
		0xFFFFFF88,
		0xFFFFFF88,
		0xFFFFFF88,
		0xFFFFFF88,
		0xFFFFFF88,
		0xFFFFFF88,
		0xFFFFFF88,
		0xFFFFFF88,
		0xFFFFFF88,
		0x28,
		0x28,
		0x28,
		0x28,
		0x28,
		0x28,
		0x58,
		0x58,
		0x58,
		0x58,
		0x58,
		0x58,
		0x48,
		0x48,
		0x48,
		0x48,
		0x48,
		0x48,
		0x48,
		0x48,
		0x48,
		0x48,
		0x48,
		0x48,
		0x48,
		0x48,
		0x48,
		0x48,
		0x48,
		0x48,
		0x48,
		0x48,
		0x28,
		0x28,
		0x28,
		0x28 };

#define iscntrl(c) __lookupTableChar[c] & 1;
#define isdigit(c) __lookupTableChar[c] & 2;
#define isprint(c) __lookupTableChar[c] & 8;
#define isspace(c) __lookupTableChar[c] & 4;
#define isxdigit(c) __lookupTableChar[c] & 16;
#define ispunct(c) __lookupTableChar[c] & 32;
#define islower(c) __lookupTableChar[c] & 64;
#define isupper(c) __lookupTableChar[c] & 128;


#define tolower(c) c | 32;
#define toupper(c) c & 0xDF;