Line [Token]             Text
1    [TYPE]              int
1    [PTR_TYPE]          *
1    [TPAREN_OPEN]       (
1    [PTR_TYPE]          ^
1    [FUNC_VAR]          blkReturningPointer
1    [TPAREN_CLOSE]      )
1    [FPAREN_OPEN]       (
1    [TYPE]              int
1    [FPAREN_CLOSE]      )
1    [ASSIGN]            =
1    [OC_BLOCK_CARET]    ^
1    [TYPE]              int
1    [PTR_TYPE]          *
1    [FPAREN_OPEN]       (
1    [TYPE]              int
1    [WORD]              a
1    [FPAREN_CLOSE]      )
1    [BRACE_OPEN]        {
1    [NEWLINE]           
2    [RETURN]            return
2    [WORD]              a
2    [ARITH]             +
2    [NUMBER]            1
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [BRACE_CLOSE]       }
3    [SEMICOLON]         ;
3    [NEWLINE]           
5    [TYPE]              void
5    [TPAREN_OPEN]       (
5    [PTR_TYPE]          ^
5    [FUNC_VAR]          blk2
5    [TPAREN_CLOSE]      )
5    [FPAREN_OPEN]       (
5    [TYPE]              int
5    [PTR_TYPE]          *
5    [FPAREN_CLOSE]      )
5    [ASSIGN]            =
5    [OC_BLOCK_CARET]    ^
5    [FPAREN_OPEN]       (
5    [TYPE]              int
5    [PTR_TYPE]          *
5    [WORD]              b
5    [FPAREN_CLOSE]      )
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [DEREF]             *
6    [WORD]              b
6    [ASSIGN]            =
6    [NUMBER]            1
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [SEMICOLON]         ;
7    [NEWLINE]           
10   [TYPE]              int
10   [TPAREN_OPEN]       (
10   [PTR_TYPE]          ^
10   [FUNC_VAR]          oneFrom
10   [TPAREN_CLOSE]      )
10   [FPAREN_OPEN]       (
10   [TYPE]              int
10   [FPAREN_CLOSE]      )
10   [ASSIGN]            =
10   [OC_BLOCK_CARET]    ^
10   [FPAREN_OPEN]       (
10   [TYPE]              int
10   [WORD]              anInt
10   [FPAREN_CLOSE]      )
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [RETURN]            return
11   [WORD]              anInt
11   [ARITH]             -
11   [NUMBER]            1
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [SEMICOLON]         ;
12   [NEWLINE]           
14   [COMMENT_CPP]       // this should not be flagged as OC_BLOCK_CARET
14   [NEWLINE]           
15   [TYPE]              int
15   [WORD]              x
15   [ASSIGN]            =
15   [NUMBER]            12
15   [CARET]             ^
15   [NUMBER]            23
15   [SEMICOLON]         ;
15   [NEWLINE]           