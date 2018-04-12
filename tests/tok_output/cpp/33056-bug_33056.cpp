Line [Token]             Text
1    [QUALIFIER]         inline
1    [TYPE]              T
1    [PTR_TYPE]          *
1    [PTR_TYPE]          *
1    [FUNC_DEF]          someFunc
1    [FPAREN_OPEN]       (
1    [TYPE]              foo
1    [PTR_TYPE]          *
1    [PTR_TYPE]          *
1    [WORD]              p
1    [COMMA]             ,
1    [TYPE]              bar
1    [BYREF]             &&
1    [WORD]              q
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [BRACE_CLOSE]       }
3    [NEWLINE]           
5    [QUALIFIER]         inline
5    [WORD]              T
5    [BOOL]              &&
5    [FUNC_CALL]         someFunc
5    [FPAREN_OPEN]       (
5    [WORD]              foo
5    [ARITH]             *
5    [DEREF]             *
5    [WORD]              p
5    [COMMA]             ,
5    [WORD]              bar
5    [BOOL]              &&
5    [WORD]              q
5    [FPAREN_CLOSE]      )
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           