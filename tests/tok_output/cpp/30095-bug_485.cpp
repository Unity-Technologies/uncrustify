Line [Token]             Text
1    [TYPE]              void
1    [TYPE]              Tst
1    [DC_MEMBER]         ::
1    [FUNC_DEF]          test
1    [FPAREN_OPEN]       (
1    [TYPE]              Msg
1    [PTR_TYPE]          *
1    [WORD]              message_p
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [SWITCH]            switch
3    [SPAREN_OPEN]       (
3    [WORD]              message_p
3    [SPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [CASE]              case
5    [WORD]              A
5    [CASE_COLON]        :
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [QUALIFIER]         const
7    [TYPE]              table
7    [PTR_TYPE]          *
7    [WORD]              entry2
7    [ASSIGN]            =
7    [FUNC_CALL]         findMsg
7    [FPAREN_OPEN]       (
7    [WORD]              message_p
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [TYPE]              table
8    [PTR_TYPE]          *
8    [WORD]              entry3
8    [ASSIGN]            =
8    [FUNC_CALL]         findMsg
8    [FPAREN_OPEN]       (
8    [WORD]              message_p
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
10   [BREAK]             break
10   [SEMICOLON]         ;
10   [NEWLINE]           
12   [CASE]              case
12   [WORD]              B
12   [CASE_COLON]        :
12   [NEWLINE]           
13   [QUALIFIER]         const
13   [TYPE]              table
13   [PTR_TYPE]          *
13   [WORD]              entry2
13   [ASSIGN]            =
13   [FUNC_CALL]         findMsg
13   [FPAREN_OPEN]       (
13   [WORD]              message_p
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [TYPE]              table
14   [PTR_TYPE]          *
14   [WORD]              entry3
14   [ASSIGN]            =
14   [FUNC_CALL]         findMsg
14   [FPAREN_OPEN]       (
14   [WORD]              message_p
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [BREAK]             break
15   [SEMICOLON]         ;
15   [NEWLINE]           
17   [CASE]              default
17   [CASE_COLON]        :
17   [NEWLINE]           
18   [BREAK]             break
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [BRACE_CLOSE]       }
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [NEWLINE]           