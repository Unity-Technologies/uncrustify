Line [Parent]            Text
1    [FUNC_DEF]          void
1    [NONE]              a
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              if
3    [IF]                (
3    [NONE]              (
3    [NONE]              tmp
3    [NONE]              ==
3    [NONE]              nullptr
3    [NONE]              )
3    [NONE]              ||
3    [NONE]              
4    [NONE]              (
4    [NONE]              (
4    [NONE]              tmp
4    [NONE]              ->
4    [NONE]              type
4    [NONE]              !=
4    [NONE]              CT_NUMBER
4    [NONE]              )
4    [NONE]              &&
4    [NONE]              
5    [NONE]              (
5    [NONE]              tmp
5    [NONE]              ->
5    [NONE]              type
5    [NONE]              !=
5    [NONE]              CT_SIZEOF
5    [NONE]              )
5    [NONE]              &&
5    [NONE]              
6    [NONE]              !
6    [NONE]              (
6    [NONE]              tmp
6    [NONE]              ->
6    [NONE]              flags
6    [NONE]              &
6    [NONE]              (
6    [NONE]              PCF_IN_STRUCT
6    [NONE]              |
6    [NONE]              PCF_IN_CLASS
6    [NONE]              )
6    [NONE]              )
6    [NONE]              )
6    [NONE]              ||
6    [NONE]              
7    [NONE]              (
7    [NONE]              tmp
7    [NONE]              ->
7    [NONE]              type
7    [NONE]              ==
7    [NONE]              CT_NEWLINE
7    [NONE]              )
7    [NONE]              
8    [IF]                )
8    [NONE]              
9    [IF]                {
9    [NONE]              
10   [NONE]              set_chunk_type
10   [FUNC_CALL]         (
10   [NONE]              next
10   [NONE]              ,
10   [NONE]              CT_LABEL_COLON
10   [FUNC_CALL]         )
10   [NONE]              ;
10   [NONE]              
11   [IF]                }
11   [NONE]              
12   [NONE]              else
12   [NONE]              if
12   [ELSEIF]            (
12   [NONE]              (
12   [NONE]              tmp
12   [NONE]              ==
12   [NONE]              nullptr
12   [NONE]              )
12   [NONE]              ||
12   [NONE]              
13   [NONE]              (
13   [NONE]              (
13   [NONE]              tmp
13   [NONE]              ->
13   [NONE]              type
13   [NONE]              !=
13   [NONE]              CT_NUMBER
13   [NONE]              )
13   [NONE]              &&
13   [NONE]              
14   [NONE]              (
14   [NONE]              tmp
14   [NONE]              ->
14   [NONE]              type
14   [NONE]              !=
14   [NONE]              CT_SIZEOF
14   [NONE]              )
14   [NONE]              &&
14   [NONE]              
15   [NONE]              !
15   [NONE]              (
15   [NONE]              tmp
15   [NONE]              ->
15   [NONE]              flags
15   [NONE]              &
15   [NONE]              (
15   [NONE]              PCF_IN_STRUCT
15   [NONE]              |
15   [NONE]              PCF_IN_CLASS
15   [NONE]              )
15   [NONE]              )
15   [NONE]              )
15   [NONE]              ||
15   [NONE]              
16   [NONE]              (
16   [NONE]              tmp
16   [NONE]              ->
16   [NONE]              type
16   [NONE]              ==
16   [NONE]              CT_NEWLINE
16   [NONE]              )
16   [NONE]              
17   [ELSEIF]            )
17   [NONE]              
18   [ELSEIF]            {
18   [NONE]              
19   [NONE]              set_chunk_type
19   [FUNC_CALL]         (
19   [NONE]              next
19   [NONE]              ,
19   [NONE]              CT_LABEL_COLON
19   [FUNC_CALL]         )
19   [NONE]              ;
19   [NONE]              
20   [ELSEIF]            }
20   [NONE]              
23   [NONE]              if
23   [IF]                (
23   [NONE]              (
23   [NONE]              tmp
23   [NONE]              ==
23   [NONE]              nullptr
23   [NONE]              )
23   [NONE]              ||
23   [NONE]              
24   [NONE]              (
24   [NONE]              (
24   [NONE]              tmp
24   [NONE]              ->
24   [NONE]              type
24   [NONE]              !=
24   [NONE]              CT_NUMBER
24   [NONE]              )
24   [NONE]              &&
24   [NONE]              
25   [NONE]              (
25   [NONE]              tmp
25   [NONE]              ->
25   [NONE]              type
25   [NONE]              !=
25   [NONE]              CT_SIZEOF
25   [NONE]              )
25   [NONE]              &&
25   [NONE]              
26   [NONE]              !
26   [NONE]              (
26   [NONE]              tmp
26   [NONE]              ->
26   [NONE]              flags
26   [NONE]              &
26   [NONE]              (
26   [NONE]              PCF_IN_STRUCT
26   [NONE]              |
26   [NONE]              PCF_IN_CLASS
26   [NONE]              )
26   [NONE]              )
26   [NONE]              )
26   [NONE]              ||
26   [NONE]              
27   [NONE]              (
27   [NONE]              tmp
27   [NONE]              ->
27   [NONE]              type
27   [NONE]              ==
27   [NONE]              CT_NEWLINE
27   [NONE]              )
27   [NONE]              
27   [IF]                )
27   [NONE]              
28   [IF]                {
28   [NONE]              
29   [NONE]              set_chunk_type
29   [FUNC_CALL]         (
29   [NONE]              next
29   [NONE]              ,
29   [NONE]              CT_LABEL_COLON
29   [FUNC_CALL]         )
29   [NONE]              ;
29   [NONE]              
30   [IF]                }
30   [NONE]              
32   [NONE]              if
32   [IF]                (
32   [NONE]              (
32   [NONE]              tmp
32   [NONE]              ==
32   [NONE]              nullptr
32   [NONE]              )
32   [NONE]              ||
32   [NONE]              
33   [NONE]              (
33   [NONE]              (
33   [NONE]              tmp
33   [NONE]              ->
33   [NONE]              type
33   [NONE]              !=
33   [NONE]              CT_NUMBER
33   [NONE]              )
33   [NONE]              &&
33   [NONE]              
34   [NONE]              (
34   [NONE]              tmp
34   [NONE]              ->
34   [NONE]              type
34   [NONE]              !=
34   [NONE]              CT_SIZEOF
34   [NONE]              )
34   [NONE]              &&
34   [NONE]              
35   [NONE]              !
35   [NONE]              (
35   [NONE]              tmp
35   [NONE]              ->
35   [NONE]              flags
35   [NONE]              &
35   [NONE]              (
35   [NONE]              PCF_IN_STRUCT
35   [NONE]              |
35   [NONE]              PCF_IN_CLASS
35   [NONE]              )
35   [NONE]              )
35   [NONE]              )
35   [NONE]              ||
35   [NONE]              
36   [NONE]              (
36   [NONE]              tmp
36   [NONE]              ->
36   [NONE]              type
36   [NONE]              ==
36   [NONE]              CT_NEWLINE
36   [NONE]              )
36   [NONE]              
38   [IF]                )
38   [NONE]              
39   [IF]                {
39   [NONE]              
40   [NONE]              set_chunk_type
40   [FUNC_CALL]         (
40   [NONE]              next
40   [NONE]              ,
40   [NONE]              CT_LABEL_COLON
40   [FUNC_CALL]         )
40   [NONE]              ;
40   [NONE]              
41   [IF]                }
41   [NONE]              
42   [FUNC_DEF]          }
42   [NONE]              