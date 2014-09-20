/*
 * A n t l r  S e t s / E r r o r  F i l e  H e a d e r
 *
 * Generated from: featgram.g
 *
 * Terence Parr, Russell Quong, Will Cohen, and Hank Dietz: 1989-2001
 * Parr Research Corporation
 * with Purdue University Electrical Engineering
 * With AHPCRC, University of Minnesota
 * ANTLR Version 1.33MR33
 */

#define ANTLR_VERSION	13333
#include "pcctscfg.h"
#include "pccts_stdio.h"

/* --- This section will be included in all feat*.c files created. --- */

#include <stdlib.h>	/* For exit in err.h xxx */
#include <string.h>

#include <stdio.h>

#include "common.h"
#include "feat.h"
#include "MMFX.h"
#include "OS_2.h"
#include "hhea.h"
#include "vmtx.h"
#include "dynarr.h"

#define MAX_TOKEN	64

/* ------------------------------------------------------------------- */
/* Adobe patent application tracking #P295, entitled FONT FEATURE FILE */
/* PROCESSING, inventors: Patel, Hall.                                 */
/* ------------------------------------------------------------------- */
extern featCtx h;	/* Not reentrant; see featNew() comments */
extern hotCtx g;

typedef union
{
  long lval;
  unsigned long ulval;
  char text[MAX_TOKEN];
} Attrib;

void zzcr_attr(Attrib *attr, int type, char *text);

  
#define zzSET_SIZE 20
#include "antlr.h"
#include "feattoks.h"
#include "dlgdef.h"
#include "err.h"

