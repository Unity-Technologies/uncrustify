Line [Token]             Text
1    [TYPEDEF]           typedef
1    [TYPE]              short
1    [TPAREN_OPEN]       (
1    [PTR_TYPE]          *
1    [TYPE]              hello1
1    [TPAREN_CLOSE]      )
1    [FPAREN_OPEN]       (
1    [TYPE]              char
1    [WORD]              coolParam
1    [COMMA]             ,
1    [NEWLINE]           
2    [TYPE]              ushort
2    [PTR_TYPE]          *
2    [COMMA]             ,
2    [NEWLINE]           
3    [TYPE]              unsigned
3    [TYPE]              int
3    [WORD]              anotherone
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
5    [TYPE]              short
5    [TPAREN_OPEN]       (
5    [PTR_TYPE]          *
5    [FUNC_VAR]          hello2
5    [TPAREN_CLOSE]      )
5    [FPAREN_OPEN]       (
5    [TYPE]              char
5    [WORD]              coolParam
5    [COMMA]             ,
5    [NEWLINE]           
6    [TYPE]              ulong
6    [PTR_TYPE]          *
6    [COMMA]             ,
6    [NEWLINE]           
7    [TYPE]              uchar
7    [COMMA]             ,
7    [NEWLINE]           
8    [TYPE]              unsigned
8    [TYPE]              int
8    [WORD]              anotherone
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
10   [TYPE]              short
10   [FUNC_PROTO]        hello3
10   [FPAREN_OPEN]       (
10   [TYPE]              char
10   [WORD]              coolParam
10   [COMMA]             ,
10   [NEWLINE]           
11   [TYPE]              ushort
11   [PTR_TYPE]          *
11   [COMMA]             ,
11   [NEWLINE]           
12   [TYPE]              unsigned
12   [TYPE]              int
12   [WORD]              anotherone
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
14   [TYPE]              void
14   [FUNC_PROTO]        x
14   [FPAREN_OPEN]       (
14   [TYPE]              custom_t
14   [PTR_TYPE]          *
14   [WORD]              e
14   [COMMA]             ,
14   [CPP_CAST]          void
14   [PAREN_OPEN]        (
14   [DEREF]             *
14   [WORD]              funcptr
14   [PAREN_CLOSE]       )
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [TYPE]              void
15   [FUNC_PROTO]        x
15   [FPAREN_OPEN]       (
15   [TYPE]              custom_t
15   [PTR_TYPE]          *
15   [WORD]              e
15   [COMMA]             ,
15   [CPP_CAST]          void
15   [PAREN_OPEN]        (
15   [DEREF]             *
15   [WORD]              funcptr
15   [PAREN_CLOSE]       )
15   [TSQUARE]           []
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [TYPE]              void
16   [FUNC_PROTO]        x
16   [FPAREN_OPEN]       (
16   [TYPE]              custom_t
16   [PTR_TYPE]          *
16   [WORD]              e
16   [COMMA]             ,
16   [TYPE]              void
16   [PAREN_OPEN]        (
16   [PTR_TYPE]          *
16   [FUNC_VAR]          funcptr
16   [PAREN_CLOSE]       )
16   [FPAREN_OPEN]       (
16   [TYPE]              int
16   [COMMA]             ,
16   [TYPE]              int
16   [FPAREN_CLOSE]      )
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [TYPE]              void
17   [FUNC_PROTO]        x
17   [FPAREN_OPEN]       (
17   [TYPE]              custom_t
17   [PTR_TYPE]          *
17   [WORD]              e
17   [COMMA]             ,
17   [TYPE]              void
17   [PAREN_OPEN]        (
17   [PTR_TYPE]          *
17   [FUNC_VAR]          funcptr
17   [PAREN_CLOSE]       )
17   [FPAREN_OPEN]       (
17   [TYPE]              int
17   [COMMA]             ,
17   [TYPE]              int
17   [FPAREN_CLOSE]      )
17   [TSQUARE]           []
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           