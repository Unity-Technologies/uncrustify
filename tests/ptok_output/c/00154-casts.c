Line [Parent]            Text
1    [NONE]              
2    [PP_DEFINE]         #
2    [NONE]              define
2    [NONE]              SOME_VAL1
2    [NONE]              (
2    [C_CAST]            (
2    [C_CAST]            MYINT
2    [C_CAST]            )
2    [NONE]              -
2    [NONE]              1
2    [NONE]              )
2    [NONE]              
3    [PP_DEFINE]         #
3    [NONE]              define
3    [NONE]              SOME_VAL2
3    [NONE]              (
3    [NONE]              -
3    [NONE]              2
3    [NONE]              )
3    [NONE]              
4    [PP_DEFINE]         #
4    [NONE]              define
4    [NONE]              SOME_VAL3
4    [NONE]              -
4    [NONE]              3
4    [NONE]              
5    [PP_DEFINE]         #
5    [NONE]              define
5    [NONE]              MULT
5    [MACRO_FUNC]        (
5    [NONE]              X
5    [NONE]              ,
5    [NONE]              Y
5    [MACRO_FUNC]        )
5    [C_CAST]            (
5    [C_CAST]            X
5    [C_CAST]            )
5    [NONE]              *
5    [NONE]              (
5    [NONE]              Y
5    [NONE]              )
5    [NONE]              
6    [PP_DEFINE]         #
6    [NONE]              define
6    [NONE]              SOME_JUNK
6    [COMMENT_EMBED]     /*lint -e123 */
6    [C_CAST]            (
6    [C_CAST]            const
6    [C_CAST]            mytype
6    [C_CAST]            *
6    [C_CAST]            )
6    [NONE]              -
6    [NONE]              1
6    [NONE]              
8    [NONE]              typedef
8    [NONE]              (
8    [NONE]              *
8    [TYPEDEF]           my_fcn_ptr_t
8    [NONE]              )
8    [FUNC_CALL]         (
8    [NONE]              char
8    [NONE]              *
8    [NONE]              ,
8    [NONE]              int
8    [FUNC_CALL]         )
8    [TYPEDEF]           ;
8    [NONE]              
9    [NONE]              typedef
9    [NONE]              (
9    [TYPEDEF]           my_fcn_t
9    [NONE]              )
9    [FUNC_CALL]         (
9    [NONE]              char
9    [NONE]              *
9    [NONE]              ,
9    [NONE]              int
9    [FUNC_CALL]         )
9    [TYPEDEF]           ;
9    [NONE]              
11   [FUNC_DEF]          void
11   [NONE]              foo
11   [FUNC_DEF]          (
11   [NONE]              void
11   [FUNC_DEF]          )
11   [NONE]              
12   [FUNC_DEF]          {
12   [NONE]              
13   [NONE]              uint
13   [NONE]              crc
13   [NONE]              =
13   [NONE]              crc32_calc_full
13   [FUNC_CALL]         (
13   [C_CAST]            (
13   [C_CAST]            const
13   [C_CAST]            UINT8
13   [C_CAST]            *
13   [C_CAST]            )
13   [NONE]              "String"
13   [NONE]              ,
13   [NONE]              6
13   [FUNC_CALL]         )
13   [NONE]              ;
13   [NONE]              
15   [NONE]              crc
15   [NONE]              =
15   [NONE]              crc32_calc_full
15   [FUNC_CALL]         (
15   [C_CAST]            (
15   [C_CAST]            const
15   [C_CAST]            UINT8
15   [C_CAST]            *
15   [C_CAST]            )
15   [NONE]              &
15   [NONE]              crc
15   [NONE]              ,
15   [NONE]              sizeof
15   [TYPE_CAST]         (
15   [NONE]              crc
15   [TYPE_CAST]         )
15   [FUNC_CALL]         )
15   [NONE]              ;
15   [NONE]              
17   [NONE]              a
17   [NONE]              =
17   [NONE]              (
17   [NONE]              b
17   [NONE]              )
17   [NONE]              -
17   [NONE]              4
17   [NONE]              ;
17   [NONE]              
19   [NONE]              a
19   [NONE]              =
19   [C_CAST]            (
19   [C_CAST]            UINT
19   [C_CAST]            )
19   [NONE]              -
19   [NONE]              4
19   [NONE]              ;
19   [NONE]              
20   [NONE]              a
20   [NONE]              =
20   [C_CAST]            (
20   [C_CAST]            UINT
20   [C_CAST]            )
20   [NONE]              +
20   [NONE]              4
20   [NONE]              ;
20   [NONE]              
21   [NONE]              a
21   [NONE]              =
21   [NONE]              (
21   [NONE]              UINT
21   [NONE]              )
21   [NONE]              *
21   [NONE]              4
21   [NONE]              ;
21   [NONE]              
22   [NONE]              a
22   [NONE]              =
22   [NONE]              (
22   [NONE]              UINT
22   [NONE]              )
22   [NONE]              &
22   [NONE]              4
22   [NONE]              ;
22   [NONE]              
24   [NONE]              a
24   [NONE]              =
24   [C_CAST]            (
24   [C_CAST]            uint32_t
24   [C_CAST]            )
24   [NONE]              -
24   [NONE]              pb
24   [NONE]              ;
24   [NONE]              
25   [NONE]              a
25   [NONE]              =
25   [NONE]              (
25   [NONE]              uint32_t
25   [NONE]              )
25   [NONE]              +
25   [NONE]              pb
25   [NONE]              ;
25   [NONE]              
26   [NONE]              a
26   [NONE]              =
26   [C_CAST]            (
26   [C_CAST]            uint32_t
26   [C_CAST]            )
26   [NONE]              *
26   [NONE]              pb
26   [NONE]              ;
26   [NONE]              
27   [NONE]              a
27   [NONE]              =
27   [C_CAST]            (
27   [C_CAST]            uint32_t
27   [C_CAST]            )
27   [NONE]              &
27   [NONE]              pb
27   [NONE]              ;
27   [NONE]              
29   [NONE]              a
29   [NONE]              =
29   [NONE]              (
29   [NONE]              Uint
29   [NONE]              )
29   [NONE]              -
29   [NONE]              4
29   [NONE]              ;
29   [NONE]              
30   [NONE]              a
30   [NONE]              =
30   [NONE]              (
30   [NONE]              Uint
30   [NONE]              )
30   [NONE]              +
30   [NONE]              4
30   [NONE]              ;
30   [NONE]              
31   [NONE]              a
31   [NONE]              =
31   [NONE]              (
31   [NONE]              Uint
31   [NONE]              )
31   [NONE]              *
31   [NONE]              4
31   [NONE]              ;
31   [NONE]              
32   [NONE]              a
32   [NONE]              =
32   [NONE]              (
32   [NONE]              Uint
32   [NONE]              )
32   [NONE]              &
32   [NONE]              4
32   [NONE]              ;
32   [NONE]              
34   [NONE]              a
34   [NONE]              =
34   [NONE]              b
34   [NONE]              *
34   [C_CAST]            (
34   [C_CAST]            int
34   [C_CAST]            )
34   [NONE]              flt
34   [NONE]              ;
34   [NONE]              
35   [NONE]              a
35   [NONE]              =
35   [NONE]              b
35   [NONE]              *
35   [NONE]              (
35   [C_CAST]            (
35   [C_CAST]            int
35   [C_CAST]            )
35   [NONE]              flt
35   [NONE]              )
35   [NONE]              ;
35   [NONE]              
37   [NONE]              a
37   [NONE]              =
37   [NONE]              b
37   [NONE]              *
37   [C_CAST]            (
37   [C_CAST]            int
37   [C_CAST]            )
37   [NONE]              flt
37   [NONE]              ;
37   [NONE]              
38   [NONE]              a
38   [NONE]              =
38   [NONE]              b
38   [NONE]              *
38   [C_CAST]            (
38   [C_CAST]            INT8
38   [C_CAST]            )
38   [NONE]              flt
38   [NONE]              ;
38   [NONE]              
39   [NONE]              a
39   [NONE]              =
39   [NONE]              b
39   [NONE]              *
39   [C_CAST]            (
39   [C_CAST]            Uint
39   [C_CAST]            )
39   [NONE]              flt
39   [NONE]              ;
39   [NONE]              
41   [NONE]              a
41   [NONE]              =
41   [NONE]              *
41   [C_CAST]            (
41   [C_CAST]            int
41   [C_CAST]            )
41   [NONE]              &
41   [NONE]              b
41   [NONE]              ;
41   [NONE]              
42   [NONE]              a
42   [NONE]              =
42   [NONE]              *
42   [C_CAST]            (
42   [C_CAST]            CHAR
42   [C_CAST]            )
42   [NONE]              &
42   [NONE]              b
42   [NONE]              ;
42   [NONE]              
43   [NONE]              a
43   [NONE]              =
43   [NONE]              *
43   [NONE]              (
43   [NONE]              Uint
43   [NONE]              )
43   [NONE]              &
43   [NONE]              b
43   [NONE]              ;
43   [NONE]              
45   [NONE]              a
45   [NONE]              =
45   [C_CAST]            (
45   [C_CAST]            int
45   [C_CAST]            )
45   [NONE]              *
45   [NONE]              pb
45   [NONE]              ;
45   [NONE]              
46   [NONE]              a
46   [NONE]              =
46   [C_CAST]            (
46   [C_CAST]            CHAR
46   [C_CAST]            )
46   [NONE]              *
46   [NONE]              pb
46   [NONE]              ;
46   [NONE]              
47   [NONE]              a
47   [NONE]              =
47   [NONE]              (
47   [NONE]              Uint
47   [NONE]              )
47   [NONE]              *
47   [NONE]              pb
47   [NONE]              ;
47   [NONE]              
49   [NONE]              a
49   [NONE]              =
49   [C_CAST]            (
49   [C_CAST]            int
49   [C_CAST]            )
49   [NONE]              'a'
49   [NONE]              ;
49   [NONE]              
50   [NONE]              a
50   [NONE]              =
50   [C_CAST]            (
50   [C_CAST]            UINT8
50   [C_CAST]            )
50   [NONE]              'a'
50   [NONE]              ;
50   [NONE]              
51   [NONE]              a
51   [NONE]              =
51   [C_CAST]            (
51   [C_CAST]            Uint
51   [C_CAST]            )
51   [NONE]              'a'
51   [NONE]              ;
51   [NONE]              
53   [NONE]              a
53   [NONE]              =
53   [C_CAST]            (
53   [C_CAST]            int
53   [C_CAST]            )
53   [NONE]              *
53   [NONE]              'a'
53   [NONE]              ;
53   [NONE]              
54   [NONE]              a
54   [NONE]              =
54   [NONE]              (
54   [NONE]              UINT8
54   [NONE]              )
54   [NONE]              *
54   [NONE]              'a'
54   [NONE]              ;
54   [NONE]              
55   [NONE]              a
55   [NONE]              =
55   [NONE]              (
55   [NONE]              Uint
55   [NONE]              )
55   [NONE]              *
55   [NONE]              'a'
55   [NONE]              ;
55   [NONE]              
57   [NONE]              a
57   [NONE]              =
57   [C_CAST]            (
57   [C_CAST]            int
57   [C_CAST]            )
57   [NONE]              *
57   [NONE]              5
57   [NONE]              ;
57   [NONE]              
58   [NONE]              a
58   [NONE]              =
58   [NONE]              (
58   [NONE]              UINT
58   [NONE]              )
58   [NONE]              *
58   [NONE]              5
58   [NONE]              ;
58   [NONE]              
59   [NONE]              a
59   [NONE]              =
59   [NONE]              (
59   [NONE]              Uint
59   [NONE]              )
59   [NONE]              *
59   [NONE]              5
59   [NONE]              ;
59   [NONE]              
61   [NONE]              a
61   [NONE]              =
61   [C_CAST]            (
61   [C_CAST]            int
61   [C_CAST]            )
61   [NONE]              *
61   [NONE]              ape
61   [NONE]              ;
61   [NONE]              
62   [NONE]              a
62   [NONE]              =
62   [C_CAST]            (
62   [C_CAST]            UINT
62   [C_CAST]            )
62   [NONE]              *
62   [NONE]              ape
62   [NONE]              ;
62   [NONE]              
63   [NONE]              a
63   [NONE]              =
63   [NONE]              (
63   [NONE]              Uint
63   [NONE]              )
63   [NONE]              *
63   [NONE]              ape
63   [NONE]              ;
63   [NONE]              
65   [NONE]              a
65   [NONE]              =
65   [C_CAST]            (
65   [C_CAST]            int
65   [C_CAST]            )
65   [NONE]              ape
65   [NONE]              ;
65   [NONE]              
66   [NONE]              a
66   [NONE]              =
66   [C_CAST]            (
66   [C_CAST]            UINT
66   [C_CAST]            )
66   [NONE]              ape
66   [NONE]              ;
66   [NONE]              
67   [NONE]              a
67   [NONE]              =
67   [C_CAST]            (
67   [C_CAST]            Uint
67   [C_CAST]            )
67   [NONE]              ape
67   [NONE]              ;
67   [NONE]              
69   [NONE]              a
69   [NONE]              =
69   [C_CAST]            (
69   [C_CAST]            int
69   [C_CAST]            )
69   [NONE]              sizeof
69   [TYPE_CAST]         (
69   [NONE]              x
69   [TYPE_CAST]         )
69   [NONE]              ;
69   [NONE]              
70   [NONE]              a
70   [NONE]              =
70   [C_CAST]            (
70   [C_CAST]            INT16
70   [C_CAST]            )
70   [NONE]              sizeof
70   [TYPE_CAST]         (
70   [NONE]              x
70   [TYPE_CAST]         )
70   [NONE]              ;
70   [NONE]              
71   [NONE]              a
71   [NONE]              =
71   [C_CAST]            (
71   [C_CAST]            Uint
71   [C_CAST]            )
71   [NONE]              sizeof
71   [TYPE_CAST]         (
71   [NONE]              x
71   [TYPE_CAST]         )
71   [NONE]              ;
71   [NONE]              
73   [NONE]              a
73   [NONE]              =
73   [C_CAST]            (
73   [C_CAST]            int
73   [C_CAST]            )
73   [NONE]              foo
73   [FUNC_CALL]         (
73   [NONE]              x
73   [FUNC_CALL]         )
73   [NONE]              ;
73   [NONE]              
74   [NONE]              a
74   [NONE]              =
74   [C_CAST]            (
74   [C_CAST]            CHAR
74   [C_CAST]            )
74   [NONE]              foo
74   [FUNC_CALL]         (
74   [NONE]              x
74   [FUNC_CALL]         )
74   [NONE]              ;
74   [NONE]              
75   [NONE]              a
75   [NONE]              =
75   [C_CAST]            (
75   [C_CAST]            Uint
75   [C_CAST]            )
75   [NONE]              foo
75   [FUNC_CALL]         (
75   [NONE]              x
75   [FUNC_CALL]         )
75   [NONE]              ;
75   [NONE]              
77   [NONE]              a
77   [NONE]              =
77   [C_CAST]            (
77   [C_CAST]            int
77   [C_CAST]            )
77   [NONE]              (
77   [NONE]              x
77   [NONE]              )
77   [NONE]              ;
77   [NONE]              
78   [NONE]              a
78   [NONE]              =
78   [C_CAST]            (
78   [C_CAST]            CHAR
78   [C_CAST]            )
78   [NONE]              (
78   [NONE]              x
78   [NONE]              )
78   [NONE]              ;
78   [NONE]              
79   [NONE]              a
79   [NONE]              =
79   [C_CAST]            (
79   [C_CAST]            Uint
79   [C_CAST]            )
79   [NONE]              (
79   [NONE]              x
79   [NONE]              )
79   [NONE]              ;
79   [NONE]              
81   [NONE]              a
81   [NONE]              =
81   [C_CAST]            (
81   [C_CAST]            int
81   [C_CAST]            )
81   [NONE]              *
81   [NONE]              (
81   [NONE]              x
81   [NONE]              )
81   [NONE]              ;
81   [NONE]              
82   [NONE]              a
82   [NONE]              =
82   [C_CAST]            (
82   [C_CAST]            CHAR
82   [C_CAST]            )
82   [NONE]              *
82   [NONE]              (
82   [NONE]              x
82   [NONE]              )
82   [NONE]              ;
82   [NONE]              
83   [NONE]              a
83   [NONE]              =
83   [NONE]              (
83   [NONE]              Uint
83   [NONE]              )
83   [NONE]              *
83   [NONE]              (
83   [NONE]              x
83   [NONE]              )
83   [NONE]              ;
83   [NONE]              
85   [NONE]              a
85   [NONE]              =
85   [C_CAST]            (
85   [C_CAST]            unsigned
85   [C_CAST]            int
85   [C_CAST]            )
85   [NONE]              (
85   [NONE]              1
85   [NONE]              +
85   [NONE]              4
85   [NONE]              )
85   [NONE]              ;
85   [NONE]              
86   [NONE]              a
86   [NONE]              =
86   [C_CAST]            (
86   [C_CAST]            int
86   [C_CAST]            )
86   [NONE]              (
86   [NONE]              1
86   [NONE]              +
86   [NONE]              1
86   [NONE]              )
86   [NONE]              ;
86   [NONE]              
87   [NONE]              a
87   [NONE]              =
87   [C_CAST]            (
87   [C_CAST]            void
87   [C_CAST]            *
87   [C_CAST]            )
87   [NONE]              (
87   [NONE]              &
87   [NONE]              str
87   [NONE]              )
87   [NONE]              ;
87   [NONE]              
88   [FUNC_DEF]          }
88   [NONE]              