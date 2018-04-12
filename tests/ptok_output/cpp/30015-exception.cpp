Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              include
1    [NONE]              <iostream>
1    [NONE]              
4    [FUNC_DEF]          void
4    [NONE]              foo
4    [FUNC_DEF]          (
4    [FUNC_DEF]          )
4    [NONE]              
5    [FUNC_DEF]          {
5    [NONE]              
6    [NONE]              char
6    [NONE]              *
6    [NONE]              buf
6    [NONE]              ;
6    [NONE]              
7    [NONE]              try
7    [NONE]              
7    [TRY]               {
7    [NONE]              
8    [NONE]              buf
8    [NONE]              =
8    [NONE]              new
8    [NONE]              unsigned
8    [NONE]              char
8    [NONE]              [
8    [NONE]              1024
8    [NONE]              ]
8    [NONE]              ;
8    [NONE]              
9    [NONE]              if
9    [IF]                (
9    [NONE]              buf
9    [NONE]              ==
9    [NONE]              0
9    [IF]                )
9    [NONE]              
9    [IF]                {
9    [NONE]              
10   [NONE]              throw
10   [NONE]              "Out of memory"
10   [NONE]              ;
10   [NONE]              
10   [IF]                }
10   [NONE]              
11   [TRY]               }
11   [NONE]              
12   [NONE]              catch
12   [SPAREN_OPEN]       (
12   [NONE]              char
12   [NONE]              *
12   [NONE]              str
12   [SPAREN_OPEN]       )
12   [NONE]              
12   [SPAREN_OPEN]       {
12   [NONE]              
13   [NONE]              cout
13   [NONE]              <<
13   [NONE]              "Exception: "
13   [NONE]              <<
13   [NONE]              str
13   [NONE]              <<
13   [NONE]              '\n'
13   [NONE]              ;
13   [NONE]              
14   [SPAREN_OPEN]       }
14   [NONE]              
15   [FUNC_DEF]          }
15   [NONE]              
17   [FUNC_DEF]          void
17   [NONE]              bar
17   [FUNC_DEF]          (
17   [FUNC_DEF]          )
17   [NONE]              
18   [FUNC_DEF]          {
18   [NONE]              
19   [NONE]              char
19   [NONE]              *
19   [NONE]              buf
19   [NONE]              ;
19   [NONE]              
21   [NONE]              try
21   [NONE]              
22   [TRY]               {
22   [NONE]              
23   [NONE]              buf
23   [NONE]              =
23   [NONE]              new
23   [NONE]              unsigned
23   [NONE]              char
23   [NONE]              [
23   [NONE]              1024
23   [NONE]              ]
23   [NONE]              ;
23   [NONE]              
24   [NONE]              if
24   [IF]                (
24   [NONE]              buf
24   [NONE]              ==
24   [NONE]              0
24   [IF]                )
24   [NONE]              
24   [IF]                {
24   [NONE]              
25   [NONE]              throw
25   [NONE]              "Out of memory"
25   [NONE]              ;
25   [NONE]              
25   [IF]                }
25   [NONE]              
26   [TRY]               }
26   [NONE]              
27   [NONE]              catch
27   [SPAREN_OPEN]       (
27   [NONE]              char
27   [NONE]              *
27   [NONE]              str
27   [SPAREN_OPEN]       )
27   [NONE]              
28   [SPAREN_OPEN]       {
28   [NONE]              
29   [NONE]              cout
29   [NONE]              <<
29   [NONE]              "Exception: "
29   [NONE]              <<
29   [NONE]              str
29   [NONE]              <<
29   [NONE]              '\n'
29   [NONE]              ;
29   [NONE]              
30   [SPAREN_OPEN]       }
30   [NONE]              
31   [FUNC_DEF]          }
31   [NONE]              