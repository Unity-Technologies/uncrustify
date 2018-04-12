Line [Token]             Text
1    [COMMENT]           /* this is a comment */
1    [NEWLINE]           
3    [COMMENT]           /* should be in a H file but put in this file to avoid multiplying the number of test files */
3    [NEWLINE]           
4    [PREPROC]           #
4    [PP_IF]             ifndef
4    [WORD]              COMSTACK_TYPES_H
4    [NEWLINE]           
5    [PREPROC]           #
5    [PP_DEFINE]         define
5    [MACRO]             COMSTACK_TYPES_H
5    [NEWLINE]           
7    [PREPROC]           #
7    [PP_INCLUDE]        include
7    [PREPROC_BODY]      "STD_TYPES.h"
7    [NEWLINE]           
8    [PREPROC]           #
8    [PP_IF]             ifdef
8    [WORD]              COMINL_coENABLE_1
8    [NEWLINE]           
9    [PREPROC]           #
9    [PP_IF]             ifdef
9    [WORD]              COMINL_coENABLE_2
9    [NEWLINE]           
10   [PREPROC]           #
10   [PP_INCLUDE]        include
10   [PREPROC_BODY]      "def.h"
10   [NEWLINE]           
11   [PREPROC]           #
11   [PP_ENDIF]          endif
11   [NEWLINE]           
12   [PREPROC]           #
12   [PP_ENDIF]          endif
12   [NEWLINE]           
14   [PREPROC]           #
14   [PP_IF]             if
14   [PAREN_OPEN]        (
14   [WORD]              COMINL_coMINIMUM_DELAY_TIME_1
14   [COMPARE]           ==
14   [WORD]              COMINL_coENABLE
14   [PAREN_CLOSE]       )
14   [NEWLINE]           
15   [PREPROC]           #
15   [PP_IF]             if
15   [PAREN_OPEN]        (
15   [WORD]              COMINL_coMINIMUM_DELAY_TIME_2
15   [COMPARE]           ==
15   [WORD]              COMINL_coENABLE
15   [PAREN_CLOSE]       )
15   [NEWLINE]           
16   [PREPROC]           #
16   [PP_INCLUDE]        include
16   [PREPROC_BODY]      "def1.h"
16   [NEWLINE]           
17   [PREPROC]           #
17   [PP_DEFINE]         define
17   [MACRO]             COMINL_coMINIMUM_DELAY_TIME_1
17   [NEWLINE]           
18   [PREPROC]           #
18   [PP_INCLUDE]        include
18   [PREPROC_BODY]      "def2.h"
18   [NEWLINE]           
19   [PREPROC]           #
19   [PP_ENDIF]          endif
19   [NEWLINE]           
20   [PREPROC]           #
20   [PP_ENDIF]          endif
20   [NEWLINE]           
22   [COMMENT]           /* no indentation */
22   [NEWLINE]           
23   [PREPROC]           #
23   [PP_IF]             if
23   [WORD]              COMINL_coMINIMUM_DELAY_TIME
23   [COMPARE]           ==
23   [WORD]              COMINL_coENABLE
23   [NEWLINE]           
24   [PREPROC]           #
24   [PP_INCLUDE]        include
24   [PREPROC_BODY]      "MEMSRV.h"
24   [NEWLINE]           
25   [PREPROC]           #
25   [PP_ENDIF]          endif
25   [NEWLINE]           
27   [COMMENT]           /* already well indented  */
27   [NEWLINE]           
28   [PREPROC]           #
28   [PP_IF]             ifndef
28   [WORD]              COMINL_coAPPLI_TX_CONFIRMATION
28   [NEWLINE]           
29   [PREPROC]           #
29   [PP_OTHER]          error
29   [PREPROC_BODY]      "Define COMINL_coAPPLI_TX_CONFIRMATION is undefined"
29   [NEWLINE]           
30   [PREPROC]           #
30   [PP_ENDIF]          endif
30   [NEWLINE]           
32   [COMMENT]           /* bad indentation */
32   [NEWLINE]           
33   [PREPROC]           #
33   [PP_IF]             ifndef
33   [WORD]              COMINL_coENABLE
33   [NEWLINE]           
34   [PREPROC]           #
34   [PP_OTHER]          error
34   [PREPROC_BODY]      "Define COMINL_coENABLE is undefined"
34   [NEWLINE]           
35   [PREPROC]           #
35   [PP_ENDIF]          endif
35   [NEWLINE]           
38   [PREPROC]           #
38   [PP_IF]             ifdef
38   [WORD]              COMINL_coENABLE_3
38   [NEWLINE]           
39   [TYPEDEF]           typedef
39   [ENUM]              enum
39   [NEWLINE]           
40   [BRACE_OPEN]        {
40   [NEWLINE]           
41   [WORD]              BUFREQ_OK
41   [ASSIGN]            =
41   [NUMBER]            0
41   [COMMA]             ,
41   [NEWLINE]           
42   [WORD]              BUFREQ_E_NOT_OK
42   [ASSIGN]            =
42   [NUMBER]            1
42   [COMMA]             ,
42   [NEWLINE]           
43   [WORD]              BUFREQ_E_BUSY
43   [ASSIGN]            =
43   [NUMBER]            2
43   [COMMA]             ,
43   [NEWLINE]           
44   [WORD]              BUFREQ_E_OVFL
44   [ASSIGN]            =
44   [NUMBER]            3
44   [NEWLINE]           
45   [BRACE_CLOSE]       }
45   [NEWLINE]           
46   [TYPE]              BufReq_ReturnType
46   [SEMICOLON]         ;
46   [NEWLINE]           
47   [PREPROC]           #
47   [PP_ENDIF]          endif
47   [NEWLINE]           
51   [PREPROC]           #
51   [PP_IF]             if
51   [WORD]              COMINL_coSTART_STOP_PERIODIC
51   [COMPARE]           ==
51   [WORD]              COMINL_coENABLE
51   [NEWLINE]           
52   [TYPE]              void
52   [FUNC_DEF]          COMINL_vidInit
52   [FPAREN_OPEN]       (
52   [TYPE]              void
52   [FPAREN_CLOSE]      )
52   [NEWLINE]           
53   [BRACE_OPEN]        {
53   [NEWLINE]           
54   [TYPE]              uint8
54   [WORD]              u8LocalMsgIdx
54   [SEMICOLON]         ;
54   [NEWLINE]           
56   [IF]                if
56   [SPAREN_OPEN]       (
56   [WORD]              COMINL_kastrVarReceiveMsg
56   [SQUARE_OPEN]       [
56   [WORD]              u8LocalMsgIdx
56   [SQUARE_CLOSE]      ]
56   [MEMBER]            .
56   [WORD]              udtDeadlineMonTimer
56   [COMPARE]           <
56   [WORD]              COMINL_udtNB_MESSAGES_RX
56   [SPAREN_CLOSE]      )
56   [NEWLINE]           
57   [BRACE_OPEN]        {
57   [NEWLINE]           
58   [WORD]              u8LocalMsgIdx
58   [ASSIGN]            =
58   [WORD]              E_OK
58   [SEMICOLON]         ;
58   [NEWLINE]           
59   [BRACE_CLOSE]       }
59   [NEWLINE]           
60   [ELSE]              else
60   [NEWLINE]           
61   [BRACE_OPEN]        {
61   [NEWLINE]           
62   [WORD]              u8LocalMsgIdx
62   [ASSIGN]            =
62   [WORD]              E_NOT_OK
62   [SEMICOLON]         ;
62   [NEWLINE]           
63   [BRACE_CLOSE]       }
63   [NEWLINE]           
65   [COMMENT]           /* nested #if...already well indented */
65   [NEWLINE]           
66   [PREPROC]           #
66   [PP_IF]             if
66   [WORD]              COMINL_coRX_MESSAGE_VAR
66   [COMPARE]           ==
66   [WORD]              COMINL_coENABLE
66   [NEWLINE]           
67   [COMMENT]           /*!Trace to: VEES_R_11_04044_004.01*/
67   [NEWLINE]           
68   [FOR]               for
68   [SPAREN_OPEN]       (
68   [WORD]              u8LocalMsgIdx
68   [ASSIGN]            =
68   [NUMBER]            0
68   [SEMICOLON]         ;
68   [WORD]              u8LocalMsgIdx
68   [COMPARE]           <
68   [WORD]              COMINL_udtNB_MESSAGES_RX
68   [SEMICOLON]         ;
68   [WORD]              u8LocalMsgIdx
68   [INCDEC_AFTER]      ++
68   [SPAREN_CLOSE]      )
68   [NEWLINE]           
69   [BRACE_OPEN]        {
69   [NEWLINE]           
70   [PREPROC]           #
70   [PP_IF]             if
70   [WORD]              COMINL_coRX_DEADLINE_MONITORING
70   [COMPARE]           ==
70   [TYPE]              COMINL_coENABLE
70   [NEWLINE]           
71   [WORD]              COMINL_kastrVarReceiveMsg
71   [SQUARE_OPEN]       [
71   [WORD]              u8LocalMsgIdx
71   [SQUARE_CLOSE]      ]
71   [MEMBER]            .
71   [WORD]              udtDeadlineMonTimer
71   [ASSIGN]            =
71   [NUMBER]            0
71   [SEMICOLON]         ;
71   [NEWLINE]           
72   [PREPROC]           #
72   [PP_ELSE]           else
72   [COMMENT]           /* COMINL_coRX_DEADLINE_MONITORING == COMINL_coENABLE */
72   [NEWLINE]           
73   [WORD]              COMINL_kastrVarReceiveMsg
73   [SQUARE_OPEN]       [
73   [WORD]              u8LocalMsgIdx
73   [SQUARE_CLOSE]      ]
73   [MEMBER]            .
73   [WORD]              udtINMDeadlineMonTimer
73   [ASSIGN]            =
73   [NUMBER]            0
73   [SEMICOLON]         ;
73   [NEWLINE]           
74   [PREPROC]           #
74   [PP_ENDIF]          endif
74   [COMMENT]           /* COMINL_coRX_DEADLINE_MONITORING == COMINL_coENABLE */
74   [NEWLINE]           
75   [BRACE_CLOSE]       }
75   [NEWLINE]           
76   [PREPROC]           #
76   [PP_ENDIF]          endif
76   [COMMENT]           /* COMINL_coRX_MESSAGE_VAR == COMINL_coENABLE */
76   [NEWLINE]           
80   [COMMENT]           /* nested #if... no indentation  */
80   [NEWLINE]           
81   [PREPROC]           #
81   [PP_IF]             if
81   [WORD]              COMINL_coTX_MESSAGE_VAR
81   [COMPARE]           ==
81   [WORD]              COMINL_coENABLE
81   [NEWLINE]           
82   [COMMENT]           /*!Trace to: VEES_R_11_04044_004.01*/
82   [NEWLINE]           
83   [FOR]               for
83   [SPAREN_OPEN]       (
83   [WORD]              u8LocalMsgIdx
83   [ASSIGN]            =
83   [NUMBER]            0
83   [SEMICOLON]         ;
83   [WORD]              u8LocalMsgIdx
83   [COMPARE]           <
83   [WORD]              COMINL_udtNB_MESSAGES_TX
83   [SEMICOLON]         ;
83   [WORD]              u8LocalMsgIdx
83   [INCDEC_AFTER]      ++
83   [SPAREN_CLOSE]      )
83   [NEWLINE]           
84   [BRACE_OPEN]        {
84   [NEWLINE]           
85   [PREPROC]           #
85   [PP_IF]             if
85   [WORD]              COMINL_coTX_DEADLINE_MONITORING
85   [COMPARE]           ==
85   [TYPE]              COMINL_coENABLE
85   [NEWLINE]           
86   [WORD]              COMINL_kastrVarTransmitMsg
86   [SQUARE_OPEN]       [
86   [WORD]              u8LocalMsgIdx
86   [SQUARE_CLOSE]      ]
86   [MEMBER]            .
86   [WORD]              udtDeadlineMonTimer
86   [ASSIGN]            =
86   [NUMBER]            0
86   [SEMICOLON]         ;
86   [NEWLINE]           
87   [WORD]              COMINL_kastrVarTransmitMsg
87   [SQUARE_OPEN]       [
87   [WORD]              u8LocalMsgIdx
87   [SQUARE_CLOSE]      ]
87   [MEMBER]            .
87   [WORD]              bDeadlineMonEnable
87   [ASSIGN]            =
87   [WORD]              FALSE
87   [SEMICOLON]         ;
87   [NEWLINE]           
88   [PREPROC]           #
88   [PP_ENDIF]          endif
88   [COMMENT]           /* COMINL_coTX_DEADLINE_MONITORING == COMINL_coENABLE */
88   [NEWLINE]           
89   [PREPROC]           #
89   [PP_IF]             if
89   [WORD]              COMINL_coTX_INM_DEADLINE_MONITORING
89   [COMPARE]           ==
89   [TYPE]              COMINL_coENABLE
89   [NEWLINE]           
90   [WORD]              COMINL_kastrVarTransmitMsg
90   [SQUARE_OPEN]       [
90   [WORD]              u8LocalMsgIdx
90   [SQUARE_CLOSE]      ]
90   [MEMBER]            .
90   [WORD]              udtINMDeadlineMonTimer
90   [ASSIGN]            =
90   [NUMBER]            0
90   [SEMICOLON]         ;
90   [NEWLINE]           
91   [PREPROC]           #
91   [PP_ELSE]           else
91   [COMMENT]           /* COMINL_coTX_INM_DEADLINE_MONITORING == COMINL_coENABLE */
91   [NEWLINE]           
92   [WORD]              COMINL_kastrVarTransmitMsg
92   [SQUARE_OPEN]       [
92   [WORD]              u8LocalMsgIdx
92   [SQUARE_CLOSE]      ]
92   [MEMBER]            .
92   [WORD]              udtMDTTimer
92   [ASSIGN]            =
92   [NUMBER]            0
92   [SEMICOLON]         ;
92   [NEWLINE]           
93   [WORD]              COMINL_kastrVarTransmitMsg
93   [SQUARE_OPEN]       [
93   [WORD]              u8LocalMsgIdx
93   [SQUARE_CLOSE]      ]
93   [MEMBER]            .
93   [WORD]              bMDTMsgToSend
93   [ASSIGN]            =
93   [WORD]              FALSE
93   [SEMICOLON]         ;
93   [NEWLINE]           
94   [PREPROC]           #
94   [PP_ENDIF]          endif
94   [COMMENT]           /*COMINL_coMINIMUM_DELAY_TIME == COMINL_coENABLE*/
94   [NEWLINE]           
95   [PREPROC]           #
95   [PP_IF]             if
95   [WORD]              COMINL_coMIXED_MODE
95   [COMPARE]           !=
95   [TYPE]              COMINL_coDISABLE
95   [NEWLINE]           
96   [WORD]              COMINL_kastrVarTransmitMsg
96   [SQUARE_OPEN]       [
96   [WORD]              u8LocalMsgIdx
96   [SQUARE_CLOSE]      ]
96   [MEMBER]            .
96   [WORD]              udtPeriodicTimer
96   [ASSIGN]            =
96   [NUMBER]            0
96   [SEMICOLON]         ;
96   [NEWLINE]           
97   [PREPROC]           #
97   [PP_ENDIF]          endif
97   [NEWLINE]           
98   [BRACE_CLOSE]       }
98   [NEWLINE]           
99   [PREPROC]           #
99   [PP_ENDIF]          endif
99   [COMMENT]           /* COMINL_coTX_MESSAGE_VAR == COMINL_coENABLE */
99   [NEWLINE]           
100  [BRACE_CLOSE]       }
100  [NEWLINE]           
101  [PREPROC]           #
101  [PP_ENDIF]          endif
101  [NEWLINE]           
104  [TYPE]              void
104  [FUNC_DEF]          myfunction
104  [FPAREN_OPEN]       (
104  [TYPE]              void
104  [FPAREN_CLOSE]      )
104  [NEWLINE]           
105  [BRACE_OPEN]        {
105  [NEWLINE]           
106  [TYPE]              int
106  [WORD]              i
106  [SEMICOLON]         ;
106  [NEWLINE]           
107  [PREPROC]           #
107  [PP_IF]             ifdef
107  [WORD]              COMINL_coTX_MESSAGE_VAR
107  [NEWLINE]           
108  [PREPROC]           #
108  [PP_IF]             ifndef
108  [WORD]              COMINL_coMIXED_MODE
108  [NEWLINE]           
109  [PREPROC]           #
109  [PP_PRAGMA]         pragma
109  [PREPROC_BODY]      MyPragma
109  [NEWLINE]           
110  [TYPE]              int
110  [WORD]              j
110  [SEMICOLON]         ;
110  [NEWLINE]           
111  [PREPROC]           #
111  [PP_ENDIF]          endif
111  [NEWLINE]           
112  [PREPROC]           #
112  [PP_ENDIF]          endif
112  [NEWLINE]           
113  [TYPE]              int
113  [WORD]              k
113  [SEMICOLON]         ;
113  [NEWLINE]           
114  [BRACE_CLOSE]       }
114  [NEWLINE]           
117  [PREPROC]           #
117  [PP_ENDIF]          endif
117  [COMMENT]           /* COMSTACK_TYPES_H */
117  [NEWLINE]           
119  [COMMENT]           /*------------------------------- end of file --------------------------------*/
119  [NEWLINE]           