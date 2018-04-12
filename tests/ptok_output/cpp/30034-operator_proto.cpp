Line [Parent]            Text
1    [COMMENT_WHOLE]     /* A collection of all the different known operator prototypes in C++ */
1    [NONE]              
3    [COMMENT_WHOLE]     // arithmetic operators
3    [NONE]              
4    [FUNC_PROTO]        Type1
4    [FUNC_PROTO]        operator
4    [OPERATOR]          +
4    [FUNC_PROTO]        (
4    [NONE]              const
4    [NONE]              Type1
4    [NONE]              &
4    [NONE]              a
4    [FUNC_PROTO]        )
4    [FUNC_PROTO]        ;
4    [COMMENT_END]       // +a
4    [NONE]              
5    [FUNC_PROTO]        Type1
5    [FUNC_PROTO]        operator
5    [OPERATOR]          +
5    [FUNC_PROTO]        (
5    [NONE]              const
5    [NONE]              Type1
5    [NONE]              &
5    [NONE]              a
5    [NONE]              ,
5    [NONE]              const
5    [NONE]              Type2
5    [NONE]              &
5    [NONE]              b
5    [FUNC_PROTO]        )
5    [FUNC_PROTO]        ;
5    [COMMENT_END]       // a + b
5    [NONE]              
6    [FUNC_PROTO]        Type1
6    [FUNC_PROTO]        &
6    [FUNC_PROTO]        operator
6    [OPERATOR]          ++
6    [FUNC_PROTO]        (
6    [NONE]              Type1
6    [NONE]              &
6    [NONE]              a
6    [FUNC_PROTO]        )
6    [FUNC_PROTO]        ;
6    [COMMENT_END]       // ++a
6    [NONE]              
7    [FUNC_PROTO]        Type1
7    [FUNC_PROTO]        operator
7    [OPERATOR]          ++
7    [FUNC_PROTO]        (
7    [NONE]              Type1
7    [NONE]              &
7    [NONE]              a
7    [NONE]              ,
7    [NONE]              int
7    [FUNC_PROTO]        )
7    [FUNC_PROTO]        ;
7    [COMMENT_END]       // a++
7    [NONE]              
8    [FUNC_PROTO]        Type1
8    [FUNC_PROTO]        &
8    [FUNC_PROTO]        operator
8    [OPERATOR]          +=
8    [FUNC_PROTO]        (
8    [NONE]              Type1
8    [NONE]              &
8    [NONE]              a
8    [NONE]              ,
8    [NONE]              const
8    [NONE]              Type1
8    [NONE]              &
8    [NONE]              b
8    [FUNC_PROTO]        )
8    [FUNC_PROTO]        ;
8    [COMMENT_END]       // a += b
8    [NONE]              
9    [FUNC_PROTO]        Type1
9    [FUNC_PROTO]        operator
9    [OPERATOR]          -
9    [FUNC_PROTO]        (
9    [NONE]              const
9    [NONE]              Type1
9    [NONE]              &
9    [NONE]              a
9    [FUNC_PROTO]        )
9    [FUNC_PROTO]        ;
9    [COMMENT_END]       // -a
9    [NONE]              
10   [FUNC_PROTO]        Type1
10   [FUNC_PROTO]        &
10   [FUNC_PROTO]        operator
10   [OPERATOR]          --
10   [FUNC_PROTO]        (
10   [NONE]              Type1
10   [NONE]              &
10   [NONE]              a
10   [FUNC_PROTO]        )
10   [FUNC_PROTO]        ;
10   [COMMENT_END]       // --a
10   [NONE]              
11   [FUNC_PROTO]        Type1
11   [FUNC_PROTO]        operator
11   [OPERATOR]          --
11   [FUNC_PROTO]        (
11   [NONE]              Type1
11   [NONE]              &
11   [NONE]              a
11   [NONE]              ,
11   [NONE]              int
11   [FUNC_PROTO]        )
11   [FUNC_PROTO]        ;
11   [COMMENT_END]       // a--
11   [NONE]              
12   [FUNC_PROTO]        Type1
12   [FUNC_PROTO]        &
12   [FUNC_PROTO]        operator
12   [OPERATOR]          -=
12   [FUNC_PROTO]        (
12   [NONE]              Type1
12   [NONE]              &
12   [NONE]              a
12   [NONE]              ,
12   [NONE]              const
12   [NONE]              Type1
12   [NONE]              &
12   [NONE]              b
12   [FUNC_PROTO]        )
12   [FUNC_PROTO]        ;
12   [COMMENT_END]       // a -= b
12   [NONE]              
13   [FUNC_PROTO]        Type1
13   [FUNC_PROTO]        operator
13   [OPERATOR]          *
13   [FUNC_PROTO]        (
13   [NONE]              const
13   [NONE]              Type1
13   [NONE]              &
13   [NONE]              a
13   [NONE]              ,
13   [NONE]              const
13   [NONE]              Type1
13   [NONE]              &
13   [NONE]              b
13   [FUNC_PROTO]        )
13   [FUNC_PROTO]        ;
13   [COMMENT_END]       // a * b
13   [NONE]              
14   [FUNC_PROTO]        Type1
14   [FUNC_PROTO]        &
14   [FUNC_PROTO]        operator
14   [OPERATOR]          *=
14   [FUNC_PROTO]        (
14   [NONE]              Type1
14   [NONE]              &
14   [NONE]              a
14   [NONE]              ,
14   [NONE]              const
14   [NONE]              Type1
14   [NONE]              &
14   [NONE]              b
14   [FUNC_PROTO]        )
14   [FUNC_PROTO]        ;
14   [COMMENT_END]       // a *= b
14   [NONE]              
15   [FUNC_PROTO]        Type1
15   [FUNC_PROTO]        operator
15   [OPERATOR]          /
15   [FUNC_PROTO]        (
15   [NONE]              const
15   [NONE]              Type1
15   [NONE]              &
15   [NONE]              a
15   [NONE]              ,
15   [NONE]              const
15   [NONE]              Type1
15   [NONE]              &
15   [NONE]              b
15   [FUNC_PROTO]        )
15   [FUNC_PROTO]        ;
15   [COMMENT_END]       // a / b
15   [NONE]              
16   [FUNC_PROTO]        Type1
16   [FUNC_PROTO]        &
16   [FUNC_PROTO]        operator
16   [OPERATOR]          /=
16   [FUNC_PROTO]        (
16   [NONE]              Type1
16   [NONE]              &
16   [NONE]              a
16   [NONE]              ,
16   [NONE]              const
16   [NONE]              Type1
16   [NONE]              &
16   [NONE]              b
16   [FUNC_PROTO]        )
16   [FUNC_PROTO]        ;
16   [COMMENT_END]       // a /= b
16   [NONE]              
17   [FUNC_PROTO]        Type1
17   [FUNC_PROTO]        operator
17   [OPERATOR]          %
17   [FUNC_PROTO]        (
17   [NONE]              const
17   [NONE]              Type1
17   [NONE]              &
17   [NONE]              a
17   [NONE]              ,
17   [NONE]              const
17   [NONE]              Type1
17   [NONE]              &
17   [NONE]              b
17   [FUNC_PROTO]        )
17   [FUNC_PROTO]        ;
17   [COMMENT_END]       // a % b
17   [NONE]              
18   [FUNC_PROTO]        Type1
18   [FUNC_PROTO]        &
18   [FUNC_PROTO]        operator
18   [OPERATOR]          %=
18   [FUNC_PROTO]        (
18   [NONE]              Type1
18   [NONE]              &
18   [NONE]              a
18   [NONE]              ,
18   [NONE]              const
18   [NONE]              Type1
18   [NONE]              &
18   [NONE]              b
18   [FUNC_PROTO]        )
18   [FUNC_PROTO]        ;
18   [COMMENT_END]       // a %= b
18   [NONE]              
20   [COMMENT_WHOLE]     // comparison operators
20   [NONE]              
21   [FUNC_PROTO]        bool
21   [FUNC_PROTO]        operator
21   [OPERATOR]          <
21   [FUNC_PROTO]        (
21   [NONE]              const
21   [NONE]              Type1
21   [NONE]              &
21   [NONE]              a
21   [NONE]              ,
21   [NONE]              const
21   [NONE]              Type1
21   [NONE]              &
21   [NONE]              b
21   [FUNC_PROTO]        )
21   [FUNC_PROTO]        ;
21   [COMMENT_END]       // a < b
21   [NONE]              
22   [FUNC_PROTO]        bool
22   [FUNC_PROTO]        operator
22   [OPERATOR]          <=
22   [FUNC_PROTO]        (
22   [NONE]              const
22   [NONE]              Type1
22   [NONE]              &
22   [NONE]              a
22   [NONE]              ,
22   [NONE]              const
22   [NONE]              Type1
22   [NONE]              &
22   [NONE]              b
22   [FUNC_PROTO]        )
22   [FUNC_PROTO]        ;
22   [COMMENT_END]       // a <= b
22   [NONE]              
23   [FUNC_PROTO]        bool
23   [FUNC_PROTO]        operator
23   [OPERATOR]          >
23   [FUNC_PROTO]        (
23   [NONE]              const
23   [NONE]              Type1
23   [NONE]              &
23   [NONE]              a
23   [NONE]              ,
23   [NONE]              const
23   [NONE]              Type1
23   [NONE]              &
23   [NONE]              b
23   [FUNC_PROTO]        )
23   [FUNC_PROTO]        ;
23   [COMMENT_END]       // a > b
23   [NONE]              
24   [FUNC_PROTO]        bool
24   [FUNC_PROTO]        operator
24   [OPERATOR]          >=
24   [FUNC_PROTO]        (
24   [NONE]              const
24   [NONE]              Type1
24   [NONE]              &
24   [NONE]              a
24   [NONE]              ,
24   [NONE]              const
24   [NONE]              Type1
24   [NONE]              &
24   [NONE]              b
24   [FUNC_PROTO]        )
24   [FUNC_PROTO]        ;
24   [COMMENT_END]       // a >= b
24   [NONE]              
25   [FUNC_PROTO]        bool
25   [FUNC_PROTO]        operator
25   [OPERATOR]          !=
25   [FUNC_PROTO]        (
25   [NONE]              const
25   [NONE]              Type1
25   [NONE]              &
25   [NONE]              a
25   [NONE]              ,
25   [NONE]              const
25   [NONE]              Type1
25   [NONE]              &
25   [NONE]              b
25   [FUNC_PROTO]        )
25   [FUNC_PROTO]        ;
25   [COMMENT_END]       // a != b
25   [NONE]              
26   [FUNC_PROTO]        bool
26   [FUNC_PROTO]        operator
26   [OPERATOR]          ==
26   [FUNC_PROTO]        (
26   [NONE]              const
26   [NONE]              Type1
26   [NONE]              &
26   [NONE]              a
26   [NONE]              ,
26   [NONE]              const
26   [NONE]              Type1
26   [NONE]              &
26   [NONE]              b
26   [FUNC_PROTO]        )
26   [FUNC_PROTO]        ;
26   [COMMENT_END]       // a == b
26   [NONE]              
28   [COMMENT_WHOLE]     // logical operators
28   [NONE]              
29   [FUNC_PROTO]        bool
29   [FUNC_PROTO]        operator
29   [OPERATOR]          !
29   [FUNC_PROTO]        (
29   [NONE]              const
29   [NONE]              Type1
29   [NONE]              &
29   [NONE]              a
29   [FUNC_PROTO]        )
29   [FUNC_PROTO]        ;
29   [COMMENT_END]       // !a
29   [NONE]              
30   [FUNC_PROTO]        bool
30   [FUNC_PROTO]        operator
30   [OPERATOR]          &&
30   [FUNC_PROTO]        (
30   [NONE]              const
30   [NONE]              Type1
30   [NONE]              &
30   [NONE]              a
30   [NONE]              ,
30   [NONE]              const
30   [NONE]              Type1
30   [NONE]              &
30   [NONE]              b
30   [FUNC_PROTO]        )
30   [FUNC_PROTO]        ;
30   [COMMENT_END]       // a && b
30   [NONE]              
31   [FUNC_PROTO]        bool
31   [FUNC_PROTO]        operator
31   [OPERATOR]          ||
31   [FUNC_PROTO]        (
31   [NONE]              const
31   [NONE]              Type1
31   [NONE]              &
31   [NONE]              a
31   [NONE]              ,
31   [NONE]              const
31   [NONE]              Type1
31   [NONE]              &
31   [NONE]              b
31   [FUNC_PROTO]        )
31   [FUNC_PROTO]        ;
31   [COMMENT_END]       // a || b
31   [NONE]              
33   [COMMENT_WHOLE]     // bitwise operators
33   [NONE]              
34   [FUNC_PROTO]        Type1
34   [FUNC_PROTO]        operator
34   [OPERATOR]          <<
34   [FUNC_PROTO]        (
34   [NONE]              const
34   [NONE]              Type1
34   [NONE]              &
34   [NONE]              a
34   [NONE]              ,
34   [NONE]              const
34   [NONE]              Type1
34   [NONE]              &
34   [NONE]              b
34   [FUNC_PROTO]        )
34   [FUNC_PROTO]        ;
34   [COMMENT_END]       // a << b
34   [NONE]              
35   [FUNC_PROTO]        Type1
35   [FUNC_PROTO]        &
35   [FUNC_PROTO]        operator
35   [OPERATOR]          <<=
35   [FUNC_PROTO]        (
35   [NONE]              Type1
35   [NONE]              &
35   [NONE]              a
35   [NONE]              ,
35   [NONE]              const
35   [NONE]              Type1
35   [NONE]              &
35   [NONE]              b
35   [FUNC_PROTO]        )
35   [FUNC_PROTO]        ;
35   [COMMENT_END]       // a <<= b
35   [NONE]              
36   [FUNC_PROTO]        Type1
36   [FUNC_PROTO]        operator
36   [OPERATOR]          >>
36   [FUNC_PROTO]        (
36   [NONE]              const
36   [NONE]              Type1
36   [NONE]              &
36   [NONE]              a
36   [NONE]              ,
36   [NONE]              const
36   [NONE]              Type1
36   [NONE]              &
36   [NONE]              b
36   [FUNC_PROTO]        )
36   [FUNC_PROTO]        ;
36   [COMMENT_END]       // a >> b
36   [NONE]              
37   [FUNC_PROTO]        Type1
37   [FUNC_PROTO]        &
37   [FUNC_PROTO]        operator
37   [OPERATOR]          >>=
37   [FUNC_PROTO]        (
37   [NONE]              Type1
37   [NONE]              &
37   [NONE]              a
37   [NONE]              ,
37   [NONE]              const
37   [NONE]              Type1
37   [NONE]              &
37   [NONE]              b
37   [FUNC_PROTO]        )
37   [FUNC_PROTO]        ;
37   [COMMENT_END]       // a >>= b
37   [NONE]              
38   [FUNC_PROTO]        Type1
38   [FUNC_PROTO]        operator
38   [OPERATOR]          ~
38   [FUNC_PROTO]        (
38   [NONE]              const
38   [NONE]              Type1
38   [NONE]              &
38   [NONE]              a
38   [FUNC_PROTO]        )
38   [FUNC_PROTO]        ;
38   [COMMENT_END]       // ~a
38   [NONE]              
39   [FUNC_PROTO]        Type1
39   [FUNC_PROTO]        operator
39   [OPERATOR]          &
39   [FUNC_PROTO]        (
39   [NONE]              const
39   [NONE]              Type1
39   [NONE]              &
39   [NONE]              a
39   [NONE]              ,
39   [NONE]              const
39   [NONE]              Type1
39   [NONE]              &
39   [NONE]              b
39   [FUNC_PROTO]        )
39   [FUNC_PROTO]        ;
39   [COMMENT_END]       // a & b
39   [NONE]              
40   [FUNC_PROTO]        Type1
40   [FUNC_PROTO]        &
40   [FUNC_PROTO]        operator
40   [OPERATOR]          &=
40   [FUNC_PROTO]        (
40   [NONE]              Type1
40   [NONE]              &
40   [NONE]              a
40   [NONE]              ,
40   [NONE]              const
40   [NONE]              Type1
40   [NONE]              &
40   [NONE]              b
40   [FUNC_PROTO]        )
40   [FUNC_PROTO]        ;
40   [COMMENT_END]       // a &= b
40   [NONE]              
41   [FUNC_PROTO]        Type1
41   [FUNC_PROTO]        operator
41   [OPERATOR]          |
41   [FUNC_PROTO]        (
41   [NONE]              const
41   [NONE]              Type1
41   [NONE]              &
41   [NONE]              a
41   [NONE]              ,
41   [NONE]              const
41   [NONE]              Type1
41   [NONE]              &
41   [NONE]              b
41   [FUNC_PROTO]        )
41   [FUNC_PROTO]        ;
41   [COMMENT_END]       // a | b
41   [NONE]              
42   [FUNC_PROTO]        Type1
42   [FUNC_PROTO]        &
42   [FUNC_PROTO]        operator
42   [OPERATOR]          |=
42   [FUNC_PROTO]        (
42   [NONE]              Type1
42   [NONE]              &
42   [NONE]              a
42   [NONE]              ,
42   [NONE]              const
42   [NONE]              Type1
42   [NONE]              &
42   [NONE]              b
42   [FUNC_PROTO]        )
42   [FUNC_PROTO]        ;
42   [COMMENT_END]       // a |= b
42   [NONE]              
43   [FUNC_PROTO]        Type1
43   [FUNC_PROTO]        operator
43   [OPERATOR]          ^
43   [FUNC_PROTO]        (
43   [NONE]              const
43   [NONE]              Type1
43   [NONE]              &
43   [NONE]              a
43   [NONE]              ,
43   [NONE]              const
43   [NONE]              Type1
43   [NONE]              &
43   [NONE]              b
43   [FUNC_PROTO]        )
43   [FUNC_PROTO]        ;
43   [COMMENT_END]       // a ^ b
43   [NONE]              
44   [FUNC_PROTO]        Type1
44   [FUNC_PROTO]        &
44   [FUNC_PROTO]        operator
44   [OPERATOR]          ^=
44   [FUNC_PROTO]        (
44   [NONE]              Type1
44   [NONE]              &
44   [NONE]              a
44   [NONE]              ,
44   [NONE]              const
44   [NONE]              Type1
44   [NONE]              &
44   [NONE]              b
44   [FUNC_PROTO]        )
44   [FUNC_PROTO]        ;
44   [COMMENT_END]       // a ^= b
44   [NONE]              
46   [COMMENT_WHOLE]     // other operators
46   [NONE]              
47   [FUNC_PROTO]        Type1
47   [FUNC_PROTO]        &
47   [FUNC_PROTO]        Type1
47   [FUNC_PROTO]        ::
47   [FUNC_PROTO]        operator
47   [OPERATOR]          =
47   [FUNC_PROTO]        (
47   [NONE]              const
47   [NONE]              Type1
47   [NONE]              &
47   [NONE]              b
47   [FUNC_PROTO]        )
47   [FUNC_PROTO]        ;
47   [COMMENT_END]       // a = b
47   [NONE]              
48   [FUNC_PROTO]        void
48   [FUNC_PROTO]        operator
48   [OPERATOR]          ()
48   [FUNC_PROTO]        (
48   [NONE]              Type1
48   [NONE]              &
48   [NONE]              a
48   [FUNC_PROTO]        )
48   [FUNC_PROTO]        ;
48   [COMMENT_END]       // a()
48   [NONE]              
49   [FUNC_PROTO]        const
49   [FUNC_PROTO]        Type2
49   [FUNC_PROTO]        &
49   [FUNC_PROTO]        operator
49   [OPERATOR]          []
49   [FUNC_PROTO]        (
49   [NONE]              const
49   [NONE]              Type1
49   [NONE]              &
49   [NONE]              a
49   [NONE]              ,
49   [NONE]              const
49   [NONE]              Type1
49   [NONE]              &
49   [NONE]              b
49   [FUNC_PROTO]        )
49   [FUNC_PROTO]        ;
49   [COMMENT_END]       // a[b]
49   [NONE]              
50   [FUNC_PROTO]        Type2
50   [FUNC_PROTO]        &
50   [FUNC_PROTO]        operator
50   [OPERATOR]          *
50   [FUNC_PROTO]        (
50   [NONE]              const
50   [NONE]              Type1
50   [NONE]              &
50   [NONE]              a
50   [FUNC_PROTO]        )
50   [FUNC_PROTO]        ;
50   [COMMENT_END]       // *a
50   [NONE]              
51   [FUNC_PROTO]        Type2
51   [FUNC_PROTO]        *
51   [FUNC_PROTO]        operator
51   [OPERATOR]          &
51   [FUNC_PROTO]        (
51   [NONE]              const
51   [NONE]              Type1
51   [NONE]              &
51   [NONE]              a
51   [FUNC_PROTO]        )
51   [FUNC_PROTO]        ;
51   [COMMENT_END]       // &a
51   [NONE]              
52   [FUNC_PROTO]        Type2
52   [FUNC_PROTO]        *
52   [FUNC_PROTO]        Type1
52   [FUNC_PROTO]        ::
52   [FUNC_PROTO]        operator
52   [OPERATOR]          ->
52   [FUNC_PROTO]        (
52   [FUNC_PROTO]        )
52   [FUNC_PROTO]        ;
52   [COMMENT_END]       // a->b
52   [NONE]              
53   [FUNC_PROTO]        Type1
53   [FUNC_PROTO]        ::
53   [FUNC_PROTO]        operator
53   [OPERATOR]          type
53   [FUNC_PROTO]        (
53   [FUNC_PROTO]        )
53   [FUNC_PROTO]        ;
53   [COMMENT_END]       // (type)a
53   [NONE]              
54   [FUNC_PROTO]        Type2
54   [FUNC_PROTO]        &
54   [FUNC_PROTO]        operator
54   [OPERATOR]          ,
54   [FUNC_PROTO]        (
54   [NONE]              const
54   [NONE]              Type1
54   [NONE]              &
54   [NONE]              a
54   [NONE]              ,
54   [NONE]              Type2
54   [NONE]              &
54   [NONE]              b
54   [FUNC_PROTO]        )
54   [FUNC_PROTO]        ;
54   [COMMENT_END]       // a, b
54   [NONE]              
55   [FUNC_PROTO]        void
55   [FUNC_PROTO]        *
55   [FUNC_PROTO]        Type1
55   [FUNC_PROTO]        ::
55   [FUNC_PROTO]        operator
55   [OPERATOR]          new
55   [FUNC_PROTO]        (
55   [NONE]              size_t
55   [NONE]              x
55   [FUNC_PROTO]        )
55   [FUNC_PROTO]        ;
55   [COMMENT_END]       // new Type1
55   [NONE]              
56   [FUNC_PROTO]        void
56   [FUNC_PROTO]        *
56   [FUNC_PROTO]        Type1
56   [FUNC_PROTO]        ::
56   [FUNC_PROTO]        operator
56   [OPERATOR]          new[]
56   [FUNC_PROTO]        (
56   [NONE]              size_t
56   [NONE]              x
56   [FUNC_PROTO]        )
56   [FUNC_PROTO]        ;
56   [COMMENT_END]       // new Type1[n]
56   [NONE]              
57   [FUNC_PROTO]        void
57   [FUNC_PROTO]        *
57   [FUNC_PROTO]        Type1
57   [FUNC_PROTO]        ::
57   [FUNC_PROTO]        operator
57   [OPERATOR]          delete
57   [FUNC_PROTO]        (
57   [NONE]              size_t
57   [NONE]              x
57   [FUNC_PROTO]        )
57   [FUNC_PROTO]        ;
57   [COMMENT_END]       // delete a
57   [NONE]              
58   [FUNC_PROTO]        void
58   [FUNC_PROTO]        *
58   [FUNC_PROTO]        Type1
58   [FUNC_PROTO]        ::
58   [FUNC_PROTO]        operator
58   [OPERATOR]          delete[]
58   [FUNC_PROTO]        (
58   [NONE]              size_t
58   [NONE]              x
58   [FUNC_PROTO]        )
58   [FUNC_PROTO]        ;
58   [COMMENT_END]       // delete [] a
58   [NONE]              
60   [COMMENT_WHOLE]     // Misc examples
60   [NONE]              
61   [FUNC_PROTO]        int
61   [FUNC_PROTO]        &
61   [FUNC_PROTO]        operator
61   [OPERATOR]          *
61   [FUNC_PROTO]        (
61   [FUNC_PROTO]        )
61   [FUNC_PROTO]        ;
61   [NONE]              
62   [FUNC_PROTO]        Foo
62   [FUNC_PROTO]        ::
62   [FUNC_PROTO]        operator
62   [OPERATOR]          const char *
62   [FUNC_PROTO]        (
62   [FUNC_PROTO]        )
62   [FUNC_PROTO]        ;
62   [NONE]              
63   [FUNC_PROTO]        Foo
63   [FUNC_PROTO]        ::
63   [FUNC_PROTO]        operator
63   [OPERATOR]          const Bar&
63   [FUNC_PROTO]        (
63   [FUNC_PROTO]        )
63   [FUNC_PROTO]        ;
63   [NONE]              