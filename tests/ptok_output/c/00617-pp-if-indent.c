Line [Parent]            Text
1    [COMMENT_WHOLE]     /* this is a comment */
1    [NONE]              
3    [COMMENT_WHOLE]     /* should be in a H file but put in this file to avoid multiplying the number of test files */
3    [NONE]              
4    [PP_IF]             #
4    [NONE]              ifndef
4    [NONE]              COMSTACK_TYPES_H
4    [NONE]              
5    [PP_DEFINE]         #
5    [NONE]              define
5    [NONE]              COMSTACK_TYPES_H
5    [NONE]              
7    [PP_INCLUDE]        #
7    [NONE]              include
7    [NONE]              "STD_TYPES.h"
7    [NONE]              
8    [PP_IF]             #
8    [NONE]              ifdef
8    [NONE]              COMINL_coENABLE_1
8    [NONE]              
9    [PP_IF]             #
9    [NONE]              ifdef
9    [NONE]              COMINL_coENABLE_2
9    [NONE]              
10   [PP_INCLUDE]        #
10   [NONE]              include
10   [NONE]              "def.h"
10   [NONE]              
11   [PP_ENDIF]          #
11   [NONE]              endif
11   [NONE]              
12   [PP_ENDIF]          #
12   [NONE]              endif
12   [NONE]              
14   [PP_IF]             #
14   [NONE]              if
14   [NONE]              (
14   [NONE]              COMINL_coMINIMUM_DELAY_TIME_1
14   [NONE]              ==
14   [NONE]              COMINL_coENABLE
14   [NONE]              )
14   [NONE]              
15   [PP_IF]             #
15   [NONE]              if
15   [NONE]              (
15   [NONE]              COMINL_coMINIMUM_DELAY_TIME_2
15   [NONE]              ==
15   [NONE]              COMINL_coENABLE
15   [NONE]              )
15   [NONE]              
16   [PP_INCLUDE]        #
16   [NONE]              include
16   [NONE]              "def1.h"
16   [NONE]              
17   [PP_DEFINE]         #
17   [NONE]              define
17   [NONE]              COMINL_coMINIMUM_DELAY_TIME_1
17   [NONE]              
18   [PP_INCLUDE]        #
18   [NONE]              include
18   [NONE]              "def2.h"
18   [NONE]              
19   [PP_ENDIF]          #
19   [NONE]              endif
19   [NONE]              
20   [PP_ENDIF]          #
20   [NONE]              endif
20   [NONE]              
22   [COMMENT_WHOLE]     /* no indentation */
22   [NONE]              
23   [PP_IF]             #
23   [NONE]              if
23   [NONE]              COMINL_coMINIMUM_DELAY_TIME
23   [NONE]              ==
23   [NONE]              COMINL_coENABLE
23   [NONE]              
24   [PP_INCLUDE]        #
24   [NONE]              include
24   [NONE]              "MEMSRV.h"
24   [NONE]              
25   [PP_ENDIF]          #
25   [NONE]              endif
25   [NONE]              
27   [COMMENT_WHOLE]     /* already well indented  */
27   [NONE]              
28   [PP_IF]             #
28   [NONE]              ifndef
28   [NONE]              COMINL_coAPPLI_TX_CONFIRMATION
28   [NONE]              
29   [PP_OTHER]          #
29   [NONE]              error
29   [NONE]              "Define COMINL_coAPPLI_TX_CONFIRMATION is undefined"
29   [NONE]              
30   [PP_ENDIF]          #
30   [NONE]              endif
30   [NONE]              
32   [COMMENT_WHOLE]     /* bad indentation */
32   [NONE]              
33   [PP_IF]             #
33   [NONE]              ifndef
33   [NONE]              COMINL_coENABLE
33   [NONE]              
34   [PP_OTHER]          #
34   [NONE]              error
34   [NONE]              "Define COMINL_coENABLE is undefined"
34   [NONE]              
35   [PP_ENDIF]          #
35   [NONE]              endif
35   [NONE]              
38   [PP_IF]             #
38   [NONE]              ifdef
38   [NONE]              COMINL_coENABLE_3
38   [NONE]              
39   [NONE]              typedef
39   [NONE]              enum
39   [NONE]              
40   [ENUM]              {
40   [NONE]              
41   [NONE]              BUFREQ_OK
41   [NONE]              =
41   [NONE]              0
41   [NONE]              ,
41   [NONE]              
42   [NONE]              BUFREQ_E_NOT_OK
42   [NONE]              =
42   [NONE]              1
42   [NONE]              ,
42   [NONE]              
43   [NONE]              BUFREQ_E_BUSY
43   [NONE]              =
43   [NONE]              2
43   [NONE]              ,
43   [NONE]              
44   [NONE]              BUFREQ_E_OVFL
44   [NONE]              =
44   [NONE]              3
44   [NONE]              
45   [ENUM]              }
45   [NONE]              
46   [NONE]              BufReq_ReturnType
46   [TYPEDEF]           ;
46   [NONE]              
47   [PP_ENDIF]          #
47   [NONE]              endif
47   [NONE]              
51   [PP_IF]             #
51   [NONE]              if
51   [NONE]              COMINL_coSTART_STOP_PERIODIC
51   [NONE]              ==
51   [NONE]              COMINL_coENABLE
51   [NONE]              
52   [FUNC_DEF]          void
52   [NONE]              COMINL_vidInit
52   [FUNC_DEF]          (
52   [NONE]              void
52   [FUNC_DEF]          )
52   [NONE]              
53   [FUNC_DEF]          {
53   [NONE]              
54   [NONE]              uint8
54   [NONE]              u8LocalMsgIdx
54   [NONE]              ;
54   [NONE]              
56   [NONE]              if
56   [IF]                (
56   [NONE]              COMINL_kastrVarReceiveMsg
56   [NONE]              [
56   [NONE]              u8LocalMsgIdx
56   [NONE]              ]
56   [NONE]              .
56   [NONE]              udtDeadlineMonTimer
56   [NONE]              
56   [NONE]              <
56   [NONE]              COMINL_udtNB_MESSAGES_RX
56   [IF]                )
56   [NONE]              
57   [IF]                {
57   [NONE]              
58   [NONE]              u8LocalMsgIdx
58   [NONE]              =
58   [NONE]              E_OK
58   [NONE]              ;
58   [NONE]              
59   [IF]                }
59   [NONE]              
60   [NONE]              else
60   [NONE]              
61   [ELSE]              {
61   [NONE]              
62   [NONE]              u8LocalMsgIdx
62   [NONE]              =
62   [NONE]              E_NOT_OK
62   [NONE]              ;
62   [NONE]              
63   [ELSE]              }
63   [NONE]              
65   [COMMENT_WHOLE]     /* nested #if...already well indented */
65   [NONE]              
66   [PP_IF]             #
66   [NONE]              if
66   [NONE]              COMINL_coRX_MESSAGE_VAR
66   [NONE]              ==
66   [NONE]              COMINL_coENABLE
66   [NONE]              
67   [COMMENT_WHOLE]     /*!Trace to: VEES_R_11_04044_004.01*/
67   [NONE]              
68   [NONE]              for
68   [FOR]               (
68   [NONE]              u8LocalMsgIdx
68   [NONE]              =
68   [NONE]              0
68   [FOR]               ;
68   [NONE]              
68   [NONE]              u8LocalMsgIdx
68   [NONE]              <
68   [NONE]              COMINL_udtNB_MESSAGES_RX
68   [FOR]               ;
68   [NONE]              
68   [NONE]              u8LocalMsgIdx
68   [NONE]              ++
68   [FOR]               )
68   [NONE]              
69   [FOR]               {
69   [NONE]              
70   [PP_IF]             #
70   [NONE]              if
70   [NONE]              COMINL_coRX_DEADLINE_MONITORING
70   [NONE]              ==
70   [NONE]              COMINL_coENABLE
70   [NONE]              
71   [NONE]              COMINL_kastrVarReceiveMsg
71   [NONE]              [
71   [NONE]              u8LocalMsgIdx
71   [NONE]              ]
71   [NONE]              .
71   [NONE]              udtDeadlineMonTimer
71   [NONE]              =
71   [NONE]              0
71   [NONE]              ;
71   [NONE]              
72   [PP_ELSE]           #
72   [NONE]              else
72   [COMMENT_END]       /* COMINL_coRX_DEADLINE_MONITORING == COMINL_coENABLE */
72   [NONE]              
73   [NONE]              COMINL_kastrVarReceiveMsg
73   [NONE]              [
73   [NONE]              u8LocalMsgIdx
73   [NONE]              ]
73   [NONE]              .
73   [NONE]              udtINMDeadlineMonTimer
73   [NONE]              =
73   [NONE]              0
73   [NONE]              ;
73   [NONE]              
74   [PP_ENDIF]          #
74   [NONE]              endif
74   [COMMENT_END]       /* COMINL_coRX_DEADLINE_MONITORING == COMINL_coENABLE */
74   [NONE]              
75   [FOR]               }
75   [NONE]              
76   [PP_ENDIF]          #
76   [NONE]              endif
76   [COMMENT_END]       /* COMINL_coRX_MESSAGE_VAR == COMINL_coENABLE */
76   [NONE]              
80   [COMMENT_WHOLE]     /* nested #if... no indentation  */
80   [NONE]              
81   [PP_IF]             #
81   [NONE]              if
81   [NONE]              COMINL_coTX_MESSAGE_VAR
81   [NONE]              ==
81   [NONE]              COMINL_coENABLE
81   [NONE]              
82   [COMMENT_WHOLE]     /*!Trace to: VEES_R_11_04044_004.01*/
82   [NONE]              
83   [NONE]              for
83   [FOR]               (
83   [NONE]              u8LocalMsgIdx
83   [NONE]              =
83   [NONE]              0
83   [FOR]               ;
83   [NONE]              
83   [NONE]              u8LocalMsgIdx
83   [NONE]              <
83   [NONE]              COMINL_udtNB_MESSAGES_TX
83   [FOR]               ;
83   [NONE]              
83   [NONE]              u8LocalMsgIdx
83   [NONE]              ++
83   [FOR]               )
83   [NONE]              
84   [FOR]               {
84   [NONE]              
85   [PP_IF]             #
85   [NONE]              if
85   [NONE]              COMINL_coTX_DEADLINE_MONITORING
85   [NONE]              ==
85   [NONE]              COMINL_coENABLE
85   [NONE]              
86   [NONE]              COMINL_kastrVarTransmitMsg
86   [NONE]              [
86   [NONE]              u8LocalMsgIdx
86   [NONE]              ]
86   [NONE]              .
86   [NONE]              udtDeadlineMonTimer
86   [NONE]              =
86   [NONE]              0
86   [NONE]              ;
86   [NONE]              
87   [NONE]              COMINL_kastrVarTransmitMsg
87   [NONE]              [
87   [NONE]              u8LocalMsgIdx
87   [NONE]              ]
87   [NONE]              .
87   [NONE]              bDeadlineMonEnable
87   [NONE]              =
87   [NONE]              
87   [NONE]              FALSE
87   [NONE]              ;
87   [NONE]              
88   [PP_ENDIF]          #
88   [NONE]              endif
88   [COMMENT_END]       /* COMINL_coTX_DEADLINE_MONITORING == COMINL_coENABLE */
88   [NONE]              
89   [PP_IF]             #
89   [NONE]              if
89   [NONE]              COMINL_coTX_INM_DEADLINE_MONITORING
89   [NONE]              ==
89   [NONE]              COMINL_coENABLE
89   [NONE]              
90   [NONE]              COMINL_kastrVarTransmitMsg
90   [NONE]              [
90   [NONE]              u8LocalMsgIdx
90   [NONE]              ]
90   [NONE]              .
90   [NONE]              udtINMDeadlineMonTimer
90   [NONE]              =
90   [NONE]              
90   [NONE]              0
90   [NONE]              ;
90   [NONE]              
91   [PP_ELSE]           #
91   [NONE]              else
91   [COMMENT_END]       /* COMINL_coTX_INM_DEADLINE_MONITORING == COMINL_coENABLE */
91   [NONE]              
92   [NONE]              COMINL_kastrVarTransmitMsg
92   [NONE]              [
92   [NONE]              u8LocalMsgIdx
92   [NONE]              ]
92   [NONE]              .
92   [NONE]              udtMDTTimer
92   [NONE]              =
92   [NONE]              0
92   [NONE]              ;
92   [NONE]              
93   [NONE]              COMINL_kastrVarTransmitMsg
93   [NONE]              [
93   [NONE]              u8LocalMsgIdx
93   [NONE]              ]
93   [NONE]              .
93   [NONE]              bMDTMsgToSend
93   [NONE]              =
93   [NONE]              FALSE
93   [NONE]              ;
93   [NONE]              
94   [PP_ENDIF]          #
94   [NONE]              endif
94   [COMMENT_END]       /*COMINL_coMINIMUM_DELAY_TIME == COMINL_coENABLE*/
94   [NONE]              
95   [PP_IF]             #
95   [NONE]              if
95   [NONE]              COMINL_coMIXED_MODE
95   [NONE]              !=
95   [NONE]              COMINL_coDISABLE
95   [NONE]              
96   [NONE]              COMINL_kastrVarTransmitMsg
96   [NONE]              [
96   [NONE]              u8LocalMsgIdx
96   [NONE]              ]
96   [NONE]              .
96   [NONE]              udtPeriodicTimer
96   [NONE]              =
96   [NONE]              0
96   [NONE]              ;
96   [NONE]              
97   [PP_ENDIF]          #
97   [NONE]              endif
97   [NONE]              
98   [FOR]               }
98   [NONE]              
99   [PP_ENDIF]          #
99   [NONE]              endif
99   [COMMENT_END]       /* COMINL_coTX_MESSAGE_VAR == COMINL_coENABLE */
99   [NONE]              
100  [FUNC_DEF]          }
100  [NONE]              
101  [PP_ENDIF]          #
101  [NONE]              endif
101  [NONE]              
104  [FUNC_DEF]          void
104  [NONE]              myfunction
104  [FUNC_DEF]          (
104  [NONE]              void
104  [FUNC_DEF]          )
104  [NONE]              
105  [FUNC_DEF]          {
105  [NONE]              
106  [NONE]              int
106  [NONE]              i
106  [NONE]              ;
106  [NONE]              
107  [PP_IF]             #
107  [NONE]              ifdef
107  [NONE]              COMINL_coTX_MESSAGE_VAR
107  [NONE]              
108  [PP_IF]             #
108  [NONE]              ifndef
108  [NONE]              COMINL_coMIXED_MODE
108  [NONE]              
109  [PP_PRAGMA]         #
109  [NONE]              pragma
109  [NONE]              MyPragma
109  [NONE]              
110  [NONE]              int
110  [NONE]              j
110  [NONE]              ;
110  [NONE]              
111  [PP_ENDIF]          #
111  [NONE]              endif
111  [NONE]              
112  [PP_ENDIF]          #
112  [NONE]              endif
112  [NONE]              
113  [NONE]              int
113  [NONE]              k
113  [NONE]              ;
113  [NONE]              
114  [FUNC_DEF]          }
114  [NONE]              
117  [PP_ENDIF]          #
117  [NONE]              endif
117  [COMMENT_END]       /* COMSTACK_TYPES_H */
117  [NONE]              
119  [COMMENT_WHOLE]     /*------------------------------- end of file --------------------------------*/
119  [NONE]              