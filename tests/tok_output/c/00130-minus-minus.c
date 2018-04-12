Line [Token]             Text
1    [TYPE]              int
1    [WORD]              a
1    [ASSIGN]            =
1    [NUMBER]            5
1    [SEMICOLON]         ;
1    [NEWLINE]           
2    [TYPE]              int
2    [PTR_TYPE]          *
2    [WORD]              b
2    [ASSIGN]            =
2    [ADDR]              &
2    [WORD]              a
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [TYPE]              int
3    [FUNC_DEF]          negneg
3    [FPAREN_OPEN]       (
3    [TYPE]              void
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [RETURN]            return
5    [PAREN_OPEN]        (
5    [NEG]               -
5    [NEG]               -
5    [WORD]              a
5    [PAREN_CLOSE]       )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
8    [TYPE]              int
8    [FUNC_DEF]          pospos
8    [FPAREN_OPEN]       (
8    [TYPE]              void
8    [FPAREN_CLOSE]      )
8    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [RETURN]            return
10   [PAREN_OPEN]        (
10   [POS]               +
10   [POS]               +
10   [WORD]              a
10   [PAREN_CLOSE]       )
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
13   [TYPE]              int
13   [FUNC_DEF]          negpos
13   [FPAREN_OPEN]       (
13   [TYPE]              void
13   [FPAREN_CLOSE]      )
13   [NEWLINE]           
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [RETURN]            return
15   [PAREN_OPEN]        (
15   [NEG]               -
15   [POS]               +
15   [WORD]              a
15   [PAREN_CLOSE]       )
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
18   [TYPE]              int
18   [FUNC_DEF]          posneg
18   [FPAREN_OPEN]       (
18   [TYPE]              void
18   [FPAREN_CLOSE]      )
18   [NEWLINE]           
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [RETURN]            return
20   [PAREN_OPEN]        (
20   [POS]               +
20   [NEG]               -
20   [WORD]              a
20   [PAREN_CLOSE]       )
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [NEWLINE]           
23   [PREPROC]           #
23   [PP_IF]             if
23   [WORD]              VERSION
23   [COMPARE]           <
23   [NEG]               -
23   [NUMBER]            5
23   [NEWLINE]           
24   [TYPE]              int
24   [FUNC_DEF]          negnegneg
24   [FPAREN_OPEN]       (
24   [TYPE]              void
24   [FPAREN_CLOSE]      )
24   [NEWLINE]           
25   [BRACE_OPEN]        {
25   [NEWLINE]           
26   [RETURN]            return
26   [PAREN_OPEN]        (
26   [NEG]               -
26   [NEG]               -
26   [NEG]               -
26   [WORD]              a
26   [PAREN_CLOSE]       )
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
28   [PREPROC]           #
28   [PP_ELSE]           else
28   [NEWLINE]           
29   [TYPE]              int
29   [FUNC_DEF]          negat
29   [FPAREN_OPEN]       (
29   [TYPE]              void
29   [FPAREN_CLOSE]      )
29   [NEWLINE]           
30   [BRACE_OPEN]        {
30   [NEWLINE]           
31   [RETURN]            return
31   [PAREN_OPEN]        (
31   [NEG]               -
31   [DEREF]             *
31   [WORD]              b
31   [PAREN_CLOSE]       )
31   [SEMICOLON]         ;
31   [NEWLINE]           
32   [BRACE_CLOSE]       }
32   [NEWLINE]           
33   [PREPROC]           #
33   [PP_ENDIF]          endif
33   [NEWLINE]           