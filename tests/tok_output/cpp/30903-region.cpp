Line [Token]             Text
1    [CLASS]             class
1    [TYPE]              X
1    [CLASS_COLON]       :
1    [WORD]              Y
1    [BRACE_OPEN]        {
1    [NEWLINE]           
2    [TYPE]              int
2    [WORD]              foo1
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [PREPROC]           #
3    [PP_REGION]         pragma
3    [PREPROC_BODY]      region something
3    [NEWLINE]           
4    [TYPE]              int
4    [WORD]              foo2
4    [ASSIGN]            =
4    [NUMBER]            2
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [PREPROC]           #
5    [PP_ENDREGION]      pragma
5    [PREPROC_BODY]      endregion
5    [NEWLINE]           
6    [TYPE]              int
6    [FUNC_DEF]          foo
6    [FPAREN_OPEN]       (
6    [FPAREN_CLOSE]      )
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
9    [PREPROC]           #
9    [PP_REGION]         pragma
9    [PREPROC_BODY]      region something else
9    [NEWLINE]           
10   [TYPE]              int
10   [WORD]              foo3
10   [ASSIGN]            =
10   [NUMBER]            3
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [PREPROC]           #
11   [PP_REGION]         pragma
11   [PREPROC_BODY]      region nested
11   [NEWLINE]           
12   [TYPE]              int
12   [WORD]              foo4
12   [ASSIGN]            =
12   [NUMBER]            0
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [PREPROC]           #
13   [PP_ENDREGION]      pragma
13   [PREPROC_BODY]      endregion
13   [NEWLINE]           
14   [TYPE]              int
14   [WORD]              foo5
14   [ASSIGN]            =
14   [NUMBER]            0
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [PREPROC]           #
15   [PP_ENDREGION]      pragma
15   [PREPROC_BODY]      endregion
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [NEWLINE]           