Line [Token]             Text
1    [COMMENT]           /********************/
1    [NEWLINE]           
2    [COMMENT]           /* Before Unrustify */
2    [NEWLINE]           
3    [COMMENT]           /********************/
3    [NEWLINE]           
5    [PREPROC]           #
5    [PP_DEFINE]         define
5    [MACRO_FUNC]        MACRO
5    [FPAREN_OPEN]       (
5    [WORD]              cond
5    [COMMA]             ,
5    [WORD]              action
5    [FPAREN_CLOSE]      )
5    [IF]                if
5    [SPAREN_OPEN]       (
5    [PAREN_OPEN]        (
5    [WORD]              cond
5    [PAREN_CLOSE]       )
5    [SPAREN_CLOSE]      )
5    [VBRACE_OPEN]       
5    [PAREN_OPEN]        (
5    [TYPE]              action
5    [PAREN_CLOSE]       )
5    [NEWLINE]           
7    [TYPE]              void
7    [FUNC_DEF]          hurz
7    [FPAREN_OPEN]       (
7    [TYPE]              murks
7    [FPAREN_CLOSE]      )
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [IF]                if
9    [SPAREN_OPEN]       (
9    [WORD]              murks
9    [ASSIGN]            =
9    [NUMBER]            4
9    [SPAREN_CLOSE]      )
9    [BRACE_OPEN]        {
9    [COMMENT_CPP]       // This comment belongs to (murks = 4)
9    [NEWLINE]           
10   [FUNC_CALL]         schrott
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [COMMENT_CPP]       // And this to schrott()
10   [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
11   [PREPROC]           #
11   [PP_IF]             ifdef
11   [WORD]              SCHNIEPEL
11   [NEWLINE]           
12   [ELSE]              else
12   [ELSEIF]            if
12   [SPAREN_OPEN]       (
12   [WORD]              murks
12   [ASSIGN]            =
12   [NUMBER]            6
12   [SPAREN_CLOSE]      )
12   [BRACE_OPEN]        {
12   [COMMENT_CPP]       // This comment belongs to (murks = 6)
12   [NEWLINE]           
13   [COMMENT_CPP]       // I had to write more comment than one line
13   [NEWLINE]           
14   [COMMENT_CPP]       // so I inserted some comment only blocks
14   [NEWLINE]           
15   [FUNC_CALL]         schniepel
15   [FPAREN_OPEN]       (
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
16   [PREPROC]           #
16   [PP_ENDIF]          endif
16   [COMMENT_CPP]       // SCHNIEPEL
16   [NEWLINE]           
17   [ELSE]              else
17   [BRACE_OPEN]        {
17   [NEWLINE]           
18   [FUNC_CALL]         flursen
18   [FPAREN_OPEN]       (
18   [FPAREN_CLOSE]      )
18   [SEMICOLON]         ;
18   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [NEWLINE]           
20   [IF]                if
20   [SPAREN_OPEN]       (
20   [WORD]              murks
20   [ASSIGN]            =
20   [NUMBER]            4
20   [SPAREN_CLOSE]      )
20   [COMMENT_CPP]       // This comment belongs to (murks = 4)
20   [NEWLINE]           
21   [PREPROC]           #
21   [PP_IF]             ifdef
21   [TYPE]              FOO
21   [NEWLINE]           
21   [BRACE_OPEN]        {
21   [NEWLINE]           
22   [FUNC_CALL]         foo
22   [FPAREN_OPEN]       (
22   [FPAREN_CLOSE]      )
22   [SEMICOLON]         ;
22   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
23   [PREPROC]           #
23   [PP_ELSE]           else
23   [NEWLINE]           
23   [BRACE_OPEN]        {
23   [NEWLINE]           
24   [FUNC_CALL]         bar
24   [FPAREN_OPEN]       (
24   [FPAREN_CLOSE]      )
24   [SEMICOLON]         ;
24   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [NEWLINE]           
25   [PREPROC]           #
25   [PP_ENDIF]          endif
25   [NEWLINE]           
26   [IF]                if
26   [SPAREN_OPEN]       (
26   [WORD]              murks
26   [ASSIGN]            =
26   [NUMBER]            4
26   [SPAREN_CLOSE]      )
27   [BRACE_OPEN]        {
26   [COMMENT_CPP]       // This comment belongs to (murks = 4)
27   [NEWLINE]           
28   [FUNC_CALL]         schrott
28   [FPAREN_OPEN]       (
28   [FPAREN_CLOSE]      )
28   [SEMICOLON]         ;
28   [COMMENT_CPP]       // And this to schrott()
28   [NEWLINE]           
29   [BRACE_CLOSE]       }
29   [NEWLINE]           
30   [RETURN]            return
30   [SEMICOLON]         ;
30   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [COMMENT_CPP]       // hurz()
31   [NEWLINE]           