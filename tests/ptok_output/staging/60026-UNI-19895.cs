Line [Parent]            Text
1    [NONE]              using
1    [NONE]              System
1    [NONE]              ;
1    [NONE]              
2    [NONE]              using
2    [NONE]              System
2    [NONE]              .
2    [NONE]              Collections
2    [NONE]              .
2    [NONE]              Generic
2    [NONE]              ;
2    [NONE]              
3    [NONE]              using
3    [NONE]              System
3    [NONE]              .
3    [NONE]              Globalization
3    [NONE]              ;
3    [NONE]              
4    [NONE]              using
4    [NONE]              UnityEngine
4    [NONE]              ;
4    [NONE]              
5    [NONE]              using
5    [NONE]              UnityEngine
5    [NONE]              .
5    [NONE]              Serialization
5    [NONE]              ;
5    [NONE]              
6    [NONE]              namespace
6    [NAMESPACE]         UnityEngine
6    [NAMESPACE]         .
6    [NAMESPACE]         Experimental
6    [NAMESPACE]         .
6    [NAMESPACE]         Input
6    [NONE]              
7    [NAMESPACE]         {
7    [NONE]              
8    [NONE]              public
8    [NONE]              class
8    [CLASS]             ActionMap
8    [NONE]              :
8    [NONE]              ScriptableObject
8    [NONE]              ,
8    [NONE]              IControlDomainSource
8    [NONE]              
9    [CLASS]             {
9    [NONE]              
10   [FUNC_DEF]          public
10   [FUNC_DEF]          List
10   [TEMPLATE]          <
10   [NONE]              InputControl
10   [TEMPLATE]          >
10   [NONE]              BuildControlsList
10   [FUNC_DEF]          (
10   [FUNC_DEF]          )
10   [NONE]              
11   [FUNC_DEF]          {
11   [NONE]              
12   [NONE]              ControlSetup
12   [NONE]              controlsSetup
12   [NONE]              =
12   [NONE]              new
12   [NONE]              ControlSetup
12   [FUNC_CALL]         (
12   [FUNC_CALL]         )
12   [NONE]              ;
12   [NONE]              
13   [NONE]              for
13   [FOR]               (
13   [NONE]              int
13   [NONE]              i
13   [NONE]              =
13   [NONE]              0
13   [FOR]               ;
13   [NONE]              i
13   [NONE]              <
13   [NONE]              actions
13   [NONE]              .
13   [NONE]              Count
13   [FOR]               ;
13   [NONE]              i
13   [NONE]              ++
13   [FOR]               )
13   [NONE]              
14   [FOR]               {
14   [NONE]              
15   [NONE]              var
15   [NONE]              action
15   [NONE]              =
15   [NONE]              actions
15   [NONE]              [
15   [NONE]              i
15   [NONE]              ]
15   [NONE]              ;
15   [NONE]              
16   [COMMENT_WHOLE]     // This line is kept with 71 spaces.
16   [NONE]              
17   [NONE]              SupportedControl
17   [NONE]              supportedControl
17   [NONE]              =
17   [C_CAST]            (
17   [C_CAST]            SupportedControl
17   [C_CAST]            )
17   [NONE]              (
17   [NONE]              typeof
17   [TYPE_CAST]         (
17   [NONE]              SupportedControl
17   [TYPE_CAST]         )
17   [NONE]              
18   [NONE]              .
18   [NONE]              GetMethod
18   [FUNC_CALL]         (
18   [NONE]              "Get"
18   [FUNC_CALL]         )
18   [NONE]              
19   [NONE]              .
19   [NONE]              MakeGenericMethod
19   [FUNC_CALL]         (
19   [NONE]              actions
19   [NONE]              [
19   [NONE]              i
19   [NONE]              ]
19   [NONE]              .
19   [NONE]              controlType
19   [FUNC_CALL]         )
19   [NONE]              
20   [NONE]              .
20   [NONE]              Invoke
20   [FUNC_CALL]         (
20   [NONE]              null
20   [NONE]              ,
20   [NONE]              new
20   [NONE]              object
20   [NONE]              []
20   [NONE]              {
20   [NONE]              actions
20   [NONE]              [
20   [NONE]              i
20   [NONE]              ]
20   [NONE]              .
20   [NONE]              name
20   [NONE]              }
20   [FUNC_CALL]         )
20   [NONE]              )
20   [NONE]              ;
20   [NONE]              
21   [NONE]              action
21   [NONE]              .
21   [NONE]              controlIndex
21   [NONE]              =
21   [NONE]              controlsSetup
21   [NONE]              .
21   [NONE]              AddControl
21   [FUNC_CALL]         (
21   [NONE]              supportedControl
21   [FUNC_CALL]         )
21   [NONE]              .
21   [NONE]              index
21   [NONE]              ;
21   [NONE]              
22   [FOR]               }
22   [NONE]              
23   [NONE]              return
23   [NONE]              controlsSetup
23   [NONE]              .
23   [NONE]              controls
23   [NONE]              ;
23   [NONE]              
24   [FUNC_DEF]          }
24   [NONE]              
25   [CLASS]             }
25   [NONE]              
26   [NAMESPACE]         }
26   [NONE]              