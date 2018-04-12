Line [Parent]            Text
1    [FUNC_DEF]          bool
1    [FUNC_DEF]          AkonadiServer
1    [FUNC_DEF]          ::
1    [NONE]              quit
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              QTimer
3    [NONE]              ::
3    [NONE]              singleShot
3    [FUNC_CALL]         (
3    [NONE]              0
3    [NONE]              ,
3    [NONE]              this
3    [NONE]              ,
3    [NONE]              SLOT
3    [FUNC_CALL]         (
3    [NONE]              doQuit
3    [FUNC_CALL]         (
3    [FUNC_CALL]         )
3    [FUNC_CALL]         )
3    [FUNC_CALL]         )
3    [NONE]              ;
3    [NONE]              
4    [FUNC_DEF]          }
4    [NONE]              
6    [FUNC_DEF]          void
6    [FUNC_DEF]          AkonadiServer
6    [FUNC_DEF]          ::
6    [NONE]              incomingConnection
6    [FUNC_DEF]          (
6    [NONE]              quintptr
6    [NONE]              socketDescriptor
6    [FUNC_DEF]          )
6    [NONE]              
7    [FUNC_DEF]          {
7    [NONE]              
8    [NONE]              QPointer
8    [TEMPLATE]          <
8    [NONE]              ConnectionThread
8    [TEMPLATE]          >
8    [NONE]              thread
8    [NONE]              =
8    [NONE]              new
8    [NONE]              ConnectionThread
8    [FUNC_CALL]         (
8    [NONE]              socketDescriptor
8    [NONE]              ,
8    [NONE]              this
8    [FUNC_CALL]         )
8    [NONE]              ;
8    [NONE]              
9    [NONE]              connect
9    [FUNC_CALL]         (
9    [NONE]              thread
9    [NONE]              ,
9    [NONE]              SIGNAL
9    [FUNC_CALL]         (
9    [NONE]              finished
9    [FUNC_CALL]         (
9    [FUNC_CALL]         )
9    [FUNC_CALL]         )
9    [NONE]              ,
9    [NONE]              thread
9    [NONE]              ,
9    [NONE]              SLOT
9    [FUNC_CALL]         (
9    [NONE]              deleteLater
9    [FUNC_CALL]         (
9    [FUNC_CALL]         )
9    [FUNC_CALL]         )
9    [FUNC_CALL]         )
9    [NONE]              ;
9    [NONE]              
10   [FUNC_DEF]          }
10   [NONE]              