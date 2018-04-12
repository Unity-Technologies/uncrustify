Line [Parent]            Text
1    [NONE]              
3    [NONE]              using
3    [NONE]              GLib
3    [NONE]              ;
3    [NONE]              
5    [NONE]              public
5    [NONE]              class
5    [CLASS]             GListTest
5    [NONE]              :
5    [NONE]              Object
5    [NONE]              
6    [CLASS]             {
6    [NONE]              
7    [NONE]              public
7    [NONE]              GListTest
7    [NONE]              {
7    [NONE]              }
7    [NONE]              
9    [FUNC_DEF]          static
9    [FUNC_DEF]          int
9    [NONE]              main
9    [FUNC_DEF]          (
9    [NONE]              string
9    [NONE]              []
9    [NONE]              args
9    [FUNC_DEF]          )
9    [NONE]              
9    [FUNC_DEF]          {
9    [NONE]              
10   [NONE]              List
10   [TEMPLATE]          <
10   [NONE]              string
10   [TEMPLATE]          >
10   [NONE]              list
10   [NONE]              ;
10   [NONE]              
11   [NONE]              list
11   [NONE]              .
11   [NONE]              append
11   [FUNC_CALL]         (
11   [NONE]              "TestString1"
11   [FUNC_CALL]         )
11   [NONE]              ;
11   [NONE]              
12   [NONE]              list
12   [NONE]              .
12   [NONE]              append
12   [FUNC_CALL]         (
12   [NONE]              "myTest"
12   [FUNC_CALL]         )
12   [NONE]              ;
12   [NONE]              
13   [NONE]              message
13   [FUNC_CALL]         (
13   [NONE]              "list.length()=%d"
13   [NONE]              ,
13   [NONE]              list
13   [NONE]              .
13   [NONE]              length
13   [FUNC_CALL]         (
13   [FUNC_CALL]         )
13   [FUNC_CALL]         )
13   [NONE]              ;
13   [NONE]              
15   [NONE]              for
15   [FOR]               (
15   [NONE]              int
15   [NONE]              i
15   [NONE]              =
15   [NONE]              0
15   [FOR]               ;
15   [NONE]              i
15   [NONE]              <
15   [NONE]              list
15   [NONE]              .
15   [NONE]              length
15   [FUNC_CALL]         (
15   [FUNC_CALL]         )
15   [FOR]               ;
15   [NONE]              i
15   [NONE]              ++
15   [FOR]               )
15   [NONE]              
15   [FOR]               {
15   [NONE]              
16   [NONE]              string
16   [NONE]              list2
16   [NONE]              =
16   [NONE]              list
16   [NONE]              .
16   [NONE]              nth_data
16   [FUNC_CALL]         (
16   [NONE]              i
16   [FUNC_CALL]         )
16   [NONE]              ;
16   [NONE]              
17   [NONE]              message
17   [FUNC_CALL]         (
17   [NONE]              "%s"
17   [NONE]              ,
17   [NONE]              list2
17   [FUNC_CALL]         )
17   [NONE]              ;
17   [NONE]              
18   [FOR]               }
18   [NONE]              
19   [FUNC_DEF]          }
19   [NONE]              
20   [CLASS]             }
20   [NONE]              