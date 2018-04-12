Line [Parent]            Text
2    [NONE]              enum
2    [ENUM]              boo
2    [ENUM]              {
2    [NONE]              FOO
2    [NONE]              =
2    [NONE]              1
2    [ENUM]              }
2    [ENUM]              ;
2    [NONE]              
4    [FUNC_DEF]          void
4    [NONE]              foo
4    [FUNC_DEF]          (
4    [NONE]              void
4    [FUNC_DEF]          )
4    [NONE]              
5    [FUNC_DEF]          {
5    [NONE]              
6    [NONE]              char
6    [NONE]              str
6    [NONE]              [
6    [NONE]              123
6    [NONE]              ]
6    [NONE]              =
6    [ASSIGN]            {
6    [NONE]              0
6    [ASSIGN]            }
6    [NONE]              ;
6    [NONE]              
8    [NONE]              enum
8    [ENUM]              hoo
8    [ENUM]              {
8    [NONE]              NOO
8    [NONE]              =
8    [NONE]              1
8    [ENUM]              }
8    [ENUM]              ;
8    [NONE]              
10   [NONE]              strcat
10   [FUNC_CALL]         (
10   [NONE]              str
10   [NONE]              ,
10   [NONE]              "foo"
10   [FUNC_CALL]         )
10   [NONE]              ;
10   [NONE]              
11   [FUNC_DEF]          }
11   [NONE]              
13   [FUNC_DEF]          void
13   [NONE]              f
13   [FUNC_DEF]          (
13   [FUNC_DEF]          )
13   [FUNC_DEF]          {
13   [NONE]              if
13   [IF]                (
13   [NONE]              bar
13   [FUNC_CALL]         (
13   [FUNC_CALL]         )
13   [IF]                )
13   [IF]                {
13   [NONE]              baz
13   [FUNC_CALL]         (
13   [NONE]              1
13   [FUNC_CALL]         )
13   [NONE]              ;
13   [IF]                }
13   [NONE]              else
13   [ELSE]              {
13   [NONE]              baz
13   [FUNC_CALL]         (
13   [NONE]              2
13   [FUNC_CALL]         )
13   [NONE]              ;
13   [ELSE]              }
13   [FUNC_DEF]          }
13   [NONE]              
15   [FUNC_DEF]          int
15   [NONE]              foo
15   [FUNC_DEF]          (
15   [FUNC_DEF]          )
15   [FUNC_DEF]          {
15   [NONE]              return
15   [RETURN]            (
15   [NONE]              0
15   [RETURN]            )
15   [NONE]              ;
15   [FUNC_DEF]          }
15   [NONE]              
17   [FUNC_DEF]          void
17   [NONE]              foo
17   [FUNC_DEF]          (
17   [NONE]              int
17   [NONE]              a
17   [NONE]              ,
17   [NONE]              int
17   [NONE]              b
17   [FUNC_DEF]          )
17   [NONE]              
18   [FUNC_DEF]          {
18   [NONE]              
19   [NONE]              if
19   [IF]                (
19   [NONE]              a
19   [NONE]              ==
19   [NONE]              b
19   [IF]                )
19   [IF]                {
19   [NONE]              a
19   [NONE]              ++
19   [NONE]              ;
19   [IF]                }
19   [NONE]              
20   [NONE]              else
20   [ELSE]              {
20   [NONE]              b
20   [NONE]              ++
20   [NONE]              ;
20   [ELSE]              }
20   [NONE]              
21   [NONE]              if
21   [IF]                (
21   [NONE]              a
21   [NONE]              ==
21   [NONE]              b
21   [IF]                )
21   [IF]                {
21   [NONE]              a
21   [NONE]              ++
21   [NONE]              ;
21   [IF]                }
21   [NONE]              
22   [NONE]              else
22   [ELSE]              {
22   [NONE]              b
22   [NONE]              ++
22   [NONE]              ;
22   [ELSE]              }
22   [NONE]              
23   [FUNC_DEF]          }
23   [NONE]              