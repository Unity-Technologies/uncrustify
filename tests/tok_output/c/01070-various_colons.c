Line [Token]             Text
1    [STRUCT]            struct
1    [TYPE]              foo
1    [BRACE_OPEN]        {
2    [TYPE]              unsigned
2    [TYPE]              int
2    [WORD]              a
2    [BIT_COLON]         :
2    [NUMBER]            4
2    [SEMICOLON]         ;
2    [NEWLINE]           
2    [TYPE]              int
2    [WORD]              b
2    [BIT_COLON]         :
2    [NUMBER]            4
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [BRACE_CLOSE]       }
3    [SEMICOLON]         ;
3    [NEWLINE]           
5    [TYPE]              int
5    [FUNC_DEF]          bar
5    [FPAREN_OPEN]       (
5    [TYPE]              int
5    [WORD]              x
5    [FPAREN_CLOSE]      )
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [SWITCH]            switch
7    [SPAREN_OPEN]       (
7    [WORD]              x
7    [SPAREN_CLOSE]      )
7    [BRACE_OPEN]        {
7    [NEWLINE]           
7    [CASE]              case
7    [NUMBER]            1
7    [CASE_COLON]        :
7    [RETURN]            return
7    [NUMBER]            2
7    [SEMICOLON]         ;
7    [NEWLINE]           
7    [CASE]              case
7    [NUMBER]            4
7    [CASE_COLON]        :
7    [RETURN]            return
7    [NUMBER]            4
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [CASE]              case
9    [NUMBER]            6
10   [CASE_COLON]        :
11   [RETURN]            return
12   [NUMBER]            8
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [CASE]              case
13   [NUMBER]            10
13   [CASE_COLON]        :
14   [RETURN]            return
14   [NUMBER]            19
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [RETURN]            return
15   [NUMBER]            0
15   [SEMICOLON]         ;
15   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
20   [TYPE]              int
20   [FUNC_DEF]          main
20   [FPAREN_OPEN]       (
20   [TYPE]              void
20   [FPAREN_CLOSE]      )
20   [BRACE_OPEN]        {
20   [NEWLINE]           
20   [FUNC_CALL]         bar
20   [FPAREN_OPEN]       (
20   [NUMBER]            10
20   [FPAREN_CLOSE]      )
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [LABEL]             foo
21   [LABEL_COLON]       :
21   [NEWLINE]           
21   [FUNC_CALL]         bar
21   [FPAREN_OPEN]       (
21   [NEG]               -
21   [NUMBER]            9
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [NEWLINE]           
21   [FUNC_CALL]         bar
21   [FPAREN_OPEN]       (
21   [NUMBER]            9
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [NEWLINE]           
21   [LABEL]             baz
21   [LABEL_COLON]       :
21   [NEWLINE]           
21   [RETURN]            return
21   [NUMBER]            0
21   [SEMICOLON]         ;
21   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [NEWLINE]           