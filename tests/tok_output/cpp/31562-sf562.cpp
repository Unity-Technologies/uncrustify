Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        include
1    [PREPROC_BODY]      "bar.h"
1    [NEWLINE]           
3    [CLASS]             class
3    [TYPE]              Foo
3    [CLASS_COLON]       :
3    [QUALIFIER]         public
3    [WORD]              Bar
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [TYPE]              int
4    [FUNC_DEF]          foo
4    [FPAREN_OPEN]       (
4    [TYPE]              int
4    [WORD]              bar
4    [FPAREN_CLOSE]      )
4    [QUALIFIER]         const
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [WHILE]             while
5    [SPAREN_OPEN]       (
5    [WORD]              true
5    [SPAREN_CLOSE]      )
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [FUNC_CALL]         baz
6    [FPAREN_OPEN]       (
6    [ADDR]              &
6    [OPERATOR]          operator
6    [FUNC_CALL]         []
6    [FPAREN_OPEN]       (
6    [WORD]              bar
6    [FPAREN_CLOSE]      )
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [SEMICOLON]         ;
9    [NEWLINE]           