Line [Token]             Text
1    [NEWLINE]           
2    [COMMENT_CPP]       //zero
2    [NEWLINE]           
3    [COMMENT_CPP]       // one
3    [NEWLINE]           
4    [COMMENT_CPP]       //  two
4    [NEWLINE]           
5    [COMMENT_CPP]       //   three
5    [NEWLINE]           
6    [TYPE]              void
6    [NEWLINE]           
6    [FUNC_PROTO]        foo
6    [FPAREN_OPEN]       (
6    [TYPE]              void
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
8    [STRUCT]            struct
8    [TYPE]              A
8    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [PRIVATE]           public
10   [PRIVATE_COLON]     :
10   [NEWLINE]           
11   [TYPE]              long_complicated_type
11   [FUNC_PROTO]        f
11   [FPAREN_OPEN]       (
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [TYPE]              A
12   [BYREF]             &
12   [OPERATOR]          operator
12   [FUNC_PROTO]        +
12   [FPAREN_OPEN]       (
12   [QUALIFIER]         const
12   [TYPE]              A
12   [BYREF]             &
12   [WORD]              other
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [TYPE]              A
15   [BYREF]             &
15   [NEWLINE]           
15   [TYPE]              A
15   [DC_MEMBER]         ::
15   [OPERATOR]          operator
15   [FUNC_DEF]          +
15   [FPAREN_OPEN]       (
15   [QUALIFIER]         const
15   [TYPE]              A
15   [BYREF]             &
15   [WORD]              other
15   [FPAREN_CLOSE]      )
15   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
18   [TYPE]              B
18   [NEWLINE]           
19   [OPERATOR]          operator
19   [FUNC_DEF]          +
19   [FPAREN_OPEN]       (
19   [QUALIFIER]         const
19   [TYPE]              B
19   [BYREF]             &
19   [WORD]              other
19   [FPAREN_CLOSE]      )
19   [NEWLINE]           
20   [BRACE_OPEN]        {
20   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [NEWLINE]           
22   [TYPE]              B
22   [NEWLINE]           
22   [FUNC_DEF]          foo
22   [FPAREN_OPEN]       (
22   [QUALIFIER]         const
22   [TYPE]              B
22   [BYREF]             &
22   [WORD]              other
22   [FPAREN_CLOSE]      )
22   [NEWLINE]           
23   [BRACE_OPEN]        {
23   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           
25   [CLASS]             class
25   [TYPE]              A
25   [NEWLINE]           
26   [BRACE_OPEN]        {
26   [NEWLINE]           
27   [PRIVATE]           public
27   [PRIVATE_COLON]     :
27   [NEWLINE]           
28   [TYPE]              int
28   [FUNC_DEF]          aFunct
28   [FPAREN_OPEN]       (
28   [FPAREN_CLOSE]      )
28   [BRACE_OPEN]        {
28   [NEWLINE]           
28   [RETURN]            return
28   [WORD]              a
28   [SEMICOLON]         ;
28   [NEWLINE]           
28   [BRACE_CLOSE]       }
28   [NEWLINE]           
29   [TYPE]              int
29   [FUNC_PROTO]        bFunc
29   [FPAREN_OPEN]       (
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [SEMICOLON]         ;
30   [NEWLINE]           
32   [COMMENT_CPP]       // Another file
32   [NEWLINE]           
33   [TYPE]              int
33   [NEWLINE]           
34   [TYPE]              A
34   [DC_MEMBER]         ::
34   [FUNC_DEF]          bFunc
34   [FPAREN_OPEN]       (
34   [FPAREN_CLOSE]      )
34   [NEWLINE]           
35   [BRACE_OPEN]        {
35   [NEWLINE]           
36   [COMMENT_CPP]       // some code
36   [NEWLINE]           
37   [BRACE_CLOSE]       }
37   [NEWLINE]           
39   [TEMPLATE]          template
39   [ANGLE_OPEN]        <
39   [TYPENAME]          typename
39   [TYPE]              T
39   [ANGLE_CLOSE]       >
39   [NEWLINE]           
40   [TYPENAME]          typename
40   [TYPE]              Foo
40   [ANGLE_OPEN]        <
40   [TYPE]              T
40   [ANGLE_CLOSE]       >
40   [DC_MEMBER]         ::
40   [TYPE]              Type
40   [NEWLINE]           
40   [TYPE]              Foo
40   [ANGLE_OPEN]        <
40   [TYPE]              T
40   [ANGLE_CLOSE]       >
40   [DC_MEMBER]         ::
40   [FUNC_DEF]          Func
40   [FPAREN_OPEN]       (
40   [FPAREN_CLOSE]      )
40   [NEWLINE]           
41   [BRACE_OPEN]        {
41   [NEWLINE]           
42   [BRACE_CLOSE]       }
42   [NEWLINE]           
44   [TYPE]              void
44   [NEWLINE]           
44   [TYPE]              Foo
44   [DC_MEMBER]         ::
44   [FUNC_DEF]          bar
44   [FPAREN_OPEN]       (
44   [FPAREN_CLOSE]      )
44   [BRACE_OPEN]        {
44   [NEWLINE]           
44   [BRACE_CLOSE]       }
44   [NEWLINE]           
46   [NAMESPACE]         namespace
46   [WORD]              foo
46   [BRACE_OPEN]        {
46   [NEWLINE]           
47   [TYPE]              Foo
47   [DC_MEMBER]         ::
47   [FUNC_CLASS_DEF]    Foo
47   [FPAREN_OPEN]       (
47   [FPAREN_CLOSE]      )
47   [BRACE_OPEN]        {
47   [NEWLINE]           
47   [BRACE_CLOSE]       }
47   [NEWLINE]           
48   [BRACE_CLOSE]       }
48   [NEWLINE]           
50   [TYPE]              Foo
50   [DC_MEMBER]         ::
50   [DESTRUCTOR]        ~
50   [FUNC_CLASS_DEF]    Foo
50   [FPAREN_OPEN]       (
50   [FPAREN_CLOSE]      )
50   [BRACE_OPEN]        {
50   [NEWLINE]           
50   [BRACE_CLOSE]       }
50   [NEWLINE]           
52   [CLASS]             class
52   [TYPE]              Object
52   [NEWLINE]           
53   [BRACE_OPEN]        {
53   [NEWLINE]           
54   [DESTRUCTOR]        ~
54   [FUNC_CLASS_PROTO]    Object
54   [FPAREN_OPEN]       (
54   [TYPE]              void
54   [FPAREN_CLOSE]      )
54   [SEMICOLON]         ;
54   [NEWLINE]           
55   [BRACE_CLOSE]       }
55   [SEMICOLON]         ;
55   [NEWLINE]           
57   [TEMPLATE]          template
57   [ANGLE_OPEN]        <
57   [TYPE]              class
57   [TYPE]              T
57   [ANGLE_CLOSE]       >
57   [NEWLINE]           
58   [TYPE]              void
58   [NEWLINE]           
58   [TYPE]              SampleClassTemplate
58   [ANGLE_OPEN]        <
58   [TYPE]              T
58   [ANGLE_CLOSE]       >
58   [DC_MEMBER]         ::
58   [FUNC_DEF]          connect
58   [FPAREN_OPEN]       (
58   [FPAREN_CLOSE]      )
58   [NEWLINE]           
59   [BRACE_OPEN]        {
59   [NEWLINE]           
60   [BRACE_CLOSE]       }
60   [NEWLINE]           
62   [TEMPLATE]          template
62   [ANGLE_OPEN]        <
62   [ANGLE_CLOSE]       >
62   [NEWLINE]           
63   [QUALIFIER]         inline
63   [TYPE]              void
63   [NEWLINE]           
63   [FUNC_DEF]          bar
63   [ANGLE_OPEN]        <
63   [TYPE]              MyType
63   [ANGLE_CLOSE]       >
63   [FPAREN_OPEN]       (
63   [TYPE]              MyType
63   [WORD]              r
63   [FPAREN_CLOSE]      )
63   [NEWLINE]           
64   [BRACE_OPEN]        {
64   [NEWLINE]           
65   [FUNC_CALL]         foo
65   [FPAREN_OPEN]       (
65   [WORD]              r
65   [FPAREN_CLOSE]      )
65   [SEMICOLON]         ;
65   [NEWLINE]           
66   [BRACE_CLOSE]       }
66   [NEWLINE]           
68   [TEMPLATE]          template
68   [ANGLE_OPEN]        <
68   [TYPE]              T
68   [ANGLE_CLOSE]       >
68   [NEWLINE]           
69   [QUALIFIER]         inline
69   [TYPE]              void
69   [NEWLINE]           
69   [FUNC_DEF]          baz
69   [ANGLE_OPEN]        <
69   [ANGLE_CLOSE]       >
69   [FPAREN_OPEN]       (
69   [TYPE]              T
69   [WORD]              r
69   [FPAREN_CLOSE]      )
69   [NEWLINE]           
70   [BRACE_OPEN]        {
70   [NEWLINE]           
71   [FUNC_CALL]         foo
71   [FPAREN_OPEN]       (
71   [WORD]              r
71   [FPAREN_CLOSE]      )
71   [SEMICOLON]         ;
71   [NEWLINE]           
72   [BRACE_CLOSE]       }
72   [NEWLINE]           