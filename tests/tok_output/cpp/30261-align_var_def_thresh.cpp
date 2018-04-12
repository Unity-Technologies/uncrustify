Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          testShortTypes
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [COMMENT_CPP]       // No stars
3    [NEWLINE]           
4    [TYPE]              float
4    [WORD]              a
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [TYPE]              double
5    [WORD]              b
5    [SEMICOLON]         ;
5    [NEWLINE]           
7    [COMMENT_CPP]       // All stars
7    [NEWLINE]           
8    [TYPE]              float
8    [BYREF]             &
8    [WORD]              a
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [TYPE]              double
9    [BYREF]             &
9    [WORD]              b
9    [SEMICOLON]         ;
9    [NEWLINE]           
11   [TYPE]              float
11   [PTR_TYPE]          *
11   [WORD]              a
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [TYPE]              double
12   [PTR_TYPE]          *
12   [WORD]              b
12   [SEMICOLON]         ;
12   [NEWLINE]           
14   [TYPE]              float
14   [BYREF]             &
14   [WORD]              a
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [TYPE]              double
15   [BYREF]             &
15   [WORD]              b
15   [SEMICOLON]         ;
15   [NEWLINE]           
17   [COMMENT_CPP]       // One star before
17   [NEWLINE]           
18   [TYPE]              double
18   [BYREF]             &
18   [WORD]              a
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [TYPE]              float
19   [WORD]              b
19   [SEMICOLON]         ;
19   [NEWLINE]           
21   [TYPE]              double
21   [BYREF]             &
21   [WORD]              a
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [TYPE]              float
22   [WORD]              b
22   [SEMICOLON]         ;
22   [NEWLINE]           
24   [TYPE]              double
24   [BYREF]             &
24   [WORD]              a
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [TYPE]              float
25   [WORD]              b
25   [SEMICOLON]         ;
25   [NEWLINE]           
27   [COMMENT_CPP]       // One star after
27   [NEWLINE]           
28   [TYPE]              float
28   [WORD]              b
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [TYPE]              double
29   [BYREF]             &
29   [WORD]              a
29   [SEMICOLON]         ;
29   [NEWLINE]           
31   [TYPE]              float
31   [WORD]              b
31   [SEMICOLON]         ;
31   [NEWLINE]           
32   [TYPE]              double
32   [BYREF]             &
32   [WORD]              a
32   [SEMICOLON]         ;
32   [NEWLINE]           
34   [TYPE]              float
34   [WORD]              b
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [TYPE]              double
35   [BYREF]             &
35   [WORD]              a
35   [SEMICOLON]         ;
35   [NEWLINE]           
36   [BRACE_CLOSE]       }
36   [NEWLINE]           
38   [TYPE]              void
38   [FUNC_DEF]          testLongTypes
38   [FPAREN_OPEN]       (
38   [FPAREN_CLOSE]      )
38   [NEWLINE]           
39   [BRACE_OPEN]        {
39   [NEWLINE]           
40   [TYPE]              int
40   [WORD]              int_var
40   [SEMICOLON]         ;
40   [NEWLINE]           
41   [TYPE]              int
41   [PTR_TYPE]          *
41   [WORD]              int_ptr_var
41   [SEMICOLON]         ;
41   [NEWLINE]           
42   [TYPE]              int
42   [PTR_TYPE]          *
42   [WORD]              int_ptr_var
42   [SEMICOLON]         ;
42   [NEWLINE]           
43   [TYPE]              float
43   [WORD]              float_var
43   [SEMICOLON]         ;
43   [NEWLINE]           
44   [TYPE]              float
44   [BYREF]             &
44   [WORD]              float_ref_var
44   [SEMICOLON]         ;
44   [NEWLINE]           
45   [TYPE]              float
45   [BYREF]             &
45   [WORD]              float_ref_var
45   [SEMICOLON]         ;
45   [NEWLINE]           
46   [TYPE]              double
46   [BYREF]             &
46   [WORD]              double_var
46   [SEMICOLON]         ;
46   [NEWLINE]           
47   [TYPE]              SomeLongNamespace
47   [DC_MEMBER]         ::
47   [TYPE]              SomeLongType
47   [WORD]              long_var
47   [SEMICOLON]         ;
47   [NEWLINE]           
48   [TYPE]              int
48   [PTR_TYPE]          *
48   [WORD]              other_int_var
48   [SEMICOLON]         ;
48   [NEWLINE]           
49   [TYPE]              SomeLooooongType
49   [WORD]              long_var
49   [SEMICOLON]         ;
49   [NEWLINE]           
50   [TYPE]              SomeLoooooooooongType
50   [WORD]              looong_var
50   [SEMICOLON]         ;
50   [NEWLINE]           
51   [TYPE]              int
51   [WORD]              int_var
51   [SEMICOLON]         ;
51   [NEWLINE]           
52   [TYPE]              SomeLongNamespace
52   [DC_MEMBER]         ::
52   [TYPE]              OtherLongNamespace
52   [DC_MEMBER]         ::
52   [TYPE]              SomeLongType
52   [WORD]              very_long_var
52   [SEMICOLON]         ;
52   [NEWLINE]           
53   [TYPE]              int
53   [PTR_TYPE]          *
53   [WORD]              int_ptr_var
53   [SEMICOLON]         ;
53   [NEWLINE]           
54   [TYPE]              float
54   [WORD]              float_var
54   [SEMICOLON]         ;
54   [NEWLINE]           
55   [TYPE]              float
55   [BYREF]             &
55   [WORD]              float_ref_var
55   [SEMICOLON]         ;
55   [NEWLINE]           
56   [TYPE]              double
56   [BYREF]             &
56   [WORD]              double_var
56   [SEMICOLON]         ;
56   [NEWLINE]           
57   [TYPE]              SomeLongNamespace
57   [DC_MEMBER]         ::
57   [TYPE]              SomeLongType
57   [WORD]              long_var
57   [SEMICOLON]         ;
57   [NEWLINE]           
58   [TYPE]              float
58   [WORD]              float_var
58   [SEMICOLON]         ;
58   [NEWLINE]           
59   [TYPE]              int
59   [PTR_TYPE]          *
59   [WORD]              other_int_var
59   [SEMICOLON]         ;
59   [NEWLINE]           
60   [TYPE]              int
60   [WORD]              other_int_var
60   [SEMICOLON]         ;
60   [NEWLINE]           
61   [TYPE]              int
61   [PTR_TYPE]          *
61   [WORD]              other_int_var
61   [SEMICOLON]         ;
61   [NEWLINE]           
62   [TYPE]              int
62   [BYREF]             &
62   [WORD]              other_int_var
62   [SEMICOLON]         ;
62   [NEWLINE]           
63   [BRACE_CLOSE]       }
63   [NEWLINE]           