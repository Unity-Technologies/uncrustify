Line [Parent]            Text
1    [NONE]              
2    [NONE]              struct
2    [STRUCT]            bar
2    [STRUCT]            ;
2    [NONE]              
3    [NONE]              struct
3    [STRUCT]            foo
3    [NONE]              
4    [STRUCT]            {
4    [NONE]              
5    [NONE]              operator
5    [OPERATOR]          bar*
5    [FUNC_CALL]         (
5    [FUNC_CALL]         )
5    [NONE]              ;
5    [NONE]              
6    [STRUCT]            }
6    [STRUCT]            ;
6    [NONE]              
8    [NONE]              class
8    [CLASS]             Foo
8    [CLASS]             {
8    [NONE]              
9    [FUNC_PROTO]        Foo
9    [FUNC_PROTO]        operator
9    [OPERATOR]          +
9    [FUNC_PROTO]        (
9    [NONE]              const
9    [NONE]              Foo
9    [NONE]              &
9    [NONE]              rhs
9    [FUNC_PROTO]        )
9    [NONE]              const
9    [FUNC_PROTO]        ;
9    [NONE]              
11   [FUNC_PROTO]        const
11   [FUNC_PROTO]        Foo
11   [FUNC_PROTO]        &
11   [FUNC_PROTO]        operator
11   [OPERATOR]          ==
11   [FUNC_PROTO]        (
11   [NONE]              Foo
11   [NONE]              &
11   [NONE]              me
11   [FUNC_PROTO]        )
11   [FUNC_PROTO]        ;
11   [NONE]              
13   [FUNC_PROTO]        bool
13   [FUNC_PROTO]        operator
13   [OPERATOR]          >
13   [FUNC_PROTO]        (
13   [NONE]              const
13   [NONE]              Foo
13   [NONE]              &
13   [NONE]              rhs
13   [FUNC_PROTO]        )
13   [NONE]              const
13   [FUNC_PROTO]        ;
13   [NONE]              
15   [FUNC_PROTO]        InStream
15   [FUNC_PROTO]        &
15   [FUNC_PROTO]        operator
15   [OPERATOR]          <<
15   [FUNC_PROTO]        (
15   [NONE]              InStream
15   [NONE]              &
15   [NONE]              in
15   [FUNC_PROTO]        )
15   [FUNC_PROTO]        ;
15   [NONE]              
16   [CLASS]             }
16   [NONE]              
18   [FUNC_DEF]          const
18   [FUNC_DEF]          Foo
18   [FUNC_DEF]          &
18   [FUNC_DEF]          Foo
18   [FUNC_DEF]          ::
18   [FUNC_DEF]          operator
18   [OPERATOR]          ==
18   [FUNC_DEF]          (
18   [NONE]              Foo
18   [NONE]              &
18   [NONE]              me
18   [FUNC_DEF]          )
18   [NONE]              
19   [FUNC_DEF]          {
19   [NONE]              
20   [FUNC_DEF]          }
20   [NONE]              
22   [FUNC_DEF]          Foo
22   [FUNC_DEF]          Foo
22   [FUNC_DEF]          ::
22   [FUNC_DEF]          operator
22   [OPERATOR]          +
22   [FUNC_DEF]          (
22   [NONE]              const
22   [NONE]              Foo
22   [NONE]              &
22   [NONE]              rhs
22   [FUNC_DEF]          )
22   [FUNC_DEF]          const
22   [NONE]              
23   [FUNC_DEF]          {
23   [NONE]              
24   [FUNC_DEF]          }
24   [NONE]              
26   [FUNC_DEF]          bool
26   [FUNC_DEF]          Foo
26   [FUNC_DEF]          ::
26   [FUNC_DEF]          operator
26   [OPERATOR]          >
26   [FUNC_DEF]          (
26   [NONE]              const
26   [NONE]              Foo
26   [NONE]              &
26   [NONE]              rhs
26   [FUNC_DEF]          )
26   [FUNC_DEF]          const
26   [NONE]              
27   [FUNC_DEF]          {
27   [NONE]              
28   [FUNC_DEF]          }
28   [NONE]              
30   [NONE]              class
30   [CLASS]             Example
30   [NONE]              
31   [CLASS]             {
31   [NONE]              
32   [NONE]              char
32   [NONE]              m_array
32   [NONE]              [
32   [NONE]              256
32   [NONE]              ]
32   [NONE]              ;
32   [NONE]              
34   [FUNC_PROTO]        Example
34   [FUNC_PROTO]        &
34   [FUNC_PROTO]        operator
34   [OPERATOR]          =
34   [FUNC_PROTO]        (
34   [NONE]              const
34   [NONE]              Example
34   [NONE]              &
34   [NONE]              rhs
34   [FUNC_PROTO]        )
34   [FUNC_PROTO]        ;
34   [NONE]              
35   [FUNC_PROTO]        Example
35   [FUNC_PROTO]        &
35   [FUNC_PROTO]        operator
35   [OPERATOR]          +=
35   [FUNC_PROTO]        (
35   [NONE]              const
35   [NONE]              Example
35   [NONE]              &
35   [NONE]              rhs
35   [FUNC_PROTO]        )
35   [FUNC_PROTO]        ;
35   [NONE]              
36   [FUNC_PROTO]        const
36   [FUNC_PROTO]        Example
36   [FUNC_PROTO]        operator
36   [OPERATOR]          +
36   [FUNC_PROTO]        (
36   [NONE]              const
36   [NONE]              Example
36   [NONE]              &
36   [NONE]              other
36   [FUNC_PROTO]        )
36   [NONE]              const
36   [FUNC_PROTO]        ;
36   [NONE]              
37   [FUNC_PROTO]        bool
37   [FUNC_PROTO]        operator
37   [OPERATOR]          ==
37   [FUNC_PROTO]        (
37   [NONE]              const
37   [NONE]              Example
37   [NONE]              &
37   [NONE]              other
37   [FUNC_PROTO]        )
37   [NONE]              const
37   [FUNC_PROTO]        ;
37   [NONE]              
38   [FUNC_PROTO]        bool
38   [FUNC_PROTO]        operator
38   [OPERATOR]          !=
38   [FUNC_PROTO]        (
38   [NONE]              const
38   [NONE]              Example
38   [NONE]              &
38   [NONE]              other
38   [FUNC_PROTO]        )
38   [NONE]              const
38   [FUNC_PROTO]        ;
38   [NONE]              
39   [FUNC_PROTO]        Example
39   [FUNC_PROTO]        operator
39   [OPERATOR]          +
39   [FUNC_PROTO]        (
39   [NONE]              const
39   [NONE]              Example
39   [NONE]              &
39   [NONE]              x
39   [NONE]              ,
39   [NONE]              const
39   [NONE]              Example
39   [NONE]              &
39   [NONE]              y
39   [FUNC_PROTO]        )
39   [FUNC_PROTO]        ;
39   [NONE]              
40   [FUNC_PROTO]        Example
40   [FUNC_PROTO]        operator
40   [OPERATOR]          *
40   [FUNC_PROTO]        (
40   [NONE]              const
40   [NONE]              Example
40   [NONE]              &
40   [NONE]              x
40   [NONE]              ,
40   [NONE]              const
40   [NONE]              Example
40   [NONE]              &
40   [NONE]              y
40   [FUNC_PROTO]        )
40   [FUNC_PROTO]        ;
40   [NONE]              
42   [FUNC_PROTO]        double
42   [FUNC_PROTO]        &
42   [FUNC_PROTO]        operator
42   [OPERATOR]          ()
42   [FUNC_PROTO]        (
42   [NONE]              int
42   [NONE]              row
42   [NONE]              ,
42   [NONE]              int
42   [NONE]              col
42   [FUNC_PROTO]        )
42   [FUNC_PROTO]        ;
42   [NONE]              
43   [FUNC_PROTO]        double
43   [FUNC_PROTO]        operator
43   [OPERATOR]          ()
43   [FUNC_PROTO]        (
43   [NONE]              int
43   [NONE]              row
43   [NONE]              ,
43   [NONE]              int
43   [NONE]              col
43   [FUNC_PROTO]        )
43   [NONE]              const
43   [FUNC_PROTO]        ;
43   [NONE]              
44   [FUNC_PROTO]        void
44   [FUNC_PROTO]        operator
44   [OPERATOR]          ++
44   [FUNC_PROTO]        (
44   [FUNC_PROTO]        )
44   [FUNC_PROTO]        ;
44   [NONE]              
45   [FUNC_PROTO]        int
45   [FUNC_PROTO]        &
45   [FUNC_PROTO]        operator
45   [OPERATOR]          *
45   [FUNC_PROTO]        (
45   [FUNC_PROTO]        )
45   [FUNC_PROTO]        ;
45   [NONE]              
46   [FUNC_PROTO]        Example
46   [FUNC_PROTO]        &
46   [FUNC_PROTO]        operator
46   [OPERATOR]          ++
46   [FUNC_PROTO]        (
46   [FUNC_PROTO]        )
46   [FUNC_PROTO]        ;
46   [COMMENT_END]       // prefix ++
46   [NONE]              
47   [FUNC_PROTO]        Example
47   [FUNC_PROTO]        operator
47   [OPERATOR]          ++
47   [FUNC_PROTO]        (
47   [NONE]              int
47   [FUNC_PROTO]        )
47   [FUNC_PROTO]        ;
47   [COMMENT_END]       // postfix ++
47   [NONE]              
49   [FUNC_PROTO]        bool
49   [FUNC_PROTO]        operator
49   [OPERATOR]          <
49   [FUNC_PROTO]        (
49   [NONE]              const
49   [NONE]              Example
49   [NONE]              &
49   [NONE]              lhs
49   [NONE]              ,
49   [NONE]              const
49   [NONE]              Example
49   [NONE]              &
49   [NONE]              rhs
49   [FUNC_PROTO]        )
49   [NONE]              const
49   [FUNC_PROTO]        ;
49   [NONE]              
51   [FUNC_DEF]          int
51   [FUNC_DEF]          operator
51   [OPERATOR]          ()
51   [FUNC_DEF]          (
51   [NONE]              int
51   [NONE]              index
51   [FUNC_DEF]          )
51   [NONE]              
52   [FUNC_DEF]          {
52   [NONE]              
53   [NONE]              i
53   [NONE]              =
53   [NONE]              ~
53   [NONE]              ~
53   [NONE]              3
53   [NONE]              ;
53   [NONE]              
54   [NONE]              return
54   [NONE]              index
54   [NONE]              +
54   [NONE]              1
54   [NONE]              ;
54   [NONE]              
55   [FUNC_DEF]          }
55   [NONE]              
57   [FUNC_DEF]          char
57   [FUNC_DEF]          &
57   [FUNC_DEF]          operator
57   [OPERATOR]          []
57   [FUNC_DEF]          (
57   [NONE]              unsigned
57   [NONE]              i
57   [FUNC_DEF]          )
57   [NONE]              
58   [FUNC_DEF]          {
58   [NONE]              
59   [NONE]              return
59   [NONE]              m_array
59   [NONE]              [
59   [NONE]              i
59   [NONE]              &
59   [NONE]              0xff
59   [NONE]              ]
59   [NONE]              ;
59   [NONE]              
60   [FUNC_DEF]          }
60   [NONE]              
61   [CLASS]             }
61   [NONE]              
62   [FUNC_DEF]          bool
62   [FUNC_DEF]          Example
62   [FUNC_DEF]          ::
62   [FUNC_DEF]          operator
62   [OPERATOR]          ==
62   [FUNC_DEF]          (
62   [NONE]              const
62   [NONE]              Example
62   [NONE]              &
62   [NONE]              other
62   [FUNC_DEF]          )
62   [FUNC_DEF]          const
62   [NONE]              
63   [FUNC_DEF]          {
63   [NONE]              
64   [COMMENT_WHOLE]     /*TODO: compare something? */
64   [NONE]              
65   [NONE]              return
65   [NONE]              false
65   [NONE]              ;
65   [NONE]              
66   [FUNC_DEF]          }
66   [NONE]              
67   [FUNC_DEF]          bool
67   [FUNC_DEF]          Example
67   [FUNC_DEF]          ::
67   [FUNC_DEF]          operator
67   [OPERATOR]          !=
67   [FUNC_DEF]          (
67   [NONE]              const
67   [NONE]              Example
67   [NONE]              &
67   [NONE]              other
67   [FUNC_DEF]          )
67   [FUNC_DEF]          const
67   [NONE]              
68   [FUNC_DEF]          {
68   [NONE]              
69   [NONE]              return
69   [NONE]              !
69   [NONE]              operator
69   [OPERATOR]          ==
69   [FUNC_CALL]         (
69   [NONE]              other
69   [FUNC_CALL]         )
69   [NONE]              ;
69   [NONE]              
70   [FUNC_DEF]          }
70   [NONE]              
73   [FUNC_DEF]          void
73   [NONE]              a
73   [FUNC_DEF]          (
73   [FUNC_DEF]          )
73   [FUNC_DEF]          {
73   [NONE]              
74   [NONE]              Op
74   [NONE]              op
74   [NONE]              =
74   [NONE]              &
74   [NONE]              X
74   [NONE]              ::
74   [NONE]              operator
74   [OPERATOR]          ==
74   [NONE]              ;
74   [NONE]              
75   [NONE]              if
75   [IF]                (
75   [NONE]              !
75   [NONE]              A
75   [IF]                )
75   [IF]                
75   [NONE]              
76   [NONE]              if
76   [IF]                (
76   [NONE]              op
76   [NONE]              !=
76   [NONE]              &
76   [NONE]              X
76   [NONE]              ::
76   [NONE]              operator
76   [OPERATOR]          ==
76   [IF]                )
76   [IF]                
76   [NONE]              
77   [NONE]              A
77   [FUNC_CALL]         (
77   [NONE]              1
77   [FUNC_CALL]         )
77   [NONE]              =
77   [NONE]              a
77   [NONE]              ;
77   [IF]                
77   [IF]                
77   [NONE]              
78   [NONE]              if
78   [IF]                (
78   [NONE]              !
78   [NONE]              A
78   [IF]                )
78   [IF]                {
78   [NONE]              
79   [NONE]              if
79   [IF]                (
79   [NONE]              op
79   [NONE]              !=
79   [NONE]              &
79   [NONE]              X
79   [NONE]              ::
79   [NONE]              operator
79   [OPERATOR]          ==
79   [IF]                )
79   [IF]                
79   [NONE]              
80   [NONE]              A
80   [FUNC_CALL]         (
80   [NONE]              1
80   [FUNC_CALL]         )
80   [NONE]              =
80   [NONE]              a
80   [NONE]              ;
80   [IF]                
80   [NONE]              
81   [IF]                }
81   [NONE]              
82   [FUNC_DEF]          }
82   [NONE]              
84   [FUNC_PROTO]        void
84   [FUNC_PROTO]        *
84   [FUNC_PROTO]        operator
84   [OPERATOR]          new
84   [FUNC_PROTO]        (
84   [NONE]              std
84   [NONE]              ::
84   [NONE]              size_t
84   [FUNC_PROTO]        )
84   [FUNC_PROTO]        throw
84   [THROW]             (
84   [NONE]              std
84   [NONE]              ::
84   [NONE]              bad_alloc
84   [THROW]             )
84   [FUNC_PROTO]        ;
84   [NONE]              
85   [FUNC_PROTO]        void
85   [FUNC_PROTO]        *
85   [FUNC_PROTO]        operator
85   [OPERATOR]          new[]
85   [FUNC_PROTO]        (
85   [NONE]              std
85   [NONE]              ::
85   [NONE]              size_t
85   [FUNC_PROTO]        )
85   [FUNC_PROTO]        throw
85   [THROW]             (
85   [NONE]              std
85   [NONE]              ::
85   [NONE]              bad_alloc
85   [THROW]             )
85   [FUNC_PROTO]        ;
85   [NONE]              
86   [FUNC_PROTO]        void
86   [FUNC_PROTO]        operator
86   [OPERATOR]          delete
86   [FUNC_PROTO]        (
86   [NONE]              void
86   [NONE]              *
86   [FUNC_PROTO]        )
86   [FUNC_PROTO]        throw
86   [THROW]             (
86   [THROW]             )
86   [FUNC_PROTO]        ;
86   [NONE]              
87   [FUNC_PROTO]        void
87   [FUNC_PROTO]        operator
87   [OPERATOR]          delete[]
87   [FUNC_PROTO]        (
87   [NONE]              void
87   [NONE]              *
87   [FUNC_PROTO]        )
87   [FUNC_PROTO]        throw
87   [THROW]             (
87   [THROW]             )
87   [FUNC_PROTO]        ;
87   [NONE]              