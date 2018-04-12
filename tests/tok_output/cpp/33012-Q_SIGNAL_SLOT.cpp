Line [Token]             Text
1    [TYPE]              bool
1    [TYPE]              AkonadiServer
1    [DC_MEMBER]         ::
1    [FUNC_DEF]          init
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [FUNC_CALL]         connect
3    [FPAREN_OPEN]       (
3    [WORD]              watcher
3    [COMMA]             ,
3    [FUNC_CALL]         SIGNAL
3    [FPAREN_OPEN]       (
3    [FUNC_CALL]         serviceOwnerChanged
3    [FPAREN_OPEN]       (
3    [WORD]              QString
3    [COMMA]             ,
3    [WORD]              QString
3    [COMMA]             ,
3    [WORD]              QString
3    [FPAREN_CLOSE]      )
3    [FPAREN_CLOSE]      )
3    [COMMA]             ,
3    [NEWLINE]           
4    [THIS]              this
4    [COMMA]             ,
4    [FUNC_CALL]         SLOT
4    [FPAREN_OPEN]       (
4    [FUNC_CALL]         serviceOwnerChanged
4    [FPAREN_OPEN]       (
4    [WORD]              QString
4    [COMMA]             ,
4    [WORD]              QString
4    [COMMA]             ,
4    [WORD]              QString
4    [FPAREN_CLOSE]      )
4    [FPAREN_CLOSE]      )
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [RETURN]            return
5    [WORD]              true
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
8    [FUNC_CALL]         connect
8    [FPAREN_OPEN]       (
8    [ADDR]              &
8    [WORD]              mapper
8    [COMMA]             ,
8    [FUNC_CALL]         SIGNAL
8    [FPAREN_OPEN]       (
8    [FUNC_CALL]         mapped
8    [FPAREN_OPEN]       (
8    [WORD]              Q1
8    [BYREF]             &
8    [FPAREN_CLOSE]      )
8    [FPAREN_CLOSE]      )
8    [COMMA]             ,
8    [THIS]              this
8    [COMMA]             ,
8    [FUNC_CALL]         SLOT
8    [FPAREN_OPEN]       (
8    [FUNC_CALL]         onSomeEvent
8    [FPAREN_OPEN]       (
8    [QUALIFIER]         const
8    [WORD]              Q2
8    [BYREF]             &
8    [FPAREN_CLOSE]      )
8    [FPAREN_CLOSE]      )
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
10   [FUNC_CALL]         connect
10   [FPAREN_OPEN]       (
10   [ADDR]              &
10   [WORD]              mapper
10   [COMMA]             ,
10   [NEWLINE]           
11   [FUNC_CALL]         SIGNAL
11   [FPAREN_OPEN]       (
11   [FUNC_CALL]         mapped
11   [FPAREN_OPEN]       (
11   [WORD]              Q1
11   [BYREF]             &
11   [FPAREN_CLOSE]      )
11   [FPAREN_CLOSE]      )
11   [COMMA]             ,
11   [NEWLINE]           
12   [THIS]              this
12   [COMMA]             ,
12   [NEWLINE]           
13   [FUNC_CALL]         SLOT
13   [FPAREN_OPEN]       (
13   [FUNC_CALL]         onSomeEvent
13   [FPAREN_OPEN]       (
13   [QUALIFIER]         const
13   [WORD]              Q2
13   [BYREF]             &
13   [FPAREN_CLOSE]      )
13   [FPAREN_CLOSE]      )
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [FUNC_CALL]         connect
15   [FPAREN_OPEN]       (
15   [ADDR]              &
15   [WORD]              mapper
15   [COMMA]             ,
15   [NEWLINE]           
16   [FUNC_CALL]         SIGNAL
16   [FPAREN_OPEN]       (
16   [FUNC_CALL]         mapped
16   [FPAREN_OPEN]       (
16   [WORD]              Q1
16   [BYREF]             &
16   [FPAREN_CLOSE]      )
16   [FPAREN_CLOSE]      )
16   [COMMA]             ,
16   [NEWLINE]           
17   [THIS]              this
17   [COMMA]             ,
17   [NEWLINE]           
18   [FUNC_CALL]         SLOT
18   [FPAREN_OPEN]       (
18   [FUNC_CALL]         onSomeEvent
18   [FPAREN_OPEN]       (
18   [QUALIFIER]         const
18   [WORD]              Q2
18   [BYREF]             &
18   [FPAREN_CLOSE]      )
18   [FPAREN_CLOSE]      )
18   [FPAREN_CLOSE]      )
18   [SEMICOLON]         ;
18   [NEWLINE]           