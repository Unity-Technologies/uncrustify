Line [Parent]            Text
1    [FUNC_PROTO]        int
1    [NONE]              oldfoo
1    [FUNC_PROTO]        (
1    [NONE]              bar
1    [FUNC_PROTO]        )
1    [NONE]              
2    [NONE]              char
2    [NONE]              bar
2    [FUNC_PROTO]        ;
2    [NONE]              
3    [NONE]              {
3    [NONE]              
4    [NONE]              return
4    [RETURN]            (
4    [NONE]              bar
4    [NONE]              -
4    [NONE]              2
4    [RETURN]            )
4    [NONE]              ;
4    [NONE]              
5    [NONE]              }
5    [NONE]              
7    [FUNC_DEF]          int
7    [NONE]              i2c_use_client
7    [FUNC_DEF]          (
7    [NONE]              struct
7    [STRUCT]            i2c_client
7    [STRUCT]            *
7    [NONE]              client
7    [FUNC_DEF]          )
7    [NONE]              
8    [FUNC_DEF]          {
8    [NONE]              
9    [NONE]              int
9    [NONE]              ret
9    [NONE]              ;
9    [NONE]              
11   [NONE]              ret
11   [NONE]              =
11   [NONE]              i2c_inc_use_client
11   [FUNC_CALL]         (
11   [NONE]              client
11   [FUNC_CALL]         )
11   [NONE]              ;
11   [NONE]              
12   [NONE]              if
12   [IF]                (
12   [NONE]              ret
12   [IF]                )
12   [NONE]              
12   [IF]                {
12   [NONE]              
13   [NONE]              return
13   [RETURN]            (
13   [NONE]              ret
13   [RETURN]            )
13   [NONE]              ;
13   [NONE]              
13   [IF]                }
13   [NONE]              
15   [NONE]              if
15   [IF]                (
15   [NONE]              (
15   [NONE]              client
15   [NONE]              ->
15   [NONE]              flags
15   [NONE]              &
15   [NONE]              I2C_CLIENT_ALLOW_USE
15   [NONE]              )
15   [NONE]              ||
15   [NONE]              (
15   [NONE]              a
15   [NONE]              &&
15   [NONE]              
16   [NONE]              something_else
16   [NONE]              )
16   [IF]                )
16   [NONE]              
17   [IF]                {
17   [NONE]              
18   [NONE]              if
18   [IF]                (
18   [NONE]              client
18   [NONE]              ->
18   [NONE]              flags
18   [NONE]              &
18   [NONE]              I2C_CLIENT_ALLOW_MULTIPLE_USE
18   [IF]                )
18   [NONE]              
18   [IF]                {
18   [NONE]              
19   [NONE]              client
19   [NONE]              ->
19   [NONE]              usage_count
19   [NONE]              ++
19   [NONE]              ;
19   [NONE]              
19   [IF]                }
19   [NONE]              
20   [NONE]              else
20   [NONE]              if
20   [ELSEIF]            (
20   [NONE]              client
20   [NONE]              ->
20   [NONE]              usage_count
20   [NONE]              >
20   [NONE]              0
20   [ELSEIF]            )
20   [NONE]              
20   [ELSEIF]            {
20   [NONE]              
21   [NONE]              goto
21   [NONE]              busy
21   [NONE]              ;
21   [NONE]              
21   [ELSEIF]            }
21   [NONE]              
22   [NONE]              else
22   [NONE]              
22   [ELSE]              {
22   [NONE]              
23   [NONE]              client
23   [NONE]              ->
23   [NONE]              usage_count
23   [NONE]              ++
23   [NONE]              ;
23   [NONE]              
23   [ELSE]              }
23   [NONE]              
24   [IF]                }
24   [NONE]              
26   [NONE]              return
26   [RETURN]            (
26   [NONE]              0
26   [RETURN]            )
26   [NONE]              ;
26   [NONE]              
27   [NONE]              busy
27   [NONE]              :
27   [NONE]              
28   [NONE]              i2c_dec_use_client
28   [FUNC_CALL]         (
28   [NONE]              client
28   [FUNC_CALL]         )
28   [NONE]              ;
28   [NONE]              
29   [NONE]              return
29   [RETURN]            (
29   [NONE]              -
29   [NONE]              EBUSY
29   [RETURN]            )
29   [NONE]              ;
29   [NONE]              
30   [FUNC_DEF]          }
30   [NONE]              
32   [FUNC_DEF]          void
32   [NONE]              get_name
32   [FUNC_DEF]          (
32   [NONE]              void
32   [FUNC_DEF]          )
32   [NONE]              
33   [FUNC_DEF]          {
33   [NONE]              
34   [NONE]              a
34   [NONE]              =
34   [C_CAST]            (
34   [C_CAST]            int
34   [C_CAST]            )
34   [NONE]              5
34   [NONE]              ;
34   [NONE]              
36   [NONE]              if
36   [IF]                (
36   [NONE]              a
36   [IF]                )
36   [NONE]              
36   [IF]                {
36   [NONE]              
37   [NONE]              if
37   [IF]                (
37   [NONE]              b
37   [IF]                )
37   [NONE]              
37   [IF]                {
37   [NONE]              
38   [NONE]              b
38   [NONE]              --
38   [NONE]              ;
38   [NONE]              
38   [IF]                }
38   [NONE]              
39   [NONE]              else
39   [NONE]              
40   [ELSE]              {
40   [NONE]              
41   [NONE]              a
41   [NONE]              ++
41   [NONE]              ;
41   [NONE]              
42   [ELSE]              }
42   [NONE]              
42   [IF]                }
42   [NONE]              
43   [NONE]              for
43   [FOR]               (
43   [NONE]              a
43   [NONE]              =
43   [NONE]              0
43   [FOR]               ;
43   [NONE]              a
43   [NONE]              <
43   [NONE]              10
43   [FOR]               ;
43   [NONE]              a
43   [NONE]              ++
43   [FOR]               )
43   [NONE]              
43   [FOR]               {
43   [NONE]              
44   [NONE]              if
44   [IF]                (
44   [NONE]              b
44   [IF]                )
44   [NONE]              
45   [IF]                {
45   [NONE]              
46   [NONE]              b
46   [NONE]              --
46   [NONE]              ;
46   [NONE]              
47   [IF]                }
47   [NONE]              
48   [NONE]              else
48   [NONE]              
48   [ELSE]              {
48   [NONE]              
49   [NONE]              a
49   [NONE]              ++
49   [NONE]              ;
49   [NONE]              
49   [ELSE]              }
49   [NONE]              
49   [FOR]               }
49   [NONE]              
50   [NONE]              return
50   [NONE]              ;
50   [NONE]              
51   [FUNC_DEF]          }
51   [NONE]              