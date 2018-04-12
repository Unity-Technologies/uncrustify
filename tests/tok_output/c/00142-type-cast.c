Line [Token]             Text
1    [NEWLINE]           
2    [TYPE]              void
2    [FUNC_DEF]          foo
2    [FPAREN_OPEN]       (
2    [TYPE]              void
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [TYPE]              drab
4    [WORD]              bar
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [WORD]              bar
5    [ASSIGN]            =
5    [PAREN_OPEN]        (
5    [WORD]              bat
5    [PAREN_CLOSE]       )
5    [ARITH]             *
5    [WORD]              r
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [WORD]              bar
6    [ASSIGN]            =
6    [PAREN_OPEN]        (
6    [TYPE]              int
6    [PAREN_CLOSE]       )
6    [DEREF]             *
6    [WORD]              r
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [WORD]              bar
7    [ASSIGN]            =
7    [PAREN_OPEN]        (
7    [TYPE]              UINT8
7    [PAREN_CLOSE]       )
7    [DEREF]             *
7    [WORD]              r
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [WORD]              bar
8    [ASSIGN]            =
8    [PAREN_OPEN]        (
8    [TYPE]              time_t
8    [PAREN_CLOSE]       )
8    [DEREF]             *
8    [WORD]              r
8    [SEMICOLON]         ;
8    [NEWLINE]           
10   [WORD]              a
10   [ASSIGN]            =
10   [ADDR]              &
10   [WORD]              arg
10   [SQUARE_OPEN]       [
10   [WORD]              dog
10   [ARITH]             *
10   [NUMBER]            13
10   [SQUARE_CLOSE]      ]
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [WORD]              b
11   [ASSIGN]            =
11   [WORD]              arg
11   [SQUARE_OPEN]       [
11   [WORD]              dog
11   [ARITH]             *
11   [WORD]              cat
11   [SQUARE_CLOSE]      ]
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [WORD]              hc
12   [ASSIGN]            =
12   [STRING]            "0123456789ABCDEF"
12   [SQUARE_OPEN]       [
12   [NUMBER]            0xf
12   [ARITH]             &
12   [DEREF]             *
12   [WORD]              val
12   [SQUARE_CLOSE]      ]
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           