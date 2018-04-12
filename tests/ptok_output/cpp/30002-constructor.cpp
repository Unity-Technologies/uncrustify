Line [Parent]            Text
1    [NONE]              
2    [NONE]              IMPLEMENT_DYNAMIC
2    [FUNC_CALL]         (
2    [NONE]              CPropertiesDlg
2    [NONE]              ,
2    [NONE]              CDialog
2    [FUNC_CALL]         )
2    [NONE]              
3    [NONE]              CPropertiesDlg
3    [NONE]              ::
3    [NONE]              CPropertiesDlg
3    [FUNC_CLASS_DEF]    (
3    [NONE]              CPtcMsgSimControlModule
3    [NONE]              *
3    [NONE]              pcmPtcMsg
3    [NONE]              ,
3    [NONE]              
4    [NONE]              CWnd
4    [NONE]              *
4    [NONE]              pParent
4    [COMMENT_EMBED]     /*=NULL*/
4    [FUNC_CLASS_DEF]    )
4    [NONE]              :
4    [NONE]              
5    [NONE]              CDialog
5    [FUNC_CTOR_VAR]     (
5    [NONE]              CPropertiesDlg
5    [NONE]              ::
5    [NONE]              IDD
5    [NONE]              ,
5    [NONE]              pParent
5    [FUNC_CTOR_VAR]     )
5    [NONE]              ,
5    [NONE]              
6    [NONE]              m_pspRouter
6    [FUNC_CTOR_VAR]     (
6    [NONE]              pcmPtcMsg
6    [FUNC_CTOR_VAR]     )
6    [NONE]              ,
6    [NONE]              
7    [NONE]              m_pspScm
7    [FUNC_CTOR_VAR]     (
7    [NONE]              pcmPtcMsg
7    [FUNC_CTOR_VAR]     )
7    [NONE]              
8    [FUNC_CLASS_DEF]    {
8    [NONE]              
9    [NONE]              m_pcmPtcMsg
9    [NONE]              =
9    [NONE]              pcmPtcMsg
9    [NONE]              ;
9    [NONE]              
10   [FUNC_CLASS_DEF]    }
10   [NONE]              
12   [NONE]              CPropertiesDlg
12   [NONE]              ::
12   [NONE]              ~
12   [DESTRUCTOR]        CPropertiesDlg
12   [FUNC_CLASS_DEF]    (
12   [FUNC_CLASS_DEF]    )
12   [NONE]              
13   [FUNC_CLASS_DEF]    {
13   [NONE]              
14   [FUNC_CLASS_DEF]    }
14   [NONE]              
16   [FUNC_DEF]          void
16   [FUNC_DEF]          CPropertiesDlg
16   [FUNC_DEF]          ::
16   [NONE]              DoDataExchange
16   [FUNC_DEF]          (
16   [NONE]              CDataExchange
16   [NONE]              *
16   [NONE]              pDX
16   [FUNC_DEF]          )
16   [NONE]              
17   [FUNC_DEF]          {
17   [NONE]              
18   [NONE]              CDialog
18   [NONE]              ::
18   [NONE]              DoDataExchange
18   [FUNC_CALL]         (
18   [NONE]              pDX
18   [FUNC_CALL]         )
18   [NONE]              ;
18   [NONE]              
19   [FUNC_DEF]          }
19   [NONE]              
21   [NONE]              CFooBar
21   [NONE]              ::
21   [NONE]              CFooBar
21   [FUNC_CLASS_DEF]    (
21   [NONE]              CWnd
21   [NONE]              *
21   [NONE]              pParent
21   [COMMENT_EMBED]     /*=NULL*/
21   [FUNC_CLASS_DEF]    )
21   [NONE]              
22   [NONE]              :
22   [NONE]              CDialog
22   [FUNC_CTOR_VAR]     (
22   [NONE]              CFooBar
22   [NONE]              ::
22   [NONE]              IDD
22   [NONE]              ,
22   [NONE]              pParent
22   [FUNC_CTOR_VAR]     )
22   [NONE]              ,
22   [NONE]              
23   [NONE]              m_parent
23   [FUNC_CTOR_VAR]     (
23   [NONE]              pParent
23   [FUNC_CTOR_VAR]     )
23   [NONE]              
24   [FUNC_CLASS_DEF]    {
24   [NONE]              
25   [COMMENT_WHOLE]     //{{AFX_DATA_INIT(CRouterBrowser)
25   [NONE]              
26   [COMMENT_WHOLE]     //}}AFX_DATA_INIT
26   [NONE]              
28   [NONE]              m_nFoo
28   [NONE]              =
28   [NONE]              0
28   [NONE]              ;
28   [NONE]              
29   [NONE]              m_nBar
29   [NONE]              =
29   [NONE]              0
29   [NONE]              ;
29   [NONE]              
30   [FUNC_CLASS_DEF]    }
30   [NONE]              