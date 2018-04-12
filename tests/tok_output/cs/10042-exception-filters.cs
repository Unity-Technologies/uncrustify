Line [Token]             Text
1    [USING]             using
1    [WORD]              System
1    [SEMICOLON]         ;
1    [NEWLINE]           
2    [CLASS]             class
2    [TYPE]              Test
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [TYPE]              void
4    [FUNC_DEF]          TestExceptionFilter
4    [FPAREN_OPEN]       (
4    [FPAREN_CLOSE]      )
4    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [TYPE]              var
6    [WORD]              when
6    [ASSIGN]            =
6    [NEW]               new
6    [FUNC_CALL]         Object
6    [FPAREN_OPEN]       (
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [TRY]               try
7    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [TYPE]              int
8    [WORD]              i
8    [ASSIGN]            =
8    [NUMBER]            0
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
9    [CATCH]             catch
9    [SPAREN_OPEN]       (
9    [TYPE]              Exception
9    [WORD]              e
9    [SPAREN_CLOSE]      )
9    [NEWLINE]           
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [TYPE]              int
11   [WORD]              j
11   [ASSIGN]            =
11   [NEG]               -
11   [NUMBER]            1
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [NEWLINE]           
13   [TRY]               try
13   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
14   [TYPE]              int
14   [WORD]              i
14   [ASSIGN]            =
14   [NUMBER]            0
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
15   [CATCH]             catch
15   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [TYPE]              int
17   [WORD]              j
17   [ASSIGN]            =
17   [NEG]               -
17   [NUMBER]            1
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [NEWLINE]           
19   [TRY]               try
19   [NEWLINE]           
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [TYPE]              int
20   [WORD]              i
20   [ASSIGN]            =
20   [NUMBER]            0
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [NEWLINE]           
21   [CATCH]             catch
21   [WHEN]              when
21   [SPAREN_OPEN]       (
21   [WORD]              DateTime
21   [MEMBER]            .
21   [WORD]              Now
21   [MEMBER]            .
21   [WORD]              DayOfWeek
21   [COMPARE]           ==
21   [WORD]              DayOfWeek
21   [MEMBER]            .
21   [WORD]              Saturday
21   [SPAREN_CLOSE]      )
21   [NEWLINE]           
22   [BRACE_OPEN]        {
22   [NEWLINE]           
23   [TYPE]              int
23   [WORD]              j
23   [ASSIGN]            =
23   [NEG]               -
23   [NUMBER]            1
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [NEWLINE]           
25   [TRY]               try
25   [NEWLINE]           
25   [BRACE_OPEN]        {
25   [NEWLINE]           
26   [TYPE]              int
26   [WORD]              a
26   [ASSIGN]            =
26   [PAREN_OPEN]        (
26   [TYPE]              int
26   [PAREN_CLOSE]       )
26   [WORD]              when
26   [MEMBER]            .
26   [FUNC_CALL]         foo
26   [FPAREN_OPEN]       (
26   [FPAREN_CLOSE]      )
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
27   [CATCH]             catch
27   [SPAREN_OPEN]       (
27   [TYPE]              Exception
27   [WORD]              e
27   [SPAREN_CLOSE]      )
27   [WHEN]              when
27   [SPAREN_OPEN]       (
27   [WORD]              DateTime
27   [MEMBER]            .
27   [WORD]              Now
27   [MEMBER]            .
27   [WORD]              DayOfWeek
27   [COMPARE]           ==
27   [WORD]              DayOfWeek
27   [MEMBER]            .
27   [WORD]              Saturday
27   [SPAREN_CLOSE]      )
27   [NEWLINE]           
28   [BRACE_OPEN]        {
28   [NEWLINE]           
29   [TYPE]              string
29   [WORD]              b
29   [ASSIGN]            =
29   [PAREN_OPEN]        (
29   [PAREN_OPEN]        (
29   [TYPE]              int
29   [PAREN_CLOSE]       )
29   [WORD]              when
29   [MEMBER]            .
29   [WORD]              prop
29   [PAREN_CLOSE]       )
29   [MEMBER]            .
29   [FUNC_CALL]         ToString
29   [FPAREN_OPEN]       (
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           