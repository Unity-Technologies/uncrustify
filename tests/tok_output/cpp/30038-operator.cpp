Line [Token]             Text
1    [NEWLINE]           
2    [STRUCT]            struct
2    [TYPE]              bar
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [STRUCT]            struct
3    [TYPE]              foo
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [OPERATOR]          operator
5    [FUNC_CALL]         bar*
5    [FPAREN_OPEN]       (
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [SEMICOLON]         ;
6    [NEWLINE]           
8    [CLASS]             class
8    [TYPE]              Foo
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [TYPE]              Foo
9    [OPERATOR]          operator
9    [FUNC_PROTO]        +
9    [FPAREN_OPEN]       (
9    [QUALIFIER]         const
9    [TYPE]              Foo
9    [BYREF]             &
9    [WORD]              rhs
9    [FPAREN_CLOSE]      )
9    [QUALIFIER]         const
9    [SEMICOLON]         ;
9    [NEWLINE]           
11   [QUALIFIER]         const
11   [TYPE]              Foo
11   [BYREF]             &
11   [OPERATOR]          operator
11   [FUNC_PROTO]        ==
11   [FPAREN_OPEN]       (
11   [TYPE]              Foo
11   [BYREF]             &
11   [WORD]              me
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
13   [TYPE]              bool
13   [OPERATOR]          operator
13   [FUNC_PROTO]        >
13   [FPAREN_OPEN]       (
13   [QUALIFIER]         const
13   [TYPE]              Foo
13   [BYREF]             &
13   [WORD]              rhs
13   [FPAREN_CLOSE]      )
13   [QUALIFIER]         const
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [TYPE]              InStream
15   [BYREF]             &
15   [OPERATOR]          operator
15   [FUNC_PROTO]        <<
15   [FPAREN_OPEN]       (
15   [TYPE]              InStream
15   [BYREF]             &
15   [WORD]              in
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
18   [QUALIFIER]         const
18   [TYPE]              Foo
18   [BYREF]             &
18   [TYPE]              Foo
18   [DC_MEMBER]         ::
18   [OPERATOR]          operator
18   [FUNC_DEF]          ==
18   [FPAREN_OPEN]       (
18   [TYPE]              Foo
18   [BYREF]             &
18   [WORD]              me
18   [FPAREN_CLOSE]      )
18   [NEWLINE]           
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [NEWLINE]           
22   [TYPE]              Foo
22   [TYPE]              Foo
22   [DC_MEMBER]         ::
22   [OPERATOR]          operator
22   [FUNC_DEF]          +
22   [FPAREN_OPEN]       (
22   [QUALIFIER]         const
22   [TYPE]              Foo
22   [BYREF]             &
22   [WORD]              rhs
22   [FPAREN_CLOSE]      )
22   [QUALIFIER]         const
22   [NEWLINE]           
23   [BRACE_OPEN]        {
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [NEWLINE]           
26   [TYPE]              bool
26   [TYPE]              Foo
26   [DC_MEMBER]         ::
26   [OPERATOR]          operator
26   [FUNC_DEF]          >
26   [FPAREN_OPEN]       (
26   [QUALIFIER]         const
26   [TYPE]              Foo
26   [BYREF]             &
26   [WORD]              rhs
26   [FPAREN_CLOSE]      )
26   [QUALIFIER]         const
26   [NEWLINE]           
27   [BRACE_OPEN]        {
27   [NEWLINE]           
28   [BRACE_CLOSE]       }
28   [NEWLINE]           
30   [CLASS]             class
30   [TYPE]              Example
30   [NEWLINE]           
31   [BRACE_OPEN]        {
31   [NEWLINE]           
32   [TYPE]              char
32   [WORD]              m_array
32   [SQUARE_OPEN]       [
32   [NUMBER]            256
32   [SQUARE_CLOSE]      ]
32   [SEMICOLON]         ;
32   [NEWLINE]           
34   [TYPE]              Example
34   [BYREF]             &
34   [OPERATOR]          operator
34   [FUNC_PROTO]        =
34   [FPAREN_OPEN]       (
34   [QUALIFIER]         const
34   [TYPE]              Example
34   [BYREF]             &
34   [WORD]              rhs
34   [FPAREN_CLOSE]      )
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [TYPE]              Example
35   [BYREF]             &
35   [OPERATOR]          operator
35   [FUNC_PROTO]        +=
35   [FPAREN_OPEN]       (
35   [QUALIFIER]         const
35   [TYPE]              Example
35   [BYREF]             &
35   [WORD]              rhs
35   [FPAREN_CLOSE]      )
35   [SEMICOLON]         ;
35   [NEWLINE]           
36   [QUALIFIER]         const
36   [TYPE]              Example
36   [OPERATOR]          operator
36   [FUNC_PROTO]        +
36   [FPAREN_OPEN]       (
36   [QUALIFIER]         const
36   [TYPE]              Example
36   [BYREF]             &
36   [WORD]              other
36   [FPAREN_CLOSE]      )
36   [QUALIFIER]         const
36   [SEMICOLON]         ;
36   [NEWLINE]           
37   [TYPE]              bool
37   [OPERATOR]          operator
37   [FUNC_PROTO]        ==
37   [FPAREN_OPEN]       (
37   [QUALIFIER]         const
37   [TYPE]              Example
37   [BYREF]             &
37   [WORD]              other
37   [FPAREN_CLOSE]      )
37   [QUALIFIER]         const
37   [SEMICOLON]         ;
37   [NEWLINE]           
38   [TYPE]              bool
38   [OPERATOR]          operator
38   [FUNC_PROTO]        !=
38   [FPAREN_OPEN]       (
38   [QUALIFIER]         const
38   [TYPE]              Example
38   [BYREF]             &
38   [WORD]              other
38   [FPAREN_CLOSE]      )
38   [QUALIFIER]         const
38   [SEMICOLON]         ;
38   [NEWLINE]           
39   [TYPE]              Example
39   [OPERATOR]          operator
39   [FUNC_PROTO]        +
39   [FPAREN_OPEN]       (
39   [QUALIFIER]         const
39   [TYPE]              Example
39   [BYREF]             &
39   [WORD]              x
39   [COMMA]             ,
39   [QUALIFIER]         const
39   [TYPE]              Example
39   [BYREF]             &
39   [WORD]              y
39   [FPAREN_CLOSE]      )
39   [SEMICOLON]         ;
39   [NEWLINE]           
40   [TYPE]              Example
40   [OPERATOR]          operator
40   [FUNC_PROTO]        *
40   [FPAREN_OPEN]       (
40   [QUALIFIER]         const
40   [TYPE]              Example
40   [BYREF]             &
40   [WORD]              x
40   [COMMA]             ,
40   [QUALIFIER]         const
40   [TYPE]              Example
40   [BYREF]             &
40   [WORD]              y
40   [FPAREN_CLOSE]      )
40   [SEMICOLON]         ;
40   [NEWLINE]           
42   [TYPE]              double
42   [BYREF]             &
42   [OPERATOR]          operator
42   [FUNC_PROTO]        ()
42   [FPAREN_OPEN]       (
42   [TYPE]              int
42   [WORD]              row
42   [COMMA]             ,
42   [TYPE]              int
42   [WORD]              col
42   [FPAREN_CLOSE]      )
42   [SEMICOLON]         ;
42   [NEWLINE]           
43   [TYPE]              double
43   [OPERATOR]          operator
43   [FUNC_PROTO]        ()
43   [FPAREN_OPEN]       (
43   [TYPE]              int
43   [WORD]              row
43   [COMMA]             ,
43   [TYPE]              int
43   [WORD]              col
43   [FPAREN_CLOSE]      )
43   [QUALIFIER]         const
43   [SEMICOLON]         ;
43   [NEWLINE]           
44   [TYPE]              void
44   [OPERATOR]          operator
44   [FUNC_PROTO]        ++
44   [FPAREN_OPEN]       (
44   [FPAREN_CLOSE]      )
44   [SEMICOLON]         ;
44   [NEWLINE]           
45   [TYPE]              int
45   [BYREF]             &
45   [OPERATOR]          operator
45   [FUNC_PROTO]        *
45   [FPAREN_OPEN]       (
45   [FPAREN_CLOSE]      )
45   [SEMICOLON]         ;
45   [NEWLINE]           
46   [TYPE]              Example
46   [BYREF]             &
46   [OPERATOR]          operator
46   [FUNC_PROTO]        ++
46   [FPAREN_OPEN]       (
46   [FPAREN_CLOSE]      )
46   [SEMICOLON]         ;
46   [COMMENT_CPP]       // prefix ++
46   [NEWLINE]           
47   [TYPE]              Example
47   [OPERATOR]          operator
47   [FUNC_PROTO]        ++
47   [FPAREN_OPEN]       (
47   [TYPE]              int
47   [FPAREN_CLOSE]      )
47   [SEMICOLON]         ;
47   [COMMENT_CPP]       // postfix ++
47   [NEWLINE]           
49   [TYPE]              bool
49   [OPERATOR]          operator
49   [FUNC_PROTO]        <
49   [FPAREN_OPEN]       (
49   [QUALIFIER]         const
49   [TYPE]              Example
49   [BYREF]             &
49   [WORD]              lhs
49   [COMMA]             ,
49   [QUALIFIER]         const
49   [TYPE]              Example
49   [BYREF]             &
49   [WORD]              rhs
49   [FPAREN_CLOSE]      )
49   [QUALIFIER]         const
49   [SEMICOLON]         ;
49   [NEWLINE]           
51   [TYPE]              int
51   [OPERATOR]          operator
51   [FUNC_DEF]          ()
51   [FPAREN_OPEN]       (
51   [TYPE]              int
51   [WORD]              index
51   [FPAREN_CLOSE]      )
51   [NEWLINE]           
52   [BRACE_OPEN]        {
52   [NEWLINE]           
53   [WORD]              i
53   [ASSIGN]            =
53   [INV]               ~
53   [INV]               ~
53   [NUMBER]            3
53   [SEMICOLON]         ;
53   [NEWLINE]           
54   [RETURN]            return
54   [WORD]              index
54   [ARITH]             +
54   [NUMBER]            1
54   [SEMICOLON]         ;
54   [NEWLINE]           
55   [BRACE_CLOSE]       }
55   [NEWLINE]           
57   [TYPE]              char
57   [BYREF]             &
57   [OPERATOR]          operator
57   [FUNC_DEF]          []
57   [FPAREN_OPEN]       (
57   [TYPE]              unsigned
57   [WORD]              i
57   [FPAREN_CLOSE]      )
57   [NEWLINE]           
58   [BRACE_OPEN]        {
58   [NEWLINE]           
59   [RETURN]            return
59   [WORD]              m_array
59   [SQUARE_OPEN]       [
59   [WORD]              i
59   [ARITH]             &
59   [NUMBER]            0xff
59   [SQUARE_CLOSE]      ]
59   [SEMICOLON]         ;
59   [NEWLINE]           
60   [BRACE_CLOSE]       }
60   [NEWLINE]           
61   [BRACE_CLOSE]       }
61   [NEWLINE]           
62   [TYPE]              bool
62   [TYPE]              Example
62   [DC_MEMBER]         ::
62   [OPERATOR]          operator
62   [FUNC_DEF]          ==
62   [FPAREN_OPEN]       (
62   [QUALIFIER]         const
62   [TYPE]              Example
62   [BYREF]             &
62   [WORD]              other
62   [FPAREN_CLOSE]      )
62   [QUALIFIER]         const
62   [NEWLINE]           
63   [BRACE_OPEN]        {
63   [NEWLINE]           
64   [COMMENT]           /*TODO: compare something? */
64   [NEWLINE]           
65   [RETURN]            return
65   [WORD]              false
65   [SEMICOLON]         ;
65   [NEWLINE]           
66   [BRACE_CLOSE]       }
66   [NEWLINE]           
67   [TYPE]              bool
67   [TYPE]              Example
67   [DC_MEMBER]         ::
67   [OPERATOR]          operator
67   [FUNC_DEF]          !=
67   [FPAREN_OPEN]       (
67   [QUALIFIER]         const
67   [TYPE]              Example
67   [BYREF]             &
67   [WORD]              other
67   [FPAREN_CLOSE]      )
67   [QUALIFIER]         const
67   [NEWLINE]           
68   [BRACE_OPEN]        {
68   [NEWLINE]           
69   [RETURN]            return
69   [NOT]               !
69   [OPERATOR]          operator
69   [FUNC_CALL]         ==
69   [FPAREN_OPEN]       (
69   [WORD]              other
69   [FPAREN_CLOSE]      )
69   [SEMICOLON]         ;
69   [NEWLINE]           
70   [BRACE_CLOSE]       }
70   [NEWLINE]           
73   [TYPE]              void
73   [FUNC_DEF]          a
73   [FPAREN_OPEN]       (
73   [FPAREN_CLOSE]      )
73   [BRACE_OPEN]        {
73   [NEWLINE]           
74   [TYPE]              Op
74   [WORD]              op
74   [ASSIGN]            =
74   [ADDR]              &
74   [TYPE]              X
74   [DC_MEMBER]         ::
74   [OPERATOR]          operator
74   [OPERATOR_VAL]      ==
74   [SEMICOLON]         ;
74   [NEWLINE]           
75   [IF]                if
75   [SPAREN_OPEN]       (
75   [NOT]               !
75   [WORD]              A
75   [SPAREN_CLOSE]      )
75   [VBRACE_OPEN]       
75   [NEWLINE]           
76   [IF]                if
76   [SPAREN_OPEN]       (
76   [WORD]              op
76   [COMPARE]           !=
76   [ADDR]              &
76   [TYPE]              X
76   [DC_MEMBER]         ::
76   [OPERATOR]          operator
76   [OPERATOR_VAL]      ==
76   [SPAREN_CLOSE]      )
76   [VBRACE_OPEN]       
76   [NEWLINE]           
77   [FUNC_CALL]         A
77   [FPAREN_OPEN]       (
77   [NUMBER]            1
77   [FPAREN_CLOSE]      )
77   [ASSIGN]            =
77   [WORD]              a
77   [SEMICOLON]         ;
77   [VBRACE_CLOSE]      
77   [VBRACE_CLOSE]      
77   [NEWLINE]           
78   [IF]                if
78   [SPAREN_OPEN]       (
78   [NOT]               !
78   [WORD]              A
78   [SPAREN_CLOSE]      )
78   [BRACE_OPEN]        {
78   [NEWLINE]           
79   [IF]                if
79   [SPAREN_OPEN]       (
79   [WORD]              op
79   [COMPARE]           !=
79   [ADDR]              &
79   [TYPE]              X
79   [DC_MEMBER]         ::
79   [OPERATOR]          operator
79   [OPERATOR_VAL]      ==
79   [SPAREN_CLOSE]      )
79   [VBRACE_OPEN]       
79   [NEWLINE]           
80   [FUNC_CALL]         A
80   [FPAREN_OPEN]       (
80   [NUMBER]            1
80   [FPAREN_CLOSE]      )
80   [ASSIGN]            =
80   [WORD]              a
80   [SEMICOLON]         ;
80   [VBRACE_CLOSE]      
80   [NEWLINE]           
81   [BRACE_CLOSE]       }
81   [NEWLINE]           
82   [BRACE_CLOSE]       }
82   [NEWLINE]           
84   [TYPE]              void
84   [PTR_TYPE]          *
84   [OPERATOR]          operator
84   [FUNC_PROTO]        new
84   [FPAREN_OPEN]       (
84   [TYPE]              std
84   [DC_MEMBER]         ::
84   [TYPE]              size_t
84   [FPAREN_CLOSE]      )
84   [THROW]             throw
84   [PAREN_OPEN]        (
84   [TYPE]              std
84   [DC_MEMBER]         ::
84   [WORD]              bad_alloc
84   [PAREN_CLOSE]       )
84   [SEMICOLON]         ;
84   [NEWLINE]           
85   [TYPE]              void
85   [PTR_TYPE]          *
85   [OPERATOR]          operator
85   [FUNC_PROTO]        new[]
85   [FPAREN_OPEN]       (
85   [TYPE]              std
85   [DC_MEMBER]         ::
85   [TYPE]              size_t
85   [FPAREN_CLOSE]      )
85   [THROW]             throw
85   [PAREN_OPEN]        (
85   [TYPE]              std
85   [DC_MEMBER]         ::
85   [WORD]              bad_alloc
85   [PAREN_CLOSE]       )
85   [SEMICOLON]         ;
85   [NEWLINE]           
86   [TYPE]              void
86   [OPERATOR]          operator
86   [FUNC_PROTO]        delete
86   [FPAREN_OPEN]       (
86   [TYPE]              void
86   [PTR_TYPE]          *
86   [FPAREN_CLOSE]      )
86   [THROW]             throw
86   [PAREN_OPEN]        (
86   [PAREN_CLOSE]       )
86   [SEMICOLON]         ;
86   [NEWLINE]           
87   [TYPE]              void
87   [OPERATOR]          operator
87   [FUNC_PROTO]        delete[]
87   [FPAREN_OPEN]       (
87   [TYPE]              void
87   [PTR_TYPE]          *
87   [FPAREN_CLOSE]      )
87   [THROW]             throw
87   [PAREN_OPEN]        (
87   [PAREN_CLOSE]       )
87   [SEMICOLON]         ;
87   [NEWLINE]           