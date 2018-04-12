Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [FOR]               for
3    [SPAREN_OPEN]       (
3    [TYPE]              auto
3    [QUALIFIER]         const
3    [BYREF]             &
3    [WORD]              item
3    [FOR_COLON]         :
3    [WORD]              list
3    [SPAREN_CLOSE]      )
3    [VBRACE_OPEN]       
3    [NEWLINE]           
4    [FUNC_CALL]         bar
4    [FPAREN_OPEN]       (
4    [WORD]              item
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [VBRACE_CLOSE]      
4    [NEWLINE]           
5    [FOR]               for
5    [SPAREN_OPEN]       (
5    [QUALIFIER]         const
5    [TYPE]              auto
5    [BYREF]             &
5    [WORD]              item
5    [FOR_COLON]         :
5    [WORD]              list
5    [SPAREN_CLOSE]      )
5    [VBRACE_OPEN]       
5    [NEWLINE]           
6    [FUNC_CALL]         bar
6    [FPAREN_OPEN]       (
6    [WORD]              item
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [VBRACE_CLOSE]      
6    [NEWLINE]           
7    [FOR]               for
7    [SPAREN_OPEN]       (
7    [TYPE]              auto
7    [BYREF]             &
7    [WORD]              item
7    [FOR_COLON]         :
7    [WORD]              list
7    [SPAREN_CLOSE]      )
7    [VBRACE_OPEN]       
7    [NEWLINE]           
8    [FUNC_CALL]         bar
8    [FPAREN_OPEN]       (
8    [WORD]              item
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [VBRACE_CLOSE]      
8    [NEWLINE]           
10   [TYPE]              auto
10   [PTR_TYPE]          *
10   [WORD]              var
10   [ASSIGN]            =
10   [FUNC_CALL]         bar
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [TYPE]              auto
11   [BYREF]             &
11   [WORD]              var
11   [ASSIGN]            =
11   [FUNC_CALL]         bar
11   [FPAREN_OPEN]       (
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [TYPE]              auto
12   [WORD]              var
12   [ASSIGN]            =
12   [FUNC_CALL]         bar
12   [FPAREN_OPEN]       (
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [TYPE]              auto
13   [QUALIFIER]         const
13   [PTR_TYPE]          *
13   [WORD]              var
13   [ASSIGN]            =
13   [FUNC_CALL]         bar
13   [FPAREN_OPEN]       (
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [TYPE]              auto
14   [QUALIFIER]         const
14   [BYREF]             &
14   [WORD]              var
14   [ASSIGN]            =
14   [FUNC_CALL]         bar
14   [FPAREN_OPEN]       (
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [TYPE]              auto
15   [QUALIFIER]         const
15   [WORD]              var
15   [ASSIGN]            =
15   [FUNC_CALL]         bar
15   [FPAREN_OPEN]       (
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [BRACE_CLOSE]       }