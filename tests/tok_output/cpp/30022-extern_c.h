Line [Token]             Text
1    [PREPROC]           #
1    [PP_IF]             ifndef
1    [WORD]              cRecordMarking_HEADER
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_DEFINE]         define
2    [MACRO]             cRecordMarking_HEADER
2    [NEWLINE]           
4    [PREPROC]           #
4    [PP_INCLUDE]        include
4    [PREPROC_BODY]      "DIS/cPduSnapshot.h"
4    [NEWLINE]           
6    [TYPEDEF]           typedef
6    [TYPE]              void
6    [PTR_TYPE]          *
6    [TYPE]              disConnectionH
6    [SEMICOLON]         ;
6    [NEWLINE]           
8    [PREPROC]           #
8    [PP_IF]             ifdef
8    [WORD]              __cplusplus
8    [NEWLINE]           
9    [EXTERN]            extern
9    [STRING]            "C"
9    [NEWLINE]           
10   [PREPROC]           #
10   [PP_ENDIF]          endif
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
13   [TYPE]              disConnectionH
13   [FUNC_CTOR_VAR]     createDisConnection
13   [FPAREN_OPEN]       (
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [TYPE]              void
15   [FUNC_CTOR_VAR]     setAddressAndPort_DisConnect
15   [FPAREN_OPEN]       (
15   [TYPE]              disConnectionH
15   [WORD]              record
15   [COMMA]             ,
15   [QUALIFIER]         const
15   [TYPE]              char
15   [PTR_TYPE]          *
15   [WORD]              addr
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
17   [COMMENT]           /* Open network connection */
17   [NEWLINE]           
18   [TYPE]              int
18   [FUNC_CTOR_VAR]     open_DisConnect
18   [FPAREN_OPEN]       (
18   [TYPE]              disConnectionH
18   [WORD]              record
18   [FPAREN_CLOSE]      )
18   [SEMICOLON]         ;
18   [NEWLINE]           
20   [COMMENT]           /* Close network connection */
20   [NEWLINE]           
21   [TYPE]              void
21   [FUNC_CTOR_VAR]     close_DisConnect
21   [FPAREN_OPEN]       (
21   [TYPE]              disConnectionH
21   [WORD]              record
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [NEWLINE]           
23   [COMMENT]           /* Send one pdu */
23   [NEWLINE]           
24   [TYPE]              int
24   [FUNC_CTOR_VAR]     sendPdu_DisConnect
24   [FPAREN_OPEN]       (
24   [TYPE]              disConnectionH
24   [WORD]              record
24   [COMMA]             ,
24   [TYPE]              pduSnapshotH
24   [WORD]              pdu
24   [FPAREN_CLOSE]      )
24   [SEMICOLON]         ;
24   [NEWLINE]           
26   [COMMENT]           /* Receive one pdu */
26   [NEWLINE]           
27   [TYPE]              int
27   [FUNC_CTOR_VAR]     recvPdu_DisConnect
27   [FPAREN_OPEN]       (
27   [TYPE]              disConnectionH
27   [WORD]              record
27   [COMMA]             ,
27   [TYPE]              pduSnapshotH
27   [WORD]              pdu
27   [FPAREN_CLOSE]      )
27   [SEMICOLON]         ;
27   [NEWLINE]           
29   [TYPE]              void
29   [FUNC_CTOR_VAR]     FreeDisConnection
29   [FPAREN_OPEN]       (
29   [TYPE]              disConnectionH
29   [WORD]              connection
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [NEWLINE]           
32   [PREPROC]           #
32   [PP_ENDIF]          endif
32   [NEWLINE]           