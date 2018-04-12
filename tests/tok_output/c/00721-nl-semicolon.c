Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [TYPE]              void
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [WORD]              a
3    [ASSIGN]            =
3    [NUMBER]            5
3    [SEMICOLON]         ;
3    [NEWLINE]           
3    [WORD]              b
3    [ASSIGN]            =
3    [NUMBER]            3
3    [SEMICOLON]         ;
3    [NEWLINE]           
3    [WORD]              j
3    [ASSIGN]            =
3    [NUMBER]            6
3    [SEMICOLON]         ;
3    [NEWLINE]           
5    [FOR]               for
5    [SPAREN_OPEN]       (
5    [WORD]              a
5    [ASSIGN]            =
5    [NUMBER]            0
5    [SEMICOLON]         ;
5    [WORD]              a
5    [COMPARE]           <
5    [WORD]              j
5    [SEMICOLON]         ;
5    [WORD]              a
5    [INCDEC_AFTER]      ++
5    [SPAREN_CLOSE]      )
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [WORD]              b
7    [ASSIGN]            *=
7    [PAREN_OPEN]        (
7    [WORD]              a
7    [ARITH]             +
7    [WORD]              b
7    [PAREN_CLOSE]       )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
11   [STRUCT]            struct
11   [TYPE]              somestruct
11   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
11   [TYPE]              int
11   [WORD]              a
11   [SEMICOLON]         ;
11   [NEWLINE]           
11   [TYPE]              char
11   [WORD]              b
11   [SEMICOLON]         ;
11   [NEWLINE]           
11   [TYPE]              foo
11   [WORD]              c
11   [SEMICOLON]         ;
11   [NEWLINE]           
11   [TYPE]              bar
11   [PTR_TYPE]          *
11   [WORD]              d
11   [SEMICOLON]         ;
11   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [SEMICOLON]         ;
11   [NEWLINE]           
13   [STRUCT]            struct
13   [TYPE]              foo
13   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
13   [TYPE]              int
13   [WORD]              a
13   [SEMICOLON]         ;
13   [NEWLINE]           
13   [TYPE]              char
13   [PTR_TYPE]          *
13   [WORD]              b
13   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [TYPE]              void
15   [FUNC_DEF]          f
15   [FPAREN_OPEN]       (
15   [FPAREN_CLOSE]      )
15   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [FOR]               for
17   [SPAREN_OPEN]       (
17   [SEMICOLON]         ;
17   [SEMICOLON]         ;
17   [SPAREN_CLOSE]      )
17   [NEWLINE]           
17   [BRACE_OPEN]        {
17   [NEWLINE]           
18   [FUNC_CALL]         nothing
18   [FPAREN_OPEN]       (
18   [FPAREN_CLOSE]      )
18   [SEMICOLON]         ;
18   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [NEWLINE]           
19   [FUNC_CALL]         foobar
19   [FPAREN_OPEN]       (
19   [FPAREN_CLOSE]      )
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [NEWLINE]           
21   [SEMICOLON]         ;
21   [NEWLINE]           