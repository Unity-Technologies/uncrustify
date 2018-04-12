Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        import
1    [PREPROC_BODY]      <stdio.h>
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_INCLUDE]        import
2    [PREPROC_BODY]      "Fraction.h"
2    [NEWLINE]           
4    [TYPE]              int
4    [FUNC_DEF]          main
4    [FPAREN_OPEN]       (
4    [TYPE]              int
4    [WORD]              argc
4    [COMMA]             ,
4    [QUALIFIER]         const
4    [TYPE]              char
4    [PTR_TYPE]          *
4    [WORD]              argv
4    [TSQUARE]           []
4    [FPAREN_CLOSE]      )
4    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [COMMENT_CPP]       // create a new instance
5    [NEWLINE]           
6    [TYPE]              Fraction
6    [PTR_TYPE]          *
6    [WORD]              frac
6    [ASSIGN]            =
6    [SQUARE_OPEN]       [
6    [SQUARE_OPEN]       [
6    [OC_MSG_CLASS]      Fraction
6    [OC_MSG_FUNC]       alloc
6    [SQUARE_CLOSE]      ]
6    [OC_MSG_FUNC]       init
6    [SQUARE_CLOSE]      ]
6    [SEMICOLON]         ;
6    [NEWLINE]           
8    [COMMENT_CPP]       // set the values
8    [NEWLINE]           
9    [SQUARE_OPEN]       [
9    [OC_MSG_CLASS]      frac
9    [OC_MSG_FUNC]       setNumerator
9    [OC_COLON]          :
9    [NUMBER]            1
9    [SQUARE_CLOSE]      ]
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [SQUARE_OPEN]       [
10   [OC_MSG_CLASS]      frac
10   [OC_MSG_FUNC]       setDenominator
10   [OC_COLON]          :
10   [NUMBER]            3
10   [SQUARE_CLOSE]      ]
10   [SEMICOLON]         ;
10   [NEWLINE]           
12   [COMMENT_CPP]       // print it
12   [NEWLINE]           
13   [FUNC_CALL]         printf
13   [FPAREN_OPEN]       (
13   [STRING]            "The fraction is: "
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [SQUARE_OPEN]       [
14   [OC_MSG_CLASS]      frac
14   [OC_MSG_FUNC]       print
14   [SQUARE_CLOSE]      ]
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [FUNC_CALL]         printf
15   [FPAREN_OPEN]       (
15   [STRING]            "\n"
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
17   [COMMENT_CPP]       // free memory
17   [NEWLINE]           
18   [SQUARE_OPEN]       [
18   [OC_MSG_CLASS]      frac
18   [OC_MSG_FUNC]       release
18   [SQUARE_CLOSE]      ]
18   [SEMICOLON]         ;
18   [NEWLINE]           
20   [RETURN]            return
20   [NUMBER]            0
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [NEWLINE]           