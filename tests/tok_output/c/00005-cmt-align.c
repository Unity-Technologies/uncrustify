Line [Token]             Text
1    [PREPROC]           #
1    [PP_IF]             ifndef
1    [WORD]              HAVE_FOO
1    [NEWLINE]           
2    [TYPE]              void
2    [FUNC_DEF]          foo
2    [FPAREN_OPEN]       (
2    [TYPE]              void
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [IF]                if
4    [SPAREN_OPEN]       (
4    [WORD]              bar
4    [SPAREN_CLOSE]      )
4    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [FUNC_CALL]         call_some_function
6    [FPAREN_OPEN]       (
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [COMMENT]           /* call the function */
6    [NEWLINE]           
7    [RETURN]            return
7    [PAREN_OPEN]        (
7    [WORD]              foo
7    [PAREN_CLOSE]       )
7    [SEMICOLON]         ;
7    [COMMENT]           /* comment */
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [COMMENT]           /* if (bar) */
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
10   [PREPROC]           #
10   [PP_ENDIF]          endif
10   [COMMENT]           /* HAVE_FOO */
10   [NEWLINE]           
11   [PREPROC]           #
11   [PP_IF]             ifndef
11   [WORD]              HAVE_BAR
11   [COMMENT]           /* bar isn't available on all HW */
11   [NEWLINE]           
12   [TYPE]              void
12   [FUNC_DEF]          bar
12   [FPAREN_OPEN]       (
12   [TYPE]              void
12   [FPAREN_CLOSE]      )
12   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
14   [IF]                if
14   [SPAREN_OPEN]       (
14   [WORD]              foo
14   [SPAREN_CLOSE]      )
14   [NEWLINE]           
15   [BRACE_OPEN]        {
15   [NEWLINE]           
16   [FUNC_CALL]         call_some_function
16   [FPAREN_OPEN]       (
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [COMMENT]           /* call the function */
16   [NEWLINE]           
17   [RETURN]            return
17   [PAREN_OPEN]        (
17   [WORD]              foo
17   [PAREN_CLOSE]       )
17   [SEMICOLON]         ;
17   [COMMENT]           /* comment */
17   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [COMMENT]           /* if (foo) */
18   [NEWLINE]           
19   [BRACE_CLOSE]       }
19   [NEWLINE]           
20   [PREPROC]           #
20   [PP_ENDIF]          endif
20   [COMMENT]           /* HAVE_BAR */
20   [NEWLINE]           