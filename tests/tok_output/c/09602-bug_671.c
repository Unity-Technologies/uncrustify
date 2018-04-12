Line [Token]             Text
1    [PREPROC]           #
1    [PP_DEFINE]         define
1    [MACRO]             FOO_MAX
1    [NUMBER]            10
1    [NEWLINE]           
3    [TYPE]              bool
3    [WORD]              foo
3    [SQUARE_OPEN]       [
3    [WORD]              FOO_MAX
3    [SQUARE_CLOSE]      ]
3    [SEMICOLON]         ;
3    [NEWLINE]           
5    [TYPE]              void
5    [NEWLINE]           
6    [FUNC_PROTO]        foo_bar
6    [FPAREN_OPEN]       (
6    [TYPE]              int
6    [WORD]              a
6    [COMMA]             ,
6    [NEWLINE]           
7    [TYPE]              int
7    [PTR_TYPE]          *
7    [WORD]              b
7    [COMMA]             ,
7    [NEWLINE]           
8    [TYPE]              bool
8    [WORD]              foo
8    [SQUARE_OPEN]       [
8    [WORD]              FOO_MAX
8    [SQUARE_CLOSE]      ]
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
10   [TYPE]              void
10   [NEWLINE]           
10   [FUNC_DEF]          A
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [TYPE]              int
12   [WORD]              a
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [TYPE]              int
13   [PTR_TYPE]          *
13   [WORD]              b
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [FUNC_CALL]         foo_bar
14   [FPAREN_OPEN]       (
14   [WORD]              a
14   [COMMA]             ,
14   [WORD]              b
14   [COMMA]             ,
14   [WORD]              foo
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           