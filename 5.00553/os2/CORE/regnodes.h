/* !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
   This file is built by regcomp.pl from regcomp.sym.  
   Any changes made here will be lost!
*/

#define	END	0	/*    0 End of program. */
#define	SUCCEED	1	/*  0x1 Return from a subroutine, basically. */
#define	BOL	2	/*  0x2 Match "" at beginning of line. */
#define	MBOL	3	/*  0x3 Same, assuming multiline. */
#define	SBOL	4	/*  0x4 Same, assuming singleline. */
#define	EOS	5	/*  0x5 Match "" at end of string. */
#define	EOL	6	/*  0x6 Match "" at end of line. */
#define	MEOL	7	/*  0x7 Same, assuming multiline. */
#define	SEOL	8	/*  0x8 Same, assuming singleline. */
#define	BOUND	9	/*  0x9 Match "" at any word boundary */
#define	BOUNDUTF8	10	/*  0xa Match "" at any word boundary */
#define	BOUNDL	11	/*  0xb Match "" at any word boundary */
#define	BOUNDLUTF8	12	/*  0xc Match "" at any word boundary */
#define	NBOUND	13	/*  0xd Match "" at any word non-boundary */
#define	NBOUNDUTF8	14	/*  0xe Match "" at any word non-boundary */
#define	NBOUNDL	15	/*  0xf Match "" at any word non-boundary */
#define	NBOUNDLUTF8	16	/* 0x10 Match "" at any word non-boundary */
#define	GPOS	17	/* 0x11 Matches where last m//g left off. */
#define	REG_ANY	18	/* 0x12 Match any one character (except newline). */
#define	ANYUTF8	19	/* 0x13 Match any one Unicode character (except newline). */
#define	SANY	20	/* 0x14 Match any one character. */
#define	SANYUTF8	21	/* 0x15 Match any one Unicode character. */
#define	ANYOF	22	/* 0x16 Match character in (or not in) this class. */
#define	ANYOFUTF8	23	/* 0x17 Match character in (or not in) this class. */
#define	ALNUM	24	/* 0x18 Match any alphanumeric character */
#define	ALNUMUTF8	25	/* 0x19 Match any alphanumeric character */
#define	ALNUML	26	/* 0x1a Match any alphanumeric char in locale */
#define	ALNUMLUTF8	27	/* 0x1b Match any alphanumeric char in locale */
#define	NALNUM	28	/* 0x1c Match any non-alphanumeric character */
#define	NALNUMUTF8	29	/* 0x1d Match any non-alphanumeric character */
#define	NALNUML	30	/* 0x1e Match any non-alphanumeric char in locale */
#define	NALNUMLUTF8	31	/* 0x1f Match any non-alphanumeric char in locale */
#define	SPACE	32	/* 0x20 Match any whitespace character */
#define	SPACEUTF8	33	/* 0x21 Match any whitespace character */
#define	SPACEL	34	/* 0x22 Match any whitespace char in locale */
#define	SPACELUTF8	35	/* 0x23 Match any whitespace char in locale */
#define	NSPACE	36	/* 0x24 Match any non-whitespace character */
#define	NSPACEUTF8	37	/* 0x25 Match any non-whitespace character */
#define	NSPACEL	38	/* 0x26 Match any non-whitespace char in locale */
#define	NSPACELUTF8	39	/* 0x27 Match any non-whitespace char in locale */
#define	DIGIT	40	/* 0x28 Match any numeric character */
#define	DIGITUTF8	41	/* 0x29 Match any numeric character */
#define	NDIGIT	42	/* 0x2a Match any non-numeric character */
#define	NDIGITUTF8	43	/* 0x2b Match any non-numeric character */
#define	CLUMP	44	/* 0x2c Match any combining character sequence */
#define	BRANCH	45	/* 0x2d Match this alternative, or the next... */
#define	BACK	46	/* 0x2e Match "", "next" ptr points backward. */
#define	EXACT	47	/* 0x2f Match this string (preceded by length). */
#define	EXACTF	48	/* 0x30 Match this string, folded (prec. by length). */
#define	EXACTFL	49	/* 0x31 Match this string, folded in locale (w/len). */
#define	NOTHING	50	/* 0x32 Match empty string. */
#define	TAIL	51	/* 0x33 Match empty string. Can jump here from outside. */
#define	STAR	52	/* 0x34 Match this (simple) thing 0 or more times. */
#define	PLUS	53	/* 0x35 Match this (simple) thing 1 or more times. */
#define	CURLY	54	/* 0x36 Match this simple thing {n,m} times. */
#define	CURLYN	55	/* 0x37 Match next-after-this simple thing  */
#define	CURLYM	56	/* 0x38 Match this medium-complex thing {n,m} times. */
#define	CURLYX	57	/* 0x39 Match this complex thing {n,m} times. */
#define	WHILEM	58	/* 0x3a Do curly processing and see if rest matches. */
#define	OPEN	59	/* 0x3b Mark this point in input as start of #n. */
#define	CLOSE	60	/* 0x3c Analogous to OPEN. */
#define	REF	61	/* 0x3d Match some already matched string */
#define	REFF	62	/* 0x3e Match already matched string, folded */
#define	REFFL	63	/* 0x3f Match already matched string, folded in loc. */
#define	IFMATCH	64	/* 0x40 Succeeds if the following matches. */
#define	UNLESSM	65	/* 0x41 Fails if the following matches. */
#define	SUSPEND	66	/* 0x42 "Independent" sub-RE. */
#define	IFTHEN	67	/* 0x43 Switch, should be preceeded by switcher . */
#define	GROUPP	68	/* 0x44 Whether the group matched. */
#define	LONGJMP	69	/* 0x45 Jump far away. */
#define	BRANCHJ	70	/* 0x46 BRANCH with long offset. */
#define	EVAL	71	/* 0x47 Execute some Perl code. */
#define	MINMOD	72	/* 0x48 Next operator is not greedy. */
#define	LOGICAL	73	/* 0x49 Next opcode should set the flag only. */
#define	RENUM	74	/* 0x4a Group with independently numbered parens. */
#define	OPTIMIZED	75	/* 0x4b Placeholder for dump. */