ANTLRChar *zztokens[144]={
	/* 00 */	"Invalid",
	/* 01 */	"Eof",
	/* 02 */	"[\\ \\t]+",
	/* 03 */	"\\r\\n",
	/* 04 */	"[\\r\\n]",
	/* 05 */	"K_include",
	/* 06 */	";",
	/* 07 */	"T_TAG",
	/* 08 */	"[\\ \\t]+",
	/* 09 */	"\\r\\n",
	/* 10 */	"[\\r\\n]",
	/* 11 */	"T_LABEL",
	/* 12 */	"[\\ \\t]+",
	/* 13 */	"\\r\\n",
	/* 14 */	"[\\r\\n]",
	/* 15 */	"INCLFILE",
	/* 16 */	"[\\ \\t]+",
	/* 17 */	"\\r\\n",
	/* 18 */	"[\\r\\n]",
	/* 19 */	"\\{",
	/* 20 */	"#~[\\r\\n]*",
	/* 21 */	"[\\ \\t]+",
	/* 22 */	"\\r\\n",
	/* 23 */	"[\\r\\n]",
	/* 24 */	"\\r\\n",
	/* 25 */	"[\\r\\n]",
	/* 26 */	"~[]",
	/* 27 */	"\"",
	/* 28 */	"\\r\\n",
	/* 29 */	"[\\r\\n]",
	/* 30 */	"[\\0x20-\\0x7E]",
	/* 31 */	"#~[\\r\\n]*",
	/* 32 */	"[\\ \\t]+",
	/* 33 */	"\\r\\n",
	/* 34 */	"[\\r\\n]",
	/* 35 */	"K_feature",
	/* 36 */	"K_table",
	/* 37 */	"K_script",
	/* 38 */	"K_language",
	/* 39 */	"K_languagesystem",
	/* 40 */	"K_subtable",
	/* 41 */	"K_lookup",
	/* 42 */	"K_lookupflag",
	/* 43 */	"K_RightToLeft",
	/* 44 */	"K_IgnoreBaseGlyphs",
	/* 45 */	"K_IgnoreLigatures",
	/* 46 */	"K_IgnoreMarks",
	/* 47 */	"K_UseMarkFilteringSet",
	/* 48 */	"K_MarkAttachmentType",
	/* 49 */	"K_anon",
	/* 50 */	"K_includeDFLT",
	/* 51 */	"K_excludeDFLT",
	/* 52 */	"K_include_dflt",
	/* 53 */	"K_exclude_dflt",
	/* 54 */	"K_useExtension",
	/* 55 */	"K_BeginValue",
	/* 56 */	"K_EndValue",
	/* 57 */	"K_enumerate",
	/* 58 */	"K_except",
	/* 59 */	"K_ignore",
	/* 60 */	"K_substitute",
	/* 61 */	"K_reverse",
	/* 62 */	"K_by",
	/* 63 */	"K_from",
	/* 64 */	"K_position",
	/* 65 */	"K_parameters",
	/* 66 */	"K_feat_names",
	/* 67 */	"K_sizemenuname",
	/* 68 */	"K_contourpoint",
	/* 69 */	"K_device",
	/* 70 */	"K_anchor",
	/* 71 */	"K_anchordef",
	/* 72 */	"K_valueRecordDef",
	/* 73 */	"K_mark",
	/* 74 */	"K_markClass",
	/* 75 */	"K_cursive",
	/* 76 */	"K_markBase",
	/* 77 */	"K_markLigature",
	/* 78 */	"K_LigatureComponent",
	/* 79 */	"K_caret",
	/* 80 */	"K_NULL",
	/* 81 */	"K_BASE",
	/* 82 */	"K_HorizAxis_BaseTagList",
	/* 83 */	"K_HorizAxis_BaseScriptList",
	/* 84 */	"K_VertAxis_BaseTagList",
	/* 85 */	"K_VertAxis_BaseScriptList",
	/* 86 */	"K_GDEF",
	/* 87 */	"K_GlyphClassDef",
	/* 88 */	"K_Attach",
	/* 89 */	"K_GDEFMarkAttachClass",
	/* 90 */	"K_LigatureCaret1",
	/* 91 */	"K_LigatureCaret2",
	/* 92 */	"K_LigatureCaret3",
	/* 93 */	"K_head",
	/* 94 */	"K_FontRevision",
	/* 95 */	"K_hhea",
	/* 96 */	"K_Ascender",
	/* 97 */	"K_Descender",
	/* 98 */	"K_LineGap",
	/* 99 */	"K_CaretOffset",
	/* 100 */	"K_name",
	/* 101 */	"K_nameid",
	/* 102 */	"K_OS_2",
	/* 103 */	"K_FSType",
	/* 104 */	"K_FSType2",
	/* 105 */	"K_LowerOpticalPointSize",
	/* 106 */	"K_UpperOpticalPointSize",
	/* 107 */	"K_Panose",
	/* 108 */	"K_TypoAscender",
	/* 109 */	"K_TypoDescender",
	/* 110 */	"K_TypoLineGap",
	/* 111 */	"K_winAscent",
	/* 112 */	"K_winDescent",
	/* 113 */	"K_XHeight",
	/* 114 */	"K_CapHeight",
	/* 115 */	"K_UnicodeRange",
	/* 116 */	"K_CodePageRange",
	/* 117 */	"K_WeightClass",
	/* 118 */	"K_WidthClass",
	/* 119 */	"K_Vendor",
	/* 120 */	"K_vhea",
	/* 121 */	"K_VertTypoAscender",
	/* 122 */	"K_VertTypoDescender",
	/* 123 */	"K_VertTypoLineGap",
	/* 124 */	"K_vmtx",
	/* 125 */	"K_VertOriginY",
	/* 126 */	"K_VertAdvanceY",
	/* 127 */	"T_FONTREV",
	/* 128 */	"T_NUMEXT",
	/* 129 */	"T_NUM",
	/* 130 */	"T_GCLASS",
	/* 131 */	"T_CID",
	/* 132 */	"T_GNAME",
	/* 133 */	"T_STRING",
	/* 134 */	"\\[",
	/* 135 */	"\\-",
	/* 136 */	"\\]",
	/* 137 */	"0",
	/* 138 */	",",
	/* 139 */	"'",
	/* 140 */	";",
	/* 141 */	"\\{",
	/* 142 */	"\\}",
	/* 143 */	"="
};
SetWordType zzerr1[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x18,0x0,0x0,0x0};
SetWordType zzerr2[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x9c,0x1,0x0,0x0};
SetWordType zzerr3[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x1c,0x1,0x0,0x0};
SetWordType zzerr4[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x44,0x0,0x0,0x0};
SetWordType zzerr5[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x80, 0x2,0x0,0x0,0x0};
SetWordType zzerr6[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x3,0x0,0x0,0x0};
SetWordType setwd1[144] = {0x0,0x20,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x9,0x0,0x50,0x50,0x50,0x50,
	0x50,0x50,0x0,0x0,0x0,0x0,0x0,0x0,
	0x9,0x60,0x0,0x0,0x0,0x9,0x9,0x9,
	0x9,0x0,0x0,0x0,0x0,0x60,0x0,0x0,
	0x0,0x0,0x9,0x0,0x9,0x9,0x9,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x80,0x0,0xf9,0x2d,0x2f,0x6f,0x0,0x29,
	0x1,0x5,0x0,0x29,0x9,0xf9,0x0,0x0,
	0x0};
