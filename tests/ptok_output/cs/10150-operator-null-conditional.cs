Line [Parent]            Text
1    [NONE]              public
1    [NONE]              class
1    [CLASS]             test
1    [NONE]              
2    [CLASS]             {
2    [NONE]              
3    [FUNC_DEF]          public
3    [FUNC_DEF]          static
3    [FUNC_DEF]          void
3    [NONE]              TestOfNullConditionalOperator
3    [FUNC_DEF]          (
3    [FUNC_DEF]          )
3    [NONE]              
4    [FUNC_DEF]          {
4    [NONE]              
5    [NONE]              string
5    [NONE]              s
5    [NONE]              =
5    [NONE]              "Test"
5    [NONE]              ;
5    [NONE]              
6    [NONE]              if
6    [IF]                (
6    [NONE]              s
6    [NONE]              ?.
6    [NONE]              Length
6    [NONE]              >
6    [NONE]              0
6    [IF]                )
6    [NONE]              
7    [IF]                {
7    [NONE]              
8    [NONE]              s
8    [NONE]              =
8    [NONE]              "Test"
8    [NONE]              ;
8    [NONE]              
9    [IF]                }
9    [NONE]              
10   [NONE]              if
10   [IF]                (
10   [NONE]              System
10   [NONE]              .
10   [NONE]              Reflection
10   [NONE]              .
10   [NONE]              Assembly
10   [NONE]              .
10   [NONE]              GetEntryAssembly
10   [FUNC_CALL]         (
10   [FUNC_CALL]         )
10   [NONE]              ?.
10   [NONE]              GetName
10   [FUNC_CALL]         (
10   [FUNC_CALL]         )
10   [NONE]              !=
10   [NONE]              null
10   [IF]                )
10   [NONE]              
11   [IF]                {
11   [NONE]              
12   [NONE]              s
12   [NONE]              =
12   [NONE]              "Test"
12   [NONE]              ;
12   [NONE]              
13   [IF]                }
13   [NONE]              
13   [FUNC_DEF]          }
13   [NONE]              
13   [CLASS]             }
13   [NONE]              