Line [Parent]            Text
1    [NONE]              
2    [FUNC_DEF]          void
2    [FUNC_DEF]          className
2    [FUNC_DEF]          ::
2    [NONE]              set
2    [FUNC_DEF]          (
2    [NONE]              const
2    [NONE]              objectName
2    [NONE]              &
2    [NONE]              obj
2    [FUNC_DEF]          )
2    [NONE]              
3    [FUNC_DEF]          {
3    [NONE]              
4    [NONE]              statement1
4    [FUNC_CALL]         (
4    [FUNC_CALL]         )
4    [NONE]              ;
4    [NONE]              
5    [NONE]              MACRO_BEGIN_STUFF
5    [MACRO_OPEN]        (
5    [NONE]              param
5    [MACRO_OPEN]        )
5    [NONE]              
6    [NONE]              DOSTUFF
6    [FUNC_CALL]         (
6    [NONE]              params
6    [FUNC_CALL]         )
6    [NONE]              
7    [NONE]              MACRO_ELSE_STUFF
7    [MACRO_ELSE]        (
7    [MACRO_ELSE]        )
7    [NONE]              
8    [NONE]              DOMORESTUFF
8    [FUNC_CALL]         (
8    [NONE]              moreparams
8    [FUNC_CALL]         )
8    [NONE]              
9    [NONE]              junk
9    [NONE]              =
9    [NONE]              1
9    [NONE]              ;
9    [NONE]              
10   [NONE]              MACRO2_BEGIN_STUFF
10   [NONE]              
11   [NONE]              junk
11   [NONE]              +=
11   [NONE]              3
11   [NONE]              ;
11   [NONE]              
12   [NONE]              MACRO2_ELSE_STUFF
12   [NONE]              
13   [NONE]              junk
13   [NONE]              +=
13   [NONE]              4
13   [NONE]              ;
13   [NONE]              
14   [NONE]              MACRO2_END_STUFF
14   [NONE]              
15   [NONE]              DOLASTSTUFF
15   [FUNC_CALL]         (
15   [NONE]              lastparams
15   [FUNC_CALL]         )
15   [NONE]              
16   [NONE]              MACRO_END_STUFF
16   [MACRO_CLOSE]       (
16   [MACRO_CLOSE]       )
16   [NONE]              
17   [NONE]              statement2
17   [FUNC_CALL]         (
17   [FUNC_CALL]         )
17   [NONE]              ;
17   [NONE]              
18   [FUNC_DEF]          }
18   [NONE]              
21   [NONE]              MACRO2_BEGIN_STUFF
21   [NONE]              
22   [COMMENT_WHOLE]     // comment
22   [NONE]              
23   [NONE]              MACRO2_ELSE_STUFF
23   [NONE]              
24   [COMMENT_WHOLE]     /* Comment */
24   [NONE]              
25   [NONE]              MACRO2_END_STUFF
25   [NONE]              