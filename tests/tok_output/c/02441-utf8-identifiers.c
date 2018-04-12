Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          FooUtf8Сhar
1    [FPAREN_OPEN]       (
1    [TYPE]              void
1    [FPAREN_CLOSE]      )
1    [COMMENT_CPP]       // C is encoded in UTF-8
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [BRACE_CLOSE]       }
3    [NEWLINE]           
5    [STRUCT]            struct
5    [TYPE]              テスト
5    [COMMENT_CPP]       // Japanese 'test'
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [TYPE]              void
7    [FUNC_DEF]          トスト
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [BRACE_OPEN]        {
7    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [COMMENT_CPP]       // Japanese 'toast'
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [SEMICOLON]         ;
8    [NEWLINE]           
10   [TYPE]              int
10   [FUNC_DEF]          main
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [TYPE]              テスト
11   [WORD]              パン
11   [SEMICOLON]         ;
11   [COMMENT_CPP]       // Japanese パン 'bread'
11   [NEWLINE]           
12   [TYPE]              パン
12   [MEMBER]            .
12   [FUNC_CALL]         トスト
12   [FPAREN_OPEN]       (
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           