Line [Token]             Text
1    [NEWLINE]           
2    [ENUM]              enum
2    [TYPE]              boo
2    [BRACE_OPEN]        {
2    [WORD]              FOO
2    [ASSIGN]            =
2    [NUMBER]            1
2    [BRACE_CLOSE]       }
2    [SEMICOLON]         ;
2    [NEWLINE]           
4    [TYPE]              void
4    [FUNC_DEF]          foo
4    [FPAREN_OPEN]       (
4    [TYPE]              void
4    [FPAREN_CLOSE]      )
4    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [TYPE]              char
6    [WORD]              str
6    [SQUARE_OPEN]       [
6    [NUMBER]            123
6    [SQUARE_CLOSE]      ]
6    [ASSIGN]            =
6    [BRACE_OPEN]        {
6    [NUMBER]            0
6    [BRACE_CLOSE]       }
6    [SEMICOLON]         ;
6    [NEWLINE]           
8    [ENUM]              enum
8    [TYPE]              hoo
8    [BRACE_OPEN]        {
8    [WORD]              NOO
8    [ASSIGN]            =
8    [NUMBER]            1
8    [BRACE_CLOSE]       }
8    [SEMICOLON]         ;
8    [NEWLINE]           
10   [FUNC_CALL]         strcat
10   [FPAREN_OPEN]       (
10   [WORD]              str
10   [COMMA]             ,
10   [STRING]            "foo"
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
13   [TYPE]              void
13   [FUNC_DEF]          f
13   [FPAREN_OPEN]       (
13   [FPAREN_CLOSE]      )
13   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
13   [IF]                if
13   [SPAREN_OPEN]       (
13   [FUNC_CALL]         bar
13   [FPAREN_OPEN]       (
13   [FPAREN_CLOSE]      )
13   [SPAREN_CLOSE]      )
13   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
13   [FUNC_CALL]         baz
13   [FPAREN_OPEN]       (
13   [NUMBER]            1
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
13   [ELSE]              else
13   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
13   [FUNC_CALL]         baz
13   [FPAREN_OPEN]       (
13   [NUMBER]            2
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
15   [TYPE]              int
15   [FUNC_DEF]          foo
15   [FPAREN_OPEN]       (
15   [FPAREN_CLOSE]      )
15   [NEWLINE]           
15   [BRACE_OPEN]        {
15   [NEWLINE]           
15   [RETURN]            return
15   [PAREN_OPEN]        (
15   [NUMBER]            0
15   [PAREN_CLOSE]       )
15   [SEMICOLON]         ;
15   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
17   [TYPE]              void
17   [FUNC_DEF]          foo
17   [FPAREN_OPEN]       (
17   [TYPE]              int
17   [WORD]              a
17   [COMMA]             ,
17   [TYPE]              int
17   [WORD]              b
17   [FPAREN_CLOSE]      )
17   [NEWLINE]           
18   [BRACE_OPEN]        {
18   [NEWLINE]           
19   [IF]                if
19   [SPAREN_OPEN]       (
19   [WORD]              a
19   [COMPARE]           ==
19   [WORD]              b
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
20   [ELSE]              else
20   [NEWLINE]           
20   [BRACE_OPEN]        {
20   [NEWLINE]           
20   [WORD]              b
20   [INCDEC_AFTER]      ++
20   [SEMICOLON]         ;
20   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [NEWLINE]           
21   [IF]                if
21   [SPAREN_OPEN]       (
21   [WORD]              a
21   [COMPARE]           ==
21   [WORD]              b
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
22   [ELSE]              else
22   [NEWLINE]           
22   [BRACE_OPEN]        {
22   [NEWLINE]           
22   [WORD]              b
22   [INCDEC_AFTER]      ++
22   [SEMICOLON]         ;
22   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           