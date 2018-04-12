Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TYPE]              QObject
3    [DC_MEMBER]         ::
3    [FUNC_CALL]         connect
3    [FPAREN_OPEN]       (
3    [WORD]              m_NetworkReply
3    [COMMA]             ,
3    [NEWLINE]           
4    [FUNC_CALL]         SIGNAL
4    [FPAREN_OPEN]       (
4    [FUNC_CALL]         error
4    [FPAREN_OPEN]       (
4    [TYPE]              QNetworkReply
4    [DC_MEMBER]         ::
4    [WORD]              NetworkError
4    [FPAREN_CLOSE]      )
4    [FPAREN_CLOSE]      )
4    [COMMA]             ,
4    [NEWLINE]           
5    [THIS]              this
5    [COMMA]             ,
5    [NEWLINE]           
6    [FUNC_CALL]         SLOT
6    [FPAREN_OPEN]       (
6    [FUNC_CALL]         NetworkReplyError
6    [FPAREN_OPEN]       (
6    [TYPE]              QNetworkReply
6    [DC_MEMBER]         ::
6    [WORD]              NetworkError
6    [FPAREN_CLOSE]      )
6    [FPAREN_CLOSE]      )
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [TYPE]              QObject
7    [DC_MEMBER]         ::
7    [FUNC_CALL]         connect
7    [FPAREN_OPEN]       (
7    [WORD]              m_NetworkReply
7    [COMMA]             ,
7    [NEWLINE]           
8    [FUNC_CALL]         SIGNAL
8    [FPAREN_OPEN]       (
8    [FUNC_CALL]         uploadProgress
8    [FPAREN_OPEN]       (
8    [WORD]              qint64
8    [COMMA]             ,
8    [WORD]              qint64
8    [FPAREN_CLOSE]      )
8    [FPAREN_CLOSE]      )
8    [COMMA]             ,
8    [NEWLINE]           
9    [THIS]              this
9    [COMMA]             ,
9    [NEWLINE]           
10   [FUNC_CALL]         SLOT
10   [FPAREN_OPEN]       (
10   [FUNC_CALL]         NetworkReplyUploadProgress
10   [FPAREN_OPEN]       (
10   [WORD]              qint64
10   [COMMA]             ,
10   [WORD]              qint64
10   [FPAREN_CLOSE]      )
10   [FPAREN_CLOSE]      )
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [FUNC_CALL]         connect
11   [FPAREN_OPEN]       (
11   [ADDR]              &
11   [WORD]              m_SendReportThread
11   [COMMA]             ,
11   [FUNC_CALL]         SIGNAL
11   [FPAREN_OPEN]       (
11   [FUNC_CALL]         ProgressChanged
11   [FPAREN_OPEN]       (
11   [WORD]              size_t
11   [COMMA]             ,
11   [WORD]              size_t
11   [FPAREN_CLOSE]      )
11   [FPAREN_CLOSE]      )
11   [COMMA]             ,
11   [NEWLINE]           
12   [FUNC_CALL]         SLOT
12   [FPAREN_OPEN]       (
12   [FUNC_CALL]         OnReportProgressChanged
12   [FPAREN_OPEN]       (
12   [WORD]              size_t
12   [COMMA]             ,
12   [WORD]              size_t
12   [FPAREN_CLOSE]      )
12   [FPAREN_CLOSE]      )
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           