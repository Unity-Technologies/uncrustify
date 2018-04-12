Line [Token]             Text
1    [COMMENT_CPP]       //---------------------------------------------------------------------------
1    [NEWLINE]           
2    [COMMENT_CPP]       //    Statics                                                               |
2    [NEWLINE]           
3    [COMMENT_CPP]       //---------------------------------------------------------------------------
3    [NEWLINE]           
4    [TYPE]              void
4    [TYPE]              CTdrFile
4    [DC_MEMBER]         ::
4    [FUNC_DEF]          SetDistanceMode
4    [FPAREN_OPEN]       (
4    [TYPE]              TDistMode
4    [WORD]              dm
4    [FPAREN_CLOSE]      )
4    [BRACE_OPEN]        {
4    [TYPE]              CTdrFile
4    [DC_MEMBER]         ::
4    [WORD]              ms_DistMode
4    [ASSIGN]            =
4    [WORD]              dm
4    [SEMICOLON]         ;
4    [BRACE_CLOSE]       }
4    [NEWLINE]           
5    [TYPE]              TDistMode
5    [TYPE]              CTdrFile
5    [DC_MEMBER]         ::
5    [FUNC_DEF]          GetDistanceMode
5    [FPAREN_OPEN]       (
5    [TYPE]              void
5    [FPAREN_CLOSE]      )
5    [BRACE_OPEN]        {
5    [RETURN]            return
5    [TYPE]              CTdrFile
5    [DC_MEMBER]         ::
5    [WORD]              ms_DistMode
5    [SEMICOLON]         ;
5    [BRACE_CLOSE]       }
5    [NEWLINE]           
6    [TYPE]              String
6    [TYPE]              CTdrFile
6    [DC_MEMBER]         ::
6    [FUNC_DEF]          GetDistanceModeUnits
6    [FPAREN_OPEN]       (
6    [TYPE]              void
6    [FPAREN_CLOSE]      )
6    [BRACE_OPEN]        {
6    [RETURN]            return
6    [PAREN_OPEN]        (
6    [TYPE]              CTdrFile
6    [DC_MEMBER]         ::
6    [FUNC_CALL]         GetDistanceMode
6    [FPAREN_OPEN]       (
6    [FPAREN_CLOSE]      )
6    [COMPARE]           ==
6    [WORD]              dmKM
6    [PAREN_CLOSE]       )
6    [QUESTION]          ?
6    [STRING]            "km"
6    [COND_COLON]        :
6    [STRING]            "Miles"
6    [SEMICOLON]         ;
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
7    [TYPE]              void
7    [TYPE]              CTdrFile
7    [DC_MEMBER]         ::
7    [FUNC_DEF]          SetBSTCompensation
7    [FPAREN_OPEN]       (
7    [TYPE]              bool
7    [WORD]              bUseBST
7    [FPAREN_CLOSE]      )
7    [BRACE_OPEN]        {
7    [WORD]              ms_bCompBST
7    [ASSIGN]            =
7    [WORD]              bUseBST
7    [SEMICOLON]         ;
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
8    [TYPE]              void
8    [TYPE]              CTdrFile
8    [DC_MEMBER]         ::
8    [FUNC_DEF]          SetFactoryMode
8    [FPAREN_OPEN]       (
8    [TYPE]              bool
8    [WORD]              bFactory
8    [FPAREN_CLOSE]      )
8    [BRACE_OPEN]        {
8    [WORD]              ms_bFactory
8    [ASSIGN]            =
8    [WORD]              bFactory
8    [SEMICOLON]         ;
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
9    [TYPE]              bool
9    [TYPE]              CTdrFile
9    [DC_MEMBER]         ::
9    [FUNC_DEF]          GetFactoryMode
9    [FPAREN_OPEN]       (
9    [TYPE]              void
9    [FPAREN_CLOSE]      )
9    [BRACE_OPEN]        {
9    [RETURN]            return
9    [WORD]              ms_bFactory
9    [SEMICOLON]         ;
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
11   [TYPE]              unsigned
11   [TYPE]              int
11   [TYPE]              CAgentCharacter
11   [DC_MEMBER]         ::
11   [WORD]              iReferenceCount
11   [ASSIGN]            =
11   [NUMBER]            0
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [TYPE]              IAgentEx
12   [PTR_TYPE]          *
12   [TYPE]              CAgentCharacter
12   [DC_MEMBER]         ::
12   [WORD]              pAgentEx
12   [ASSIGN]            =
12   [WORD]              NULL
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [TYPE]              CAgentNotifySink
13   [PTR_TYPE]          *
13   [TYPE]              CAgentCharacter
13   [DC_MEMBER]         ::
13   [WORD]              pSink
13   [ASSIGN]            =
13   [WORD]              NULL
13   [SEMICOLON]         ;
13   [NEWLINE]           