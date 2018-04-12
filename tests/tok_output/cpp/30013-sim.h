Line [Token]             Text
1    [NAMESPACE]         namespace
1    [WORD]              ns
1    [BRACE_OPEN]        {
1    [NEWLINE]           
3    [TEMPLATE]          template
3    [ANGLE_OPEN]        <
3    [TYPENAME]          typename
3    [TYPE]              T
3    [COMMA]             ,
3    [TEMPLATE]          template
3    [ANGLE_OPEN]        <
3    [TYPENAME]          typename
3    [ANGLE_CLOSE]       >
3    [TYPE]              class
3    [TYPE]              TOtherClass
3    [ANGLE_CLOSE]       >
3    [NEWLINE]           
3    [CLASS]             class
3    [TYPE]              Example
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [TYPE]              int
5    [WORD]              foo
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
10   [TEMPLATE]          template
10   [ANGLE_OPEN]        <
10   [TYPE]              class
10   [TYPE]              T
10   [ANGLE_CLOSE]       >
10   [NEWLINE]           
10   [CLASS]             class
10   [TYPE]              Example
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
13   [TYPE]              T
13   [FUNC_PROTO]        getValue
13   [FPAREN_OPEN]       (
13   [FPAREN_CLOSE]      )
13   [QUALIFIER]         const
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [COMMENT]           /** A pointer to a T returning function in the software environment */
15   [NEWLINE]           
16   [TYPE]              T
16   [TPAREN_OPEN]       (
16   [TYPE]              FunctionProvider
16   [DC_MEMBER]         ::
16   [PTR_TYPE]          *
16   [FUNC_VAR]          pF
16   [TPAREN_CLOSE]      )
16   [FPAREN_OPEN]       (
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [SEMICOLON]         ;
18   [NEWLINE]           
21   [PREPROC]           #
21   [PP_IF]             if
21   [NOT]               !
21   [PP_DEFINED]        defined
21   [PAREN_OPEN]        (
21   [WORD]              EVERYTHING_OK
21   [PAREN_CLOSE]       )
21   [NEWLINE]           
22   [PREPROC]           #
22   [PP_OTHER]          error
22   [PREPROC_BODY]      Define EVERYTHING_OK if you would like to compile your code
22   [NL_CONT]           \
23   [PREPROC_BODY]      or not if you would like to stop!
23   [NEWLINE]           
24   [PREPROC]           #
24   [PP_ENDIF]          endif
24   [NEWLINE]           
27   [TEMPLATE]          template
27   [ANGLE_OPEN]        <
27   [TYPE]              class
27   [TYPE]              V
27   [ANGLE_CLOSE]       >
27   [NEWLINE]           
28   [CLASS]             class
28   [TYPE]              Example
28   [NEWLINE]           
29   [BRACE_OPEN]        {
29   [NEWLINE]           
31   [FUNC_CALL]         Vector2
31   [ANGLE_OPEN]        <
31   [TYPE]              V
31   [ANGLE_CLOSE]       >
31   [FPAREN_OPEN]       (
31   [FPAREN_CLOSE]      )
32   [CLASS_COLON]       :
31   [NEWLINE]           
32   [FUNC_CALL]         x
32   [FPAREN_OPEN]       (
32   [NUMBER]            1
32   [FPAREN_CLOSE]      )
32   [COMMA]             ,
32   [NEWLINE]           
33   [FUNC_CALL]         y
33   [FPAREN_OPEN]       (
33   [NUMBER]            1
33   [FPAREN_CLOSE]      )
33   [NEWLINE]           
34   [BRACE_OPEN]        {
34   [BRACE_CLOSE]       }
34   [NEWLINE]           
36   [FUNC_CALL]         Vector2
36   [ANGLE_OPEN]        <
36   [TYPE]              double
36   [ANGLE_CLOSE]       >
36   [FPAREN_OPEN]       (
36   [FPAREN_CLOSE]      )
37   [CLASS_COLON]       :
36   [NEWLINE]           
37   [FUNC_CALL]         x
37   [FPAREN_OPEN]       (
37   [NUMBER_FP]         1.0
37   [FPAREN_CLOSE]      )
37   [COMMA]             ,
37   [NEWLINE]           
38   [FUNC_CALL]         y
38   [FPAREN_OPEN]       (
38   [NUMBER_FP]         1.0
38   [FPAREN_CLOSE]      )
38   [NEWLINE]           
39   [BRACE_OPEN]        {
39   [BRACE_CLOSE]       }
39   [NEWLINE]           
41   [FUNC_CALL]         Vector2
41   [ANGLE_OPEN]        <
41   [TYPE]              float
41   [ANGLE_CLOSE]       >
41   [FPAREN_OPEN]       (
41   [FPAREN_CLOSE]      )
42   [CLASS_COLON]       :
41   [NEWLINE]           
42   [FUNC_CALL]         x
42   [FPAREN_OPEN]       (
42   [NUMBER_FP]         1.0f
42   [FPAREN_CLOSE]      )
42   [COMMA]             ,
42   [NEWLINE]           
43   [FUNC_CALL]         y
43   [FPAREN_OPEN]       (
43   [NUMBER_FP]         1.0f
43   [FPAREN_CLOSE]      )
43   [NEWLINE]           
44   [BRACE_OPEN]        {
44   [BRACE_CLOSE]       }
44   [NEWLINE]           
46   [TYPE]              V
46   [WORD]              x
46   [SEMICOLON]         ;
46   [NEWLINE]           
47   [TYPE]              V
47   [WORD]              y
47   [SEMICOLON]         ;
47   [NEWLINE]           
49   [BRACE_CLOSE]       }
49   [SEMICOLON]         ;
49   [NEWLINE]           