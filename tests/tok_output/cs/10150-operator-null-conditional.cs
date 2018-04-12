Line [Token]             Text
1    [QUALIFIER]         public
1    [CLASS]             class
1    [TYPE]              test
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [QUALIFIER]         public
3    [QUALIFIER]         static
3    [TYPE]              void
3    [FUNC_DEF]          TestOfNullConditionalOperator
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [TYPE]              string
5    [WORD]              s
5    [ASSIGN]            =
5    [STRING]            "Test"
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [IF]                if
6    [SPAREN_OPEN]       (
6    [WORD]              s
6    [MEMBER]            ?.
6    [WORD]              Length
6    [COMPARE]           >
6    [NUMBER]            0
6    [SPAREN_CLOSE]      )
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [WORD]              s
8    [ASSIGN]            =
8    [STRING]            "Test"
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
10   [IF]                if
10   [SPAREN_OPEN]       (
10   [WORD]              System
10   [MEMBER]            .
10   [WORD]              Reflection
10   [MEMBER]            .
10   [WORD]              Assembly
10   [MEMBER]            .
10   [FUNC_CALL]         GetEntryAssembly
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [MEMBER]            ?.
10   [FUNC_CALL]         GetName
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [COMPARE]           !=
10   [WORD]              null
10   [SPAREN_CLOSE]      )
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [WORD]              s
12   [ASSIGN]            =
12   [STRING]            "Test"
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           