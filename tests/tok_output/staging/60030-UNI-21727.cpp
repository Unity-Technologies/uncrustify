Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TYPE]              int
3    [WORD]              error
3    [ASSIGN]            =
3    [NUMBER]            0
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [PREPROC]           #
4    [PP_IF]             if
4    [PP_DEFINED]        defined
4    [PAREN_OPEN]        (
4    [WORD]              SUPPORT_FEATURE
4    [PAREN_CLOSE]       )
4    [NEWLINE]           
5    [WORD]              error
5    [ASSIGN]            =
5    [FUNC_CALL]         feature_bar
5    [FPAREN_OPEN]       (
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [PREPROC]           #
6    [PP_ELSE]           else
6    [COMMENT_CPP]       // feature not supported
6    [NEWLINE]           
7    [COMMENT_CPP]       // we call bar otherwise
7    [NEWLINE]           
8    [WORD]              error
8    [ASSIGN]            =
8    [FUNC_CALL]         bar
8    [FPAREN_OPEN]       (
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [PREPROC]           #
9    [PP_ENDIF]          endif
9    [COMMENT_CPP]       // SUPPORT_FEATURE
9    [NEWLINE]           
10   [COMMENT_CPP]       // continue with function logic
10   [NEWLINE]           
11   [IF]                if
11   [SPAREN_OPEN]       (
11   [WORD]              error
11   [COMPARE]           !=
11   [NUMBER]            0
11   [SPAREN_CLOSE]      )
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [PREPROC]           #
13   [PP_IF]             if
13   [NUMBER]            0
13   [COMMENT_CPP]       // TODO: this is disabled
13   [NEWLINE]           
14   [COMMENT_CPP]       // call final bar
14   [NEWLINE]           
15   [FUNC_CALL]         error_bar
15   [FPAREN_OPEN]       (
15   [WORD]              error
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [PREPROC]           #
16   [PP_ENDIF]          endif
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [NEWLINE]           