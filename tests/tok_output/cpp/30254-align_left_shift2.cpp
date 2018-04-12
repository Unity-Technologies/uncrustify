Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          g
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [FUNC_CALL]         RLOGD
3    [FPAREN_OPEN]       (
3    [WORD]              m_log
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [ARITH]             <<
4    [STRING]            "str1"
4    [NEWLINE]           
5    [ARITH]             <<
5    [WORD]              var
5    [SEMICOLON]         ;
5    [NEWLINE]           
7    [IF]                if
7    [SPAREN_OPEN]       (
7    [WORD]              something
7    [SPAREN_CLOSE]      )
7    [VBRACE_OPEN]       
7    [NEWLINE]           
8    [WORD]              cout
8    [ARITH]             <<
8    [STRING]            "blah"
8    [SEMICOLON]         ;
8    [VBRACE_CLOSE]      
8    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
12   [TYPE]              void
12   [FUNC_DEF]          f
12   [FPAREN_OPEN]       (
12   [FPAREN_CLOSE]      )
12   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
14   [WORD]              cout
14   [ARITH]             <<
14   [FUNC_CALL]         something
14   [FPAREN_OPEN]       (
14   [NEWLINE]           
15   [WORD]              arg
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [WORD]              cout
16   [NEWLINE]           
17   [ARITH]             <<
17   [STRING]            "something"
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [WORD]              cout
18   [ARITH]             <<
18   [NEWLINE]           
19   [STRING]            "something"
19   [SEMICOLON]         ;
19   [NEWLINE]           
21   [FUNC_CALL]         RLOGD
21   [FPAREN_OPEN]       (
21   [WORD]              m_log
21   [FPAREN_CLOSE]      )
21   [NEWLINE]           
22   [ARITH]             <<
22   [STRING]            "WriteReqSize()"
22   [SEMICOLON]         ;
22   [NEWLINE]           
24   [FUNC_CALL]         RLOGD
24   [FPAREN_OPEN]       (
24   [WORD]              m_log
24   [FPAREN_CLOSE]      )
24   [ARITH]             <<
24   [NEWLINE]           
25   [TYPE]              base
25   [DC_MEMBER]         ::
25   [FUNC_CALL]         sprintfT
25   [FPAREN_OPEN]       (
25   [NEWLINE]           
26   [STRING]            "something %u "
26   [COMMA]             ,
26   [NEWLINE]           
27   [WORD]              m_pendingAccepts
27   [FPAREN_CLOSE]      )
27   [SEMICOLON]         ;
27   [NEWLINE]           
29   [FUNC_CALL]         RLOGDD
29   [FPAREN_OPEN]       (
29   [WORD]              m_log
29   [FPAREN_CLOSE]      )
29   [ARITH]             <<
29   [FUNC_CALL]         sprintfT
29   [FPAREN_OPEN]       (
29   [NEWLINE]           
30   [STRING]            "something id=%u"
30   [COMMA]             ,
30   [NEWLINE]           
31   [WORD]              newSocket
31   [MEMBER]            ->
31   [FUNC_CALL]         GetId
31   [FPAREN_OPEN]       (
31   [FPAREN_CLOSE]      )
31   [FPAREN_CLOSE]      )
31   [SEMICOLON]         ;
31   [NEWLINE]           
32   [BRACE_CLOSE]       }
32   [NEWLINE]           