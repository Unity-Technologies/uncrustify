Line [Token]             Text
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_PRAGMA]         pragma
2    [PREPROC_BODY]      do not change anything in this pragma!
2    [NEWLINE]           
4    [COMMENT_CPP]       // This next bit should parse as '#', pragma, preproc-body, nl-cont,
4    [NEWLINE]           
5    [COMMENT_CPP]       //   preproc-body, nl-cont, preproc-body
5    [NEWLINE]           
6    [PREPROC]           #
6    [PP_PRAGMA]         pragma
6    [PREPROC_BODY]      multi
6    [NL_CONT]           \
7    [PREPROC_BODY]      line
7    [NL_CONT]           \
8    [PREPROC_BODY]      pragma
8    [NEWLINE]           
10   [PREPROC]           #
10   [PP_PRAGMA]         pragma
10   [PREPROC_BODY]      mark -------- Protected Member Functions ----------------
10   [NEWLINE]           
12   [PREPROC]           #
12   [PP_PRAGMA]         pragma
12   [PREPROC_BODY]      some comment follows
12   [COMMENT_CPP]       // comment
12   [NEWLINE]           