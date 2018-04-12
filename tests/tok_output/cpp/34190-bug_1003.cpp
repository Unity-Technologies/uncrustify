Line [Token]             Text
1    [CLASS]             class
1    [TYPE]              Foo
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [PRIVATE]           public
3    [PRIVATE_COLON]     :
3    [NEWLINE]           
4    [FUNC_CLASS_DEF]    Foo
4    [FPAREN_OPEN]       (
4    [NEWLINE]           
5    [TYPE]              int
5    [WORD]              x_
5    [COMMA]             ,
5    [NEWLINE]           
6    [TYPE]              int
6    [WORD]              y_
6    [NEWLINE]           
7    [FPAREN_CLOSE]      )
7    [CONSTR_COLON]      :
7    [FUNC_CTOR_VAR]     x
7    [FPAREN_OPEN]       (
7    [WORD]              x_
7    [FPAREN_CLOSE]      )
7    [COMMA]             ,
7    [FUNC_CTOR_VAR]     y
7    [FPAREN_OPEN]       (
7    [WORD]              y_
7    [FPAREN_CLOSE]      )
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
10   [PRIVATE]           private
10   [PRIVATE_COLON]     :
10   [NEWLINE]           
11   [TYPE]              int
11   [WORD]              x
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [TYPE]              int
12   [WORD]              y
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [CLASS]             class
15   [TYPE]              Bar
15   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [PRIVATE]           public
17   [PRIVATE_COLON]     :
17   [NEWLINE]           
18   [COMMENT_CPP]       // Splits 3,5 onto newlines
18   [NEWLINE]           
19   [FUNC_CLASS_DEF]    Bar
19   [FPAREN_OPEN]       (
19   [FPAREN_CLOSE]      )
19   [CONSTR_COLON]      :
19   [FUNC_CTOR_VAR]     Bar
19   [FPAREN_OPEN]       (
19   [NUMBER]            3
19   [COMMA]             ,
19   [NUMBER]            5
19   [FPAREN_CLOSE]      )
19   [NEWLINE]           
20   [BRACE_OPEN]        {
20   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [NEWLINE]           
23   [COMMENT_CPP]       // No split here
23   [NEWLINE]           
24   [FUNC_CLASS_DEF]    Bar
24   [FPAREN_OPEN]       (
24   [NEWLINE]           
25   [TYPE]              int
25   [WORD]              x
25   [COMMA]             ,
25   [NEWLINE]           
26   [TYPE]              int
26   [WORD]              y
26   [NEWLINE]           
27   [FPAREN_CLOSE]      )
27   [CONSTR_COLON]      :
27   [FUNC_CTOR_VAR]     foo
27   [FPAREN_OPEN]       (
27   [WORD]              x
27   [COMMA]             ,
27   [WORD]              y
27   [FPAREN_CLOSE]      )
27   [NEWLINE]           
28   [BRACE_OPEN]        {
28   [NEWLINE]           
29   [BRACE_CLOSE]       }
29   [NEWLINE]           
31   [TYPE]              Foo
31   [WORD]              foo
31   [SEMICOLON]         ;
31   [NEWLINE]           
32   [BRACE_CLOSE]       }
32   [SEMICOLON]         ;
32   [NEWLINE]           