#ifndef DOINIT
EXTCONST U8 PL_regkind[];
#else
EXTCONST U8 PL_regkind[] = {
	END,		/* END */
	END,		/* SUCCEED */
	BOL,		/* BOL */
	BOL,		/* MBOL */
	BOL,		/* SBOL */
	EOL,		/* EOS */
	EOL,		/* EOL */
	EOL,		/* MEOL */
	EOL,		/* SEOL */
	BOUND,		/* BOUND */
	BOUND,		/* BOUNDUTF8 */
	BOUND,		/* BOUNDL */
	BOUND,		/* BOUNDLUTF8 */
	NBOUND,		/* NBOUND */
	NBOUND,		/* NBOUNDUTF8 */
	NBOUND,		/* NBOUNDL */
	NBOUND,		/* NBOUNDLUTF8 */
	GPOS,		/* GPOS */
	REG_ANY,		/* REG_ANY */
	REG_ANY,		/* ANYUTF8 */
	REG_ANY,		/* SANY */
	REG_ANY,		/* SANYUTF8 */
	ANYOF,		/* ANYOF */
	ANYOF,		/* ANYOFUTF8 */
	ALNUM,		/* ALNUM */
	ALNUM,		/* ALNUMUTF8 */
	ALNUM,		/* ALNUML */
	ALNUM,		/* ALNUMLUTF8 */
	NALNUM,		/* NALNUM */
	NALNUM,		/* NALNUMUTF8 */
	NALNUM,		/* NALNUML */
	NALNUM,		/* NALNUMLUTF8 */
	SPACE,		/* SPACE */
	SPACE,		/* SPACEUTF8 */
	SPACE,		/* SPACEL */
	SPACE,		/* SPACELUTF8 */
	NSPACE,		/* NSPACE */
	NSPACE,		/* NSPACEUTF8 */
	NSPACE,		/* NSPACEL */
	NSPACE,		/* NSPACELUTF8 */
	DIGIT,		/* DIGIT */
	DIGIT,		/* DIGITUTF8 */
	NDIGIT,		/* NDIGIT */
	NDIGIT,		/* NDIGITUTF8 */
	CLUMP,		/* CLUMP */
	BRANCH,		/* BRANCH */
	BACK,		/* BACK */
	EXACT,		/* EXACT */
	EXACT,		/* EXACTF */
	EXACT,		/* EXACTFL */
	NOTHING,		/* NOTHING */
	NOTHING,		/* TAIL */
	STAR,		/* STAR */
	PLUS,		/* PLUS */
	CURLY,		/* CURLY */
	CURLY,		/* CURLYN */
	CURLY,		/* CURLYM */
	CURLY,		/* CURLYX */
	WHILEM,		/* WHILEM */
	OPEN,		/* OPEN */
	CLOSE,		/* CLOSE */
	REF,		/* REF */
	REF,		/* REFF */
	REF,		/* REFFL */
	BRANCHJ,		/* IFMATCH */
	BRANCHJ,		/* UNLESSM */
	BRANCHJ,		/* SUSPEND */
	BRANCHJ,		/* IFTHEN */
	GROUPP,		/* GROUPP */
	LONGJMP,		/* LONGJMP */
	BRANCHJ,		/* BRANCHJ */
	EVAL,		/* EVAL */
	MINMOD,		/* MINMOD */
	LOGICAL,		/* LOGICAL */
	BRANCHJ,		/* RENUM */
	NOTHING,		/* OPTIMIZED */
};
#endif


