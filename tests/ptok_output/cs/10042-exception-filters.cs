Line [Parent]            Text
1    [NONE]              using
1    [NONE]              System
1    [NONE]              ;
1    [NONE]              
2    [NONE]              class
2    [CLASS]             Test
2    [NONE]              
3    [CLASS]             {
3    [NONE]              
4    [FUNC_DEF]          void
4    [NONE]              TestExceptionFilter
4    [FUNC_DEF]          (
4    [FUNC_DEF]          )
4    [NONE]              
5    [FUNC_DEF]          {
5    [NONE]              
6    [NONE]              var
6    [NONE]              when
6    [NONE]              =
6    [NONE]              new
6    [NONE]              Object
6    [FUNC_CALL]         (
6    [FUNC_CALL]         )
6    [NONE]              ;
6    [NONE]              
7    [NONE]              try
7    [NONE]              
7    [TRY]               {
7    [NONE]              
8    [NONE]              int
8    [NONE]              i
8    [NONE]              =
8    [NONE]              0
8    [NONE]              ;
8    [NONE]              
9    [TRY]               }
9    [NONE]              
9    [NONE]              catch
9    [SPAREN_OPEN]       (
9    [NONE]              Exception
9    [NONE]              e
9    [SPAREN_OPEN]       )
9    [NONE]              
10   [SPAREN_OPEN]       {
10   [NONE]              
11   [NONE]              int
11   [NONE]              j
11   [NONE]              =
11   [NONE]              -
11   [NONE]              1
11   [NONE]              ;
11   [NONE]              
12   [SPAREN_OPEN]       }
12   [NONE]              
13   [NONE]              try
13   [NONE]              
13   [TRY]               {
13   [NONE]              
14   [NONE]              int
14   [NONE]              i
14   [NONE]              =
14   [NONE]              0
14   [NONE]              ;
14   [NONE]              
15   [TRY]               }
15   [NONE]              
15   [NONE]              catch
15   [NONE]              
16   [CATCH]             {
16   [NONE]              
17   [NONE]              int
17   [NONE]              j
17   [NONE]              =
17   [NONE]              -
17   [NONE]              1
17   [NONE]              ;
17   [NONE]              
18   [CATCH]             }
18   [NONE]              
19   [NONE]              try
19   [NONE]              
19   [TRY]               {
19   [NONE]              
20   [NONE]              int
20   [NONE]              i
20   [NONE]              =
20   [NONE]              0
20   [NONE]              ;
20   [NONE]              
21   [TRY]               }
21   [NONE]              
21   [NONE]              catch
21   [NONE]              when
21   [WHEN]              (
21   [NONE]              DateTime
21   [NONE]              .
21   [NONE]              Now
21   [NONE]              .
21   [NONE]              DayOfWeek
21   [NONE]              ==
21   [NONE]              DayOfWeek
21   [NONE]              .
21   [NONE]              Saturday
21   [WHEN]              )
21   [NONE]              
22   [WHEN]              {
22   [NONE]              
23   [NONE]              int
23   [NONE]              j
23   [NONE]              =
23   [NONE]              -
23   [NONE]              1
23   [NONE]              ;
23   [NONE]              
24   [WHEN]              }
24   [NONE]              
25   [NONE]              try
25   [NONE]              
25   [TRY]               {
25   [NONE]              
26   [NONE]              int
26   [NONE]              a
26   [NONE]              =
26   [C_CAST]            (
26   [C_CAST]            int
26   [C_CAST]            )
26   [NONE]              when
26   [NONE]              .
26   [NONE]              foo
26   [FUNC_CALL]         (
26   [FUNC_CALL]         )
26   [NONE]              ;
26   [NONE]              
27   [TRY]               }
27   [NONE]              
27   [NONE]              catch
27   [SPAREN_OPEN]       (
27   [NONE]              Exception
27   [NONE]              e
27   [SPAREN_OPEN]       )
27   [NONE]              when
27   [WHEN]              (
27   [NONE]              DateTime
27   [NONE]              .
27   [NONE]              Now
27   [NONE]              .
27   [NONE]              DayOfWeek
27   [NONE]              ==
27   [NONE]              DayOfWeek
27   [NONE]              .
27   [NONE]              Saturday
27   [WHEN]              )
27   [NONE]              
28   [WHEN]              {
28   [NONE]              
29   [NONE]              string
29   [NONE]              b
29   [NONE]              =
29   [NONE]              (
29   [C_CAST]            (
29   [C_CAST]            int
29   [C_CAST]            )
29   [NONE]              when
29   [NONE]              .
29   [NONE]              prop
29   [NONE]              )
29   [NONE]              .
29   [NONE]              ToString
29   [FUNC_CALL]         (
29   [FUNC_CALL]         )
29   [NONE]              ;
29   [NONE]              
30   [WHEN]              }
30   [NONE]              
30   [FUNC_DEF]          }
30   [NONE]              
30   [CLASS]             }
30   [NONE]              