SetWordType zzerr7[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x2,0x2,0x0,0x0};
SetWordType zzerr8[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x30,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0};
SetWordType zzerr9[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x2,0x0,0x0,0x0};
SetWordType zzerr10[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x2,0x0,0x0,0x0};
SetWordType zzerr11[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x12,0x0,0x0,0x0};
SetWordType setwd2[144] = {0x0,0x22,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x1e,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0xa,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x1,0x3,0x82,0x82,0x8a,0x1,0x82,
	0x0,0x0,0x0,0x4,0x0,0xc2,0x0,0x0,
	0x0};
SetWordType zzerr12[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x1, 0x10,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0};
SetWordType zzerr13[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x1,0x0,
	0x0,0x0,0x0,0x0, 0x12,0x0,0x0,0x0};
SetWordType zzerr14[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x0,0x0,0x0};
SetWordType zzerr15[20] = {0x0,0x0,0x0,0x0, 0x0,0x2,0x0,0xf0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5e,0x1c,0x0,0x0};
SetWordType zzerr16[20] = {0x0,0x0,0x0,0x0, 0x0,0x2,0x0,0xf0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5e,0x14,0x0,0x0};
SetWordType setwd3[144] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x20,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x4,0x0,0x0,0x0,0x0,0x60,0x60,0x60,
	0x60,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x4,0x0,0x0,0x0,0x0,0x4,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x60,0xf5,0xed,0xed,0x0,0xf5,
	0x0,0x0,0x0,0x60,0x4,0x67,0x0,0x0,
	0x0};
SetWordType zzerr17[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x0,0x0,0x0};
SetWordType zzerr18[20] = {0x0,0x0,0x0,0x0, 0x0,0x2,0x80,0x0, 0x0,0x3a,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5e,0x18,0x0,0x0};
SetWordType zzerr19[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x0,0x0,0x0};
SetWordType setwd4[144] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x28,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x28,0x0,0x0,0x0,0x0,0x1,0x1,0x1,
	0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x28,0x0,0x28,0x28,0x28,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x29,0x9c,0x5a,0x5a,0x0,0x9c,
	0x0,0x0,0x0,0x1,0x0,0x29,0x0,0x0,
	0x0};
SetWordType zzerr20[20] = {0x0,0x0,0x0,0x0, 0x0,0x2,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5e,0x18,0x0,0x0};
SetWordType zzerr21[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x30, 0x1,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0};
SetWordType zzerr22[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x34, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0};
SetWordType zzerr23[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x1,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x0,0x0,0x0};
SetWordType zzerr24[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x40, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x10,0x0,0x0};
SetWordType zzerr25[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0xc0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0};
SetWordType zzerr26[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x1,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x0,0x0,0x0};
SetWordType zzerr27[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0xc0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x10,0x0,0x0};
SetWordType zzerr28[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x30, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0};
SetWordType setwd5[144] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x3,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x3,0x0,0x0,0x0,0x0,0x8,0x8,0x20,
	0x20,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x3,0x53,0x53,0x53,0x0,0x53,
	0x0,0x0,0x0,0x0,0x0,0x87,0x0,0x0,
	0x0};
