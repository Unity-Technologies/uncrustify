Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        import
1    [PREPROC_BODY]      "Fraction.h"
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_INCLUDE]        import
2    [PREPROC_BODY]      <stdio.h>
2    [NEWLINE]           
4    [OC_IMPL]           @implementation
4    [OC_CLASS]          Fraction
4    [NEWLINE]           
5    [OC_SCOPE]          -
5    [PAREN_OPEN]        (
5    [TYPE]              void
5    [PAREN_CLOSE]       )
5    [OC_MSG_DECL]       print
5    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [FUNC_CALL]         printf
6    [FPAREN_OPEN]       (
6    [STRING]            "%i/%i"
6    [COMMA]             ,
6    [WORD]              numerator
6    [COMMA]             ,
6    [WORD]              denominator
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
9    [OC_SCOPE]          -
9    [PAREN_OPEN]        (
9    [TYPE]              void
9    [PAREN_CLOSE]       )
9    [OC_MSG_DECL]       setNumerator
9    [OC_COLON]          :
9    [PAREN_OPEN]        (
9    [TYPE]              int
9    [PAREN_CLOSE]       )
9    [WORD]              n
9    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [WORD]              numerator
10   [ASSIGN]            =
10   [WORD]              n
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
13   [OC_SCOPE]          -
13   [PAREN_OPEN]        (
13   [TYPE]              void
13   [PAREN_CLOSE]       )
13   [OC_MSG_DECL]       setDenominator
13   [OC_COLON]          :
13   [PAREN_OPEN]        (
13   [TYPE]              int
13   [PAREN_CLOSE]       )
13   [WORD]              d
13   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
14   [WORD]              denominator
14   [ASSIGN]            =
14   [WORD]              d
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
17   [OC_SCOPE]          -
17   [PAREN_OPEN]        (
17   [TYPE]              int
17   [PAREN_CLOSE]       )
17   [OC_MSG_DECL]       denominator
17   [NEWLINE]           
17   [BRACE_OPEN]        {
17   [NEWLINE]           
18   [RETURN]            return
18   [WORD]              denominator
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [BRACE_CLOSE]       }
19   [NEWLINE]           
21   [OC_SCOPE]          -
21   [PAREN_OPEN]        (
21   [TYPE]              int
21   [PAREN_CLOSE]       )
21   [OC_MSG_DECL]       numerator
21   [NEWLINE]           
21   [BRACE_OPEN]        {
21   [NEWLINE]           
22   [RETURN]            return
22   [WORD]              numerator
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           
24   [OC_END]            @end
24   [NEWLINE]           