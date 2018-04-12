Line [Parent]            Text
1    [NONE]              
2    [FUNC_DEF]          int
2    [NONE]              foo
2    [FUNC_DEF]          (
2    [NONE]              int
2    [NONE]              op
2    [FUNC_DEF]          )
2    [NONE]              
3    [FUNC_DEF]          {
3    [NONE]              
4    [NONE]              switch
4    [SWITCH]            (
4    [NONE]              op
4    [SWITCH]            )
4    [NONE]              
5    [SWITCH]            {
5    [NONE]              
6    [NONE]              case
6    [NONE]              1
6    [NONE]              :
6    [CASE]              {
6    [NONE]              
7    [NONE]              do_something
7    [FUNC_CALL]         (
7    [FUNC_CALL]         )
7    [NONE]              ;
7    [NONE]              
8    [CASE]              return
8    [NONE]              0
8    [NONE]              ;
8    [NONE]              
9    [CASE]              }
9    [NONE]              
11   [NONE]              case
11   [NONE]              2
11   [NONE]              :
11   [NONE]              
12   [NONE]              do_something_else
12   [FUNC_CALL]         (
12   [FUNC_CALL]         )
12   [NONE]              ;
12   [NONE]              
13   [CASE]              return
13   [NONE]              1
13   [NONE]              ;
13   [NONE]              
15   [NONE]              case
15   [NONE]              3
15   [NONE]              :
15   [NONE]              
16   [NONE]              case
16   [NONE]              4
16   [NONE]              :
16   [NONE]              
17   [COMMENT_WHOLE]     /* don't do anything */
17   [NONE]              
18   [NONE]              break
18   [NONE]              ;
18   [NONE]              
20   [NONE]              case
20   [NONE]              5
20   [NONE]              :
20   [NONE]              
21   [CASE]              return
21   [NONE]              3
21   [NONE]              ;
21   [NONE]              
23   [NONE]              default
23   [NONE]              :
23   [NONE]              
24   [NONE]              break
24   [NONE]              ;
24   [NONE]              
25   [SWITCH]            }
25   [NONE]              
27   [NONE]              return
27   [NONE]              -
27   [NONE]              1
27   [NONE]              ;
27   [NONE]              
28   [FUNC_DEF]          }
28   [NONE]              