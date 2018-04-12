Line [Token]             Text
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_IF]             if
2    [PP_DEFINED]        defined
2    [PAREN_OPEN]        (
2    [WORD]              A
2    [PAREN_CLOSE]       )
2    [NEWLINE]           
4    [QUALIFIER]         extern
4    [TYPE]              int
4    [WORD]              a
4    [SEMICOLON]         ;
4    [NEWLINE]           
6    [PREPROC]           #
6    [PP_ELSE]           elif
6    [PP_DEFINED]        defined
6    [PAREN_OPEN]        (
6    [WORD]              B
6    [PAREN_CLOSE]       )
6    [NEWLINE]           
8    [QUALIFIER]         extern
8    [TYPE]              int
8    [WORD]              b
8    [SEMICOLON]         ;
8    [NEWLINE]           
10   [PREPROC]           #
10   [PP_ELSE]           else
10   [NEWLINE]           
12   [QUALIFIER]         extern
12   [TYPE]              int
12   [WORD]              c
12   [SEMICOLON]         ;
12   [NEWLINE]           
14   [PREPROC]           #
14   [PP_ENDIF]          endif
14   [NEWLINE]           
16   [TYPE]              int
16   [FUNC_DEF]          foo
16   [FPAREN_OPEN]       (
16   [FPAREN_CLOSE]      )
16   [NEWLINE]           
17   [BRACE_OPEN]        {
17   [NEWLINE]           
18   [PREPROC]           #
18   [PP_IF]             if
18   [PP_DEFINED]        defined
18   [PAREN_OPEN]        (
18   [WORD]              A
18   [PAREN_CLOSE]       )
18   [NEWLINE]           
19   [RETURN]            return
19   [WORD]              a
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [PREPROC]           #
20   [PP_ELSE]           elif
20   [PP_DEFINED]        defined
20   [PAREN_OPEN]        (
20   [WORD]              B
20   [PAREN_CLOSE]       )
20   [NEWLINE]           
21   [RETURN]            return
21   [WORD]              b
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [PREPROC]           #
22   [PP_ELSE]           else
22   [NEWLINE]           
23   [RETURN]            return
23   [WORD]              c
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [PREPROC]           #
24   [PP_ENDIF]          endif
24   [NEWLINE]           
25   [BRACE_CLOSE]       }
25   [NEWLINE]           