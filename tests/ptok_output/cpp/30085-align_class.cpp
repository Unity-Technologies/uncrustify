Line [Parent]            Text
1    [COMMENT_WHOLE]     //---------------------------------------------------------------------------
1    [NONE]              
2    [COMMENT_WHOLE]     //    Statics                                                               |
2    [NONE]              
3    [COMMENT_WHOLE]     //---------------------------------------------------------------------------
3    [NONE]              
4    [FUNC_DEF]          void
4    [FUNC_DEF]          CTdrFile
4    [FUNC_DEF]          ::
4    [NONE]              SetDistanceMode
4    [FUNC_DEF]          (
4    [NONE]              TDistMode
4    [NONE]              dm
4    [FUNC_DEF]          )
4    [FUNC_DEF]          {
4    [NONE]              CTdrFile
4    [NONE]              ::
4    [NONE]              ms_DistMode
4    [NONE]              =
4    [NONE]              dm
4    [NONE]              ;
4    [FUNC_DEF]          }
4    [NONE]              
5    [FUNC_DEF]          TDistMode
5    [FUNC_DEF]          CTdrFile
5    [FUNC_DEF]          ::
5    [NONE]              GetDistanceMode
5    [FUNC_DEF]          (
5    [NONE]              void
5    [FUNC_DEF]          )
5    [FUNC_DEF]          {
5    [NONE]              return
5    [NONE]              CTdrFile
5    [NONE]              ::
5    [NONE]              ms_DistMode
5    [NONE]              ;
5    [FUNC_DEF]          }
5    [NONE]              
6    [FUNC_DEF]          String
6    [FUNC_DEF]          CTdrFile
6    [FUNC_DEF]          ::
6    [NONE]              GetDistanceModeUnits
6    [FUNC_DEF]          (
6    [NONE]              void
6    [FUNC_DEF]          )
6    [FUNC_DEF]          {
6    [NONE]              return
6    [NONE]              (
6    [NONE]              CTdrFile
6    [NONE]              ::
6    [NONE]              GetDistanceMode
6    [FUNC_CALL]         (
6    [FUNC_CALL]         )
6    [NONE]              ==
6    [NONE]              dmKM
6    [NONE]              )
6    [NONE]              ?
6    [NONE]              "km"
6    [NONE]              :
6    [NONE]              "Miles"
6    [NONE]              ;
6    [FUNC_DEF]          }
6    [NONE]              
7    [FUNC_DEF]          void
7    [FUNC_DEF]          CTdrFile
7    [FUNC_DEF]          ::
7    [NONE]              SetBSTCompensation
7    [FUNC_DEF]          (
7    [NONE]              bool
7    [NONE]              bUseBST
7    [FUNC_DEF]          )
7    [FUNC_DEF]          {
7    [NONE]              ms_bCompBST
7    [NONE]              =
7    [NONE]              bUseBST
7    [NONE]              ;
7    [FUNC_DEF]          }
7    [NONE]              
8    [FUNC_DEF]          void
8    [FUNC_DEF]          CTdrFile
8    [FUNC_DEF]          ::
8    [NONE]              SetFactoryMode
8    [FUNC_DEF]          (
8    [NONE]              bool
8    [NONE]              bFactory
8    [FUNC_DEF]          )
8    [FUNC_DEF]          {
8    [NONE]              ms_bFactory
8    [NONE]              =
8    [NONE]              bFactory
8    [NONE]              ;
8    [FUNC_DEF]          }
8    [NONE]              
9    [FUNC_DEF]          bool
9    [FUNC_DEF]          CTdrFile
9    [FUNC_DEF]          ::
9    [NONE]              GetFactoryMode
9    [FUNC_DEF]          (
9    [NONE]              void
9    [FUNC_DEF]          )
9    [FUNC_DEF]          {
9    [NONE]              return
9    [NONE]              ms_bFactory
9    [NONE]              ;
9    [FUNC_DEF]          }
9    [NONE]              
11   [NONE]              unsigned
11   [NONE]              int
11   [NONE]              CAgentCharacter
11   [NONE]              ::
11   [NONE]              iReferenceCount
11   [NONE]              =
11   [NONE]              0
11   [NONE]              ;
11   [NONE]              
12   [NONE]              IAgentEx
12   [NONE]              *
12   [NONE]              CAgentCharacter
12   [NONE]              ::
12   [NONE]              pAgentEx
12   [NONE]              =
12   [NONE]              NULL
12   [NONE]              ;
12   [NONE]              
13   [NONE]              CAgentNotifySink
13   [NONE]              *
13   [NONE]              CAgentCharacter
13   [NONE]              ::
13   [NONE]              pSink
13   [NONE]              =
13   [NONE]              NULL
13   [NONE]              ;
13   [NONE]              