Line [Token]             Text
1    [TYPE]              void
1    [TYPE]              Test
1    [DC_MEMBER]         ::
1    [FUNC_DEF]          init
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [FUNC_CALL]         connect
3    [FPAREN_OPEN]       (
3    [WORD]              m_ppcCom
3    [COMMA]             ,
3    [NEWLINE]           
4    [FUNC_CALL]         SIGNAL
4    [FPAREN_OPEN]       (
4    [FUNC_CALL]         sigReceivedBundle
4    [FPAREN_OPEN]       (
4    [WORD]              QString
4    [FPAREN_CLOSE]      )
4    [FPAREN_CLOSE]      )
4    [COMMA]             ,
4    [NEWLINE]           
5    [FUNC_CALL]         SLOT
5    [FPAREN_OPEN]       (
5    [FUNC_CALL]         doProcessBundle
5    [FPAREN_OPEN]       (
5    [WORD]              QString
5    [FPAREN_CLOSE]      )
5    [FPAREN_CLOSE]      )
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [FUNC_CALL]         connect
6    [FPAREN_OPEN]       (
6    [WORD]              m_ppcCom
6    [COMMA]             ,
6    [NEWLINE]           
7    [FUNC_CALL]         SIGNAL
7    [FPAREN_OPEN]       (
7    [WORD]              sigReceivedBundle
7    [FPAREN_CLOSE]      )
7    [COMMA]             ,
7    [NEWLINE]           
8    [FUNC_CALL]         SLOT
8    [FPAREN_OPEN]       (
8    [WORD]              doProcessBundle
8    [FPAREN_CLOSE]      )
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           