SetWordType zzerr29[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x0,0x0,0x0};
SetWordType zzerr30[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x2, 0x1,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0};
SetWordType zzerr31[20] = {0x0,0x0,0x0,0x0, 0x0,0x2,0x80,0x0, 0x0,0x3a,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5e,0x0,0x0,0x0};
SetWordType zzerr32[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x2,0x0,0x0,0x0};
SetWordType zzerr33[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5e,0x10,0x0,0x0};
SetWordType setwd6[144] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x10,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x30,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x10,0x0,0x10,0x10,0x10,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x30,0xca,0xc9,0xc9,0x0,0xca,
	0x0,0x0,0x0,0x0,0x0,0x84,0x0,0x0,
	0x0};
SetWordType zzerr34[20] = {0x0,0x0,0x0,0x0, 0x0,0x2,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x10,0x0,0x0};
SetWordType zzerr35[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x10,0x0,0x0};
SetWordType zzerr36[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x10,0x0,0x0};
SetWordType zzerr37[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x10,0x0,0x0};
SetWordType zzerr38[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x10,0x0,0x0};
SetWordType zzerr39[20] = {0x0,0x0,0x0,0x0, 0x0,0x2,0x80,0x0, 0x0,0x3a,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x2,0x0,0x0,0x0};
SetWordType setwd7[144] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x80,0x0,0x80,0x3f,0x3f,0x3f,0x0,0x3f,
	0x0,0x0,0x0,0x0,0x0,0x42,0x0,0x0,
	0x0};
SetWordType zzerr40[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x23,0x0,0x0,0x0};
SetWordType zzerr41[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x23,0x0,0x0,0x0};
SetWordType zzerr42[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x0,0x0,0x0};
SetWordType zzerr43[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x8,0x0,0x0};
SetWordType setwd8[144] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x8,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x6,0x6,0xc0,0xa0,0xa0,0x0,0xc0,
	0x0,0x0,0x0,0x0,0x0,0x91,0x0,0x8,
	0x0};
SetWordType zzerr44[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x0,0x0,0x0};
SetWordType zzerr45[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x8,0x0,0x0};
SetWordType zzerr46[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x0,0x0,0x0};
SetWordType zzerr47[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x8,0x0,0x0};
SetWordType zzerr48[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x0,0x0,0x0};
SetWordType setwd9[144] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x44,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0xee,0xdd,0xdd,0x0,0xee,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0};
SetWordType zzerr49[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x18,0x0,0x0};
SetWordType zzerr50[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x0,0x0,0x0};
SetWordType zzerr51[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x8,0x0,0x0};
SetWordType zzerr52[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x0,0x0,0x0};
SetWordType setwd10[144] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x11,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0xbb,0x77,0x77,0x0,0xbb,
	0x0,0x0,0x0,0x0,0x0,0x3,0x0,0x0,
	0x0};
SetWordType zzerr53[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x8,0x0,0x0};
SetWordType zzerr54[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x0,0x0,0x0};
SetWordType zzerr55[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x42,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x18,0x0,0x0};
SetWordType zzerr56[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x40,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x18,0x0,0x0};
SetWordType zzerr57[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x5c,0x18,0x0,0x0};
SetWordType zzerr58[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x3c,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x10,0x0,0x0};
SetWordType setwd11[144] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x1d,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x4,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x3f,0x3f,0x3f,0x0,0x3f,
	0x0,0x0,0x0,0x0,0xc,0xfc,0x0,0x0,
	0x0};
SetWordType zzerr59[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x6,0x0,0x0,0x0};
SetWordType zzerr60[20] = {0x0,0x0,0x0,0x0, 0x0,0xf8,0x1,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0};
SetWordType zzerr61[20] = {0x0,0x0,0x0,0x0, 0x0,0xf8,0x1,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x2,0x10,0x0,0x0};
SetWordType zzerr62[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x23,0x0,0x0,0x0};
SetWordType zzerr63[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x23,0x0,0x0,0x0};
SetWordType setwd12[144] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x6,0x6,0x6,0x6,
	0x6,0x6,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0xc0,0xc2,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x3b,0x0,0x0,
	0x0};
