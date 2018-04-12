Line [Token]             Text
1    [QUALIFIER]         private
1    [QUALIFIER]         static
1    [TYPE]              string
1    [FUNC_DEF]          GenerateHash
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TRY]               try
3    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [TYPE]              int
4    [WORD]              i
4    [ASSIGN]            =
4    [NUMBER]            0
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [NEWLINE]           
5    [CATCH]             catch
5    [WHEN]              when
5    [SPAREN_OPEN]       (
5    [WORD]              DateTime
5    [MEMBER]            .
5    [WORD]              Now
5    [MEMBER]            .
5    [WORD]              DayOfWeek
5    [COMPARE]           ==
5    [WORD]              DayOfWeek
5    [MEMBER]            .
5    [WORD]              Saturday
5    [SPAREN_CLOSE]      )
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [TYPE]              int
7    [WORD]              j
7    [ASSIGN]            =
7    [NEG]               -
7    [NUMBER]            1
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
9    [TRY]               try
9    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [TYPE]              int
10   [WORD]              i
10   [ASSIGN]            =
10   [NUMBER]            0
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
11   [CATCH]             catch
11   [SPAREN_OPEN]       (
11   [TYPE]              Exception
11   [WORD]              e
11   [SPAREN_CLOSE]      )
11   [WHEN]              when
11   [SPAREN_OPEN]       (
11   [WORD]              DateTime
11   [MEMBER]            .
11   [WORD]              Now
11   [MEMBER]            .
11   [WORD]              DayOfWeek
11   [COMPARE]           ==
11   [WORD]              DayOfWeek
11   [MEMBER]            .
11   [WORD]              Saturday
11   [SPAREN_CLOSE]      )
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [TYPE]              var
13   [WORD]              when
13   [ASSIGN]            =
13   [WORD]              DateTime
13   [MEMBER]            .
13   [WORD]              Now
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [TYPE]              ulong
14   [WORD]              kind
14   [ASSIGN]            =
14   [PAREN_OPEN]        (
14   [TYPE]              ulong
14   [PAREN_CLOSE]       )
14   [PAREN_OPEN]        (
14   [TYPE]              int
14   [PAREN_CLOSE]       )
14   [WORD]              when
14   [MEMBER]            .
14   [WORD]              Kind
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [RETURN]            return
15   [PAREN_OPEN]        (
15   [PAREN_OPEN]        (
15   [WORD]              kind
15   [ARITH]             <<
15   [NUMBER]            62
15   [PAREN_CLOSE]       )
15   [ARITH]             |
15   [PAREN_OPEN]        (
15   [TYPE]              ulong
15   [PAREN_CLOSE]       )
15   [WORD]              when
15   [MEMBER]            .
15   [WORD]              Ticks
15   [PAREN_CLOSE]       )
15   [MEMBER]            .
15   [FUNC_CALL]         ToString
15   [FPAREN_OPEN]       (
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           