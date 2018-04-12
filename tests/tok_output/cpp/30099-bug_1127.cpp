Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        include
1    [PREPROC_BODY]      <iostream>
1    [NEWLINE]           
3    [TEMPLATE]          template
3    [ANGLE_OPEN]        <
3    [TYPE]              size_t
3    [TYPE]              T
3    [ANGLE_CLOSE]       >
3    [NEWLINE]           
4    [CLASS]             class
4    [TYPE]              MyFoo
4    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [PRIVATE]           public
6    [PRIVATE_COLON]     :
6    [NEWLINE]           
7    [FUNC_CLASS_DEF]    MyFoo
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [TYPE]              std
9    [DC_MEMBER]         ::
9    [WORD]              cout
9    [ARITH]             <<
9    [WORD]              T
9    [ARITH]             <<
9    [TYPE]              std
9    [DC_MEMBER]         ::
9    [WORD]              endl
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [SEMICOLON]         ;
11   [NEWLINE]           
13   [TYPE]              int
13   [FUNC_DEF]          main
13   [FPAREN_OPEN]       (
13   [FPAREN_CLOSE]      )
13   [NEWLINE]           
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [QUALIFIER]         const
15   [TYPE]              size_t
15   [WORD]              mySize
15   [ASSIGN]            =
15   [WORD]              INT8_MAX
15   [ARITH]             *
15   [NUMBER]            2
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [TYPE]              MyFoo
16   [ANGLE_OPEN]        <
16   [WORD]              mySize
16   [ARITH]             *
16   [NUMBER]            2
16   [ANGLE_CLOSE]       >
16   [WORD]              foo1
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [TYPE]              MyFoo
17   [ANGLE_OPEN]        <
17   [WORD]              mySize
17   [ARITH]             /
17   [NUMBER]            2
17   [ANGLE_CLOSE]       >
17   [WORD]              foo2
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [TYPE]              MyFoo
18   [ANGLE_OPEN]        <
18   [NUMBER]            2
18   [ARITH]             *
18   [WORD]              mySize
18   [ANGLE_CLOSE]       >
18   [WORD]              foo1
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [TYPE]              MyFoo
19   [ANGLE_OPEN]        <
19   [NUMBER]            2
19   [ARITH]             /
19   [WORD]              mySize
19   [ANGLE_CLOSE]       >
19   [WORD]              foo2
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [NEWLINE]           