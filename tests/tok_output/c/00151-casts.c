Line [Token]             Text
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_DEFINE]         define
2    [MACRO]             SOME_VAL1
2    [PAREN_OPEN]        (
2    [PAREN_OPEN]        (
2    [TYPE]              MYINT
2    [PAREN_CLOSE]       )
2    [NEG]               -
2    [NUMBER]            1
2    [PAREN_CLOSE]       )
2    [NEWLINE]           
3    [PREPROC]           #
3    [PP_DEFINE]         define
3    [MACRO]             SOME_VAL2
3    [PAREN_OPEN]        (
3    [NEG]               -
3    [NUMBER]            2
3    [PAREN_CLOSE]       )
3    [NEWLINE]           
4    [PREPROC]           #
4    [PP_DEFINE]         define
4    [MACRO]             SOME_VAL3
4    [NEG]               -
4    [NUMBER]            3
4    [NEWLINE]           
5    [PREPROC]           #
5    [PP_DEFINE]         define
5    [MACRO_FUNC]        MULT
5    [FPAREN_OPEN]       (
5    [WORD]              X
5    [COMMA]             ,
5    [WORD]              Y
5    [FPAREN_CLOSE]      )
5    [PAREN_OPEN]        (
5    [TYPE]              X
5    [PAREN_CLOSE]       )
5    [DEREF]             *
5    [PAREN_OPEN]        (
5    [WORD]              Y
5    [PAREN_CLOSE]       )
5    [NEWLINE]           
6    [PREPROC]           #
6    [PP_DEFINE]         define
6    [MACRO]             SOME_JUNK
6    [COMMENT]           /*lint -e123 */
6    [PAREN_OPEN]        (
6    [QUALIFIER]         const
6    [TYPE]              mytype
6    [PTR_TYPE]          *
6    [PAREN_CLOSE]       )
6    [NEG]               -
6    [NUMBER]            1
6    [NEWLINE]           
8    [TYPEDEF]           typedef
8    [PAREN_OPEN]        (
8    [DEREF]             *
8    [WORD]              my_fcn_ptr_t
8    [PAREN_CLOSE]       )
8    [FPAREN_OPEN]       (
8    [TYPE]              char
8    [PTR_TYPE]          *
8    [COMMA]             ,
8    [TYPE]              int
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [TYPEDEF]           typedef
9    [PAREN_OPEN]        (
9    [WORD]              my_fcn_t
9    [PAREN_CLOSE]       )
9    [FPAREN_OPEN]       (
9    [TYPE]              char
9    [PTR_TYPE]          *
9    [COMMA]             ,
9    [TYPE]              int
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
11   [TYPE]              void
11   [FUNC_DEF]          foo
11   [FPAREN_OPEN]       (
11   [TYPE]              void
11   [FPAREN_CLOSE]      )
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [TYPE]              uint
13   [WORD]              crc
13   [ASSIGN]            =
13   [FUNC_CALL]         crc32_calc_full
13   [FPAREN_OPEN]       (
13   [PAREN_OPEN]        (
13   [QUALIFIER]         const
13   [TYPE]              UINT8
13   [PTR_TYPE]          *
13   [PAREN_CLOSE]       )
13   [STRING]            "String"
13   [COMMA]             ,
13   [NUMBER]            6
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [WORD]              crc
15   [ASSIGN]            =
15   [FUNC_CALL]         crc32_calc_full
15   [FPAREN_OPEN]       (
15   [PAREN_OPEN]        (
15   [QUALIFIER]         const
15   [TYPE]              UINT8
15   [PTR_TYPE]          *
15   [PAREN_CLOSE]       )
15   [ADDR]              &
15   [WORD]              crc
15   [COMMA]             ,
15   [SIZEOF]            sizeof
15   [PAREN_OPEN]        (
15   [WORD]              crc
15   [PAREN_CLOSE]       )
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
17   [WORD]              a
17   [ASSIGN]            =
17   [PAREN_OPEN]        (
17   [WORD]              b
17   [PAREN_CLOSE]       )
17   [ARITH]             -
17   [NUMBER]            4
17   [SEMICOLON]         ;
17   [NEWLINE]           
19   [WORD]              a
19   [ASSIGN]            =
19   [PAREN_OPEN]        (
19   [TYPE]              UINT
19   [PAREN_CLOSE]       )
19   [NEG]               -
19   [NUMBER]            4
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [WORD]              a
20   [ASSIGN]            =
20   [PAREN_OPEN]        (
20   [TYPE]              UINT
20   [PAREN_CLOSE]       )
20   [POS]               +
20   [NUMBER]            4
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [WORD]              a
21   [ASSIGN]            =
21   [PAREN_OPEN]        (
21   [WORD]              UINT
21   [PAREN_CLOSE]       )
21   [ARITH]             *
21   [NUMBER]            4
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [WORD]              a
22   [ASSIGN]            =
22   [PAREN_OPEN]        (
22   [WORD]              UINT
22   [PAREN_CLOSE]       )
22   [ARITH]             &
22   [NUMBER]            4
22   [SEMICOLON]         ;
22   [NEWLINE]           
24   [WORD]              a
24   [ASSIGN]            =
24   [PAREN_OPEN]        (
24   [TYPE]              uint32_t
24   [PAREN_CLOSE]       )
24   [NEG]               -
24   [WORD]              pb
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [WORD]              a
25   [ASSIGN]            =
25   [PAREN_OPEN]        (
25   [WORD]              uint32_t
25   [PAREN_CLOSE]       )
25   [ARITH]             +
25   [WORD]              pb
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [WORD]              a
26   [ASSIGN]            =
26   [PAREN_OPEN]        (
26   [TYPE]              uint32_t
26   [PAREN_CLOSE]       )
26   [DEREF]             *
26   [WORD]              pb
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [WORD]              a
27   [ASSIGN]            =
27   [PAREN_OPEN]        (
27   [TYPE]              uint32_t
27   [PAREN_CLOSE]       )
27   [ADDR]              &
27   [WORD]              pb
27   [SEMICOLON]         ;
27   [NEWLINE]           
29   [WORD]              a
29   [ASSIGN]            =
29   [PAREN_OPEN]        (
29   [WORD]              Uint
29   [PAREN_CLOSE]       )
29   [ARITH]             -
29   [NUMBER]            4
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [WORD]              a
30   [ASSIGN]            =
30   [PAREN_OPEN]        (
30   [WORD]              Uint
30   [PAREN_CLOSE]       )
30   [ARITH]             +
30   [NUMBER]            4
30   [SEMICOLON]         ;
30   [NEWLINE]           
31   [WORD]              a
31   [ASSIGN]            =
31   [PAREN_OPEN]        (
31   [WORD]              Uint
31   [PAREN_CLOSE]       )
31   [ARITH]             *
31   [NUMBER]            4
31   [SEMICOLON]         ;
31   [NEWLINE]           
32   [WORD]              a
32   [ASSIGN]            =
32   [PAREN_OPEN]        (
32   [WORD]              Uint
32   [PAREN_CLOSE]       )
32   [ARITH]             &
32   [NUMBER]            4
32   [SEMICOLON]         ;
32   [NEWLINE]           
34   [WORD]              a
34   [ASSIGN]            =
34   [WORD]              b
34   [ARITH]             *
34   [PAREN_OPEN]        (
34   [TYPE]              int
34   [PAREN_CLOSE]       )
34   [WORD]              flt
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [WORD]              a
35   [ASSIGN]            =
35   [WORD]              b
35   [ARITH]             *
35   [PAREN_OPEN]        (
35   [PAREN_OPEN]        (
35   [TYPE]              int
35   [PAREN_CLOSE]       )
35   [WORD]              flt
35   [PAREN_CLOSE]       )
35   [SEMICOLON]         ;
35   [NEWLINE]           
37   [WORD]              a
37   [ASSIGN]            =
37   [WORD]              b
37   [ARITH]             *
37   [PAREN_OPEN]        (
37   [TYPE]              int
37   [PAREN_CLOSE]       )
37   [WORD]              flt
37   [SEMICOLON]         ;
37   [NEWLINE]           
38   [WORD]              a
38   [ASSIGN]            =
38   [WORD]              b
38   [ARITH]             *
38   [PAREN_OPEN]        (
38   [TYPE]              INT8
38   [PAREN_CLOSE]       )
38   [WORD]              flt
38   [SEMICOLON]         ;
38   [NEWLINE]           
39   [WORD]              a
39   [ASSIGN]            =
39   [WORD]              b
39   [ARITH]             *
39   [PAREN_OPEN]        (
39   [TYPE]              Uint
39   [PAREN_CLOSE]       )
39   [WORD]              flt
39   [SEMICOLON]         ;
39   [NEWLINE]           
41   [WORD]              a
41   [ASSIGN]            =
41   [DEREF]             *
41   [PAREN_OPEN]        (
41   [TYPE]              int
41   [PAREN_CLOSE]       )
41   [ADDR]              &
41   [WORD]              b
41   [SEMICOLON]         ;
41   [NEWLINE]           
42   [WORD]              a
42   [ASSIGN]            =
42   [DEREF]             *
42   [PAREN_OPEN]        (
42   [TYPE]              CHAR
42   [PAREN_CLOSE]       )
42   [ADDR]              &
42   [WORD]              b
42   [SEMICOLON]         ;
42   [NEWLINE]           
43   [WORD]              a
43   [ASSIGN]            =
43   [DEREF]             *
43   [PAREN_OPEN]        (
43   [WORD]              Uint
43   [PAREN_CLOSE]       )
43   [ARITH]             &
43   [WORD]              b
43   [SEMICOLON]         ;
43   [NEWLINE]           
45   [WORD]              a
45   [ASSIGN]            =
45   [PAREN_OPEN]        (
45   [TYPE]              int
45   [PAREN_CLOSE]       )
45   [DEREF]             *
45   [WORD]              pb
45   [SEMICOLON]         ;
45   [NEWLINE]           
46   [WORD]              a
46   [ASSIGN]            =
46   [PAREN_OPEN]        (
46   [TYPE]              CHAR
46   [PAREN_CLOSE]       )
46   [DEREF]             *
46   [WORD]              pb
46   [SEMICOLON]         ;
46   [NEWLINE]           
47   [WORD]              a
47   [ASSIGN]            =
47   [PAREN_OPEN]        (
47   [WORD]              Uint
47   [PAREN_CLOSE]       )
47   [ARITH]             *
47   [WORD]              pb
47   [SEMICOLON]         ;
47   [NEWLINE]           
49   [WORD]              a
49   [ASSIGN]            =
49   [PAREN_OPEN]        (
49   [TYPE]              int
49   [PAREN_CLOSE]       )
49   [STRING]            'a'
49   [SEMICOLON]         ;
49   [NEWLINE]           
50   [WORD]              a
50   [ASSIGN]            =
50   [PAREN_OPEN]        (
50   [TYPE]              UINT8
50   [PAREN_CLOSE]       )
50   [STRING]            'a'
50   [SEMICOLON]         ;
50   [NEWLINE]           
51   [WORD]              a
51   [ASSIGN]            =
51   [PAREN_OPEN]        (
51   [TYPE]              Uint
51   [PAREN_CLOSE]       )
51   [STRING]            'a'
51   [SEMICOLON]         ;
51   [NEWLINE]           
53   [WORD]              a
53   [ASSIGN]            =
53   [PAREN_OPEN]        (
53   [TYPE]              int
53   [PAREN_CLOSE]       )
53   [DEREF]             *
53   [STRING]            'a'
53   [SEMICOLON]         ;
53   [NEWLINE]           
54   [WORD]              a
54   [ASSIGN]            =
54   [PAREN_OPEN]        (
54   [WORD]              UINT8
54   [PAREN_CLOSE]       )
54   [ARITH]             *
54   [STRING]            'a'
54   [SEMICOLON]         ;
54   [NEWLINE]           
55   [WORD]              a
55   [ASSIGN]            =
55   [PAREN_OPEN]        (
55   [WORD]              Uint
55   [PAREN_CLOSE]       )
55   [ARITH]             *
55   [STRING]            'a'
55   [SEMICOLON]         ;
55   [NEWLINE]           
57   [WORD]              a
57   [ASSIGN]            =
57   [PAREN_OPEN]        (
57   [TYPE]              int
57   [PAREN_CLOSE]       )
57   [DEREF]             *
57   [NUMBER]            5
57   [SEMICOLON]         ;
57   [NEWLINE]           
58   [WORD]              a
58   [ASSIGN]            =
58   [PAREN_OPEN]        (
58   [WORD]              UINT
58   [PAREN_CLOSE]       )
58   [ARITH]             *
58   [NUMBER]            5
58   [SEMICOLON]         ;
58   [NEWLINE]           
59   [WORD]              a
59   [ASSIGN]            =
59   [PAREN_OPEN]        (
59   [WORD]              Uint
59   [PAREN_CLOSE]       )
59   [ARITH]             *
59   [NUMBER]            5
59   [SEMICOLON]         ;
59   [NEWLINE]           
61   [WORD]              a
61   [ASSIGN]            =
61   [PAREN_OPEN]        (
61   [TYPE]              int
61   [PAREN_CLOSE]       )
61   [DEREF]             *
61   [WORD]              ape
61   [SEMICOLON]         ;
61   [NEWLINE]           
62   [WORD]              a
62   [ASSIGN]            =
62   [PAREN_OPEN]        (
62   [TYPE]              UINT
62   [PAREN_CLOSE]       )
62   [DEREF]             *
62   [WORD]              ape
62   [SEMICOLON]         ;
62   [NEWLINE]           
63   [WORD]              a
63   [ASSIGN]            =
63   [PAREN_OPEN]        (
63   [WORD]              Uint
63   [PAREN_CLOSE]       )
63   [ARITH]             *
63   [WORD]              ape
63   [SEMICOLON]         ;
63   [NEWLINE]           
65   [WORD]              a
65   [ASSIGN]            =
65   [PAREN_OPEN]        (
65   [TYPE]              int
65   [PAREN_CLOSE]       )
65   [WORD]              ape
65   [SEMICOLON]         ;
65   [NEWLINE]           
66   [WORD]              a
66   [ASSIGN]            =
66   [PAREN_OPEN]        (
66   [TYPE]              UINT
66   [PAREN_CLOSE]       )
66   [WORD]              ape
66   [SEMICOLON]         ;
66   [NEWLINE]           
67   [WORD]              a
67   [ASSIGN]            =
67   [PAREN_OPEN]        (
67   [TYPE]              Uint
67   [PAREN_CLOSE]       )
67   [WORD]              ape
67   [SEMICOLON]         ;
67   [NEWLINE]           
69   [WORD]              a
69   [ASSIGN]            =
69   [PAREN_OPEN]        (
69   [TYPE]              int
69   [PAREN_CLOSE]       )
69   [SIZEOF]            sizeof
69   [PAREN_OPEN]        (
69   [WORD]              x
69   [PAREN_CLOSE]       )
69   [SEMICOLON]         ;
69   [NEWLINE]           
70   [WORD]              a
70   [ASSIGN]            =
70   [PAREN_OPEN]        (
70   [TYPE]              INT16
70   [PAREN_CLOSE]       )
70   [SIZEOF]            sizeof
70   [PAREN_OPEN]        (
70   [WORD]              x
70   [PAREN_CLOSE]       )
70   [SEMICOLON]         ;
70   [NEWLINE]           
71   [WORD]              a
71   [ASSIGN]            =
71   [PAREN_OPEN]        (
71   [TYPE]              Uint
71   [PAREN_CLOSE]       )
71   [SIZEOF]            sizeof
71   [PAREN_OPEN]        (
71   [WORD]              x
71   [PAREN_CLOSE]       )
71   [SEMICOLON]         ;
71   [NEWLINE]           
73   [WORD]              a
73   [ASSIGN]            =
73   [PAREN_OPEN]        (
73   [TYPE]              int
73   [PAREN_CLOSE]       )
73   [FUNC_CALL]         foo
73   [FPAREN_OPEN]       (
73   [WORD]              x
73   [FPAREN_CLOSE]      )
73   [SEMICOLON]         ;
73   [NEWLINE]           
74   [WORD]              a
74   [ASSIGN]            =
74   [PAREN_OPEN]        (
74   [TYPE]              CHAR
74   [PAREN_CLOSE]       )
74   [FUNC_CALL]         foo
74   [FPAREN_OPEN]       (
74   [WORD]              x
74   [FPAREN_CLOSE]      )
74   [SEMICOLON]         ;
74   [NEWLINE]           
75   [WORD]              a
75   [ASSIGN]            =
75   [PAREN_OPEN]        (
75   [TYPE]              Uint
75   [PAREN_CLOSE]       )
75   [FUNC_CALL]         foo
75   [FPAREN_OPEN]       (
75   [WORD]              x
75   [FPAREN_CLOSE]      )
75   [SEMICOLON]         ;
75   [NEWLINE]           
77   [WORD]              a
77   [ASSIGN]            =
77   [PAREN_OPEN]        (
77   [TYPE]              int
77   [PAREN_CLOSE]       )
77   [PAREN_OPEN]        (
77   [WORD]              x
77   [PAREN_CLOSE]       )
77   [SEMICOLON]         ;
77   [NEWLINE]           
78   [WORD]              a
78   [ASSIGN]            =
78   [PAREN_OPEN]        (
78   [TYPE]              CHAR
78   [PAREN_CLOSE]       )
78   [PAREN_OPEN]        (
78   [WORD]              x
78   [PAREN_CLOSE]       )
78   [SEMICOLON]         ;
78   [NEWLINE]           
79   [WORD]              a
79   [ASSIGN]            =
79   [PAREN_OPEN]        (
79   [TYPE]              Uint
79   [PAREN_CLOSE]       )
79   [PAREN_OPEN]        (
79   [WORD]              x
79   [PAREN_CLOSE]       )
79   [SEMICOLON]         ;
79   [NEWLINE]           
81   [WORD]              a
81   [ASSIGN]            =
81   [PAREN_OPEN]        (
81   [TYPE]              int
81   [PAREN_CLOSE]       )
81   [DEREF]             *
81   [PAREN_OPEN]        (
81   [WORD]              x
81   [PAREN_CLOSE]       )
81   [SEMICOLON]         ;
81   [NEWLINE]           
82   [WORD]              a
82   [ASSIGN]            =
82   [PAREN_OPEN]        (
82   [TYPE]              CHAR
82   [PAREN_CLOSE]       )
82   [DEREF]             *
82   [PAREN_OPEN]        (
82   [WORD]              x
82   [PAREN_CLOSE]       )
82   [SEMICOLON]         ;
82   [NEWLINE]           
83   [WORD]              a
83   [ASSIGN]            =
83   [PAREN_OPEN]        (
83   [WORD]              Uint
83   [PAREN_CLOSE]       )
83   [ARITH]             *
83   [PAREN_OPEN]        (
83   [WORD]              x
83   [PAREN_CLOSE]       )
83   [SEMICOLON]         ;
83   [NEWLINE]           
85   [WORD]              a
85   [ASSIGN]            =
85   [PAREN_OPEN]        (
85   [TYPE]              unsigned
85   [TYPE]              int
85   [PAREN_CLOSE]       )
85   [PAREN_OPEN]        (
85   [NUMBER]            1
85   [ARITH]             +
85   [NUMBER]            4
85   [PAREN_CLOSE]       )
85   [SEMICOLON]         ;
85   [NEWLINE]           
86   [WORD]              a
86   [ASSIGN]            =
86   [PAREN_OPEN]        (
86   [TYPE]              int
86   [PAREN_CLOSE]       )
86   [PAREN_OPEN]        (
86   [NUMBER]            1
86   [ARITH]             +
86   [NUMBER]            1
86   [PAREN_CLOSE]       )
86   [SEMICOLON]         ;
86   [NEWLINE]           
87   [WORD]              a
87   [ASSIGN]            =
87   [PAREN_OPEN]        (
87   [TYPE]              void
87   [PTR_TYPE]          *
87   [PAREN_CLOSE]       )
87   [PAREN_OPEN]        (
87   [ADDR]              &
87   [WORD]              str
87   [PAREN_CLOSE]       )
87   [SEMICOLON]         ;
87   [NEWLINE]           
88   [BRACE_CLOSE]       }
88   [NEWLINE]           