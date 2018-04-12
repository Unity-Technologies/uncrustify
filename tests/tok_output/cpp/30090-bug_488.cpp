Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          baz
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [WORD]              foobar
3    [ASSIGN]            =
3    [WORD]              bar
3    [SQUARE_OPEN]       [
3    [WORD]              a
3    [ARITH]             +
3    [WORD]              b
3    [ARITH]             +
3    [PAREN_OPEN]        (
3    [WORD]              c
3    [NEWLINE]           
4    [ARITH]             +
4    [WORD]              d
4    [PAREN_CLOSE]       )
4    [SQUARE_CLOSE]      ]
4    [SEMICOLON]         ;
4    [NEWLINE]           
6    [WORD]              foobar
6    [ASSIGN]            =
6    [FUNC_CALL]         bar
6    [FPAREN_OPEN]       (
6    [WORD]              a
6    [ARITH]             +
6    [WORD]              b
6    [ARITH]             +
6    [PAREN_OPEN]        (
6    [WORD]              c
6    [ARITH]             +
6    [NEWLINE]           
7    [POS]               +
7    [WORD]              d
7    [PAREN_CLOSE]       )
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
9    [WORD]              foo
9    [ASSIGN]            =
9    [WORD]              bar
9    [SQUARE_OPEN]       [
9    [WORD]              a
9    [SQUARE_CLOSE]      ]
9    [ARITH]             +
9    [WORD]              b
9    [ARITH]             +
9    [FUNC_CALL]         qux
9    [FPAREN_OPEN]       (
9    [WORD]              c
9    [ARITH]             +
9    [NEWLINE]           
10   [POS]               +
10   [WORD]              d
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           