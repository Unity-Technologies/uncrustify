Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          test
1    [FPAREN_OPEN]       (
1    [TYPE]              void
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [WORD]              b1
3    [ASSIGN]            =
3    [WORD]              a
3    [ARITH]             &
3    [WORD]              b
3    [NEWLINE]           
3    [BOOL]              ||
3    [WORD]              c
3    [COMPARE]           ==
3    [WORD]              d
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [WORD]              b2
4    [ASSIGN]            =
4    [PAREN_OPEN]        (
4    [WORD]              a
4    [ARITH]             &
4    [WORD]              b
4    [PAREN_CLOSE]       )
4    [NEWLINE]           
4    [BOOL]              ||
4    [WORD]              c
4    [COMPARE]           ==
4    [WORD]              d
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [WORD]              b3
5    [ASSIGN]            =
5    [PAREN_OPEN]        (
5    [WORD]              a
5    [ARITH]             &
5    [WORD]              b
5    [NEWLINE]           
5    [BOOL]              ||
5    [WORD]              c
5    [COMPARE]           ==
5    [WORD]              d
5    [PAREN_CLOSE]       )
5    [SEMICOLON]         ;
5    [NEWLINE]           
8    [IF]                if
8    [SPAREN_OPEN]       (
0    [PAREN_OPEN]        (
8    [WORD]              a
8    [COMPARE]           ==
8    [NUMBER]            3
0    [PAREN_CLOSE]       )
0    [NEWLINE]           
8    [BOOL]              &&
0    [PAREN_OPEN]        (
8    [WORD]              b
8    [COMPARE]           ==
8    [NUMBER]            2
8    [ARITH]             &
8    [WORD]              c
0    [PAREN_CLOSE]       )
0    [NEWLINE]           
8    [BOOL]              ||
8    [WORD]              d
8    [NEWLINE]           
8    [BOOL]              &&
8    [WORD]              r
8    [SPAREN_CLOSE]      )
8    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
11   [IF]                if
11   [SPAREN_OPEN]       (
11   [COMMENT]           /*test*/
11   [WORD]              a
11   [NEWLINE]           
11   [BOOL]              ||
11   [WORD]              b
11   [SPAREN_CLOSE]      )
11   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
13   [IF]                if
13   [SPAREN_OPEN]       (
13   [COMMENT]           /*test*/
13   [WORD]              a
13   [NEWLINE]           
13   [BOOL]              ||
13   [COMMENT]           /*truc*/
13   [WORD]              b
13   [SPAREN_CLOSE]      )
13   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
15   [IF]                if
15   [SPAREN_OPEN]       (
15   [WORD]              a
15   [COMMENT]           /*test*/
15   [NEWLINE]           
15   [BOOL]              ||
15   [WORD]              b
15   [SPAREN_CLOSE]      )
15   [NEWLINE]           
15   [BRACE_OPEN]        {
15   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
17   [IF]                if
17   [SPAREN_OPEN]       (
17   [WORD]              a
17   [NEWLINE]           
17   [BOOL]              ||
17   [COMMENT]           /*test*/
17   [WORD]              b
17   [SPAREN_CLOSE]      )
17   [NEWLINE]           
17   [BRACE_OPEN]        {
17   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
19   [WORD]              a
19   [ASSIGN]            =
19   [NUMBER]            3
19   [SEMICOLON]         ;
19   [NEWLINE]           
19   [IF]                if
19   [SPAREN_OPEN]       (
19   [PAREN_OPEN]        (
19   [WORD]              aaaaaaaaaaaaaaa
19   [COMPARE]           ==
19   [WORD]              sqddqsqsdqsdqsd
19   [PAREN_CLOSE]       )
19   [NEWLINE]           
19   [BOOL]              &&
19   [PAREN_OPEN]        (
19   [WORD]              dfdssdfsdfsdfsdfs
19   [NEWLINE]           
19   [BOOL]              ||
19   [PAREN_OPEN]        (
19   [WORD]              qsdfsdfsdfqsdfqsdfqsdsd
19   [COMPARE]           ==
19   [WORD]              fsdqfsdfsdfsdf
19   [PAREN_CLOSE]       )
19   [PAREN_CLOSE]       )
19   [SPAREN_CLOSE]      )
19   [NEWLINE]           
19   [BRACE_OPEN]        {
19   [NEWLINE]           
19   [WORD]              a
19   [INCDEC_AFTER]      ++
19   [SEMICOLON]         ;
19   [NEWLINE]           
19   [BRACE_CLOSE]       }
19   [NEWLINE]           
21   [WHILE]             while
21   [SPAREN_OPEN]       (
21   [PAREN_OPEN]        (
21   [WORD]              aaaaaaaaaaaaaaa
21   [COMPARE]           ==
21   [WORD]              sqddqsqsdqsdqsd
21   [PAREN_CLOSE]       )
21   [NEWLINE]           
21   [BOOL]              &&
21   [PAREN_OPEN]        (
21   [WORD]              dfdssdfsdfsdfsdfs
21   [NEWLINE]           
21   [BOOL]              ||
21   [PAREN_OPEN]        (
21   [WORD]              qsdfsdfsdfqsdfqsdfqsdsd
21   [COMPARE]           ==
21   [WORD]              fsdqfsdfsdfsdf
21   [PAREN_CLOSE]       )
21   [PAREN_CLOSE]       )
21   [SPAREN_CLOSE]      )
21   [NEWLINE]           
21   [BRACE_OPEN]        {
21   [NEWLINE]           
21   [WORD]              a
21   [INCDEC_AFTER]      ++
21   [SEMICOLON]         ;
21   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           