Line [Parent]            Text
1    [PP_IF]             #
1    [NONE]              ifndef
1    [NONE]              cRecordMarking_HEADER
1    [NONE]              
2    [PP_DEFINE]         #
2    [NONE]              define
2    [NONE]              cRecordMarking_HEADER
2    [NONE]              
4    [PP_INCLUDE]        #
4    [NONE]              include
4    [NONE]              "DIS/cPduSnapshot.h"
4    [NONE]              
6    [NONE]              typedef
6    [NONE]              void
6    [NONE]              *
6    [NONE]              disConnectionH
6    [TYPEDEF]           ;
6    [NONE]              
8    [PP_IF]             #
8    [NONE]              ifdef
8    [NONE]              __cplusplus
8    [NONE]              
9    [NONE]              extern
9    [EXTERN]            "C"
9    [NONE]              
10   [PP_ENDIF]          #
10   [NONE]              endif
10   [NONE]              
11   [NONE]              {
11   [NONE]              
13   [NONE]              disConnectionH
13   [NONE]              createDisConnection
13   [FUNC_CTOR_VAR]     (
13   [FUNC_CTOR_VAR]     )
13   [FUNC_CTOR_VAR]     ;
13   [NONE]              
15   [NONE]              void
15   [NONE]              setAddressAndPort_DisConnect
15   [FUNC_CTOR_VAR]     (
15   [NONE]              disConnectionH
15   [NONE]              record
15   [NONE]              ,
15   [NONE]              const
15   [NONE]              char
15   [NONE]              *
15   [NONE]              addr
15   [FUNC_CTOR_VAR]     )
15   [FUNC_CTOR_VAR]     ;
15   [NONE]              
17   [COMMENT_WHOLE]     /* Open network connection */
17   [NONE]              
18   [NONE]              int
18   [NONE]              open_DisConnect
18   [FUNC_CTOR_VAR]     (
18   [NONE]              disConnectionH
18   [NONE]              record
18   [FUNC_CTOR_VAR]     )
18   [FUNC_CTOR_VAR]     ;
18   [NONE]              
20   [COMMENT_WHOLE]     /* Close network connection */
20   [NONE]              
21   [NONE]              void
21   [NONE]              close_DisConnect
21   [FUNC_CTOR_VAR]     (
21   [NONE]              disConnectionH
21   [NONE]              record
21   [FUNC_CTOR_VAR]     )
21   [FUNC_CTOR_VAR]     ;
21   [NONE]              
23   [COMMENT_WHOLE]     /* Send one pdu */
23   [NONE]              
24   [NONE]              int
24   [NONE]              sendPdu_DisConnect
24   [FUNC_CTOR_VAR]     (
24   [NONE]              disConnectionH
24   [NONE]              record
24   [NONE]              ,
24   [NONE]              pduSnapshotH
24   [NONE]              pdu
24   [FUNC_CTOR_VAR]     )
24   [FUNC_CTOR_VAR]     ;
24   [NONE]              
26   [COMMENT_WHOLE]     /* Receive one pdu */
26   [NONE]              
27   [NONE]              int
27   [NONE]              recvPdu_DisConnect
27   [FUNC_CTOR_VAR]     (
27   [NONE]              disConnectionH
27   [NONE]              record
27   [NONE]              ,
27   [NONE]              pduSnapshotH
27   [NONE]              pdu
27   [FUNC_CTOR_VAR]     )
27   [FUNC_CTOR_VAR]     ;
27   [NONE]              
29   [NONE]              void
29   [NONE]              FreeDisConnection
29   [FUNC_CTOR_VAR]     (
29   [NONE]              disConnectionH
29   [NONE]              connection
29   [FUNC_CTOR_VAR]     )
29   [FUNC_CTOR_VAR]     ;
29   [NONE]              
31   [NONE]              }
31   [NONE]              
32   [PP_ENDIF]          #
32   [NONE]              endif
32   [NONE]              