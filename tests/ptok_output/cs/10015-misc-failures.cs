Line [Parent]            Text
1    [FUNC_DEF]          void
1    [NONE]              Func
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              OtherFunc
3    [FUNC_CALL]         (
3    [NONE]              
4    [NONE]              @"multi␤line"
5    [FUNC_CALL]         )
5    [NONE]              ;
5    [NONE]              
6    [FUNC_DEF]          }
6    [NONE]              
8    [NONE]              variablex
8    [NONE]              =
8    [NONE]              o
8    [NONE]              .
8    [NONE]              Func
8    [FUNC_CALL]         (
8    [NONE]              
9    [NONE]              variabley
9    [FUNC_CALL]         )
9    [NONE]              ;
9    [NONE]              
10   [NONE]              variablex
10   [NONE]              =
10   [NONE]              o
10   [NONE]              .
10   [NONE]              Func2
10   [FUNC_CALL]         (
10   [NONE]              a
10   [NONE]              ,
10   [NONE]              b
10   [NONE]              ,
10   [NONE]              
11   [NONE]              variabley
11   [FUNC_CALL]         )
11   [NONE]              ;
11   [NONE]              
12   [NONE]              o
12   [NONE]              .
12   [NONE]              Func
12   [FUNC_CALL]         (
12   [NONE]              
13   [NONE]              variabley
13   [FUNC_CALL]         )
13   [NONE]              ;
13   [NONE]              
14   [NONE]              o
14   [NONE]              .
14   [NONE]              Func2
14   [FUNC_CALL]         (
14   [NONE]              a
14   [NONE]              ,
14   [NONE]              b
14   [NONE]              ,
14   [NONE]              
15   [NONE]              variabley
15   [FUNC_CALL]         )
15   [NONE]              ;
15   [NONE]              
19   [NONE]              AnimatorStateMachine
19   [NONE]              rootStateMachine
19   [NONE]              =
19   [NONE]              syncedIndex
19   [NONE]              ==
19   [NONE]              -
19   [NONE]              1
19   [NONE]              
20   [NONE]              ?
20   [NONE]              animatorController
20   [NONE]              .
20   [NONE]              layers
20   [NONE]              [
20   [NONE]              selectedLayerIndex
20   [NONE]              ]
20   [NONE]              .
20   [NONE]              stateMachine
20   [NONE]              
21   [NONE]              :
21   [NONE]              animatorController
21   [NONE]              .
21   [NONE]              layers
21   [NONE]              [
21   [NONE]              syncedIndex
21   [NONE]              ]
21   [NONE]              .
21   [NONE]              stateMachine
21   [NONE]              ;
21   [NONE]              
24   [NONE]              m_ActiveStateMachine
24   [NONE]              =
24   [NONE]              AnimatorControllerTool
24   [NONE]              .
24   [NONE]              tool
24   [NONE]              ?
24   [NONE]              m_Type
24   [NONE]              ==
24   [NONE]              TransitionType
24   [NONE]              .
24   [NONE]              eAnyState
24   [NONE]              ?
24   [NONE]              
25   [NONE]              AnimatorControllerTool
25   [NONE]              .
25   [NONE]              tool
25   [NONE]              .
25   [NONE]              stateMachineGraph
25   [NONE]              .
25   [NONE]              rootStateMachine
25   [NONE]              :
25   [NONE]              
26   [NONE]              AnimatorControllerTool
26   [NONE]              .
26   [NONE]              tool
26   [NONE]              .
26   [NONE]              stateMachineGraph
26   [NONE]              .
26   [NONE]              activeStateMachine
26   [NONE]              :
26   [NONE]              null
26   [NONE]              ;
26   [NONE]              
28   [NONE]              public
28   [NONE]              GUIStyle
28   [NONE]              []
28   [NONE]              inSlots
28   [NONE]              =
28   [NONE]              
28   [ASSIGN]            {
28   [NONE]              
29   [NONE]              FindStyle
29   [FUNC_CALL]         (
29   [NONE]              "flow shader in 0"
29   [FUNC_CALL]         )
29   [NONE]              ,
29   [NONE]              FindStyle
29   [FUNC_CALL]         (
29   [NONE]              "flow shader in 1"
29   [FUNC_CALL]         )
29   [NONE]              ,
29   [NONE]              FindStyle
29   [FUNC_CALL]         (
29   [NONE]              "flow shader in 2"
29   [FUNC_CALL]         )
29   [NONE]              ,
29   [NONE]              FindStyle
29   [FUNC_CALL]         (
29   [NONE]              "flow shader in 3"
29   [FUNC_CALL]         )
29   [NONE]              ,
29   [NONE]              FindStyle
29   [FUNC_CALL]         (
29   [NONE]              "flow shader in 4"
29   [FUNC_CALL]         )
29   [NONE]              ,
29   [NONE]              FindStyle
29   [FUNC_CALL]         (
29   [NONE]              "flow shader in 5"
29   [FUNC_CALL]         )
29   [NONE]              ,
29   [NONE]              
30   [ASSIGN]            }
30   [NONE]              ;
30   [NONE]              
33   [NONE]              public
33   [NONE]              GUIStyle
33   [NONE]              []
33   [NONE]              inSlots
33   [NONE]              =
33   [ASSIGN]            {
33   [NONE]              1
33   [NONE]              ,
33   [NONE]              2
33   [NONE]              ,
33   [NONE]              3
33   [ASSIGN]            }
33   [NONE]              ;
33   [NONE]              