Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        import
1    [PREPROC_BODY]      <Foundation/NSObject.h>
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_INCLUDE]        import
2    [PREPROC_BODY]      <stdio.h>
2    [NEWLINE]           
4    [OC_INTF]           @interface
4    [OC_CLASS]          Fraction
4    [CLASS_COLON]       :
4    [WORD]              NSObject
4    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [TYPE]              int
5    [WORD]              numerator
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [TYPE]              int
6    [WORD]              denominator
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
8    [OC_SCOPE]          -
8    [PAREN_OPEN]        (
8    [TYPE]              void
8    [PAREN_CLOSE]       )
8    [OC_MSG_SPEC]       print
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [OC_SCOPE]          -
9    [PAREN_OPEN]        (
9    [TYPE]              void
9    [PAREN_CLOSE]       )
9    [OC_MSG_SPEC]       setNumerator
9    [OC_COLON]          :
9    [PAREN_OPEN]        (
9    [TYPE]              int
9    [PAREN_CLOSE]       )
9    [WORD]              d
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [OC_SCOPE]          -
10   [PAREN_OPEN]        (
10   [TYPE]              void
10   [PAREN_CLOSE]       )
10   [OC_MSG_SPEC]       setDenominator
10   [OC_COLON]          :
10   [PAREN_OPEN]        (
10   [TYPE]              int
10   [PAREN_CLOSE]       )
10   [WORD]              d
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [OC_SCOPE]          -
11   [PAREN_OPEN]        (
11   [TYPE]              int
11   [PAREN_CLOSE]       )
11   [OC_MSG_SPEC]       numerator
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [OC_SCOPE]          -
12   [PAREN_OPEN]        (
12   [TYPE]              int
12   [PAREN_CLOSE]       )
12   [OC_MSG_SPEC]       denominator
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [OC_SCOPE]          -
13   [PAREN_OPEN]        (
13   [TYPE]              void
13   [PAREN_CLOSE]       )
13   [OC_MSG_SPEC]       setNumDen
13   [OC_COLON]          :
13   [PAREN_OPEN]        (
13   [TYPE]              int
13   [PAREN_CLOSE]       )
13   [WORD]              n
13   [OC_COLON]          :
13   [PAREN_OPEN]        (
13   [TYPE]              int
13   [PAREN_CLOSE]       )
13   [WORD]              d
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [OC_END]            @end
14   [NEWLINE]           
16   [OC_IMPL]           @implementation
16   [OC_CLASS]          Fraction
16   [NEWLINE]           
17   [OC_SCOPE]          -
17   [PAREN_OPEN]        (
17   [TYPE]              void
17   [PAREN_CLOSE]       )
17   [OC_MSG_DECL]       print
17   [NEWLINE]           
17   [BRACE_OPEN]        {
17   [NEWLINE]           
18   [FUNC_CALL]         printf
18   [FPAREN_OPEN]       (
18   [STRING]            "%i/%i"
18   [COMMA]             ,
18   [WORD]              numerator
18   [COMMA]             ,
18   [WORD]              denominator
18   [FPAREN_CLOSE]      )
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [BRACE_CLOSE]       }
19   [NEWLINE]           
21   [OC_SCOPE]          -
21   [PAREN_OPEN]        (
21   [TYPE]              void
21   [PAREN_CLOSE]       )
21   [OC_MSG_DECL]       setNumerator
21   [OC_COLON]          :
21   [PAREN_OPEN]        (
21   [TYPE]              int
21   [PAREN_CLOSE]       )
21   [WORD]              n
21   [NEWLINE]           
21   [BRACE_OPEN]        {
21   [NEWLINE]           
22   [WORD]              numerator
22   [ASSIGN]            =
22   [WORD]              n
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           
25   [OC_SCOPE]          -
25   [PAREN_OPEN]        (
25   [TYPE]              void
25   [PAREN_CLOSE]       )
25   [OC_MSG_DECL]       setDenominator
25   [OC_COLON]          :
25   [PAREN_OPEN]        (
25   [TYPE]              int
25   [PAREN_CLOSE]       )
25   [WORD]              d
25   [NEWLINE]           
25   [BRACE_OPEN]        {
25   [NEWLINE]           
26   [WORD]              denominator
26   [ASSIGN]            =
26   [WORD]              d
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
29   [OC_SCOPE]          -
29   [PAREN_OPEN]        (
29   [TYPE]              int
29   [PAREN_CLOSE]       )
29   [OC_MSG_DECL]       denominator
29   [NEWLINE]           
29   [BRACE_OPEN]        {
29   [NEWLINE]           
30   [RETURN]            return
30   [PAREN_OPEN]        (
30   [WORD]              denominator
30   [PAREN_CLOSE]       )
30   [SEMICOLON]         ;
30   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [NEWLINE]           
33   [OC_SCOPE]          -
33   [PAREN_OPEN]        (
33   [TYPE]              int
33   [PAREN_CLOSE]       )
33   [OC_MSG_DECL]       numerator
33   [NEWLINE]           
33   [BRACE_OPEN]        {
33   [NEWLINE]           
34   [RETURN]            return
34   [PAREN_OPEN]        (
34   [WORD]              numerator
34   [PAREN_CLOSE]       )
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [BRACE_CLOSE]       }
35   [NEWLINE]           
36   [OC_END]            @end
36   [NEWLINE]           