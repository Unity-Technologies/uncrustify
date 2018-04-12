Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          Func
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [FUNC_CALL]         OtherFunc
3    [FPAREN_OPEN]       (
3    [NEWLINE]           
4    [STRING_MULTI]      @"multi␤line"
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
8    [WORD]              variablex
8    [ASSIGN]            =
8    [WORD]              o
8    [MEMBER]            .
8    [FUNC_CALL]         Func
8    [FPAREN_OPEN]       (
8    [NEWLINE]           
9    [WORD]              variabley
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [WORD]              variablex
10   [ASSIGN]            =
10   [WORD]              o
10   [MEMBER]            .
10   [FUNC_CALL]         Func2
10   [FPAREN_OPEN]       (
10   [WORD]              a
10   [COMMA]             ,
10   [WORD]              b
10   [COMMA]             ,
10   [NEWLINE]           
11   [WORD]              variabley
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [TYPE]              o
12   [MEMBER]            .
12   [FUNC_CALL]         Func
12   [FPAREN_OPEN]       (
12   [NEWLINE]           
13   [WORD]              variabley
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [TYPE]              o
14   [MEMBER]            .
14   [FUNC_CALL]         Func2
14   [FPAREN_OPEN]       (
14   [WORD]              a
14   [COMMA]             ,
14   [WORD]              b
14   [COMMA]             ,
14   [NEWLINE]           
15   [WORD]              variabley
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
19   [TYPE]              AnimatorStateMachine
19   [WORD]              rootStateMachine
19   [ASSIGN]            =
19   [WORD]              syncedIndex
19   [COMPARE]           ==
19   [NEG]               -
19   [NUMBER]            1
19   [NEWLINE]           
20   [QUESTION]          ?
20   [WORD]              animatorController
20   [MEMBER]            .
20   [WORD]              layers
20   [SQUARE_OPEN]       [
20   [WORD]              selectedLayerIndex
20   [SQUARE_CLOSE]      ]
20   [MEMBER]            .
20   [WORD]              stateMachine
20   [NEWLINE]           
21   [COND_COLON]        :
21   [WORD]              animatorController
21   [MEMBER]            .
21   [WORD]              layers
21   [SQUARE_OPEN]       [
21   [WORD]              syncedIndex
21   [SQUARE_CLOSE]      ]
21   [MEMBER]            .
21   [WORD]              stateMachine
21   [SEMICOLON]         ;
21   [NEWLINE]           
24   [WORD]              m_ActiveStateMachine
24   [ASSIGN]            =
24   [WORD]              AnimatorControllerTool
24   [MEMBER]            .
24   [WORD]              tool
24   [QUESTION]          ?
24   [WORD]              m_Type
24   [COMPARE]           ==
24   [WORD]              TransitionType
24   [MEMBER]            .
24   [WORD]              eAnyState
24   [QUESTION]          ?
24   [NEWLINE]           
25   [WORD]              AnimatorControllerTool
25   [MEMBER]            .
25   [WORD]              tool
25   [MEMBER]            .
25   [WORD]              stateMachineGraph
25   [MEMBER]            .
25   [WORD]              rootStateMachine
25   [COND_COLON]        :
25   [NEWLINE]           
26   [WORD]              AnimatorControllerTool
26   [MEMBER]            .
26   [WORD]              tool
26   [MEMBER]            .
26   [WORD]              stateMachineGraph
26   [MEMBER]            .
26   [WORD]              activeStateMachine
26   [COND_COLON]        :
26   [WORD]              null
26   [SEMICOLON]         ;
26   [NEWLINE]           
28   [QUALIFIER]         public
28   [TYPE]              GUIStyle
28   [TSQUARE]           []
28   [WORD]              inSlots
28   [ASSIGN]            =
28   [NEWLINE]           
28   [BRACE_OPEN]        {
28   [NEWLINE]           
29   [FUNC_CALL]         FindStyle
29   [FPAREN_OPEN]       (
29   [STRING]            "flow shader in 0"
29   [FPAREN_CLOSE]      )
29   [COMMA]             ,
29   [FUNC_CALL]         FindStyle
29   [FPAREN_OPEN]       (
29   [STRING]            "flow shader in 1"
29   [FPAREN_CLOSE]      )
29   [COMMA]             ,
29   [FUNC_CALL]         FindStyle
29   [FPAREN_OPEN]       (
29   [STRING]            "flow shader in 2"
29   [FPAREN_CLOSE]      )
29   [COMMA]             ,
29   [FUNC_CALL]         FindStyle
29   [FPAREN_OPEN]       (
29   [STRING]            "flow shader in 3"
29   [FPAREN_CLOSE]      )
29   [COMMA]             ,
29   [FUNC_CALL]         FindStyle
29   [FPAREN_OPEN]       (
29   [STRING]            "flow shader in 4"
29   [FPAREN_CLOSE]      )
29   [COMMA]             ,
29   [FUNC_CALL]         FindStyle
29   [FPAREN_OPEN]       (
29   [STRING]            "flow shader in 5"
29   [FPAREN_CLOSE]      )
29   [COMMA]             ,
29   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [SEMICOLON]         ;
30   [NEWLINE]           
33   [QUALIFIER]         public
33   [TYPE]              GUIStyle
33   [TSQUARE]           []
33   [WORD]              inSlots
33   [ASSIGN]            =
33   [BRACE_OPEN]        {
33   [NUMBER]            1
33   [COMMA]             ,
33   [NUMBER]            2
33   [COMMA]             ,
33   [NUMBER]            3
33   [BRACE_CLOSE]       }
33   [SEMICOLON]         ;
33   [NEWLINE]           