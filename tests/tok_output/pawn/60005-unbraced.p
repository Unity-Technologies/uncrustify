Line [Token]             Text
1    [NEWLINE]           
2    [QUALIFIER]         public
2    [FUNC_DEF]          eBombPickUp
2    [FPAREN_OPEN]       (
2    [WORD]              id
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
3    [IF]                if
3    [SPAREN_OPEN]       (
3    [WORD]              BombPickUp
3    [SPAREN_CLOSE]      )
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [FUNC_CALL]         announceEvent
4    [FPAREN_OPEN]       (
4    [WORD]              id
4    [COMMA]             ,
4    [STRING]            "PICKED_BOMB"
4    [FPAREN_CLOSE]      )
4    [VSEMICOLON]        ;
4    [NEWLINE]           
4    [BRACE_CLOSE]       }
4    [NEWLINE]           
4    [BRACE_CLOSE]       }
4    [NEWLINE]           
6    [STOCK]             stock
6    [TAG]               Float
6    [TAG_COLON]         :
6    [OPERATOR]          operator
6    [FUNC_DEF]          -
6    [FPAREN_OPEN]       (
6    [TAG]               Float
6    [TAG_COLON]         :
6    [WORD]              oper
6    [FPAREN_CLOSE]      )
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
7    [RETURN]            return
7    [WORD]              oper
7    [CARET]             ^
7    [TAG]               Float
7    [TAG_COLON]         :
7    [PAREN_OPEN]        (
7    [PAREN_OPEN]        (
7    [NEG]               -
7    [NUMBER]            1
7    [PAREN_CLOSE]       )
7    [CARET]             ^
7    [PAREN_OPEN]        (
7    [PAREN_OPEN]        (
7    [NEG]               -
7    [NUMBER]            1
7    [PAREN_CLOSE]       )
7    [ARITH]             /
7    [NUMBER]            2
7    [PAREN_CLOSE]       )
7    [PAREN_CLOSE]       )
7    [SEMICOLON]         ;
7    [COMMENT]           /* IEEE values are sign/magnitude */
7    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
9    [NATIVE]            native
9    [TAG]               Float
9    [TAG_COLON]         :
9    [FUNC_PROTO]        floatadd
9    [FPAREN_OPEN]       (
9    [TAG]               Float
9    [TAG_COLON]         :
9    [WORD]              dividend
9    [COMMA]             ,
9    [TAG]               Float
9    [TAG_COLON]         :
9    [WORD]              divisor
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [NATIVE]            native
10   [TAG]               Result
10   [TAG_COLON]         :
10   [FUNC_PROTO]        dbi_query
10   [FPAREN_OPEN]       (
10   [TAG]               Sql
10   [TAG_COLON]         :
10   [WORD]              _sql
10   [COMMA]             ,
10   [WORD]              _query
10   [TSQUARE]           []
10   [COMMA]             ,
10   [BRACE_OPEN]        {
10   [WORD]              Float
10   [COMMA]             ,
10   [WORD]              _
10   [BRACE_CLOSE]       }
10   [TAG_COLON]         :
10   [ELLIPSIS]          ...
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           