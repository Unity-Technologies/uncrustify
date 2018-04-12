Line [Token]             Text
1    [NEWLINE]           
2    [NAMESPACE]         namespace
2    [TYPE]              a
2    [DC_MEMBER]         ::
2    [WORD]              b
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [TYPE]              void
4    [TYPE]              foo
4    [DC_MEMBER]         ::
4    [FUNC_DEF]          bar
4    [FPAREN_OPEN]       (
4    [TYPE]              int
4    [WORD]              xx
4    [FPAREN_CLOSE]      )
4    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [SWITCH]            switch
6    [SPAREN_OPEN]       (
6    [WORD]              xx
6    [SPAREN_CLOSE]      )
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
9    [CASE]              case
9    [NUMBER]            1
9    [CASE_COLON]        :
9    [NEWLINE]           
10   [COMMENT_CPP]       // filler
10   [NEWLINE]           
11   [WHILE]             while
11   [SPAREN_OPEN]       (
11   [WORD]              true
11   [SPAREN_CLOSE]      )
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [IF]                if
13   [SPAREN_OPEN]       (
13   [WORD]              something
13   [SPAREN_CLOSE]      )
13   [NEWLINE]           
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [FUNC_CALL]         do_something
15   [FPAREN_OPEN]       (
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
19   [BRACE_CLOSE]       }
19   [NEWLINE]           
20   [ELSE]              else
20   [ELSEIF]            if
20   [SPAREN_OPEN]       (
20   [WORD]              something_else
20   [SPAREN_CLOSE]      )
20   [NEWLINE]           
21   [BRACE_OPEN]        {
21   [NEWLINE]           
22   [FUNC_CALL]         do_something_else
22   [FPAREN_OPEN]       (
22   [FPAREN_CLOSE]      )
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           
24   [ELSE]              else
24   [NEWLINE]           
25   [BRACE_OPEN]        {
25   [NEWLINE]           
26   [FUNC_CALL]         dont_do_anything
26   [FPAREN_OPEN]       (
26   [FPAREN_CLOSE]      )
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [BREAK]             break
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [BRACE_CLOSE]       }
28   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           
31   [BREAK]             break
31   [SEMICOLON]         ;
31   [NEWLINE]           
33   [CASE]              case
33   [NUMBER]            2
33   [CASE_COLON]        :
33   [NEWLINE]           
34   [FUNC_CALL]         handle_two
34   [FPAREN_OPEN]       (
34   [FPAREN_CLOSE]      )
34   [SEMICOLON]         ;
34   [NEWLINE]           
36   [CASE]              default
36   [CASE_COLON]        :
36   [NEWLINE]           
37   [FUNC_CALL]         handle_the_rest
37   [FPAREN_OPEN]       (
37   [FPAREN_CLOSE]      )
37   [SEMICOLON]         ;
37   [NEWLINE]           
38   [BREAK]             break
38   [SEMICOLON]         ;
38   [NEWLINE]           
39   [BRACE_CLOSE]       }
39   [COMMENT_CPP]       // switch
39   [NEWLINE]           
40   [BRACE_CLOSE]       }
40   [COMMENT_CPP]       // foo::bar
40   [NEWLINE]           
42   [CLASS]             class
42   [TYPE]              long_class
42   [NEWLINE]           
43   [BRACE_OPEN]        {
43   [NEWLINE]           
44   [PRIVATE]           private
44   [PRIVATE_COLON]     :
44   [NEWLINE]           
46   [TYPE]              int
46   [WORD]              m_a
46   [SEMICOLON]         ;
46   [NEWLINE]           
47   [TYPE]              int
47   [WORD]              m_name
47   [SEMICOLON]         ;
47   [NEWLINE]           
49   [PRIVATE]           public
49   [PRIVATE_COLON]     :
49   [NEWLINE]           
50   [FUNC_CLASS_DEF]    long_class
50   [FPAREN_OPEN]       (
50   [TYPE]              int
50   [WORD]              a
50   [FPAREN_CLOSE]      )
50   [BRACE_OPEN]        {
50   [BRACE_CLOSE]       }
50   [NEWLINE]           
52   [TYPE]              void
52   [FUNC_DEF]          f1
52   [FPAREN_OPEN]       (
52   [FPAREN_CLOSE]      )
52   [BRACE_OPEN]        {
52   [BRACE_CLOSE]       }
52   [NEWLINE]           
54   [TYPE]              void
54   [FUNC_DEF]          f2
54   [FPAREN_OPEN]       (
54   [FPAREN_CLOSE]      )
54   [BRACE_OPEN]        {
54   [BRACE_CLOSE]       }
54   [NEWLINE]           
56   [TYPE]              void
56   [FUNC_DEF]          f3
56   [FPAREN_OPEN]       (
56   [FPAREN_CLOSE]      )
56   [BRACE_OPEN]        {
56   [BRACE_CLOSE]       }
56   [NEWLINE]           
58   [BRACE_CLOSE]       }
58   [SEMICOLON]         ;
58   [COMMENT_CPP]       // class long_class
58   [NEWLINE]           
59   [BRACE_CLOSE]       }
59   [COMMENT_CPP]       // namespace a::b
59   [NEWLINE]           