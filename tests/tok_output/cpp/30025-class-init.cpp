Line [Token]             Text
1    [NEWLINE]           
2    [CLASS]             class
2    [TYPE]              Foo
2    [CLASS_COLON]       :
2    [NEWLINE]           
2    [QUALIFIER]         public
2    [WORD]              Bar
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [SEMICOLON]         ;
5    [NEWLINE]           
7    [PREPROC]           #
7    [PP_DEFINE]         define
7    [MACRO_FUNC]        CTOR
7    [FPAREN_OPEN]       (
7    [WORD]              i
7    [COMMA]             ,
7    [WORD]              _
7    [FPAREN_CLOSE]      )
7    [CLASS_COLON]       :
7    [NL_CONT]           \
7    [FUNC_CALL]         T
7    [FPAREN_OPEN]       (
7    [FUNC_CALL]         X
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [FPAREN_CLOSE]      )
7    [COMMA]             ,
7    [NL_CONT]           \
8    [FUNC_CALL]         y
8    [FPAREN_OPEN]       (
8    [FPAREN_CLOSE]      )
8    [NL_CONT]           \
9    [BRACE_OPEN]        {
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
11   [CLASS]             class
11   [TYPE]              Foo2
11   [CLASS_COLON]       :
11   [NEWLINE]           
12   [QUALIFIER]         public
12   [WORD]              Bar
12   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [SEMICOLON]         ;
15   [NEWLINE]           
17   [CLASS]             class
17   [TYPE]              GLOX_API
17   [WORD]              ClientBase
17   [CLASS_COLON]       :
17   [NEWLINE]           
17   [QUALIFIER]         public
17   [WORD]              Class
17   [COMMA]             ,
17   [NEWLINE]           
17   [QUALIFIER]         public
17   [WORD]              OtherClass
17   [COMMA]             ,
17   [NEWLINE]           
18   [QUALIFIER]         public
18   [WORD]              ThridClass
18   [COMMA]             ,
18   [NEWLINE]           
18   [QUALIFIER]         public
18   [WORD]              ForthClass
18   [NEWLINE]           
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [PRIVATE]           public
20   [PRIVATE_COLON]     :
20   [NEWLINE]           
21   [FUNC_CLASS_DEF]    ClientBase
21   [FPAREN_OPEN]       (
21   [QUALIFIER]         const
21   [TYPE]              ClientBase
21   [BYREF]             &
21   [WORD]              f
21   [FPAREN_CLOSE]      )
21   [BRACE_OPEN]        {
21   [NEWLINE]           
22   [COMMENT_CPP]       // do something
22   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [SEMICOLON]         ;
24   [NEWLINE]           
26   [TYPE]              ClientBase
26   [DC_MEMBER]         ::
26   [FUNC_CLASS_DEF]    ClientBase
26   [FPAREN_OPEN]       (
26   [QUALIFIER]         const
26   [TYPE]              std
26   [DC_MEMBER]         ::
26   [TYPE]              string
26   [BYREF]             &
26   [WORD]              ns
26   [COMMA]             ,
26   [NEWLINE]           
27   [QUALIFIER]         const
27   [TYPE]              std
27   [DC_MEMBER]         ::
27   [TYPE]              string
27   [BYREF]             &
27   [WORD]              ns1
27   [COMMA]             ,
27   [NEWLINE]           
28   [QUALIFIER]         const
28   [TYPE]              std
28   [DC_MEMBER]         ::
28   [TYPE]              string
28   [BYREF]             &
28   [WORD]              ns2
28   [FPAREN_CLOSE]      )
29   [BRACE_OPEN]        {
29   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [NEWLINE]           
33   [TYPE]              Foo
33   [DC_MEMBER]         ::
33   [FUNC_CLASS_DEF]    Foo
33   [FPAREN_OPEN]       (
33   [TYPE]              int
33   [WORD]              bar
33   [FPAREN_CLOSE]      )
33   [CONSTR_COLON]      :
33   [NEWLINE]           
33   [FUNC_CTOR_VAR]     someVar
33   [FPAREN_OPEN]       (
33   [WORD]              bar
33   [FPAREN_CLOSE]      )
33   [COMMA]             ,
33   [NEWLINE]           
33   [FUNC_CTOR_VAR]     othervar
33   [FPAREN_OPEN]       (
33   [NUMBER]            0
33   [FPAREN_CLOSE]      )
34   [BRACE_OPEN]        {
34   [NEWLINE]           
35   [BRACE_CLOSE]       }
35   [NEWLINE]           
37   [TYPE]              Foo
37   [DC_MEMBER]         ::
37   [FUNC_CLASS_DEF]    Foo
37   [FPAREN_OPEN]       (
37   [TYPE]              int
37   [WORD]              bar
37   [FPAREN_CLOSE]      )
37   [CONSTR_COLON]      :
37   [NEWLINE]           
37   [FUNC_CTOR_VAR]     someVar
37   [FPAREN_OPEN]       (
37   [WORD]              bar
37   [FPAREN_CLOSE]      )
37   [COMMA]             ,
37   [NEWLINE]           
38   [FUNC_CTOR_VAR]     othervar
38   [FPAREN_OPEN]       (
38   [NUMBER]            0
38   [FPAREN_CLOSE]      )
39   [BRACE_OPEN]        {
39   [NEWLINE]           
40   [BRACE_CLOSE]       }
40   [NEWLINE]           
42   [TYPE]              Foo
42   [DC_MEMBER]         ::
42   [FUNC_CLASS_DEF]    Foo
42   [FPAREN_OPEN]       (
42   [TYPE]              int
42   [WORD]              bar
42   [FPAREN_CLOSE]      )
43   [CONSTR_COLON]      :
42   [NEWLINE]           
43   [FUNC_CTOR_VAR]     someVar
43   [FPAREN_OPEN]       (
43   [WORD]              bar
43   [FPAREN_CLOSE]      )
43   [COMMA]             ,
43   [NEWLINE]           
43   [FUNC_CTOR_VAR]     othervar
43   [FPAREN_OPEN]       (
43   [NUMBER]            0
43   [FPAREN_CLOSE]      )
44   [BRACE_OPEN]        {
44   [NEWLINE]           
45   [BRACE_CLOSE]       }
45   [NEWLINE]           
47   [TYPE]              Foo
47   [DC_MEMBER]         ::
47   [FUNC_CLASS_DEF]    Foo
47   [FPAREN_OPEN]       (
47   [TYPE]              int
47   [WORD]              bar
47   [FPAREN_CLOSE]      )
47   [CONSTR_COLON]      :
47   [NEWLINE]           
48   [FUNC_CTOR_VAR]     someVar
48   [FPAREN_OPEN]       (
48   [WORD]              bar
48   [FPAREN_CLOSE]      )
48   [COMMA]             ,
48   [NEWLINE]           
48   [FUNC_CTOR_VAR]     othervar
48   [FPAREN_OPEN]       (
48   [NUMBER]            0
48   [FPAREN_CLOSE]      )
49   [BRACE_OPEN]        {
49   [NEWLINE]           
50   [BRACE_CLOSE]       }
50   [NEWLINE]           
52   [TYPE]              Foo
52   [DC_MEMBER]         ::
52   [FUNC_CLASS_DEF]    Foo
52   [FPAREN_OPEN]       (
52   [TYPE]              int
52   [WORD]              bar
52   [FPAREN_CLOSE]      )
52   [CONSTR_COLON]      :
52   [NEWLINE]           
53   [FUNC_CTOR_VAR]     someVar
53   [FPAREN_OPEN]       (
53   [WORD]              bar
53   [FPAREN_CLOSE]      )
53   [COMMA]             ,
53   [NEWLINE]           
54   [FUNC_CTOR_VAR]     othervar
54   [FPAREN_OPEN]       (
54   [NUMBER]            0
54   [FPAREN_CLOSE]      )
55   [BRACE_OPEN]        {
55   [NEWLINE]           
56   [BRACE_CLOSE]       }
56   [NEWLINE]           
58   [TYPE]              Foo
58   [DC_MEMBER]         ::
58   [FUNC_CLASS_DEF]    Foo
58   [FPAREN_OPEN]       (
58   [TYPE]              int
58   [WORD]              bar
58   [FPAREN_CLOSE]      )
59   [CONSTR_COLON]      :
58   [NEWLINE]           
59   [FUNC_CTOR_VAR]     someVar
59   [FPAREN_OPEN]       (
59   [WORD]              bar
59   [FPAREN_CLOSE]      )
59   [COMMA]             ,
59   [NEWLINE]           
60   [FUNC_CTOR_VAR]     othervar
60   [FPAREN_OPEN]       (
60   [NUMBER]            0
60   [FPAREN_CLOSE]      )
61   [BRACE_OPEN]        {
61   [NEWLINE]           
62   [BRACE_CLOSE]       }
62   [NEWLINE]           