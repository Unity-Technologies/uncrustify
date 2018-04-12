Line [Token]             Text
1    [STRUCT]            struct
1    [TYPE]              bar
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TYPE]              void
3    [TPAREN_OPEN]       (
3    [TYPE]              Namespace
3    [DC_MEMBER]         ::
3    [PTR_TYPE]          *
3    [FUNC_VAR]          method
3    [TPAREN_CLOSE]      )
3    [FPAREN_OPEN]       (
3    [TYPE]              Class
3    [BYREF]             &
3    [WORD]              param
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [BRACE_CLOSE]       }
4    [SEMICOLON]         ;
4    [NEWLINE]           
6    [TYPE]              void
6    [TYPE]              Class
6    [DC_MEMBER]         ::
6    [FUNC_DEF]          Foo
6    [FPAREN_OPEN]       (
6    [TYPE]              void
6    [PAREN_OPEN]        (
6    [PTR_TYPE]          *
6    [FUNC_VAR]          callback
6    [PAREN_CLOSE]       )
6    [FPAREN_OPEN]       (
6    [QUALIFIER]         const
6    [TYPE]              Class
6    [BYREF]             &
6    [WORD]              entry
6    [FPAREN_CLOSE]      )
6    [FPAREN_CLOSE]      )
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
10   [TYPE]              void
10   [FUNC_DEF]          foo
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [TYPE]              int
12   [WORD]              a
12   [ASSIGN]            =
12   [NUMBER]            1
12   [SEMICOLON]         ;
12   [COMMENT_CPP]       // if you comment this out, the bug stops reproducing
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           