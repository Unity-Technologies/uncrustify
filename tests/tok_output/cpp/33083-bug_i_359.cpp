Line [Token]             Text
1    [TYPE]              int
1    [FUNC_DEF]          main
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TYPE]              int
3    [WORD]              foo
3    [ASSIGN]            =
3    [NUMBER]            42
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [SWITCH]            switch
4    [SPAREN_OPEN]       (
4    [WORD]              foo
4    [SPAREN_CLOSE]      )
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [CASE]              case
5    [NUMBER]            1
5    [CASE_COLON]        :
5    [NEWLINE]           
6    [TYPE]              std
6    [DC_MEMBER]         ::
6    [WORD]              cout
6    [ARITH]             <<
6    [STRING]            "1"
6    [ARITH]             <<
6    [TYPE]              std
6    [DC_MEMBER]         ::
6    [WORD]              endl
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [BREAK]             break
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [CASE]              case
8    [NUMBER]            2
8    [CASE_COLON]        :
8    [NEWLINE]           
9    [TYPE]              std
9    [DC_MEMBER]         ::
9    [WORD]              cout
9    [ARITH]             <<
9    [STRING]            "2"
9    [ARITH]             <<
9    [TYPE]              std
9    [DC_MEMBER]         ::
9    [WORD]              endl
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [BREAK]             break
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [CASE]              default
11   [CASE_COLON]        :
11   [NEWLINE]           
12   [TYPE]              std
12   [DC_MEMBER]         ::
12   [WORD]              cout
12   [ARITH]             <<
12   [STRING]            "Neither 1 nor 2."
12   [ARITH]             <<
12   [TYPE]              std
12   [DC_MEMBER]         ::
12   [WORD]              endl
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [NEWLINE]           