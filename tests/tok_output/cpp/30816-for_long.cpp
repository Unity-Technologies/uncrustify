Line [Token]             Text
1    [TYPE]              void
1    [NEWLINE]           
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [FOR]               for
3    [SPAREN_OPEN]       (
3    [TYPE]              std
3    [DC_MEMBER]         ::
3    [TYPE]              map
3    [ANGLE_OPEN]        <
3    [TYPE]              std
3    [DC_MEMBER]         ::
3    [TYPE]              string
3    [COMMA]             ,
3    [TYPE]              std
3    [DC_MEMBER]         ::
3    [TYPE]              string
3    [ANGLE_CLOSE]       >
3    [DC_MEMBER]         ::
3    [TYPE]              iterator
3    [WORD]              it
3    [ASSIGN]            =
3    [NEWLINE]           
3    [WORD]              m_stat_http_conn_total
3    [MEMBER]            .
3    [WORD]              m_stat_response_codes
3    [MEMBER]            .
3    [FUNC_CALL]         begin
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
3    [WORD]              it
3    [COMPARE]           !=
3    [WORD]              m_stat_http_conn_total
3    [MEMBER]            .
3    [WORD]              m_stat_response_codes
3    [MEMBER]            .
3    [FUNC_CALL]         end
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
3    [INCDEC_BEFORE]     ++
3    [WORD]              i
3    [SPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [FUNC_CALL]         bar
5    [FPAREN_OPEN]       (
5    [WORD]              it
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           