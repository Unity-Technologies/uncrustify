Line [Parent]            Text
1    [FUNC_DEF]          void
1    [NONE]              foo
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              QObject
3    [NONE]              ::
3    [NONE]              connect
3    [FUNC_CALL]         (
3    [NONE]              m_NetworkReply
3    [NONE]              ,
3    [NONE]              
4    [NONE]              SIGNAL
4    [FUNC_CALL]         (
4    [NONE]              error
4    [FUNC_CALL]         (
4    [NONE]              QNetworkReply
4    [NONE]              ::
4    [NONE]              NetworkError
4    [FUNC_CALL]         )
4    [FUNC_CALL]         )
4    [NONE]              ,
4    [NONE]              
5    [NONE]              this
5    [NONE]              ,
5    [NONE]              
6    [NONE]              SLOT
6    [FUNC_CALL]         (
6    [NONE]              NetworkReplyError
6    [FUNC_CALL]         (
6    [NONE]              QNetworkReply
6    [NONE]              ::
6    [NONE]              NetworkError
6    [FUNC_CALL]         )
6    [FUNC_CALL]         )
6    [FUNC_CALL]         )
6    [NONE]              ;
6    [NONE]              
7    [NONE]              QObject
7    [NONE]              ::
7    [NONE]              connect
7    [FUNC_CALL]         (
7    [NONE]              m_NetworkReply
7    [NONE]              ,
7    [NONE]              
8    [NONE]              SIGNAL
8    [FUNC_CALL]         (
8    [NONE]              uploadProgress
8    [FUNC_CALL]         (
8    [NONE]              qint64
8    [NONE]              ,
8    [NONE]              qint64
8    [FUNC_CALL]         )
8    [FUNC_CALL]         )
8    [NONE]              ,
8    [NONE]              
9    [NONE]              this
9    [NONE]              ,
9    [NONE]              
10   [NONE]              SLOT
10   [FUNC_CALL]         (
10   [NONE]              NetworkReplyUploadProgress
10   [FUNC_CALL]         (
10   [NONE]              qint64
10   [NONE]              ,
10   [NONE]              qint64
10   [FUNC_CALL]         )
10   [FUNC_CALL]         )
10   [FUNC_CALL]         )
10   [NONE]              ;
10   [NONE]              
11   [NONE]              connect
11   [FUNC_CALL]         (
11   [NONE]              &
11   [NONE]              m_SendReportThread
11   [NONE]              ,
11   [NONE]              SIGNAL
11   [FUNC_CALL]         (
11   [NONE]              ProgressChanged
11   [FUNC_CALL]         (
11   [NONE]              size_t
11   [NONE]              ,
11   [NONE]              size_t
11   [FUNC_CALL]         )
11   [FUNC_CALL]         )
11   [NONE]              ,
11   [NONE]              
12   [NONE]              SLOT
12   [FUNC_CALL]         (
12   [NONE]              OnReportProgressChanged
12   [FUNC_CALL]         (
12   [NONE]              size_t
12   [NONE]              ,
12   [NONE]              size_t
12   [FUNC_CALL]         )
12   [FUNC_CALL]         )
12   [FUNC_CALL]         )
12   [NONE]              ;
12   [NONE]              
13   [FUNC_DEF]          }
13   [NONE]              