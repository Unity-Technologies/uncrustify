Line [Token]             Text
1    [COMMENT_MULTI]     /*␤I tried to modify the spaces when using casts like static_cast etc. by␤using sp_before_angle, sp_after_angle and sp_inside_angle. Even setting␤all of those options to remove results in the following:␤*/
5    [NEWLINE]           
7    [WORD]              myvar
7    [ASSIGN]            =
7    [TYPE_CAST]         dynamic_cast
7    [ANGLE_OPEN]        <
7    [TYPE]              MyClass
7    [ANGLE_OPEN]        <
7    [TYPE]              T
7    [ANGLE_CLOSE]       >
7    [PTR_TYPE]          *
7    [ANGLE_CLOSE]       >
7    [PAREN_OPEN]        (
7    [WORD]              other
7    [PAREN_CLOSE]       )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [COMMENT_CPP]       // expected:
8    [NEWLINE]           
9    [COMMENT_CPP]       //myvar = dynamic_cast<MyClass<T>*>(other);
9    [NEWLINE]           
11   [COMMENT_MULTI]     /*␤Sometime pointers and references are still not detected correctly in␤special cases - i guess.␤*/
14   [NEWLINE]           
15   [COMMENT_CPP]       //When using "sp_before_ptr_star = remove" the result is:
15   [NEWLINE]           
16   [TYPEDEF]           typedef
16   [TYPE]              std
16   [DC_MEMBER]         ::
16   [TYPE]              list
16   [ANGLE_OPEN]        <
16   [TYPE]              StreamedData
16   [PTR_TYPE]          *
16   [ANGLE_CLOSE]       >
16   [DC_MEMBER]         ::
16   [TYPE]              iterator
16   [TYPE]              iterator
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [COMMENT_CPP]       //typedef std::list<StreamedData *>::iterator iterator;
17   [NEWLINE]           
18   [COMMENT_CPP]       //------------------------------^ This space show not be there
18   [NEWLINE]           
20   [TYPEDEF]           typedef
20   [TYPE]              void
20   [TPAREN_OPEN]       (
20   [TYPE]              T
20   [DC_MEMBER]         ::
20   [PTR_TYPE]          *
20   [TYPE]              Routine
20   [TPAREN_CLOSE]      )
20   [FPAREN_OPEN]       (
20   [TYPE]              void
20   [FPAREN_CLOSE]      )
20   [SEMICOLON]         ;
20   [NEWLINE]           
22   [COMMENT_CPP]       //Similar with "sp_before_byref = remove":
22   [NEWLINE]           
23   [TYPE]              unsigned
23   [TYPE]              long
23   [FUNC_PROTO]        allocate
23   [FPAREN_OPEN]       (
23   [TYPE]              unsigned
23   [TYPE]              long
23   [WORD]              size
23   [COMMA]             ,
23   [TYPE]              void
23   [PTR_TYPE]          *
23   [BYREF]             &
23   [WORD]              p
23   [FPAREN_CLOSE]      )
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [COMMENT_CPP]       //unsigned long allocate(unsigned long size, void* & p);
24   [NEWLINE]           
25   [COMMENT_CPP]       //------------------------------------------------^ The same here
25   [NEWLINE]           
27   [TYPE]              void
27   [FUNC_DEF]          foo
27   [FPAREN_OPEN]       (
27   [TYPE]              void
27   [FPAREN_CLOSE]      )
27   [NEWLINE]           
28   [BRACE_OPEN]        {
28   [NEWLINE]           
29   [TYPE]              List
29   [ANGLE_OPEN]        <
29   [TYPE]              byte
29   [ANGLE_CLOSE]       >
29   [WORD]              bob
29   [ASSIGN]            =
29   [NEW]               new
29   [FUNC_CALL]         List
29   [ANGLE_OPEN]        <
29   [TYPE]              byte
29   [ANGLE_CLOSE]       >
29   [FPAREN_OPEN]       (
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [NEWLINE]           
31   [COMMENT]           /* Align assignments */
31   [NEWLINE]           
32   [FUNC_CALL]         align_assign
32   [FPAREN_OPEN]       (
32   [FUNC_CALL]         chunk_get_head
32   [FPAREN_OPEN]       (
32   [FPAREN_CLOSE]      )
32   [COMMA]             ,
32   [NEWLINE]           
33   [WORD]              cpd
33   [MEMBER]            .
33   [WORD]              settings
33   [SQUARE_OPEN]       [
33   [WORD]              UO_align_assign_span
33   [SQUARE_CLOSE]      ]
33   [MEMBER]            .
33   [WORD]              n
33   [COMMA]             ,
33   [NEWLINE]           
34   [WORD]              cpd
34   [MEMBER]            .
34   [WORD]              settings
34   [SQUARE_OPEN]       [
34   [WORD]              UO_align_assign_thresh
34   [SQUARE_CLOSE]      ]
34   [MEMBER]            .
34   [WORD]              n
34   [FPAREN_CLOSE]      )
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [BRACE_CLOSE]       }
35   [NEWLINE]           
37   [TYPE]              Args
37   [DC_MEMBER]         ::
37   [FUNC_CLASS_DEF]    Args
37   [FPAREN_OPEN]       (
37   [TYPE]              int
37   [WORD]              argc
37   [COMMA]             ,
37   [TYPE]              char
37   [PTR_TYPE]          *
37   [PTR_TYPE]          *
37   [WORD]              argv
37   [FPAREN_CLOSE]      )
37   [NEWLINE]           
38   [BRACE_OPEN]        {
38   [NEWLINE]           
39   [WORD]              m_count
39   [ASSIGN]            =
39   [WORD]              argc
39   [SEMICOLON]         ;
39   [NEWLINE]           
40   [WORD]              m_values
40   [ASSIGN]            =
40   [WORD]              argv
40   [SEMICOLON]         ;
40   [NEWLINE]           
41   [TYPE]              int
41   [WORD]              len
41   [ASSIGN]            =
41   [PAREN_OPEN]        (
41   [WORD]              argc
41   [ARITH]             >>
41   [NUMBER]            3
41   [PAREN_CLOSE]       )
41   [ARITH]             +
41   [NUMBER]            1
41   [SEMICOLON]         ;
41   [NEWLINE]           
42   [WORD]              m_used
42   [ASSIGN]            =
42   [NEW]               new
42   [WORD]              UINT8
42   [SQUARE_OPEN]       [
42   [WORD]              len
42   [SQUARE_CLOSE]      ]
42   [SEMICOLON]         ;
42   [NEWLINE]           
43   [IF]                if
43   [SPAREN_OPEN]       (
43   [WORD]              m_used
43   [COMPARE]           !=
43   [WORD]              NULL
43   [SPAREN_CLOSE]      )
44   [BRACE_OPEN]        {
44   [NEWLINE]           
45   [FUNC_CALL]         memset
45   [FPAREN_OPEN]       (
45   [WORD]              m_used
45   [COMMA]             ,
45   [NUMBER]            0
45   [COMMA]             ,
45   [WORD]              len
45   [FPAREN_CLOSE]      )
45   [SEMICOLON]         ;
45   [NEWLINE]           
46   [BRACE_CLOSE]       }
46   [NEWLINE]           
47   [BRACE_CLOSE]       }
47   [NEWLINE]           
49   [TYPE]              void
49   [FUNC_DEF]          Args
49   [FPAREN_OPEN]       (
49   [TYPE]              int
49   [WORD]              argc
49   [COMMA]             ,
49   [TYPE]              char
49   [PTR_TYPE]          *
49   [PTR_TYPE]          *
49   [WORD]              argv
49   [FPAREN_CLOSE]      )
49   [NEWLINE]           
50   [BRACE_OPEN]        {
50   [NEWLINE]           
51   [WORD]              m_count
51   [ASSIGN]            =
51   [WORD]              argc
51   [SEMICOLON]         ;
51   [NEWLINE]           
52   [WORD]              m_values
52   [ASSIGN]            =
52   [WORD]              argv
52   [SEMICOLON]         ;
52   [NEWLINE]           
53   [TYPE]              int
53   [WORD]              len
53   [ASSIGN]            =
53   [PAREN_OPEN]        (
53   [WORD]              argc
53   [ARITH]             >>
53   [NUMBER]            3
53   [PAREN_CLOSE]       )
53   [ARITH]             +
53   [NUMBER]            1
53   [SEMICOLON]         ;
53   [NEWLINE]           
54   [WORD]              m_used
54   [ASSIGN]            =
54   [NEW]               new
54   [WORD]              UINT8
54   [SQUARE_OPEN]       [
54   [WORD]              len
54   [SQUARE_CLOSE]      ]
54   [SEMICOLON]         ;
54   [NEWLINE]           
55   [IF]                if
55   [SPAREN_OPEN]       (
55   [WORD]              m_used
55   [COMPARE]           !=
55   [WORD]              NULL
55   [SPAREN_CLOSE]      )
56   [BRACE_OPEN]        {
56   [NEWLINE]           
57   [FUNC_CALL]         memset
57   [FPAREN_OPEN]       (
57   [WORD]              m_used
57   [COMMA]             ,
57   [NUMBER]            0
57   [COMMA]             ,
57   [WORD]              len
57   [FPAREN_CLOSE]      )
57   [SEMICOLON]         ;
57   [NEWLINE]           
58   [BRACE_CLOSE]       }
58   [NEWLINE]           
59   [BRACE_CLOSE]       }
59   [NEWLINE]           