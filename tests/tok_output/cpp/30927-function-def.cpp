Line [Token]             Text
1    [TYPE]              int
1    [BYREF]             &
1    [FUNC_DEF]          Function
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [QUALIFIER]         static
3    [TYPE]              int
3    [WORD]              x
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [RETURN]            return
4    [PAREN_OPEN]        (
4    [WORD]              x
4    [PAREN_CLOSE]       )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [NEWLINE]           
7    [TYPE]              void
7    [FUNC_PROTO]        foo1
7    [FPAREN_OPEN]       (
7    [TYPE]              int
7    [WORD]              param1
7    [COMMA]             ,
7    [TYPE]              int
7    [WORD]              param2
7    [COMMA]             ,
7    [TYPE]              char
7    [PTR_TYPE]          *
7    [WORD]              param2
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
9    [TYPE]              void
9    [FUNC_PROTO]        foo2
9    [FPAREN_OPEN]       (
9    [TYPE]              int
9    [WORD]              param1
9    [COMMA]             ,
9    [NEWLINE]           
10   [TYPE]              int
10   [WORD]              param2
10   [COMMA]             ,
10   [NEWLINE]           
11   [TYPE]              char
11   [PTR_TYPE]          *
11   [WORD]              param2
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
13   [TYPE]              void
13   [FUNC_PROTO]        foo3
13   [FPAREN_OPEN]       (
13   [TYPE]              int
13   [WORD]              param1
13   [COMMA]             ,
13   [NEWLINE]           
14   [TYPE]              int
14   [WORD]              param2
14   [COMMA]             ,
14   [COMMENT_CPP]       // comment
14   [NEWLINE]           
15   [TYPE]              char
15   [PTR_TYPE]          *
15   [WORD]              param2
15   [NEWLINE]           
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
18   [STRUCT]            struct
18   [TYPE]              whoopee
18   [PTR_TYPE]          *
18   [FUNC_PROTO]        foo4
18   [FPAREN_OPEN]       (
18   [TYPE]              int
18   [WORD]              param1
18   [COMMA]             ,
18   [TYPE]              int
18   [WORD]              param2
18   [COMMA]             ,
18   [TYPE]              char
18   [PTR_TYPE]          *
18   [WORD]              param2
18   [COMMENT]           /* comment */
18   [FPAREN_CLOSE]      )
18   [SEMICOLON]         ;
18   [NEWLINE]           
20   [QUALIFIER]         const
20   [STRUCT]            struct
20   [TYPE]              snickers
20   [PTR_TYPE]          *
20   [NEWLINE]           
21   [FUNC_PROTO]        foo5
21   [FPAREN_OPEN]       (
21   [TYPE]              int
21   [WORD]              param1
21   [COMMA]             ,
21   [TYPE]              int
21   [WORD]              param2
21   [COMMA]             ,
21   [TYPE]              char
21   [PTR_TYPE]          *
21   [WORD]              param2
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [NEWLINE]           
24   [TYPE]              void
24   [FUNC_DEF]          foo
24   [FPAREN_OPEN]       (
24   [TYPE]              int
24   [WORD]              param1
24   [COMMA]             ,
24   [TYPE]              int
24   [WORD]              param2
24   [COMMA]             ,
24   [TYPE]              char
24   [PTR_TYPE]          *
24   [WORD]              param2
24   [FPAREN_CLOSE]      )
24   [NEWLINE]           
25   [BRACE_OPEN]        {
25   [NEWLINE]           
26   [FUNC_CALL]         printf
26   [FPAREN_OPEN]       (
26   [STRING]            "boo!\n"
26   [FPAREN_CLOSE]      )
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
29   [TYPE]              int
29   [TYPE]              classname
29   [DC_MEMBER]         ::
29   [FUNC_PROTO]        method
29   [FPAREN_OPEN]       (
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [NEWLINE]           
31   [TYPE]              int
31   [TYPE]              classname
31   [DC_MEMBER]         ::
31   [FUNC_DEF]          method
31   [FPAREN_OPEN]       (
31   [FPAREN_CLOSE]      )
31   [NEWLINE]           
32   [BRACE_OPEN]        {
32   [NEWLINE]           
33   [FUNC_CALL]         foo
33   [FPAREN_OPEN]       (
33   [FPAREN_CLOSE]      )
33   [SEMICOLON]         ;
33   [NEWLINE]           
34   [BRACE_CLOSE]       }
34   [NEWLINE]           
36   [TYPE]              int
36   [NEWLINE]           
37   [TYPE]              classname
37   [DC_MEMBER]         ::
37   [FUNC_PROTO]        method2
37   [FPAREN_OPEN]       (
37   [FPAREN_CLOSE]      )
37   [SEMICOLON]         ;
37   [NEWLINE]           
39   [TYPE]              int
39   [NEWLINE]           
40   [TYPE]              classname
40   [DC_MEMBER]         ::
40   [FUNC_DEF]          method2
40   [FPAREN_OPEN]       (
40   [FPAREN_CLOSE]      )
40   [NEWLINE]           
41   [BRACE_OPEN]        {
41   [NEWLINE]           
42   [FUNC_CALL]         foo2
42   [FPAREN_OPEN]       (
42   [FPAREN_CLOSE]      )
42   [SEMICOLON]         ;
42   [NEWLINE]           
43   [BRACE_CLOSE]       }
43   [NEWLINE]           
45   [QUALIFIER]         const
45   [TYPE]              int
45   [BYREF]             &
45   [TYPE]              className
45   [DC_MEMBER]         ::
45   [FUNC_DEF]          method1
45   [FPAREN_OPEN]       (
45   [TYPE]              void
45   [FPAREN_CLOSE]      )
45   [QUALIFIER]         const
45   [NEWLINE]           
46   [BRACE_OPEN]        {
46   [NEWLINE]           
47   [COMMENT_CPP]       // stuff
47   [NEWLINE]           
48   [BRACE_CLOSE]       }
48   [NEWLINE]           
50   [QUALIFIER]         const
50   [TYPE]              longtypename
50   [BYREF]             &
50   [TYPE]              className
50   [DC_MEMBER]         ::
50   [FUNC_DEF]          method2
50   [FPAREN_OPEN]       (
50   [TYPE]              void
50   [FPAREN_CLOSE]      )
50   [QUALIFIER]         const
50   [NEWLINE]           
51   [BRACE_OPEN]        {
51   [NEWLINE]           
52   [COMMENT_CPP]       // stuff
52   [NEWLINE]           
53   [BRACE_CLOSE]       }
53   [NEWLINE]           
55   [TYPE]              int
55   [BYREF]             &
55   [FUNC_PROTO]        foo
55   [FPAREN_OPEN]       (
55   [FPAREN_CLOSE]      )
55   [SEMICOLON]         ;
55   [NEWLINE]           
57   [TYPE]              int
57   [BYREF]             &
57   [FUNC_DEF]          foo
57   [FPAREN_OPEN]       (
57   [FPAREN_CLOSE]      )
57   [NEWLINE]           
58   [BRACE_OPEN]        {
58   [NEWLINE]           
59   [FUNC_CALL]         list_for_each
59   [FPAREN_OPEN]       (
59   [WORD]              a
59   [COMMA]             ,
59   [WORD]              b
59   [FPAREN_CLOSE]      )
59   [NEWLINE]           
59   [BRACE_OPEN]        {
59   [NEWLINE]           
60   [FUNC_CALL]         bar
60   [FPAREN_OPEN]       (
60   [WORD]              a
60   [FPAREN_CLOSE]      )
60   [SEMICOLON]         ;
60   [NEWLINE]           
61   [BRACE_CLOSE]       }
61   [NEWLINE]           
62   [RETURN]            return
62   [PAREN_OPEN]        (
62   [WORD]              nuts
62   [PAREN_CLOSE]       )
62   [SEMICOLON]         ;
62   [NEWLINE]           
63   [BRACE_CLOSE]       }
63   [NEWLINE]           
65   [TYPE]              void
65   [TYPE]              Foo
65   [DC_MEMBER]         ::
65   [FUNC_DEF]          bar
65   [FPAREN_OPEN]       (
65   [FPAREN_CLOSE]      )
65   [NEWLINE]           
65   [BRACE_OPEN]        {
65   [NEWLINE]           
65   [BRACE_CLOSE]       }
65   [NEWLINE]           
67   [TYPE]              Foo
67   [DC_MEMBER]         ::
67   [FUNC_CLASS_DEF]    Foo
67   [FPAREN_OPEN]       (
67   [FPAREN_CLOSE]      )
67   [NEWLINE]           
67   [BRACE_OPEN]        {
67   [NEWLINE]           
67   [BRACE_CLOSE]       }
67   [NEWLINE]           
69   [TYPE]              Foo
69   [DC_MEMBER]         ::
69   [DESTRUCTOR]        ~
69   [FUNC_CLASS_DEF]    Foo
69   [FPAREN_OPEN]       (
69   [FPAREN_CLOSE]      )
69   [NEWLINE]           
69   [BRACE_OPEN]        {
69   [NEWLINE]           
69   [BRACE_CLOSE]       }
69   [NEWLINE]           
71   [TYPE]              void
71   [FUNC_DEF]          func
71   [FPAREN_OPEN]       (
71   [TYPE]              void
71   [FPAREN_CLOSE]      )
71   [NEWLINE]           
72   [BRACE_OPEN]        {
72   [NEWLINE]           
73   [TYPE]              Directory
73   [FUNC_CTOR_VAR]     dir
73   [FPAREN_OPEN]       (
73   [STRING]            "arg"
73   [FPAREN_CLOSE]      )
73   [SEMICOLON]         ;
73   [NEWLINE]           
74   [BRACE_CLOSE]       }
74   [NEWLINE]           