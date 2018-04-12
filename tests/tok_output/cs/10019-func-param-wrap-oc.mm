Line [Token]             Text
1    [IF]                if
1    [SPAREN_OPEN]       (
1    [WORD]              progress
1    [COMPARE]           <=
1    [NUMBER]            0
1    [SPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [SQUARE_OPEN]       [
3    [SQUARE_OPEN]       [
3    [TYPE]              NSBezierPath
3    [WORD]              bezierPathWithOvalInRect
3    [CS_SQ_COLON]       :
3    [FUNC_CALL]         NSMakeRect
3    [FPAREN_OPEN]       (
3    [FUNC_CALL]         NSMinX
3    [FPAREN_OPEN]       (
3    [WORD]              pieRect
3    [FPAREN_CLOSE]      )
3    [ARITH]             +
3    [WORD]              stroke
3    [COMMA]             ,
3    [FUNC_CALL]         NSMinY
3    [FPAREN_OPEN]       (
3    [WORD]              pieRect
3    [FPAREN_CLOSE]      )
3    [ARITH]             +
3    [WORD]              stroke
3    [COMMA]             ,
3    [NEWLINE]           
4    [FUNC_CALL]         NSWidth
4    [FPAREN_OPEN]       (
4    [WORD]              pieRect
4    [FPAREN_CLOSE]      )
4    [ARITH]             -
4    [NUMBER]            2
4    [ARITH]             *
4    [WORD]              stroke
4    [COMMA]             ,
4    [FUNC_CALL]         NSHeight
4    [FPAREN_OPEN]       (
4    [WORD]              pieRect
4    [FPAREN_CLOSE]      )
4    [ARITH]             -
4    [NUMBER]            2
4    [ARITH]             *
4    [WORD]              stroke
4    [FPAREN_CLOSE]      )
4    [SQUARE_CLOSE]      ]
4    [WORD]              fill
4    [SQUARE_CLOSE]      ]
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [NEWLINE]           