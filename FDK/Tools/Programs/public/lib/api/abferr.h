/* Copyright 2014 Adobe Systems Incorporated (http://www.adobe.com/). All Rights Reserved.
This software is licensed as OpenSource, under the Apache License, Version 2.0. This license is available at: http://opensource.org/licenses/Apache-2.0. *//***********************************************************************/

/* absfont library error name to error string mapping. See ctlshare.h for a
   description of the CTL_DCL_ERR macro. */

CTL_DCL_ERR(abfSuccess,             "no error")
CTL_DCL_ERR(abfErrNoMemory,         "out of memory")
CTL_DCL_ERR(abfErrGlyphSeac,        "unsupported seac op in glyph callback")
CTL_DCL_ERR(abfErrGlyphGenop,       "unsupported generic op in glyph callback")
CTL_DCL_ERR(abfErrBadPath,          "invalid path callback sequence")
CTL_DCL_ERR(abfErrCstrQuit,         "client quit glyph parse")
CTL_DCL_ERR(abfErrCstrFail,         "client failed glyph parse")
CTL_DCL_ERR(abfErrCantHandle,       "internal inconsistency detected")
CTL_DCL_ERR(abfErrBadFSType,        "reserved /FSType bit(s) set")
CTL_DCL_ERR(abfErrNoStdHW,          "/StdHW missing")
CTL_DCL_ERR(abfErrNoStdVW,          "/StdVW missing")
CTL_DCL_ERR(abfErrBadStdHW,         "/StdHW invalid")
CTL_DCL_ERR(abfErrBadStdVW,         "/StdVW invalid")
CTL_DCL_ERR(abfErrBadStemSnapH,     "/StemSnapH invalid")
CTL_DCL_ERR(abfErrBadStemSnapV,     "/StemSnapV invalid")
CTL_DCL_ERR(abfErrBadBlueValues,    "/BlueValues invalid")
CTL_DCL_ERR(abfErrBadOtherBlues,    "/OtherBlues invalid")
CTL_DCL_ERR(abfErrBadFamilyBlues,   "/FamilyBlues invalid")
CTL_DCL_ERR(abfErrBadFamilyOtherBlues,"/FamilyOtherBlues invalid")
CTL_DCL_ERR(abfErrBadBlueScale,     "/BlueScale too large/small")
CTL_DCL_ERR(abfErrRegularOverlap,   "regular zone overlap")
CTL_DCL_ERR(abfErrFamilyOverlap,    "family zone overlap")
CTL_DCL_ERR(abfErrUselessBlueScale, "/BlueScale useless")
CTL_DCL_ERR(abfErrUselessBlueShift, "/BlueShift useless")
CTL_DCL_ERR(abfErrUselessBlueFuzz,  "/BlueFuzz useless")
CTL_DCL_ERR(abfErrBadUniqueID,      "/UniqueID out of range")
CTL_DCL_ERR(abfErrBadUIDBase,       "/UIDBase out of range")
CTL_DCL_ERR(abfErrBigBlueValues,    "/BlueValues value too large?")
CTL_DCL_ERR(abfErrBigOtherBlues,    "/OtherBlues value too large?")
CTL_DCL_ERR(abfErrBigFamilyBlues,   "/FamilyBlues value too large?")
CTL_DCL_ERR(abfErrBigFamilyOtherBlues,"/FamilyOtherBlues value too large?")
CTL_DCL_ERR(abfErrBadULPosition,    "/UnderlinePosition positive")
CTL_DCL_ERR(abfErrBadULThickness,   "/UnderlineThickness invalid")
CTL_DCL_ERR(abfErrBadisFixedPitch,  "/isFixedPitch invalid")
CTL_DCL_ERR(abfErrBadForceBold,     "/ForceBold invalid")
CTL_DCL_ERR(abfErrBadLanguageGroup, "/LanguageGroup invalid")
