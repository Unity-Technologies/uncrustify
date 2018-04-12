Line [Token]             Text
1    [TYPE]              bool
1    [TYPE]              AkonadiServer
1    [DC_MEMBER]         ::
1    [FUNC_DEF]          quit
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TYPE]              QTimer
3    [DC_MEMBER]         ::
3    [FUNC_CALL]         singleShot
3    [FPAREN_OPEN]       (
3    [NUMBER]            0
3    [COMMA]             ,
3    [THIS]              this
3    [COMMA]             ,
3    [FUNC_CALL]         SLOT
3    [FPAREN_OPEN]       (
3    [FUNC_CALL]         doQuit
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [FPAREN_CLOSE]      )
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [BRACE_CLOSE]       }
4    [NEWLINE]           
6    [TYPE]              void
6    [TYPE]              AkonadiServer
6    [DC_MEMBER]         ::
6    [FUNC_DEF]          incomingConnection
6    [FPAREN_OPEN]       (
6    [TYPE]              quintptr
6    [WORD]              socketDescriptor
6    [FPAREN_CLOSE]      )
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [TYPE]              QPointer
8    [ANGLE_OPEN]        <
8    [TYPE]              ConnectionThread
8    [ANGLE_CLOSE]       >
8    [WORD]              thread
8    [ASSIGN]            =
8    [NEW]               new
8    [FUNC_CALL]         ConnectionThread
8    [FPAREN_OPEN]       (
8    [WORD]              socketDescriptor
8    [COMMA]             ,
8    [THIS]              this
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [FUNC_CALL]         connect
9    [FPAREN_OPEN]       (
9    [WORD]              thread
9    [COMMA]             ,
9    [FUNC_CALL]         SIGNAL
9    [FPAREN_OPEN]       (
9    [FUNC_CALL]         finished
9    [FPAREN_OPEN]       (
9    [FPAREN_CLOSE]      )
9    [FPAREN_CLOSE]      )
9    [COMMA]             ,
9    [WORD]              thread
9    [COMMA]             ,
9    [FUNC_CALL]         SLOT
9    [FPAREN_OPEN]       (
9    [FUNC_CALL]         deleteLater
9    [FPAREN_OPEN]       (
9    [FPAREN_CLOSE]      )
9    [FPAREN_CLOSE]      )
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           