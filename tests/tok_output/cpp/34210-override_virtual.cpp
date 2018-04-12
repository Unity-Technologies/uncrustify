Line [Token]             Text
1    [STRUCT]            struct
1    [TYPE]              A
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [QUALIFIER]         virtual
3    [TYPE]              void
3    [FUNC_PROTO]        foo
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [QUALIFIER]         virtual
4    [TYPE]              void
4    [FUNC_PROTO]        bar
4    [FPAREN_OPEN]       (
4    [FPAREN_CLOSE]      )
4    [ASSIGN]            =
4    [NUMBER]            0
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [QUALIFIER]         virtual
5    [TYPE]              void
5    [FUNC_DEF]          baz
5    [FPAREN_OPEN]       (
5    [FPAREN_CLOSE]      )
5    [QUALIFIER]         const
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [SEMICOLON]         ;
7    [NEWLINE]           
9    [STRUCT]            struct
9    [TYPE]              B
9    [CLASS_COLON]       :
9    [QUALIFIER]         public
9    [WORD]              A
9    [NEWLINE]           
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [QUALIFIER]         virtual
11   [TYPE]              void
11   [FUNC_PROTO]        foo
11   [FPAREN_OPEN]       (
11   [FPAREN_CLOSE]      )
11   [QUALIFIER]         override
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [TYPE]              void
12   [FUNC_DEF]          bar
12   [FPAREN_OPEN]       (
12   [FPAREN_CLOSE]      )
12   [QUALIFIER]         override
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
14   [TYPE]              void
14   [FUNC_DEF]          baz
14   [FPAREN_OPEN]       (
14   [FPAREN_CLOSE]      )
14   [QUALIFIER]         const
14   [QUALIFIER]         override
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [SEMICOLON]         ;
16   [NEWLINE]           