#ifdef REG_COMP_C
const static U8 regarglen[] = {
	0,		/* END */
	0,		/* SUCCEED */
	0,		/* BOL */
	0,		/* MBOL */
	0,		/* SBOL */
	0,		/* EOS */
	0,		/* EOL */
	0,		/* MEOL */
	0,		/* SEOL */
	0,		/* BOUND */
	0,		/* BOUNDUTF8 */
	0,		/* BOUNDL */
	0,		/* BOUNDLUTF8 */
	0,		/* NBOUND */
	0,		/* NBOUNDUTF8 */
	0,		/* NBOUNDL */
	0,		/* NBOUNDLUTF8 */
	0,		/* GPOS */
	0,		/* REG_ANY */
	0,		/* ANYUTF8 */
	0,		/* SANY */
	0,		/* SANYUTF8 */
	0,		/* ANYOF */
	EXTRA_SIZE(struct regnode_1),		/* ANYOFUTF8 */
	0,		/* ALNUM */
	0,		/* ALNUMUTF8 */
	0,		/* ALNUML */
	0,		/* ALNUMLUTF8 */
	0,		/* NALNUM */
	0,		/* NALNUMUTF8 */
	0,		/* NALNUML */
	0,		/* NALNUMLUTF8 */
	0,		/* SPACE */
	0,		/* SPACEUTF8 */
	0,		/* SPACEL */
	0,		/* SPACELUTF8 */
	0,		/* NSPACE */
	0,		/* NSPACEUTF8 */
	0,		/* NSPACEL */
	0,		/* NSPACELUTF8 */
	0,		/* DIGIT */
	0,		/* DIGITUTF8 */
	0,		/* NDIGIT */
	0,		/* NDIGITUTF8 */
	0,		/* CLUMP */
	0,		/* BRANCH */
	0,		/* BACK */
	0,		/* EXACT */
	0,		/* EXACTF */
	0,		/* EXACTFL */
	0,		/* NOTHING */
	0,		/* TAIL */
	0,		/* STAR */
	0,		/* PLUS */
	EXTRA_SIZE(struct regnode_2),		/* CURLY */
	EXTRA_SIZE(struct regnode_2),		/* CURLYN */
	EXTRA_SIZE(struct regnode_2),		/* CURLYM */
	EXTRA_SIZE(struct regnode_2),		/* CURLYX */
	0,		/* WHILEM */
	EXTRA_SIZE(struct regnode_1),		/* OPEN */
	EXTRA_SIZE(struct regnode_1),		/* CLOSE */
	EXTRA_SIZE(struct regnode_1),		/* REF */
	EXTRA_SIZE(struct regnode_1),		/* REFF */
	EXTRA_SIZE(struct regnode_1),		/* REFFL */
	EXTRA_SIZE(struct regnode_1),		/* IFMATCH */
	EXTRA_SIZE(struct regnode_1),		/* UNLESSM */
	EXTRA_SIZE(struct regnode_1),		/* SUSPEND */
	EXTRA_SIZE(struct regnode_1),		/* IFTHEN */
	EXTRA_SIZE(struct regnode_1),		/* GROUPP */
	EXTRA_SIZE(struct regnode_1),		/* LONGJMP */
	EXTRA_SIZE(struct regnode_1),		/* BRANCHJ */
	EXTRA_SIZE(struct regnode_1),		/* EVAL */
	0,		/* MINMOD */
	0,		/* LOGICAL */
	EXTRA_SIZE(struct regnode_1),		/* RENUM */
	0,		/* OPTIMIZED */
};

