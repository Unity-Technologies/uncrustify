Line [Parent]            Text
1    [PP_IF]             #
1    [NONE]              ifndef
1    [NONE]              _FOO_BAR_H_INCLUDED_
1    [NONE]              
2    [PP_DEFINE]         #
2    [NONE]              define
2    [NONE]              _FOO_BAR_H_INCLUDED_
2    [NONE]              
4    [NONE]              class
4    [CLASS]             CFooBarDlg
4    [NONE]              :
4    [NONE]              public
4    [NONE]              CDialog
4    [NONE]              
5    [CLASS]             {
5    [NONE]              
6    [COMMENT_WHOLE]     // Construction
6    [NONE]              
7    [NONE]              public
7    [NONE]              :
7    [NONE]              
8    [NONE]              CFooBarDlg
8    [FUNC_CLASS_PROTO]    (
8    [NONE]              CFooBar
8    [NONE]              *
8    [NONE]              pDataMan
8    [NONE]              ,
8    [NONE]              
9    [NONE]              CWnd
9    [NONE]              *
9    [NONE]              pParent
9    [FUNC_PROTO]        =
9    [NONE]              NULL
9    [FUNC_CLASS_PROTO]    )
9    [FUNC_CLASS_PROTO]    ;
9    [NONE]              
10   [NONE]              virtual
10   [NONE]              ~
10   [DESTRUCTOR]        CFooBarDlg
10   [FUNC_CLASS_PROTO]    (
10   [FUNC_CLASS_PROTO]    )
10   [FUNC_CLASS_PROTO]    ;
10   [NONE]              
12   [FUNC_PROTO]        void
12   [NONE]              Initialize
12   [FUNC_PROTO]        (
12   [NONE]              BYTE
12   [NONE]              nDelay
12   [FUNC_PROTO]        =
12   [NONE]              100
12   [FUNC_PROTO]        )
12   [FUNC_PROTO]        ;
12   [NONE]              
14   [FUNC_DEF]          UINT
14   [NONE]              GetCount
14   [FUNC_DEF]          (
14   [FUNC_DEF]          )
14   [FUNC_DEF]          {
14   [NONE]              return
14   [RETURN]            (
14   [NONE]              m_nCount
14   [RETURN]            )
14   [NONE]              ;
14   [FUNC_DEF]          }
14   [NONE]              
16   [FUNC_DEF]          void
16   [NONE]              SetCount
16   [FUNC_DEF]          (
16   [NONE]              int
16   [NONE]              count
16   [FUNC_PROTO]        =
16   [NONE]              1
16   [FUNC_DEF]          )
16   [NONE]              
17   [FUNC_DEF]          {
17   [NONE]              
18   [NONE]              if
18   [IF]                (
18   [NONE]              (
18   [NONE]              count
18   [NONE]              >
18   [NONE]              0
18   [NONE]              )
18   [NONE]              &&
18   [NONE]              (
18   [NONE]              count
18   [NONE]              <
18   [NONE]              MAX_COUNT
18   [NONE]              )
18   [IF]                )
18   [NONE]              
19   [IF]                {
19   [NONE]              
20   [NONE]              m_nCount
20   [NONE]              =
20   [NONE]              count
20   [NONE]              ;
20   [NONE]              
21   [IF]                }
21   [NONE]              
22   [FUNC_DEF]          }
22   [NONE]              
24   [COMMENT_WHOLE]     // Dialog Data
24   [NONE]              
25   [COMMENT_WHOLE]     //{{AFX_DATA(CATCSMgrDlg)
25   [NONE]              
26   [NONE]              enum
26   [ENUM]              {
26   [NONE]              IDD
26   [NONE]              =
26   [NONE]              IDD_ATCS_MGR_DLG
26   [ENUM]              }
26   [ENUM]              ;
26   [NONE]              
27   [COMMENT_WHOLE]     //}}AFX_DATA
27   [NONE]              
29   [NONE]              protected
29   [NONE]              :
29   [NONE]              
30   [NONE]              int
30   [NONE]              m_nCount
30   [NONE]              ;
30   [NONE]              
32   [COMMENT_WHOLE]     // Overrides
32   [NONE]              
33   [COMMENT_WHOLE]     // ClassWizard generated virtual function overrides
33   [NONE]              
34   [COMMENT_WHOLE]     //{{AFX_VIRTUAL(CATCSMgrDlg)
34   [NONE]              
35   [NONE]              protected
35   [NONE]              :
35   [NONE]              
36   [FUNC_PROTO]        virtual
36   [FUNC_PROTO]        void
36   [NONE]              DoDataExchange
36   [FUNC_PROTO]        (
36   [NONE]              CDataExchange
36   [NONE]              *
36   [NONE]              pDX
36   [FUNC_PROTO]        )
36   [FUNC_PROTO]        ;
36   [COMMENT_END]       // DDX/DDV support
36   [NONE]              
37   [COMMENT_WHOLE]     //}}AFX_VIRTUAL
37   [NONE]              
39   [COMMENT_WHOLE]     // Implementation
39   [NONE]              
41   [COMMENT_WHOLE]     // Generated message map functions
41   [NONE]              
42   [COMMENT_WHOLE]     //{{AFX_MSG(CATCSMgrDlg)
42   [NONE]              
43   [FUNC_PROTO]        virtual
43   [FUNC_PROTO]        BOOL
43   [NONE]              OnInitDialog
43   [FUNC_PROTO]        (
43   [FUNC_PROTO]        )
43   [FUNC_PROTO]        ;
43   [NONE]              
44   [FUNC_PROTO]        afx_msg
44   [FUNC_PROTO]        void
44   [NONE]              OnTimer
44   [FUNC_PROTO]        (
44   [NONE]              UINT
44   [NONE]              nIDEvent
44   [FUNC_PROTO]        )
44   [FUNC_PROTO]        ;
44   [NONE]              
45   [FUNC_PROTO]        afx_msg
45   [FUNC_PROTO]        void
45   [NONE]              OnBtnSendFooBar
45   [FUNC_PROTO]        (
45   [FUNC_PROTO]        )
45   [FUNC_PROTO]        ;
45   [NONE]              
46   [FUNC_PROTO]        afx_msg
46   [FUNC_PROTO]        void
46   [NONE]              OnSelchangeFooBarCombo
46   [FUNC_PROTO]        (
46   [FUNC_PROTO]        )
46   [FUNC_PROTO]        ;
46   [NONE]              
47   [COMMENT_WHOLE]     //}}AFX_MSG
47   [NONE]              
48   [NONE]              DECLARE_MESSAGE_MAP
48   [FUNC_CALL]         (
48   [FUNC_CALL]         )
48   [NONE]              
49   [CLASS]             }
49   [CLASS]             ;
49   [NONE]              
51   [PP_ENDIF]          #
51   [NONE]              endif
51   [COMMENT_END]       /* _FOO_BAR_H_INCLUDED_ */
51   [NONE]              