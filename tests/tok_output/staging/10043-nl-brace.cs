Line [Token]             Text
1    [QUALIFIER]         public
1    [CLASS]             class
1    [TYPE]              Foo
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [QUALIFIER]         public
3    [TYPE]              void
3    [FUNC_DEF]          foo
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [COMMENT_CPP]       // nl_brace_catch=force
5    [NEWLINE]           
6    [TRY]               try
6    [BRACE_OPEN]        {
6    [RETURN]            return
6    [NUMBER]            1
6    [SEMICOLON]         ;
6    [BRACE_CLOSE]       }
6    [CATCH]             catch
6    [SPAREN_OPEN]       (
6    [TYPE]              Exception
6    [SPAREN_CLOSE]      )
6    [BRACE_OPEN]        {
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
8    [COMMENT_CPP]       // nl_brace_finally=force
8    [NEWLINE]           
9    [TRY]               try
9    [BRACE_OPEN]        {
9    [FUNC_CALL]         bar
9    [FPAREN_OPEN]       (
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [BRACE_CLOSE]       }
9    [FINALLY]           finally
9    [BRACE_OPEN]        {
9    [FUNC_CALL]         barr
9    [FPAREN_OPEN]       (
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
11   [TYPE]              var
11   [WORD]              v
11   [ASSIGN]            =
11   [FUNC_CALL]         foo
11   [FPAREN_OPEN]       (
11   [WORD]              yolo
11   [COMMA]             ,
11   [NEWLINE]           
12   [NEW]               new
12   [FUNC_CALL]         List
12   [ANGLE_OPEN]        <
12   [TYPE]              Type
12   [ANGLE_CLOSE]       >
12   [FPAREN_OPEN]       (
12   [FPAREN_CLOSE]      )
12   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [NEW]               new
13   [CS_PROPERTY]       Type
13   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
13   [WORD]              Value
13   [ASSIGN]            =
13   [WORD]              prop
13   [SEMICOLON]         ;
13   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           