Line [Token]             Text
1    [ENUM]              enum
1    [BRACE_OPEN]        {
1    [COMMENT_CPP]       // Keep this line as it is. It's a regression test for checking pc->prev->prev-> on CT_BRACE_OPEN.
1    [NEWLINE]           
2    [WORD]              kEnumValue
2    [ASSIGN]            =
2    [NUMBER]            5
2    [COMMA]             ,
2    [NEWLINE]           
3    [BRACE_CLOSE]       }
3    [SEMICOLON]         ;
3    [NEWLINE]           
5    [STRUCT]            struct
5    [TYPE]              foo
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [TYPE]              int
7    [WORD]              bar
7    [BIT_COLON]         :
7    [WORD]              kEnumValue
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [TYPE]              int
8    [WORD]              pad
8    [BIT_COLON]         :
8    [NUMBER]            3
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [SEMICOLON]         ;
9    [NEWLINE]           
11   [CLASS]             class
11   [TYPE]              cls
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [TYPE]              int
13   [WORD]              bar
13   [BIT_COLON]         :
13   [WORD]              kEnumValue
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [TYPE]              int
14   [WORD]              pad
14   [BIT_COLON]         :
14   [NUMBER]            3
14   [SEMICOLON]         ;
14   [NEWLINE]           
16   [TYPE]              void
16   [FUNC_DEF]          func
16   [FPAREN_OPEN]       (
16   [FPAREN_CLOSE]      )
16   [NEWLINE]           
17   [BRACE_OPEN]        {
17   [NEWLINE]           
18   [GOTO]              goto
18   [WORD]              end
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [WORD]              bar
19   [ASSIGN]            =
19   [NUMBER]            1
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [LABEL]             end
20   [LABEL_COLON]       :
20   [NEWLINE]           
21   [WORD]              pad
21   [ASSIGN]            =
21   [NUMBER]            2
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [SEMICOLON]         ;
23   [NEWLINE]           