SetWordType zzerr64[20] = {0x0,0x0,0x0,0x0, 0x68,0x5,0x0,0x3e, 0xf,0x4,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x4,0x10,0x0,0x0};
SetWordType zzerr65[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x40,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x20,0x0,0x0};
SetWordType zzerr66[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x40,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x30,0x0,0x0};
SetWordType zzerr67[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x40,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x20,0x0,0x0};
SetWordType setwd13[144] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0xe8,0x0,0xe8,0xe8,
	0x0,0xe8,0x48,0xe8,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,
	0x0,0x0,0xec,0xea,0xe8,0xea,0xea,0x0,
	0x0,0xec,0xe8,0xe8,0xe8,0x0,0x0,0x0,
	0x0,0x0,0x0,0xe8,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0xe8,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0xe9,0x10,0x48,
	0x0};
SetWordType zzerr68[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x40,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x20,0x0,0x0};
SetWordType zzerr69[20] = {0x0,0x0,0x0,0x0, 0x68,0x7,0x0,0x3e, 0xf,0x4,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x4,0x50,0x0,0x0};
SetWordType zzerr70[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x14,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0};
SetWordType zzerr71[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x28,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0};
SetWordType zzerr72[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x14,0x0,
	0x0,0x0,0x0,0x0, 0x0,0x40,0x0,0x0};
SetWordType zzerr73[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x80,0xff,0xff,0x0, 0x0,0x10,0x0,0x0};
SetWordType setwd14[144] = {0x0,0x45,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x47,0x45,0x2,0x2,
	0x45,0x2,0x45,0x2,0x0,0x0,0x0,0x0,
	0x0,0x0,0x45,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x2,0x2,0x2,0x2,0x2,0x0,
	0x0,0x2,0x2,0x2,0x2,0x0,0x0,0x0,
	0x45,0x45,0x0,0x47,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x30,0x0,0x30,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
	0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
	0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x47,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x8,0x0,0xcf,0x0,0x10,
	0x0};
SetWordType zzerr74[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x44,0x14,0x0,0x0};
SetWordType zzerr75[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x80,0xd,
	0x0,0x0,0x0,0x0, 0x0,0x10,0x0,0x0};
SetWordType zzerr76[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x40,
	0x0,0x0,0x0,0x0, 0x0,0x10,0x0,0x0};
SetWordType zzerr77[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0xf,0x0,0x0,0x0, 0x0,0x10,0x0,0x0};
SetWordType setwd15[144] = {0x0,0x61,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x61,0x61,0x0,0x0,
	0x61,0x0,0x61,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x61,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x61,0x61,0x0,0x61,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x10,0x10,0x0,0x10,0x10,0x0,0x0,0x0,
	0x0,0x80,0x80,0x80,0x80,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x63,0x0,0x0,0x0,0x2,
	0x0,0x0,0x0,0xc,0x0,0xfd,0x0,0x0,
	0x0};
SetWordType zzerr78[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x23,0x0,0x0,0x0};
SetWordType zzerr79[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x23,0x0,0x0,0x0};
SetWordType zzerr80[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x20,0x0,0x0,0x0, 0x0,0x10,0x0,0x0};
SetWordType zzerr81[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0xe, 0x0,0x10,0x0,0x0};
SetWordType zzerr82[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x60, 0x0,0x10,0x0,0x0};
SetWordType setwd16[144] = {0x0,0x51,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x51,0x51,0x0,0x0,
	0x51,0x0,0x51,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x51,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x51,0x51,0x0,0x51,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x20,0x20,0x20,0x0,0x80,0x80,
	0x0,0x6,0x6,0x51,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0xf9,0x0,0x0,
	0x0};
SetWordType zzerr83[20] = {0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x42,0xa0,
	0x50,0x0,0x0,0x11, 0x0,0x0,0x0,0x0};
SetWordType zzerr84[20] = {0x0,0x0,0x0,0x0, 0x80,0x0,0x0,0x0, 0x80,0x5,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x4,0x10,0x0,0x0};
SetWordType zzerr85[20] = {0x2,0x0,0x0,0x0, 0x98,0x2,0x2,0x0, 0x80,0x5,0x0,0x0,
	0x0,0x0,0x0,0x0, 0x4,0x10,0x0,0x0};
SetWordType setwd17[144] = {0x0,0x5b,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x1b,0x1b,0x0,0x0,
	0x3b,0x0,0x1b,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x1b,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x3b,0x3b,0x0,0x3b,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x3f,0x0,0x0,
	0x0};
