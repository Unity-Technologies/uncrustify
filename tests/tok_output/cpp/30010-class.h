Line [Token]             Text
1    [PREPROC]           #
1    [PP_IF]             ifndef
1    [WORD]              _FOO_BAR_H_INCLUDED_
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_DEFINE]         define
2    [MACRO]             _FOO_BAR_H_INCLUDED_
2    [NEWLINE]           
4    [CLASS]             class
4    [TYPE]              CFooBarDlg
4    [CLASS_COLON]       :
4    [QUALIFIER]         public
4    [WORD]              CDialog
4    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [COMMENT_CPP]       // Construction
6    [NEWLINE]           
7    [PRIVATE]           public
7    [PRIVATE_COLON]     :
7    [NEWLINE]           
8    [FUNC_CLASS_PROTO]    CFooBarDlg
8    [FPAREN_OPEN]       (
8    [TYPE]              CFooBar
8    [PTR_TYPE]          *
8    [WORD]              pDataMan
8    [COMMA]             ,
8    [NEWLINE]           
9    [TYPE]              CWnd
9    [PTR_TYPE]          *
9    [WORD]              pParent
9    [ASSIGN]            =
9    [TYPE]              NULL
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [QUALIFIER]         virtual
10   [DESTRUCTOR]        ~
10   [FUNC_CLASS_PROTO]    CFooBarDlg
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
12   [TYPE]              void
12   [FUNC_PROTO]        Initialize
12   [FPAREN_OPEN]       (
12   [TYPE]              BYTE
12   [WORD]              nDelay
12   [ASSIGN]            =
12   [NUMBER]            100
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
14   [TYPE]              UINT
14   [FUNC_DEF]          GetCount
14   [FPAREN_OPEN]       (
14   [FPAREN_CLOSE]      )
14   [BRACE_OPEN]        {
14   [RETURN]            return
14   [PAREN_OPEN]        (
14   [WORD]              m_nCount
14   [PAREN_CLOSE]       )
14   [SEMICOLON]         ;
14   [BRACE_CLOSE]       }
14   [NEWLINE]           
16   [TYPE]              void
16   [FUNC_DEF]          SetCount
16   [FPAREN_OPEN]       (
16   [TYPE]              int
16   [WORD]              count
16   [ASSIGN]            =
16   [NUMBER]            1
16   [FPAREN_CLOSE]      )
16   [NEWLINE]           
17   [BRACE_OPEN]        {
17   [NEWLINE]           
18   [IF]                if
18   [SPAREN_OPEN]       (
18   [PAREN_OPEN]        (
18   [WORD]              count
18   [COMPARE]           >
18   [NUMBER]            0
18   [PAREN_CLOSE]       )
18   [BOOL]              &&
18   [PAREN_OPEN]        (
18   [WORD]              count
18   [COMPARE]           <
18   [WORD]              MAX_COUNT
18   [PAREN_CLOSE]       )
18   [SPAREN_CLOSE]      )
18   [NEWLINE]           
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [WORD]              m_nCount
20   [ASSIGN]            =
20   [WORD]              count
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
24   [COMMENT_CPP]       // Dialog Data
24   [NEWLINE]           
25   [COMMENT_CPP]       //{{AFX_DATA(CATCSMgrDlg)
25   [NEWLINE]           
26   [ENUM]              enum
26   [BRACE_OPEN]        {
26   [WORD]              IDD
26   [ASSIGN]            =
26   [WORD]              IDD_ATCS_MGR_DLG
26   [BRACE_CLOSE]       }
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [COMMENT_CPP]       //}}AFX_DATA
27   [NEWLINE]           
29   [PRIVATE]           protected
29   [PRIVATE_COLON]     :
29   [NEWLINE]           
30   [TYPE]              int
30   [WORD]              m_nCount
30   [SEMICOLON]         ;
30   [NEWLINE]           
32   [COMMENT_CPP]       // Overrides
32   [NEWLINE]           
33   [COMMENT_CPP]       // ClassWizard generated virtual function overrides
33   [NEWLINE]           
34   [COMMENT_CPP]       //{{AFX_VIRTUAL(CATCSMgrDlg)
34   [NEWLINE]           
35   [PRIVATE]           protected
35   [PRIVATE_COLON]     :
35   [NEWLINE]           
36   [QUALIFIER]         virtual
36   [TYPE]              void
36   [FUNC_PROTO]        DoDataExchange
36   [FPAREN_OPEN]       (
36   [TYPE]              CDataExchange
36   [PTR_TYPE]          *
36   [WORD]              pDX
36   [FPAREN_CLOSE]      )
36   [SEMICOLON]         ;
36   [COMMENT_CPP]       // DDX/DDV support
36   [NEWLINE]           
37   [COMMENT_CPP]       //}}AFX_VIRTUAL
37   [NEWLINE]           
39   [COMMENT_CPP]       // Implementation
39   [NEWLINE]           
41   [COMMENT_CPP]       // Generated message map functions
41   [NEWLINE]           
42   [COMMENT_CPP]       //{{AFX_MSG(CATCSMgrDlg)
42   [NEWLINE]           
43   [QUALIFIER]         virtual
43   [TYPE]              BOOL
43   [FUNC_PROTO]        OnInitDialog
43   [FPAREN_OPEN]       (
43   [FPAREN_CLOSE]      )
43   [SEMICOLON]         ;
43   [NEWLINE]           
44   [TYPE]              afx_msg
44   [TYPE]              void
44   [FUNC_PROTO]        OnTimer
44   [FPAREN_OPEN]       (
44   [TYPE]              UINT
44   [WORD]              nIDEvent
44   [FPAREN_CLOSE]      )
44   [SEMICOLON]         ;
44   [NEWLINE]           
45   [TYPE]              afx_msg
45   [TYPE]              void
45   [FUNC_PROTO]        OnBtnSendFooBar
45   [FPAREN_OPEN]       (
45   [FPAREN_CLOSE]      )
45   [SEMICOLON]         ;
45   [NEWLINE]           
46   [TYPE]              afx_msg
46   [TYPE]              void
46   [FUNC_PROTO]        OnSelchangeFooBarCombo
46   [FPAREN_OPEN]       (
46   [FPAREN_CLOSE]      )
46   [SEMICOLON]         ;
46   [NEWLINE]           
47   [COMMENT_CPP]       //}}AFX_MSG
47   [NEWLINE]           
48   [FUNC_CALL]         DECLARE_MESSAGE_MAP
48   [FPAREN_OPEN]       (
48   [FPAREN_CLOSE]      )
48   [NEWLINE]           
49   [BRACE_CLOSE]       }
49   [SEMICOLON]         ;
49   [NEWLINE]           
51   [PREPROC]           #
51   [PP_ENDIF]          endif
51   [COMMENT]           /* _FOO_BAR_H_INCLUDED_ */
51   [NEWLINE]           