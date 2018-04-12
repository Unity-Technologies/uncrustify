Line [Parent]            Text
1    [FUNC_DEF]          void
1    [FUNC_DEF]          Test
1    [FUNC_DEF]          ::
1    [NONE]              init
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              connect
3    [FUNC_CALL]         (
3    [NONE]              m_ppcCom
3    [NONE]              ,
3    [NONE]              
4    [NONE]              SIGNAL
4    [FUNC_CALL]         (
4    [NONE]              sigReceivedBundle
4    [FUNC_CALL]         (
4    [NONE]              QString
4    [FUNC_CALL]         )
4    [FUNC_CALL]         )
4    [NONE]              ,
4    [NONE]              
5    [NONE]              SLOT
5    [FUNC_CALL]         (
5    [NONE]              doProcessBundle
5    [FUNC_CALL]         (
5    [NONE]              QString
5    [FUNC_CALL]         )
5    [FUNC_CALL]         )
5    [FUNC_CALL]         )
5    [NONE]              ;
5    [NONE]              
6    [NONE]              connect
6    [FUNC_CALL]         (
6    [NONE]              m_ppcCom
6    [NONE]              ,
6    [NONE]              
7    [NONE]              SIGNAL
7    [FUNC_CALL]         (
7    [NONE]              sigReceivedBundle
7    [FUNC_CALL]         )
7    [NONE]              ,
7    [NONE]              
8    [NONE]              SLOT
8    [FUNC_CALL]         (
8    [NONE]              doProcessBundle
8    [FUNC_CALL]         )
8    [FUNC_CALL]         )
8    [NONE]              ;
8    [NONE]              
9    [FUNC_DEF]          }
9    [NONE]              