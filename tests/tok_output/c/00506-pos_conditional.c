Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [TYPE]              void
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [COMMENT_CPP]       // conditional colon
3    [NEWLINE]           
4    [WORD]              a
4    [ASSIGN]            =
4    [FUNC_CALL]         bar
4    [FPAREN_OPEN]       (
4    [FPAREN_CLOSE]      )
4    [QUESTION]          ?
4    [NUMBER]            2
4    [COND_COLON]        :
4    [NEWLINE]           
5    [NUMBER]            3
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [WORD]              a
6    [ASSIGN]            =
6    [FUNC_CALL]         bar
6    [FPAREN_OPEN]       (
6    [FPAREN_CLOSE]      )
6    [QUESTION]          ?
6    [NUMBER]            2
7    [COND_COLON]        :
6    [NEWLINE]           
7    [NUMBER]            3
7    [SEMICOLON]         ;
7    [NEWLINE]           
9    [COMMENT_CPP]       // conditional question
9    [NEWLINE]           
10   [WORD]              a
10   [ASSIGN]            =
10   [FUNC_CALL]         bar
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [QUESTION]          ?
10   [NEWLINE]           
11   [NUMBER]            2
11   [COND_COLON]        :
11   [NUMBER]            3
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [WORD]              a
12   [ASSIGN]            =
12   [FUNC_CALL]         bar
12   [FPAREN_OPEN]       (
12   [FPAREN_CLOSE]      )
13   [QUESTION]          ?
12   [NEWLINE]           
13   [NUMBER]            2
13   [COND_COLON]        :
13   [NUMBER]            3
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [NEWLINE]           