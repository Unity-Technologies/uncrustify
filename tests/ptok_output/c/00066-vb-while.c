Line [Parent]            Text
1    [FUNC_DEF]          unsigned
1    [FUNC_DEF]          long
1    [NONE]              xdl_adler32
1    [FUNC_DEF]          (
1    [NONE]              unsigned
1    [NONE]              long
1    [NONE]              adler
1    [NONE]              ,
1    [NONE]              unsigned
1    [NONE]              char
1    [NONE]              const
1    [NONE]              *
1    [NONE]              buf
1    [NONE]              ,
1    [NONE]              
2    [NONE]              unsigned
2    [NONE]              int
2    [NONE]              len
2    [FUNC_DEF]          )
2    [NONE]              
3    [FUNC_DEF]          {
3    [NONE]              
4    [NONE]              int
4    [NONE]              k
4    [NONE]              ;
4    [NONE]              
5    [NONE]              unsigned
5    [NONE]              long
5    [NONE]              s1
5    [NONE]              =
5    [NONE]              adler
5    [NONE]              &
5    [NONE]              0xffff
5    [NONE]              ;
5    [NONE]              
6    [NONE]              unsigned
6    [NONE]              long
6    [NONE]              s2
6    [NONE]              =
6    [NONE]              (
6    [NONE]              adler
6    [NONE]              >>
6    [NONE]              16
6    [NONE]              )
6    [NONE]              &
6    [NONE]              0xffff
6    [NONE]              ;
6    [NONE]              
8    [NONE]              if
8    [IF]                (
8    [NONE]              !
8    [NONE]              buf
8    [IF]                )
8    [NONE]              
8    [IF]                {
8    [NONE]              
9    [NONE]              return
9    [RETURN]            (
9    [NONE]              1
9    [RETURN]            )
9    [NONE]              ;
9    [NONE]              
9    [IF]                }
9    [NONE]              
11   [NONE]              while
11   [WHILE]             (
11   [NONE]              len
11   [NONE]              >
11   [NONE]              0
11   [WHILE]             )
11   [NONE]              
12   [WHILE]             {
12   [NONE]              
13   [NONE]              k
13   [NONE]              =
13   [NONE]              len
13   [NONE]              <
13   [NONE]              NMAX
13   [NONE]              ?
13   [NONE]              len
13   [NONE]              :
13   [NONE]              NMAX
13   [NONE]              ;
13   [NONE]              
14   [NONE]              len
14   [NONE]              -=
14   [NONE]              k
14   [NONE]              ;
14   [NONE]              
15   [NONE]              while
15   [WHILE]             (
15   [NONE]              k
15   [NONE]              >=
15   [NONE]              16
15   [WHILE]             )
15   [NONE]              
16   [WHILE]             {
16   [NONE]              
17   [NONE]              DO16
17   [FUNC_CALL]         (
17   [NONE]              buf
17   [FUNC_CALL]         )
17   [NONE]              ;
17   [NONE]              
18   [NONE]              buf
18   [NONE]              +=
18   [NONE]              16
18   [NONE]              ;
18   [NONE]              
19   [NONE]              k
19   [NONE]              -=
19   [NONE]              16
19   [NONE]              ;
19   [NONE]              
20   [WHILE]             }
20   [NONE]              
21   [NONE]              if
21   [IF]                (
21   [NONE]              k
21   [NONE]              !=
21   [NONE]              0
21   [IF]                )
21   [NONE]              
21   [IF]                {
21   [NONE]              
22   [NONE]              do
22   [NONE]              
23   [DO]                {
23   [NONE]              
24   [NONE]              s1
24   [NONE]              +=
24   [NONE]              *
24   [NONE]              buf
24   [NONE]              ++
24   [NONE]              ;
24   [NONE]              
25   [NONE]              s2
25   [NONE]              +=
25   [NONE]              s1
25   [NONE]              ;
25   [NONE]              
26   [DO]                }
26   [NONE]              while
26   [WHILE_OF_DO]       (
26   [NONE]              --
26   [NONE]              k
26   [WHILE_OF_DO]       )
26   [WHILE_OF_DO]       ;
26   [NONE]              
26   [IF]                }
26   [NONE]              
27   [NONE]              s1
27   [NONE]              %=
27   [NONE]              BASE
27   [NONE]              ;
27   [NONE]              
28   [NONE]              s2
28   [NONE]              %=
28   [NONE]              BASE
28   [NONE]              ;
28   [NONE]              
29   [WHILE]             }
29   [NONE]              
31   [NONE]              return
31   [RETURN]            (
31   [NONE]              (
31   [NONE]              s2
31   [NONE]              <<
31   [NONE]              16
31   [NONE]              )
31   [NONE]              |
31   [NONE]              s1
31   [RETURN]            )
31   [NONE]              ;
31   [NONE]              
32   [FUNC_DEF]          }
32   [NONE]              
34   [FUNC_DEF]          void
34   [NONE]              f
34   [FUNC_DEF]          (
34   [FUNC_DEF]          )
34   [NONE]              
34   [FUNC_DEF]          {
34   [NONE]              
35   [NONE]              while
35   [WHILE]             (
35   [NONE]              1
35   [WHILE]             )
35   [NONE]              
35   [WHILE]             {
35   [NONE]              
36   [NONE]              if
36   [IF]                (
36   [NONE]              2
36   [IF]                )
36   [NONE]              
36   [IF]                {
36   [NONE]              
37   [NONE]              3
37   [NONE]              ;
37   [NONE]              
37   [IF]                }
37   [NONE]              
38   [NONE]              else
38   [NONE]              
38   [ELSE]              {
38   [NONE]              
39   [NONE]              4
39   [NONE]              ;
39   [NONE]              
39   [ELSE]              }
39   [NONE]              
39   [WHILE]             }
39   [NONE]              
40   [FUNC_DEF]          }
40   [NONE]              