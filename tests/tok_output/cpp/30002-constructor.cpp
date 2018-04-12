Line [Token]             Text
1    [NEWLINE]           
2    [FUNC_CALL]         IMPLEMENT_DYNAMIC
2    [FPAREN_OPEN]       (
2    [WORD]              CPropertiesDlg
2    [COMMA]             ,
2    [WORD]              CDialog
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
3    [TYPE]              CPropertiesDlg
3    [DC_MEMBER]         ::
3    [FUNC_CLASS_DEF]    CPropertiesDlg
3    [FPAREN_OPEN]       (
3    [TYPE]              CPtcMsgSimControlModule
3    [PTR_TYPE]          *
3    [WORD]              pcmPtcMsg
3    [COMMA]             ,
3    [NEWLINE]           
4    [TYPE]              CWnd
4    [PTR_TYPE]          *
4    [WORD]              pParent
4    [COMMENT]           /*=NULL*/
4    [FPAREN_CLOSE]      )
4    [CONSTR_COLON]      :
4    [NEWLINE]           
5    [FUNC_CTOR_VAR]     CDialog
5    [FPAREN_OPEN]       (
5    [TYPE]              CPropertiesDlg
5    [DC_MEMBER]         ::
5    [WORD]              IDD
5    [COMMA]             ,
5    [WORD]              pParent
5    [FPAREN_CLOSE]      )
5    [COMMA]             ,
5    [NEWLINE]           
6    [FUNC_CTOR_VAR]     m_pspRouter
6    [FPAREN_OPEN]       (
6    [WORD]              pcmPtcMsg
6    [FPAREN_CLOSE]      )
6    [COMMA]             ,
6    [NEWLINE]           
7    [FUNC_CTOR_VAR]     m_pspScm
7    [FPAREN_OPEN]       (
7    [WORD]              pcmPtcMsg
7    [FPAREN_CLOSE]      )
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [WORD]              m_pcmPtcMsg
9    [ASSIGN]            =
9    [WORD]              pcmPtcMsg
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
12   [TYPE]              CPropertiesDlg
12   [DC_MEMBER]         ::
12   [DESTRUCTOR]        ~
12   [FUNC_CLASS_DEF]    CPropertiesDlg
12   [FPAREN_OPEN]       (
12   [FPAREN_CLOSE]      )
12   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [NEWLINE]           
16   [TYPE]              void
16   [TYPE]              CPropertiesDlg
16   [DC_MEMBER]         ::
16   [FUNC_DEF]          DoDataExchange
16   [FPAREN_OPEN]       (
16   [TYPE]              CDataExchange
16   [PTR_TYPE]          *
16   [WORD]              pDX
16   [FPAREN_CLOSE]      )
16   [NEWLINE]           
17   [BRACE_OPEN]        {
17   [NEWLINE]           
18   [TYPE]              CDialog
18   [DC_MEMBER]         ::
18   [FUNC_CALL]         DoDataExchange
18   [FPAREN_OPEN]       (
18   [WORD]              pDX
18   [FPAREN_CLOSE]      )
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [BRACE_CLOSE]       }
19   [NEWLINE]           
21   [TYPE]              CFooBar
21   [DC_MEMBER]         ::
21   [FUNC_CLASS_DEF]    CFooBar
21   [FPAREN_OPEN]       (
21   [TYPE]              CWnd
21   [PTR_TYPE]          *
21   [WORD]              pParent
21   [COMMENT]           /*=NULL*/
21   [FPAREN_CLOSE]      )
21   [NEWLINE]           
22   [CONSTR_COLON]      :
22   [FUNC_CTOR_VAR]     CDialog
22   [FPAREN_OPEN]       (
22   [TYPE]              CFooBar
22   [DC_MEMBER]         ::
22   [WORD]              IDD
22   [COMMA]             ,
22   [WORD]              pParent
22   [FPAREN_CLOSE]      )
22   [COMMA]             ,
22   [NEWLINE]           
23   [FUNC_CTOR_VAR]     m_parent
23   [FPAREN_OPEN]       (
23   [WORD]              pParent
23   [FPAREN_CLOSE]      )
23   [NEWLINE]           
24   [BRACE_OPEN]        {
24   [NEWLINE]           
25   [COMMENT_CPP]       //{{AFX_DATA_INIT(CRouterBrowser)
25   [NEWLINE]           
26   [COMMENT_CPP]       //}}AFX_DATA_INIT
26   [NEWLINE]           
28   [WORD]              m_nFoo
28   [ASSIGN]            =
28   [NUMBER]            0
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [WORD]              m_nBar
29   [ASSIGN]            =
29   [NUMBER]            0
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           