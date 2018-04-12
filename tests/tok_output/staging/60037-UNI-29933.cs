Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          Foo1
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [SWITCH]            switch
3    [SPAREN_OPEN]       (
3    [WORD]              foo
3    [SPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [CASE]              case
5    [NUMBER]            1
5    [CASE_COLON]        :
5    [NEWLINE]           
6    [WORD]              _bar
6    [ASSIGN]            =
6    [NEW]               new
6    [FUNC_CALL]         Bar
6    [FPAREN_OPEN]       (
6    [WORD]              x
6    [COMMA]             ,
6    [WORD]              y
6    [COMMA]             ,
6    [NEWLINE]           
7    [WORD]              z
7    [COMMA]             ,
7    [WORD]              a
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BREAK]             break
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [CASE]              case
9    [NUMBER]            2
9    [CASE_COLON]        :
9    [NEWLINE]           
10   [WORD]              _bar
10   [ASSIGN]            =
10   [NEW]               new
10   [FUNC_CALL]         Bar
10   [FPAREN_OPEN]       (
10   [WORD]              x
10   [COMMA]             ,
10   [WORD]              y
10   [COMMA]             ,
10   [NEWLINE]           
11   [WORD]              z
11   [COMMA]             ,
11   [WORD]              a
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [BREAK]             break
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [CASE]              case
13   [NUMBER]            3
13   [CASE_COLON]        :
13   [NEWLINE]           
14   [WORD]              _bar
14   [ASSIGN]            =
14   [WORD]              foo
14   [MEMBER]            .
14   [WORD]              bar
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [BREAK]             break
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [CASE]              case
16   [NUMBER]            4
16   [CASE_COLON]        :
16   [NEWLINE]           
17   [TYPE]              foo
17   [MEMBER]            .
17   [WORD]              bar
17   [ASSIGN]            =
17   [WORD]              Bar
17   [MEMBER]            .
17   [FUNC_CALL]         BarFunc
17   [FPAREN_OPEN]       (
17   [WORD]              x
17   [COMMA]             ,
17   [PAREN_OPEN]        (
17   [WORD]              x
17   [COMPARE]           ==
17   [WORD]              y
17   [PAREN_CLOSE]       )
17   [NEWLINE]           
18   [QUESTION]          ?
18   [WORD]              foo
18   [MEMBER]            .
18   [WORD]              x
18   [NEWLINE]           
19   [COND_COLON]        :
19   [WORD]              foo
19   [MEMBER]            .
19   [WORD]              y
19   [FPAREN_CLOSE]      )
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [BREAK]             break
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [CASE]              case
21   [NUMBER]            5
21   [CASE_COLON]        :
21   [NEWLINE]           
22   [TYPE]              foo
22   [MEMBER]            .
22   [WORD]              bar
22   [ASSIGN]            =
22   [WORD]              Bar
22   [MEMBER]            .
22   [FUNC_CALL]         BarFunc
22   [FPAREN_OPEN]       (
22   [WORD]              x
22   [COMMA]             ,
22   [PAREN_OPEN]        (
22   [WORD]              x
22   [COMPARE]           ==
22   [WORD]              y
22   [PAREN_CLOSE]       )
22   [NEWLINE]           
23   [QUESTION]          ?
23   [WORD]              foo
23   [MEMBER]            .
23   [WORD]              x
23   [NEWLINE]           
24   [COND_COLON]        :
24   [WORD]              foo
24   [MEMBER]            .
24   [WORD]              y
24   [FPAREN_CLOSE]      )
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [BREAK]             break
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [BRACE_CLOSE]       }
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           