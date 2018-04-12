Line [Token]             Text
1    [TEMPLATE]          template
1    [ANGLE_OPEN]        <
1    [TYPE]              class
1    [TYPE]              T
1    [ANGLE_CLOSE]       >
1    [NEWLINE]           
2    [QUALIFIER]         inline
2    [TYPE]              void
2    [NEWLINE]           
3    [FUNC_DEF]          x3
3    [FPAREN_OPEN]       (
3    [TYPE]              T
3    [BYREF]             &
3    [WORD]              a
3    [COMMA]             ,
3    [TYPE]              T
3    [BYREF]             &
3    [WORD]              b
3    [COMMA]             ,
3    [TYPE]              T
3    [BYREF]             &
3    [WORD]              c
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [TYPE]              T
5    [WORD]              temp
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [IF]                if
6    [SPAREN_OPEN]       (
6    [WORD]              b
6    [COMPARE]           <
6    [WORD]              a
6    [SPAREN_CLOSE]      )
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [IF]                if
8    [SPAREN_OPEN]       (
8    [WORD]              c
8    [COMPARE]           <
8    [WORD]              a
8    [SPAREN_CLOSE]      )
8    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [COMMENT_CPP]       // b , c < a
9    [NEWLINE]           
10   [IF]                if
10   [SPAREN_OPEN]       (
10   [WORD]              b
10   [COMPARE]           <
10   [WORD]              c
10   [SPAREN_CLOSE]      )
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [COMMENT_CPP]       // b < c < a
11   [NEWLINE]           
12   [WORD]              temp
12   [ASSIGN]            =
12   [WORD]              a
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [WORD]              a
13   [ASSIGN]            =
13   [WORD]              b
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [WORD]              b
14   [ASSIGN]            =
14   [WORD]              c
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [WORD]              c
15   [ASSIGN]            =
15   [WORD]              temp
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
17   [ELSE]              else
17   [NEWLINE]           
18   [BRACE_OPEN]        {
18   [COMMENT_CPP]       // c <=b < a
18   [NEWLINE]           
19   [TYPE]              std
19   [DC_MEMBER]         ::
19   [FUNC_CALL]         swap
19   [FPAREN_OPEN]       (
19   [WORD]              c
19   [COMMA]             ,
19   [WORD]              a
19   [FPAREN_CLOSE]      )
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [NEWLINE]           
22   [ELSE]              else
22   [NEWLINE]           
23   [BRACE_OPEN]        {
23   [COMMENT_CPP]       // b < a <=c
23   [NEWLINE]           
24   [COMMENT_CPP]       // second line of comment
24   [NEWLINE]           
25   [TYPE]              std
25   [DC_MEMBER]         ::
25   [FUNC_CALL]         swap
25   [FPAREN_OPEN]       (
25   [WORD]              a
25   [COMMA]             ,
25   [WORD]              b
25   [FPAREN_CLOSE]      )
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [BRACE_CLOSE]       }
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
28   [NUMBER]            0
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [NUMBER]            0
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [NUMBER]            0
30   [SEMICOLON]         ;
30   [NEWLINE]           
31   [IF]                if
31   [SPAREN_OPEN]       (
31   [NUMBER]            1
31   [SPAREN_CLOSE]      )
31   [VBRACE_OPEN]       
31   [COMMENT_CPP]       // always
31   [NEWLINE]           
32   [FUNC_CALL]         do_something
32   [FPAREN_OPEN]       (
32   [FPAREN_CLOSE]      )
32   [SEMICOLON]         ;
32   [VBRACE_CLOSE]      
32   [NEWLINE]           
33   [BRACE_CLOSE]       }
33   [NEWLINE]           