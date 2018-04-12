Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        include
1    [PREPROC_BODY]      "child.h"
1    [NEWLINE]           
2    [TYPE]              int
2    [FUNC_DEF]          main
2    [FPAREN_OPEN]       (
2    [TYPE]              int
2    [WORD]              argc
2    [COMMA]             ,
2    [TYPE]              char
2    [PTR_TYPE]          *
2    [WORD]              argv
2    [TSQUARE]           []
2    [FPAREN_CLOSE]      )
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [PAREN_OPEN]        (
3    [TYPE]              void
3    [PAREN_CLOSE]       )
3    [WORD]              argc
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [PAREN_OPEN]        (
4    [TYPE]              void
4    [PAREN_CLOSE]       )
4    [WORD]              argv
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [TYPE]              Child
5    [WORD]              child
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [FOR]               for
6    [SPAREN_OPEN]       (
6    [TYPE]              auto
6    [BYREF]             &
6    [WORD]              attribute
6    [FOR_COLON]         :
6    [DEREF]             *
6    [WORD]              child
6    [MEMBER]            .
6    [FUNC_CALL]         GetAttributes
6    [FPAREN_OPEN]       (
6    [FPAREN_CLOSE]      )
6    [SPAREN_CLOSE]      )
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [TYPE]              std
7    [DC_MEMBER]         ::
7    [WORD]              cout
7    [ARITH]             <<
7    [WORD]              attribute
7    [ARITH]             <<
7    [TYPE]              std
7    [DC_MEMBER]         ::
7    [WORD]              endl
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
9    [RETURN]            return
9    [NUMBER]            0
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           