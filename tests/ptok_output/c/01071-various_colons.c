Line [Parent]            Text
1    [NONE]              struct
1    [STRUCT]            foo
1    [STRUCT]            {
2    [NONE]              unsigned
2    [NONE]              int
2    [NONE]              a
2    [NONE]              :
2    [NONE]              4
2    [NONE]              ;
2    [NONE]              
2    [NONE]              int
2    [NONE]              b
2    [NONE]              :
2    [NONE]              4
2    [NONE]              ;
2    [NONE]              
3    [STRUCT]            }
3    [STRUCT]            ;
3    [NONE]              
5    [FUNC_DEF]          int
5    [NONE]              bar
5    [FUNC_DEF]          (
5    [NONE]              int
5    [NONE]              x
5    [FUNC_DEF]          )
6    [FUNC_DEF]          {
6    [NONE]              
7    [NONE]              switch
7    [SWITCH]            (
7    [NONE]              x
7    [SWITCH]            )
7    [SWITCH]            {
7    [NONE]              
7    [NONE]              case
7    [NONE]              1
7    [NONE]              :
7    [CASE]              return
7    [NONE]              2
7    [NONE]              ;
7    [NONE]              
7    [NONE]              case
7    [NONE]              4
7    [NONE]              :
7    [CASE]              return
7    [NONE]              4
7    [NONE]              ;
7    [NONE]              
8    [NONE]              case
9    [NONE]              6
10   [NONE]              :
11   [CASE]              return
12   [NONE]              8
12   [NONE]              ;
12   [NONE]              
13   [NONE]              case
13   [NONE]              10
13   [NONE]              :
14   [CASE]              return
14   [NONE]              19
14   [NONE]              ;
14   [NONE]              
15   [SWITCH]            }
15   [NONE]              return
15   [NONE]              0
15   [NONE]              ;
15   [NONE]              
17   [FUNC_DEF]          }
17   [NONE]              
20   [FUNC_DEF]          int
20   [NONE]              main
20   [FUNC_DEF]          (
20   [NONE]              void
20   [FUNC_DEF]          )
20   [FUNC_DEF]          {
20   [NONE]              
20   [NONE]              bar
20   [FUNC_CALL]         (
20   [NONE]              10
20   [FUNC_CALL]         )
20   [NONE]              ;
20   [NONE]              
21   [NONE]              foo
21   [NONE]              :
21   [NONE]              bar
21   [FUNC_CALL]         (
21   [NONE]              -
21   [NONE]              9
21   [FUNC_CALL]         )
21   [NONE]              ;
21   [NONE]              
21   [NONE]              bar
21   [FUNC_CALL]         (
21   [NONE]              9
21   [FUNC_CALL]         )
21   [NONE]              ;
21   [NONE]              
21   [NONE]              baz
21   [NONE]              :
21   [NONE]              return
21   [NONE]              0
21   [NONE]              ;
21   [NONE]              
21   [FUNC_DEF]          }
21   [NONE]              