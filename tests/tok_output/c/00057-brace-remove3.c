Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [IF]                if
3    [SPAREN_OPEN]       (
3    [WORD]              myBoolean
3    [SPAREN_CLOSE]      )
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [PREPROC]           #
4    [PP_IF]             ifdef
4    [TYPE]              DEBUG
4    [NEWLINE]           
5    [FUNC_CALL]         printf
5    [FPAREN_OPEN]       (
5    [STRING]            "ACK"
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [PREPROC]           #
6    [PP_ENDIF]          endif
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
8    [RETURN]            return
8    [WORD]              true
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
11   [TYPE]              void
11   [FUNC_DEF]          foo2
11   [FPAREN_OPEN]       (
11   [FPAREN_CLOSE]      )
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [IF]                if
13   [SPAREN_OPEN]       (
13   [WORD]              m_errno
13   [COMPARE]           ==
13   [WORD]              ERR_NONE
13   [SPAREN_CLOSE]      )
13   [BRACE_OPEN]        {
13   [NEWLINE]           
14   [FUNC_CALL]         function1
14   [FPAREN_OPEN]       (
14   [WORD]              variables
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [FUNC_CALL]         function2
15   [FPAREN_OPEN]       (
15   [WORD]              variables
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [ELSE]              else
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [FUNC_CALL]         function1
17   [FPAREN_OPEN]       (
17   [WORD]              varialbes
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [NEWLINE]           
19   [COMMENT_CPP]       //MyComment1
19   [NEWLINE]           
20   [COMMENT_CPP]       //MyComment2
20   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [NEWLINE]           
23   [TYPE]              void
23   [FUNC_DEF]          foo3
23   [FPAREN_OPEN]       (
23   [FPAREN_CLOSE]      )
23   [NEWLINE]           
24   [BRACE_OPEN]        {
24   [NEWLINE]           
25   [IF]                if
25   [SPAREN_OPEN]       (
25   [WORD]              statment
25   [SPAREN_CLOSE]      )
25   [BRACE_OPEN]        {
25   [NEWLINE]           
26   [IF]                if
26   [SPAREN_OPEN]       (
26   [WORD]              statment
26   [SPAREN_CLOSE]      )
26   [BRACE_OPEN]        {
26   [NEWLINE]           
27   [WORD]              condition
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [RETURN]            return
28   [WORD]              true
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [BRACE_CLOSE]       }
29   [NEWLINE]           
29   [BRACE_CLOSE]       }
29   [NEWLINE]           
30   [RETURN]            return
30   [WORD]              false
30   [SEMICOLON]         ;
30   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [NEWLINE]           