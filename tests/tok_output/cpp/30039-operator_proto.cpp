Line [Token]             Text
1    [COMMENT]           /* A collection of all the different known operator prototypes in C++ */
1    [NEWLINE]           
3    [COMMENT_CPP]       // arithmetic operators
3    [NEWLINE]           
4    [TYPE]              Type1
4    [OPERATOR]          operator
4    [FUNC_PROTO]        +
4    [FPAREN_OPEN]       (
4    [QUALIFIER]         const
4    [TYPE]              Type1
4    [BYREF]             &
4    [WORD]              a
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [COMMENT_CPP]       // +a
4    [NEWLINE]           
5    [TYPE]              Type1
5    [OPERATOR]          operator
5    [FUNC_PROTO]        +
5    [FPAREN_OPEN]       (
5    [QUALIFIER]         const
5    [TYPE]              Type1
5    [BYREF]             &
5    [WORD]              a
5    [COMMA]             ,
5    [QUALIFIER]         const
5    [TYPE]              Type2
5    [BYREF]             &
5    [WORD]              b
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [COMMENT_CPP]       // a + b
5    [NEWLINE]           
6    [TYPE]              Type1
6    [BYREF]             &
6    [OPERATOR]          operator
6    [FUNC_PROTO]        ++
6    [FPAREN_OPEN]       (
6    [TYPE]              Type1
6    [BYREF]             &
6    [WORD]              a
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [COMMENT_CPP]       // ++a
6    [NEWLINE]           
7    [TYPE]              Type1
7    [OPERATOR]          operator
7    [FUNC_PROTO]        ++
7    [FPAREN_OPEN]       (
7    [TYPE]              Type1
7    [BYREF]             &
7    [WORD]              a
7    [COMMA]             ,
7    [TYPE]              int
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [COMMENT_CPP]       // a++
7    [NEWLINE]           
8    [TYPE]              Type1
8    [BYREF]             &
8    [OPERATOR]          operator
8    [FUNC_PROTO]        +=
8    [FPAREN_OPEN]       (
8    [TYPE]              Type1
8    [BYREF]             &
8    [WORD]              a
8    [COMMA]             ,
8    [QUALIFIER]         const
8    [TYPE]              Type1
8    [BYREF]             &
8    [WORD]              b
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [COMMENT_CPP]       // a += b
8    [NEWLINE]           
9    [TYPE]              Type1
9    [OPERATOR]          operator
9    [FUNC_PROTO]        -
9    [FPAREN_OPEN]       (
9    [QUALIFIER]         const
9    [TYPE]              Type1
9    [BYREF]             &
9    [WORD]              a
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [COMMENT_CPP]       // -a
9    [NEWLINE]           
10   [TYPE]              Type1
10   [BYREF]             &
10   [OPERATOR]          operator
10   [FUNC_PROTO]        --
10   [FPAREN_OPEN]       (
10   [TYPE]              Type1
10   [BYREF]             &
10   [WORD]              a
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [COMMENT_CPP]       // --a
10   [NEWLINE]           
11   [TYPE]              Type1
11   [OPERATOR]          operator
11   [FUNC_PROTO]        --
11   [FPAREN_OPEN]       (
11   [TYPE]              Type1
11   [BYREF]             &
11   [WORD]              a
11   [COMMA]             ,
11   [TYPE]              int
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [COMMENT_CPP]       // a--
11   [NEWLINE]           
12   [TYPE]              Type1
12   [BYREF]             &
12   [OPERATOR]          operator
12   [FUNC_PROTO]        -=
12   [FPAREN_OPEN]       (
12   [TYPE]              Type1
12   [BYREF]             &
12   [WORD]              a
12   [COMMA]             ,
12   [QUALIFIER]         const
12   [TYPE]              Type1
12   [BYREF]             &
12   [WORD]              b
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [COMMENT_CPP]       // a -= b
12   [NEWLINE]           
13   [TYPE]              Type1
13   [OPERATOR]          operator
13   [FUNC_PROTO]        *
13   [FPAREN_OPEN]       (
13   [QUALIFIER]         const
13   [TYPE]              Type1
13   [BYREF]             &
13   [WORD]              a
13   [COMMA]             ,
13   [QUALIFIER]         const
13   [TYPE]              Type1
13   [BYREF]             &
13   [WORD]              b
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [COMMENT_CPP]       // a * b
13   [NEWLINE]           
14   [TYPE]              Type1
14   [BYREF]             &
14   [OPERATOR]          operator
14   [FUNC_PROTO]        *=
14   [FPAREN_OPEN]       (
14   [TYPE]              Type1
14   [BYREF]             &
14   [WORD]              a
14   [COMMA]             ,
14   [QUALIFIER]         const
14   [TYPE]              Type1
14   [BYREF]             &
14   [WORD]              b
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [COMMENT_CPP]       // a *= b
14   [NEWLINE]           
15   [TYPE]              Type1
15   [OPERATOR]          operator
15   [FUNC_PROTO]        /
15   [FPAREN_OPEN]       (
15   [QUALIFIER]         const
15   [TYPE]              Type1
15   [BYREF]             &
15   [WORD]              a
15   [COMMA]             ,
15   [QUALIFIER]         const
15   [TYPE]              Type1
15   [BYREF]             &
15   [WORD]              b
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [COMMENT_CPP]       // a / b
15   [NEWLINE]           
16   [TYPE]              Type1
16   [BYREF]             &
16   [OPERATOR]          operator
16   [FUNC_PROTO]        /=
16   [FPAREN_OPEN]       (
16   [TYPE]              Type1
16   [BYREF]             &
16   [WORD]              a
16   [COMMA]             ,
16   [QUALIFIER]         const
16   [TYPE]              Type1
16   [BYREF]             &
16   [WORD]              b
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [COMMENT_CPP]       // a /= b
16   [NEWLINE]           
17   [TYPE]              Type1
17   [OPERATOR]          operator
17   [FUNC_PROTO]        %
17   [FPAREN_OPEN]       (
17   [QUALIFIER]         const
17   [TYPE]              Type1
17   [BYREF]             &
17   [WORD]              a
17   [COMMA]             ,
17   [QUALIFIER]         const
17   [TYPE]              Type1
17   [BYREF]             &
17   [WORD]              b
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [COMMENT_CPP]       // a % b
17   [NEWLINE]           
18   [TYPE]              Type1
18   [BYREF]             &
18   [OPERATOR]          operator
18   [FUNC_PROTO]        %=
18   [FPAREN_OPEN]       (
18   [TYPE]              Type1
18   [BYREF]             &
18   [WORD]              a
18   [COMMA]             ,
18   [QUALIFIER]         const
18   [TYPE]              Type1
18   [BYREF]             &
18   [WORD]              b
18   [FPAREN_CLOSE]      )
18   [SEMICOLON]         ;
18   [COMMENT_CPP]       // a %= b
18   [NEWLINE]           
20   [COMMENT_CPP]       // comparison operators
20   [NEWLINE]           
21   [TYPE]              bool
21   [OPERATOR]          operator
21   [FUNC_PROTO]        <
21   [FPAREN_OPEN]       (
21   [QUALIFIER]         const
21   [TYPE]              Type1
21   [BYREF]             &
21   [WORD]              a
21   [COMMA]             ,
21   [QUALIFIER]         const
21   [TYPE]              Type1
21   [BYREF]             &
21   [WORD]              b
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [COMMENT_CPP]       // a < b
21   [NEWLINE]           
22   [TYPE]              bool
22   [OPERATOR]          operator
22   [FUNC_PROTO]        <=
22   [FPAREN_OPEN]       (
22   [QUALIFIER]         const
22   [TYPE]              Type1
22   [BYREF]             &
22   [WORD]              a
22   [COMMA]             ,
22   [QUALIFIER]         const
22   [TYPE]              Type1
22   [BYREF]             &
22   [WORD]              b
22   [FPAREN_CLOSE]      )
22   [SEMICOLON]         ;
22   [COMMENT_CPP]       // a <= b
22   [NEWLINE]           
23   [TYPE]              bool
23   [OPERATOR]          operator
23   [FUNC_PROTO]        >
23   [FPAREN_OPEN]       (
23   [QUALIFIER]         const
23   [TYPE]              Type1
23   [BYREF]             &
23   [WORD]              a
23   [COMMA]             ,
23   [QUALIFIER]         const
23   [TYPE]              Type1
23   [BYREF]             &
23   [WORD]              b
23   [FPAREN_CLOSE]      )
23   [SEMICOLON]         ;
23   [COMMENT_CPP]       // a > b
23   [NEWLINE]           
24   [TYPE]              bool
24   [OPERATOR]          operator
24   [FUNC_PROTO]        >=
24   [FPAREN_OPEN]       (
24   [QUALIFIER]         const
24   [TYPE]              Type1
24   [BYREF]             &
24   [WORD]              a
24   [COMMA]             ,
24   [QUALIFIER]         const
24   [TYPE]              Type1
24   [BYREF]             &
24   [WORD]              b
24   [FPAREN_CLOSE]      )
24   [SEMICOLON]         ;
24   [COMMENT_CPP]       // a >= b
24   [NEWLINE]           
25   [TYPE]              bool
25   [OPERATOR]          operator
25   [FUNC_PROTO]        !=
25   [FPAREN_OPEN]       (
25   [QUALIFIER]         const
25   [TYPE]              Type1
25   [BYREF]             &
25   [WORD]              a
25   [COMMA]             ,
25   [QUALIFIER]         const
25   [TYPE]              Type1
25   [BYREF]             &
25   [WORD]              b
25   [FPAREN_CLOSE]      )
25   [SEMICOLON]         ;
25   [COMMENT_CPP]       // a != b
25   [NEWLINE]           
26   [TYPE]              bool
26   [OPERATOR]          operator
26   [FUNC_PROTO]        ==
26   [FPAREN_OPEN]       (
26   [QUALIFIER]         const
26   [TYPE]              Type1
26   [BYREF]             &
26   [WORD]              a
26   [COMMA]             ,
26   [QUALIFIER]         const
26   [TYPE]              Type1
26   [BYREF]             &
26   [WORD]              b
26   [FPAREN_CLOSE]      )
26   [SEMICOLON]         ;
26   [COMMENT_CPP]       // a == b
26   [NEWLINE]           
28   [COMMENT_CPP]       // logical operators
28   [NEWLINE]           
29   [TYPE]              bool
29   [OPERATOR]          operator
29   [FUNC_PROTO]        !
29   [FPAREN_OPEN]       (
29   [QUALIFIER]         const
29   [TYPE]              Type1
29   [BYREF]             &
29   [WORD]              a
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [COMMENT_CPP]       // !a
29   [NEWLINE]           
30   [TYPE]              bool
30   [OPERATOR]          operator
30   [FUNC_PROTO]        &&
30   [FPAREN_OPEN]       (
30   [QUALIFIER]         const
30   [TYPE]              Type1
30   [BYREF]             &
30   [WORD]              a
30   [COMMA]             ,
30   [QUALIFIER]         const
30   [TYPE]              Type1
30   [BYREF]             &
30   [WORD]              b
30   [FPAREN_CLOSE]      )
30   [SEMICOLON]         ;
30   [COMMENT_CPP]       // a && b
30   [NEWLINE]           
31   [TYPE]              bool
31   [OPERATOR]          operator
31   [FUNC_PROTO]        ||
31   [FPAREN_OPEN]       (
31   [QUALIFIER]         const
31   [TYPE]              Type1
31   [BYREF]             &
31   [WORD]              a
31   [COMMA]             ,
31   [QUALIFIER]         const
31   [TYPE]              Type1
31   [BYREF]             &
31   [WORD]              b
31   [FPAREN_CLOSE]      )
31   [SEMICOLON]         ;
31   [COMMENT_CPP]       // a || b
31   [NEWLINE]           
33   [COMMENT_CPP]       // bitwise operators
33   [NEWLINE]           
34   [TYPE]              Type1
34   [OPERATOR]          operator
34   [FUNC_PROTO]        <<
34   [FPAREN_OPEN]       (
34   [QUALIFIER]         const
34   [TYPE]              Type1
34   [BYREF]             &
34   [WORD]              a
34   [COMMA]             ,
34   [QUALIFIER]         const
34   [TYPE]              Type1
34   [BYREF]             &
34   [WORD]              b
34   [FPAREN_CLOSE]      )
34   [SEMICOLON]         ;
34   [COMMENT_CPP]       // a << b
34   [NEWLINE]           
35   [TYPE]              Type1
35   [BYREF]             &
35   [OPERATOR]          operator
35   [FUNC_PROTO]        <<=
35   [FPAREN_OPEN]       (
35   [TYPE]              Type1
35   [BYREF]             &
35   [WORD]              a
35   [COMMA]             ,
35   [QUALIFIER]         const
35   [TYPE]              Type1
35   [BYREF]             &
35   [WORD]              b
35   [FPAREN_CLOSE]      )
35   [SEMICOLON]         ;
35   [COMMENT_CPP]       // a <<= b
35   [NEWLINE]           
36   [TYPE]              Type1
36   [OPERATOR]          operator
36   [FUNC_PROTO]        >>
36   [FPAREN_OPEN]       (
36   [QUALIFIER]         const
36   [TYPE]              Type1
36   [BYREF]             &
36   [WORD]              a
36   [COMMA]             ,
36   [QUALIFIER]         const
36   [TYPE]              Type1
36   [BYREF]             &
36   [WORD]              b
36   [FPAREN_CLOSE]      )
36   [SEMICOLON]         ;
36   [COMMENT_CPP]       // a >> b
36   [NEWLINE]           
37   [TYPE]              Type1
37   [BYREF]             &
37   [OPERATOR]          operator
37   [FUNC_PROTO]        >>=
37   [FPAREN_OPEN]       (
37   [TYPE]              Type1
37   [BYREF]             &
37   [WORD]              a
37   [COMMA]             ,
37   [QUALIFIER]         const
37   [TYPE]              Type1
37   [BYREF]             &
37   [WORD]              b
37   [FPAREN_CLOSE]      )
37   [SEMICOLON]         ;
37   [COMMENT_CPP]       // a >>= b
37   [NEWLINE]           
38   [TYPE]              Type1
38   [OPERATOR]          operator
38   [FUNC_PROTO]        ~
38   [FPAREN_OPEN]       (
38   [QUALIFIER]         const
38   [TYPE]              Type1
38   [BYREF]             &
38   [WORD]              a
38   [FPAREN_CLOSE]      )
38   [SEMICOLON]         ;
38   [COMMENT_CPP]       // ~a
38   [NEWLINE]           
39   [TYPE]              Type1
39   [OPERATOR]          operator
39   [FUNC_PROTO]        &
39   [FPAREN_OPEN]       (
39   [QUALIFIER]         const
39   [TYPE]              Type1
39   [BYREF]             &
39   [WORD]              a
39   [COMMA]             ,
39   [QUALIFIER]         const
39   [TYPE]              Type1
39   [BYREF]             &
39   [WORD]              b
39   [FPAREN_CLOSE]      )
39   [SEMICOLON]         ;
39   [COMMENT_CPP]       // a & b
39   [NEWLINE]           
40   [TYPE]              Type1
40   [BYREF]             &
40   [OPERATOR]          operator
40   [FUNC_PROTO]        &=
40   [FPAREN_OPEN]       (
40   [TYPE]              Type1
40   [BYREF]             &
40   [WORD]              a
40   [COMMA]             ,
40   [QUALIFIER]         const
40   [TYPE]              Type1
40   [BYREF]             &
40   [WORD]              b
40   [FPAREN_CLOSE]      )
40   [SEMICOLON]         ;
40   [COMMENT_CPP]       // a &= b
40   [NEWLINE]           
41   [TYPE]              Type1
41   [OPERATOR]          operator
41   [FUNC_PROTO]        |
41   [FPAREN_OPEN]       (
41   [QUALIFIER]         const
41   [TYPE]              Type1
41   [BYREF]             &
41   [WORD]              a
41   [COMMA]             ,
41   [QUALIFIER]         const
41   [TYPE]              Type1
41   [BYREF]             &
41   [WORD]              b
41   [FPAREN_CLOSE]      )
41   [SEMICOLON]         ;
41   [COMMENT_CPP]       // a | b
41   [NEWLINE]           
42   [TYPE]              Type1
42   [BYREF]             &
42   [OPERATOR]          operator
42   [FUNC_PROTO]        |=
42   [FPAREN_OPEN]       (
42   [TYPE]              Type1
42   [BYREF]             &
42   [WORD]              a
42   [COMMA]             ,
42   [QUALIFIER]         const
42   [TYPE]              Type1
42   [BYREF]             &
42   [WORD]              b
42   [FPAREN_CLOSE]      )
42   [SEMICOLON]         ;
42   [COMMENT_CPP]       // a |= b
42   [NEWLINE]           
43   [TYPE]              Type1
43   [OPERATOR]          operator
43   [FUNC_PROTO]        ^
43   [FPAREN_OPEN]       (
43   [QUALIFIER]         const
43   [TYPE]              Type1
43   [BYREF]             &
43   [WORD]              a
43   [COMMA]             ,
43   [QUALIFIER]         const
43   [TYPE]              Type1
43   [BYREF]             &
43   [WORD]              b
43   [FPAREN_CLOSE]      )
43   [SEMICOLON]         ;
43   [COMMENT_CPP]       // a ^ b
43   [NEWLINE]           
44   [TYPE]              Type1
44   [BYREF]             &
44   [OPERATOR]          operator
44   [FUNC_PROTO]        ^=
44   [FPAREN_OPEN]       (
44   [TYPE]              Type1
44   [BYREF]             &
44   [WORD]              a
44   [COMMA]             ,
44   [QUALIFIER]         const
44   [TYPE]              Type1
44   [BYREF]             &
44   [WORD]              b
44   [FPAREN_CLOSE]      )
44   [SEMICOLON]         ;
44   [COMMENT_CPP]       // a ^= b
44   [NEWLINE]           
46   [COMMENT_CPP]       // other operators
46   [NEWLINE]           
47   [TYPE]              Type1
47   [BYREF]             &
47   [TYPE]              Type1
47   [DC_MEMBER]         ::
47   [OPERATOR]          operator
47   [FUNC_PROTO]        =
47   [FPAREN_OPEN]       (
47   [QUALIFIER]         const
47   [TYPE]              Type1
47   [BYREF]             &
47   [WORD]              b
47   [FPAREN_CLOSE]      )
47   [SEMICOLON]         ;
47   [COMMENT_CPP]       // a = b
47   [NEWLINE]           
48   [TYPE]              void
48   [OPERATOR]          operator
48   [FUNC_PROTO]        ()
48   [FPAREN_OPEN]       (
48   [TYPE]              Type1
48   [BYREF]             &
48   [WORD]              a
48   [FPAREN_CLOSE]      )
48   [SEMICOLON]         ;
48   [COMMENT_CPP]       // a()
48   [NEWLINE]           
49   [QUALIFIER]         const
49   [TYPE]              Type2
49   [BYREF]             &
49   [OPERATOR]          operator
49   [FUNC_PROTO]        []
49   [FPAREN_OPEN]       (
49   [QUALIFIER]         const
49   [TYPE]              Type1
49   [BYREF]             &
49   [WORD]              a
49   [COMMA]             ,
49   [QUALIFIER]         const
49   [TYPE]              Type1
49   [BYREF]             &
49   [WORD]              b
49   [FPAREN_CLOSE]      )
49   [SEMICOLON]         ;
49   [COMMENT_CPP]       // a[b]
49   [NEWLINE]           
50   [TYPE]              Type2
50   [BYREF]             &
50   [OPERATOR]          operator
50   [FUNC_PROTO]        *
50   [FPAREN_OPEN]       (
50   [QUALIFIER]         const
50   [TYPE]              Type1
50   [BYREF]             &
50   [WORD]              a
50   [FPAREN_CLOSE]      )
50   [SEMICOLON]         ;
50   [COMMENT_CPP]       // *a
50   [NEWLINE]           
51   [TYPE]              Type2
51   [PTR_TYPE]          *
51   [OPERATOR]          operator
51   [FUNC_PROTO]        &
51   [FPAREN_OPEN]       (
51   [QUALIFIER]         const
51   [TYPE]              Type1
51   [BYREF]             &
51   [WORD]              a
51   [FPAREN_CLOSE]      )
51   [SEMICOLON]         ;
51   [COMMENT_CPP]       // &a
51   [NEWLINE]           
52   [TYPE]              Type2
52   [PTR_TYPE]          *
52   [TYPE]              Type1
52   [DC_MEMBER]         ::
52   [OPERATOR]          operator
52   [FUNC_PROTO]        ->
52   [FPAREN_OPEN]       (
52   [FPAREN_CLOSE]      )
52   [SEMICOLON]         ;
52   [COMMENT_CPP]       // a->b
52   [NEWLINE]           
53   [TYPE]              Type1
53   [DC_MEMBER]         ::
53   [OPERATOR]          operator
53   [FUNC_PROTO]        type
53   [FPAREN_OPEN]       (
53   [FPAREN_CLOSE]      )
53   [SEMICOLON]         ;
53   [COMMENT_CPP]       // (type)a
53   [NEWLINE]           
54   [TYPE]              Type2
54   [BYREF]             &
54   [OPERATOR]          operator
54   [FUNC_PROTO]        ,
54   [FPAREN_OPEN]       (
54   [QUALIFIER]         const
54   [TYPE]              Type1
54   [BYREF]             &
54   [WORD]              a
54   [COMMA]             ,
54   [TYPE]              Type2
54   [BYREF]             &
54   [WORD]              b
54   [FPAREN_CLOSE]      )
54   [SEMICOLON]         ;
54   [COMMENT_CPP]       // a, b
54   [NEWLINE]           
55   [TYPE]              void
55   [PTR_TYPE]          *
55   [TYPE]              Type1
55   [DC_MEMBER]         ::
55   [OPERATOR]          operator
55   [FUNC_PROTO]        new
55   [FPAREN_OPEN]       (
55   [TYPE]              size_t
55   [WORD]              x
55   [FPAREN_CLOSE]      )
55   [SEMICOLON]         ;
55   [COMMENT_CPP]       // new Type1
55   [NEWLINE]           
56   [TYPE]              void
56   [PTR_TYPE]          *
56   [TYPE]              Type1
56   [DC_MEMBER]         ::
56   [OPERATOR]          operator
56   [FUNC_PROTO]        new[]
56   [FPAREN_OPEN]       (
56   [TYPE]              size_t
56   [WORD]              x
56   [FPAREN_CLOSE]      )
56   [SEMICOLON]         ;
56   [COMMENT_CPP]       // new Type1[n]
56   [NEWLINE]           
57   [TYPE]              void
57   [PTR_TYPE]          *
57   [TYPE]              Type1
57   [DC_MEMBER]         ::
57   [OPERATOR]          operator
57   [FUNC_PROTO]        delete
57   [FPAREN_OPEN]       (
57   [TYPE]              size_t
57   [WORD]              x
57   [FPAREN_CLOSE]      )
57   [SEMICOLON]         ;
57   [COMMENT_CPP]       // delete a
57   [NEWLINE]           
58   [TYPE]              void
58   [PTR_TYPE]          *
58   [TYPE]              Type1
58   [DC_MEMBER]         ::
58   [OPERATOR]          operator
58   [FUNC_PROTO]        delete[]
58   [FPAREN_OPEN]       (
58   [TYPE]              size_t
58   [WORD]              x
58   [FPAREN_CLOSE]      )
58   [SEMICOLON]         ;
58   [COMMENT_CPP]       // delete [] a
58   [NEWLINE]           
60   [COMMENT_CPP]       // Misc examples
60   [NEWLINE]           
61   [TYPE]              int
61   [BYREF]             &
61   [OPERATOR]          operator
61   [FUNC_PROTO]        *
61   [FPAREN_OPEN]       (
61   [FPAREN_CLOSE]      )
61   [SEMICOLON]         ;
61   [NEWLINE]           
62   [TYPE]              Foo
62   [DC_MEMBER]         ::
62   [OPERATOR]          operator
62   [FUNC_PROTO]        const char *
62   [FPAREN_OPEN]       (
62   [FPAREN_CLOSE]      )
62   [SEMICOLON]         ;
62   [NEWLINE]           
63   [TYPE]              Foo
63   [DC_MEMBER]         ::
63   [OPERATOR]          operator
63   [FUNC_PROTO]        const Bar&
63   [FPAREN_OPEN]       (
63   [FPAREN_CLOSE]      )
63   [SEMICOLON]         ;
63   [NEWLINE]           