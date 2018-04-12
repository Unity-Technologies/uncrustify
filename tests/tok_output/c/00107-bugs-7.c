Line [Token]             Text
1    [NEWLINE]           
2    [STRUCT]            struct
2    [TYPE]              somestruct
2    [PTR_TYPE]          *
2    [NEWLINE]           
3    [FUNC_PROTO]        mult2
3    [FPAREN_OPEN]       (
3    [TYPE]              int
3    [WORD]              val
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
5    [TYPE]              somestruct
5    [PTR_TYPE]          *
5    [NEWLINE]           
6    [FUNC_PROTO]        dumb_func
6    [FPAREN_OPEN]       (
6    [TYPE]              int
6    [WORD]              val
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
10   [STRUCT]            struct
10   [TYPE]              somestruct
10   [PTR_TYPE]          *
10   [NEWLINE]           
11   [FUNC_DEF]          mult2
11   [FPAREN_OPEN]       (
11   [TYPE]              int
11   [WORD]              val
11   [FPAREN_CLOSE]      )
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [TYPE]              int
13   [WORD]              a
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [WORD]              a
15   [ASSIGN]            =
15   [WORD]              val
15   [ARITH]             +
15   [PAREN_OPEN]        (
15   [WORD]              foo
15   [ARITH]             *
15   [WORD]              bar
15   [PAREN_CLOSE]       )
15   [SEMICOLON]         ;
15   [NEWLINE]           
17   [WORD]              a
17   [ASSIGN]            =
17   [WORD]              val
17   [ARITH]             +
17   [PAREN_OPEN]        (
17   [WORD]              bar
17   [PAREN_CLOSE]       )
17   [SEMICOLON]         ;
17   [NEWLINE]           
19   [WORD]              a
19   [ASSIGN]            =
19   [WORD]              val
19   [ARITH]             +
19   [PAREN_OPEN]        (
19   [TYPE]              CFoo
19   [DC_MEMBER]         ::
19   [TYPE]              bar_t
19   [PAREN_CLOSE]       )
19   [NUMBER]            7
19   [SEMICOLON]         ;
19   [NEWLINE]           
21   [WORD]              a
21   [ASSIGN]            =
21   [WORD]              val
21   [ARITH]             +
21   [PAREN_OPEN]        (
21   [WORD]              myfoo
21   [MEMBER]            .
21   [WORD]              size
21   [PAREN_CLOSE]       )
21   [SEMICOLON]         ;
21   [NEWLINE]           
23   [RETURN]            return
23   [PAREN_OPEN]        (
23   [WORD]              NULL
23   [PAREN_CLOSE]       )
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [NEWLINE]           