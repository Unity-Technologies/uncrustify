Line [Parent]            Text
1    [NONE]              EditorApplication
1    [NONE]              .
1    [NONE]              CallDelayed
1    [FUNC_CALL]         (
1    [NONE]              (
1    [NONE]              )
1    [NONE]              =>
1    [LAMBDA]            {
1    [NONE]              
2    [NONE]              foreach
2    [FOR]               (
2    [NONE]              CollabToolbarWindow
2    [NONE]              window
2    [NONE]              in
2    [NONE]              Resources
2    [NONE]              .
2    [NONE]              FindObjectsOfTypeAll
2    [TEMPLATE]          <
2    [NONE]              CollabToolbarWindow
2    [TEMPLATE]          >
2    [FUNC_CALL]         (
2    [FUNC_CALL]         )
2    [FOR]               )
2    [FOR]               
2    [NONE]              
3    [NONE]              window
3    [NONE]              .
3    [NONE]              Close
3    [FUNC_CALL]         (
3    [FUNC_CALL]         )
3    [NONE]              ;
3    [FOR]               
3    [NONE]              
4    [LAMBDA]            }
4    [NONE]              ,
4    [NONE]              1f
4    [FUNC_CALL]         )
4    [NONE]              ;
4    [NONE]              
7    [NONE]              var
7    [NONE]              requestedTargets
7    [NONE]              =
7    [NONE]              storage
7    [NONE]              .
7    [NONE]              GlobalVariable
7    [FUNC_CALL]         (
7    [NONE]              "JAM_COMMAND_LINE_TARGETS"
7    [FUNC_CALL]         )
7    [NONE]              .
7    [NONE]              Elements
7    [NONE]              .
7    [NONE]              Select
7    [FUNC_CALL]         (
7    [NONE]              e
7    [NONE]              =>
7    [NONE]              
8    [LAMBDA]            {
8    [NONE]              
9    [NONE]              var
9    [NONE]              t
9    [NONE]              =
9    [NONE]              jamState
9    [NONE]              .
9    [NONE]              GetTarget
9    [FUNC_CALL]         (
9    [NONE]              e
9    [FUNC_CALL]         )
9    [NONE]              ;
9    [NONE]              
10   [NONE]              if
10   [IF]                (
10   [NONE]              t
10   [NONE]              ==
10   [NONE]              null
10   [IF]                )
10   [IF]                
10   [NONE]              
11   [NONE]              throw
11   [NONE]              new
11   [NONE]              Exception
11   [FUNC_CALL]         (
11   [NONE]              $"Unknown target '{e}' while writing build dependency graph."
11   [FUNC_CALL]         )
11   [NONE]              ;
11   [IF]                
11   [NONE]              
12   [NONE]              return
12   [NONE]              t
12   [NONE]              ;
12   [NONE]              
13   [LAMBDA]            }
13   [FUNC_CALL]         )
13   [NONE]              .
13   [NONE]              ToArray
13   [FUNC_CALL]         (
13   [FUNC_CALL]         )
13   [NONE]              ;
13   [NONE]              