Line [Token]             Text
2    [CLASS]             class
2    [TYPE]              A
2    [CLASS_COLON]       :
2    [QUALIFIER]         public
2    [WORD]              B
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [TYPE]              A
4    [BYREF]             &
4    [OPERATOR]          operator
4    [FUNC_DEF]          =
4    [FPAREN_OPEN]       (
4    [QUALIFIER]         const
4    [TYPE]              A
4    [BYREF]             &
4    [WORD]              other
4    [FPAREN_CLOSE]      )
4    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [IF]                if
5    [SPAREN_OPEN]       (
5    [THIS]              this
5    [COMPARE]           ==
5    [ADDR]              &
5    [WORD]              other
5    [SPAREN_CLOSE]      )
5    [VBRACE_OPEN]       
5    [RETURN]            return
5    [DEREF]             *
5    [THIS]              this
5    [SEMICOLON]         ;
5    [VBRACE_CLOSE]      
5    [NEWLINE]           
6    [TYPE]              B
6    [DC_MEMBER]         ::
6    [OPERATOR]          operator
6    [FUNC_PROTO]        =
6    [FPAREN_OPEN]       (
6    [TYPE]              other
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [IF]                if
7    [SPAREN_OPEN]       (
7    [THIS]              this
7    [COMPARE]           ==
7    [ADDR]              &
7    [WORD]              other
7    [SPAREN_CLOSE]      )
7    [VBRACE_OPEN]       
7    [RETURN]            return
7    [DEREF]             *
7    [THIS]              this
7    [SEMICOLON]         ;
7    [VBRACE_CLOSE]      
7    [NEWLINE]           
8    [TYPE]              B
8    [DC_MEMBER]         ::
8    [FUNC_CALL]         opera
8    [FPAREN_OPEN]       (
8    [WORD]              other
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [FUNC_CALL]         copy
9    [FPAREN_OPEN]       (
9    [WORD]              other
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [RETURN]            return
10   [DEREF]             *
10   [THIS]              this
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [SEMICOLON]         ;
13   [NEWLINE]           