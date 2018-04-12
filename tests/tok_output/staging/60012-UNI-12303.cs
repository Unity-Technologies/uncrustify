Line [Token]             Text
1    [COMMENT_CPP]       //This gets a double indentation
1    [NEWLINE]           
2    [WORD]              devicePositions
2    [SQUARE_OPEN]       [
2    [WORD]              device
2    [SQUARE_CLOSE]      ]
2    [ASSIGN]            =
2    [WORD]              rect
2    [ASSIGN]            =
2    [NEW]               new
2    [FUNC_CALL]         Rect
2    [FPAREN_OPEN]       (
2    [NEWLINE]           
3    [WORD]              Vector2
3    [MEMBER]            .
3    [FUNC_CALL]         Lerp
3    [FPAREN_OPEN]       (
3    [WORD]              rect
3    [MEMBER]            .
3    [WORD]              position
3    [COMMA]             ,
3    [WORD]              target
3    [MEMBER]            .
3    [WORD]              position
3    [COMMA]             ,
3    [NUMBER_FP]         0.1f
3    [FPAREN_CLOSE]      )
3    [COMMA]             ,
3    [NEWLINE]           
4    [WORD]              Vector2
4    [MEMBER]            .
4    [FUNC_CALL]         Lerp
4    [FPAREN_OPEN]       (
4    [WORD]              rect
4    [MEMBER]            .
4    [WORD]              size
4    [COMMA]             ,
4    [WORD]              target
4    [MEMBER]            .
4    [WORD]              size
4    [COMMA]             ,
4    [NUMBER_FP]         0.1f
4    [FPAREN_CLOSE]      )
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           