const static char reg_off_by_arg[] = {
	0,		/* END */
	0,		/* SUCCEED */
	0,		/* BOL */
	0,		/* MBOL */
	0,		/* SBOL */
	0,		/* EOS */
	0,		/* EOL */
	0,		/* MEOL */
	0,		/* SEOL */
	0,		/* BOUND */
	0,		/* BOUNDUTF8 */
	0,		/* BOUNDL */
	0,		/* BOUNDLUTF8 */
	0,		/* NBOUND */
	0,		/* NBOUNDUTF8 */
	0,		/* NBOUNDL */
	0,		/* NBOUNDLUTF8 */
	0,		/* GPOS */
	0,		/* REG_ANY */
	0,		/* ANYUTF8 */
	0,		/* SANY */
	0,		/* SANYUTF8 */
	0,		/* ANYOF */
	0,		/* ANYOFUTF8 */
	0,		/* ALNUM */
	0,		/* ALNUMUTF8 */
	0,		/* ALNUML */
	0,		/* ALNUMLUTF8 */
	0,		/* NALNUM */
	0,		/* NALNUMUTF8 */
	0,		/* NALNUML */
	0,		/* NALNUMLUTF8 */
	0,		/* SPACE */
	0,		/* SPACEUTF8 */
	0,		/* SPACEL */
	0,		/* SPACELUTF8 */
	0,		/* NSPACE */
	0,		/* NSPACEUTF8 */
	0,		/* NSPACEL */
	0,		/* NSPACELUTF8 */
	0,		/* DIGIT */
	0,		/* DIGITUTF8 */
	0,		/* NDIGIT */
	0,		/* NDIGITUTF8 */
	0,		/* CLUMP */
	0,		/* BRANCH */
	0,		/* BACK */
	0,		/* EXACT */
	0,		/* EXACTF */
	0,		/* EXACTFL */
	0,		/* NOTHING */
	0,		/* TAIL */
	0,		/* STAR */
	0,		/* PLUS */
	0,		/* CURLY */
	0,		/* CURLYN */
	0,		/* CURLYM */
	0,		/* CURLYX */
	0,		/* WHILEM */
	0,		/* OPEN */
	0,		/* CLOSE */
	0,		/* REF */
	0,		/* REFF */
	0,		/* REFFL */
	2,		/* IFMATCH */
	2,		/* UNLESSM */
	1,		/* SUSPEND */
	1,		/* IFTHEN */
	0,		/* GROUPP */
	1,		/* LONGJMP */
	1,		/* BRANCHJ */
	0,		/* EVAL */
	0,		/* MINMOD */
	0,		/* LOGICAL */
	1,		/* RENUM */
	0,		/* OPTIMIZED */
};
#endif /* REG_COMP_C */

