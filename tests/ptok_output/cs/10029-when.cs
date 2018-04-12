Line [Parent]            Text
1    [FUNC_DEF]          private
1    [FUNC_DEF]          static
1    [FUNC_DEF]          string
1    [NONE]              GenerateHash
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              try
3    [NONE]              
3    [TRY]               {
3    [NONE]              
4    [NONE]              int
4    [NONE]              i
4    [NONE]              =
4    [NONE]              0
4    [NONE]              ;
4    [NONE]              
5    [TRY]               }
5    [NONE]              
5    [NONE]              catch
5    [NONE]              when
5    [WHEN]              (
5    [NONE]              DateTime
5    [NONE]              .
5    [NONE]              Now
5    [NONE]              .
5    [NONE]              DayOfWeek
5    [NONE]              ==
5    [NONE]              DayOfWeek
5    [NONE]              .
5    [NONE]              Saturday
5    [WHEN]              )
5    [NONE]              
6    [WHEN]              {
6    [NONE]              
7    [NONE]              int
7    [NONE]              j
7    [NONE]              =
7    [NONE]              -
7    [NONE]              1
7    [NONE]              ;
7    [NONE]              
8    [WHEN]              }
8    [NONE]              
9    [NONE]              try
9    [NONE]              
9    [TRY]               {
9    [NONE]              
10   [NONE]              int
10   [NONE]              i
10   [NONE]              =
10   [NONE]              0
10   [NONE]              ;
10   [NONE]              
11   [TRY]               }
11   [NONE]              
11   [NONE]              catch
11   [SPAREN_OPEN]       (
11   [NONE]              Exception
11   [NONE]              e
11   [SPAREN_OPEN]       )
11   [NONE]              when
11   [WHEN]              (
11   [NONE]              DateTime
11   [NONE]              .
11   [NONE]              Now
11   [NONE]              .
11   [NONE]              DayOfWeek
11   [NONE]              ==
11   [NONE]              DayOfWeek
11   [NONE]              .
11   [NONE]              Saturday
11   [WHEN]              )
11   [NONE]              
12   [WHEN]              {
12   [NONE]              
13   [NONE]              var
13   [NONE]              when
13   [NONE]              =
13   [NONE]              DateTime
13   [NONE]              .
13   [NONE]              Now
13   [NONE]              ;
13   [NONE]              
14   [NONE]              ulong
14   [NONE]              kind
14   [NONE]              =
14   [C_CAST]            (
14   [C_CAST]            ulong
14   [C_CAST]            )
14   [C_CAST]            (
14   [C_CAST]            int
14   [C_CAST]            )
14   [NONE]              when
14   [NONE]              .
14   [NONE]              Kind
14   [NONE]              ;
14   [NONE]              
15   [NONE]              return
15   [NONE]              (
15   [NONE]              (
15   [NONE]              kind
15   [NONE]              <<
15   [NONE]              62
15   [NONE]              )
15   [NONE]              |
15   [C_CAST]            (
15   [C_CAST]            ulong
15   [C_CAST]            )
15   [NONE]              when
15   [NONE]              .
15   [NONE]              Ticks
15   [NONE]              )
15   [NONE]              .
15   [NONE]              ToString
15   [FUNC_CALL]         (
15   [FUNC_CALL]         )
15   [NONE]              ;
15   [NONE]              
16   [WHEN]              }
16   [NONE]              
17   [FUNC_DEF]          }
17   [NONE]              