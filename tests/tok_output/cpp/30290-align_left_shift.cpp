Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        include
1    [PREPROC_BODY]      <iostream>
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_DEFINE]         define
2    [MACRO_FUNC]        MACRO
2    [FPAREN_OPEN]       (
2    [WORD]              x
2    [FPAREN_CLOSE]      )
2    [WORD]              x
2    [NEWLINE]           
3    [TYPE]              int
3    [FUNC_DEF]          main
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [TYPE]              int
5    [WORD]              X
5    [SQUARE_OPEN]       [
5    [NUMBER]            1
5    [SQUARE_CLOSE]      ]
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [FUNC_CALL]         MACRO
6    [FPAREN_OPEN]       (
6    [TYPE]              std
6    [DC_MEMBER]         ::
6    [WORD]              cout
6    [ARITH]             <<
6    [WORD]              X
6    [NEWLINE]           
7    [ARITH]             <<
7    [WORD]              X
7    [SQUARE_OPEN]       [
7    [NUMBER]            0
7    [SQUARE_CLOSE]      ]
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [TYPE]              std
8    [DC_MEMBER]         ::
8    [WORD]              cout
8    [ARITH]             <<
8    [WORD]              X
8    [NEWLINE]           
9    [ARITH]             <<
9    [WORD]              X
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [TYPE]              std
10   [DC_MEMBER]         ::
10   [WORD]              cout2
10   [ARITH]             <<
10   [WORD]              X
10   [NEWLINE]           
11   [ARITH]             <<
11   [WORD]              X
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [TYPE]              std
12   [DC_MEMBER]         ::
12   [WORD]              cout
12   [ARITH]             <<
12   [WORD]              X
12   [NEWLINE]           
13   [ARITH]             <<
13   [WORD]              X
13   [SQUARE_OPEN]       [
13   [NUMBER]            0
13   [SQUARE_CLOSE]      ]
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [TYPE]              std
14   [DC_MEMBER]         ::
14   [WORD]              cout
14   [ARITH]             <<
14   [NEWLINE]           
15   [WORD]              X
15   [ARITH]             <<
15   [NEWLINE]           
16   [WORD]              Y
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [TYPE]              std
17   [DC_MEMBER]         ::
17   [WORD]              cout
17   [NEWLINE]           
18   [ARITH]             <<
18   [WORD]              X
18   [NEWLINE]           
19   [ARITH]             <<
19   [WORD]              Y
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [TYPE]              std
20   [DC_MEMBER]         ::
20   [WORD]              cout
20   [NEWLINE]           
21   [ARITH]             <<
21   [NEWLINE]           
22   [WORD]              X
22   [NEWLINE]           
23   [ARITH]             <<
23   [NEWLINE]           
24   [WORD]              Y
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [BRACE_CLOSE]       }
25   [NEWLINE]           
27   [PREPROC]           #
27   [PP_DEFINE]         define
27   [MACRO_FUNC]        A_LONG_MACRO_NAME
27   [FPAREN_OPEN]       (
27   [WORD]              x
27   [FPAREN_CLOSE]      )
27   [WORD]              x
27   [NEWLINE]           
29   [TYPE]              void
29   [FUNC_DEF]          f
29   [FPAREN_OPEN]       (
29   [FPAREN_CLOSE]      )
29   [BRACE_OPEN]        {
29   [NEWLINE]           
30   [TYPE]              std
30   [DC_MEMBER]         ::
30   [WORD]              cout
30   [ARITH]             <<
30   [STRING]            "Hello, "
30   [NEWLINE]           
31   [ARITH]             <<
31   [STRING]            "World!"
31   [NEWLINE]           
32   [ARITH]             <<
32   [TYPE]              std
32   [DC_MEMBER]         ::
32   [WORD]              endl
32   [SEMICOLON]         ;
32   [NEWLINE]           
33   [FUNC_CALL]         A_LONG_MACRO_NAME
33   [FPAREN_OPEN]       (
33   [TYPE]              std
33   [DC_MEMBER]         ::
33   [WORD]              cout
33   [ARITH]             <<
33   [STRING]            "Hello, "
33   [NEWLINE]           
34   [ARITH]             <<
34   [STRING]            "World!"
34   [NEWLINE]           
35   [ARITH]             <<
35   [TYPE]              std
35   [DC_MEMBER]         ::
35   [WORD]              endl
35   [FPAREN_CLOSE]      )
35   [SEMICOLON]         ;
35   [NEWLINE]           
36   [FUNC_CALL]         A_LONG_MACRO_NAME
36   [FPAREN_OPEN]       (
36   [NEWLINE]           
37   [TYPE]              std
37   [DC_MEMBER]         ::
37   [WORD]              cout
37   [ARITH]             <<
37   [STRING]            "Hello, "
37   [NEWLINE]           
38   [ARITH]             <<
38   [STRING]            "World!"
38   [NEWLINE]           
39   [ARITH]             <<
39   [TYPE]              std
39   [DC_MEMBER]         ::
39   [WORD]              endl
39   [FPAREN_CLOSE]      )
39   [SEMICOLON]         ;
39   [NEWLINE]           
40   [BRACE_CLOSE]       }
40   [NEWLINE]           