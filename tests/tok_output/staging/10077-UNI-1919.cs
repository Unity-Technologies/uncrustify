Line [Token]             Text
1    [COMMENT_CPP]       // this
1    [NEWLINE]           
3    [FUNC_CALL]         Func
3    [FPAREN_OPEN]       (
3    [NEWLINE]           
4    [STRING]            "stuff"
4    [COMMA]             ,
4    [NEWLINE]           
5    [WORD]              foo
5    [LAMBDA]            =>
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [FUNC_CALL]         bar
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
10   [COMMENT_CPP]       // formats to this
10   [NEWLINE]           
12   [FUNC_CALL]         Func
12   [FPAREN_OPEN]       (
12   [NEWLINE]           
13   [STRING]            "stuff"
13   [COMMA]             ,
13   [NEWLINE]           
14   [WORD]              foo
14   [LAMBDA]            =>
14   [NEWLINE]           
15   [BRACE_OPEN]        {
15   [NEWLINE]           
16   [FUNC_CALL]         bar
16   [FPAREN_OPEN]       (
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           