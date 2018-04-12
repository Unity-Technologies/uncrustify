Line [Parent]            Text
1    [NONE]              enum
1    [ENUM]              {
1    [COMMENT_END]       // Keep this line as it is. It's a regression test for checking pc->prev->prev-> on CT_BRACE_OPEN.
1    [NONE]              
2    [NONE]              kEnumValue
2    [NONE]              =
2    [NONE]              5
2    [NONE]              ,
2    [NONE]              
3    [ENUM]              }
3    [ENUM]              ;
3    [NONE]              
5    [NONE]              struct
5    [STRUCT]            foo
5    [NONE]              
6    [STRUCT]            {
6    [NONE]              
7    [NONE]              int
7    [NONE]              bar
7    [NONE]              :
7    [NONE]              kEnumValue
7    [NONE]              ;
7    [NONE]              
8    [NONE]              int
8    [NONE]              pad
8    [NONE]              :
8    [NONE]              3
8    [NONE]              ;
8    [NONE]              
9    [STRUCT]            }
9    [STRUCT]            ;
9    [NONE]              
11   [NONE]              class
11   [CLASS]             cls
11   [NONE]              
12   [CLASS]             {
12   [NONE]              
13   [NONE]              int
13   [NONE]              bar
13   [NONE]              :
13   [NONE]              kEnumValue
13   [NONE]              ;
13   [NONE]              
14   [NONE]              int
14   [NONE]              pad
14   [NONE]              :
14   [NONE]              3
14   [NONE]              ;
14   [NONE]              
16   [FUNC_DEF]          void
16   [NONE]              func
16   [FUNC_DEF]          (
16   [FUNC_DEF]          )
16   [NONE]              
17   [FUNC_DEF]          {
17   [NONE]              
18   [NONE]              goto
18   [NONE]              end
18   [NONE]              ;
18   [NONE]              
19   [NONE]              bar
19   [NONE]              =
19   [NONE]              1
19   [NONE]              ;
19   [NONE]              
20   [NONE]              end
20   [NONE]              :
20   [NONE]              
21   [NONE]              pad
21   [NONE]              =
21   [NONE]              2
21   [NONE]              ;
21   [NONE]              
22   [FUNC_DEF]          }
22   [NONE]              
23   [CLASS]             }
23   [CLASS]             ;
23   [NONE]              