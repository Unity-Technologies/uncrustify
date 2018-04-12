Line [Token]             Text
1    [COMMENT_CPP]       //3456789=123456789=123456789=123456789=123456789=123456789=12
1    [NEWLINE]           
2    [TYPE]              std
2    [DC_MEMBER]         ::
2    [TYPE]              map
2    [ANGLE_OPEN]        <
2    [TYPE]              int
2    [COMMA]             ,
2    [TYPE]              std
2    [DC_MEMBER]         ::
2    [TYPE]              string
2    [ANGLE_CLOSE]       >
2    [NEWLINE]           
2    [TYPE]              FOO
2    [DC_MEMBER]         ::
2    [FUNC_DEF]          foo
2    [FPAREN_OPEN]       (
2    [NEWLINE]           
2    [TYPE]              int
2    [WORD]              key
2    [COMMA]             ,
2    [NEWLINE]           
2    [TYPE]              std
2    [DC_MEMBER]         ::
2    [TYPE]              string
2    [WORD]              value
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [RETURN]            return
4    [TYPE]              std
4    [DC_MEMBER]         ::
4    [FUNC_CALL]         map
4    [ANGLE_OPEN]        <
4    [TYPE]              int
4    [COMMA]             ,
4    [TYPE]              std
4    [DC_MEMBER]         ::
4    [TYPE]              string
4    [ANGLE_CLOSE]       >
4    [FPAREN_OPEN]       (
4    [WORD]              key
4    [COMMA]             ,
4    [WORD]              value
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [NEWLINE]           