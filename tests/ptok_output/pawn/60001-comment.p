Line [Parent]            Text
1    [COMMENT_WHOLE]     /* parse C comments interactively, using events and a state machine */
1    [NONE]              
2    [NONE]              main
2    [FUNC_DEF]          (
2    [FUNC_DEF]          )
2    [NONE]              
3    [FUNC_DEF]          {
3    [NONE]              
3    [NONE]              state
3    [NONE]              plain
3    [NONE]              ;
3    [NONE]              
3    [FUNC_DEF]          }
3    [NONE]              
4    [NONE]              @keypressed
4    [FUNC_DEF]          (
4    [NONE]              key
4    [FUNC_DEF]          )
4    [FUNC_DEF]          <
4    [NONE]              plain
4    [FUNC_DEF]          >
4    [NONE]              
5    [FUNC_DEF]          {
5    [NONE]              
6    [NONE]              state
6    [STATE]             (
6    [NONE]              key
6    [NONE]              ==
6    [NONE]              '/'
6    [STATE]             )
6    [NONE]              slash
6    [NONE]              ;
6    [NONE]              
7    [NONE]              if
7    [IF]                (
7    [NONE]              key
7    [NONE]              !=
7    [NONE]              '/'
7    [IF]                )
7    [IF]                {
7    [NONE]              
8    [NONE]              echo
8    [NONE]              key
8    [NONE]              ;
8    [NONE]              
8    [IF]                }
8    [NONE]              
9    [FUNC_DEF]          }
9    [NONE]              
10   [NONE]              @keypressed
10   [FUNC_DEF]          (
10   [NONE]              key
10   [FUNC_DEF]          )
10   [FUNC_DEF]          <
10   [NONE]              slash
10   [FUNC_DEF]          >
10   [NONE]              
11   [FUNC_DEF]          {
11   [NONE]              
12   [NONE]              state
12   [STATE]             (
12   [NONE]              key
12   [NONE]              !=
12   [NONE]              '/'
12   [STATE]             )
12   [NONE]              plain
12   [NONE]              ;
12   [NONE]              
13   [NONE]              state
13   [STATE]             (
13   [NONE]              key
13   [NONE]              ==
13   [NONE]              '*'
13   [STATE]             )
13   [NONE]              comment
13   [NONE]              ;
13   [NONE]              
14   [NONE]              echo
14   [NONE]              '/'
14   [NONE]              ;
14   [COMMENT_END]       /* print '/' held back from previous state */
14   [NONE]              
15   [NONE]              if
15   [IF]                (
15   [NONE]              key
15   [NONE]              !=
15   [NONE]              '/'
15   [IF]                )
15   [IF]                {
15   [NONE]              
16   [NONE]              echo
16   [NONE]              key
16   [NONE]              ;
16   [NONE]              
16   [IF]                }
16   [NONE]              
17   [FUNC_DEF]          }
17   [NONE]              
18   [NONE]              @keypressed
18   [FUNC_DEF]          (
18   [NONE]              key
18   [FUNC_DEF]          )
18   [FUNC_DEF]          <
18   [NONE]              comment
18   [FUNC_DEF]          >
18   [NONE]              
19   [FUNC_DEF]          {
19   [NONE]              
20   [NONE]              echo
20   [NONE]              key
20   [NONE]              ;
20   [NONE]              
21   [NONE]              state
21   [STATE]             (
21   [NONE]              key
21   [NONE]              ==
21   [NONE]              '*'
21   [STATE]             )
21   [NONE]              star
21   [NONE]              ;
21   [NONE]              
22   [FUNC_DEF]          }
22   [NONE]              
23   [NONE]              @keypressed
23   [FUNC_DEF]          (
23   [NONE]              key
23   [FUNC_DEF]          )
23   [FUNC_DEF]          <
23   [NONE]              star
23   [FUNC_DEF]          >
23   [NONE]              
24   [FUNC_DEF]          {
24   [NONE]              
25   [NONE]              echo
25   [NONE]              key
25   [NONE]              ;
25   [NONE]              
26   [NONE]              state
26   [STATE]             (
26   [NONE]              key
26   [NONE]              !=
26   [NONE]              '*'
26   [STATE]             )
26   [NONE]              comment
26   [NONE]              ;
26   [NONE]              
27   [NONE]              state
27   [STATE]             (
27   [NONE]              key
27   [NONE]              ==
27   [NONE]              '/'
27   [STATE]             )
27   [NONE]              plain
27   [NONE]              ;
27   [NONE]              
28   [FUNC_DEF]          }
28   [NONE]              
29   [NONE]              echo
29   [FUNC_DEF]          (
29   [NONE]              key
29   [FUNC_DEF]          )
29   [FUNC_DEF]          <
29   [NONE]              plain
29   [NONE]              ,
29   [NONE]              slash
29   [FUNC_DEF]          >
29   [NONE]              
30   [FUNC_DEF]          {
30   [NONE]              
30   [NONE]              printchar
30   [NONE]              key
30   [NONE]              ,
30   [NONE]              yellow
30   [NONE]              ;
30   [NONE]              
30   [FUNC_DEF]          }
30   [NONE]              
31   [NONE]              echo
31   [FUNC_DEF]          (
31   [NONE]              key
31   [FUNC_DEF]          )
31   [FUNC_DEF]          <
31   [NONE]              comment
31   [NONE]              ,
31   [NONE]              star
31   [FUNC_DEF]          >
31   [NONE]              
32   [FUNC_DEF]          {
32   [NONE]              
32   [NONE]              printchar
32   [NONE]              key
32   [NONE]              ,
32   [NONE]              green
32   [NONE]              ;
32   [NONE]              
32   [FUNC_DEF]          }
32   [NONE]              
33   [NONE]              printchar
33   [FUNC_DEF]          (
33   [NONE]              ch
33   [NONE]              ,
33   [NONE]              colour
33   [FUNC_DEF]          )
33   [NONE]              
34   [FUNC_DEF]          {
34   [NONE]              
35   [NONE]              setattr
35   [NONE]              .
35   [NONE]              foreground
35   [NONE]              =
35   [NONE]              colour
35   [NONE]              ;
35   [NONE]              
36   [NONE]              printf
36   [NONE]              "%c"
36   [NONE]              ,
36   [NONE]              ch
36   [NONE]              ;
36   [NONE]              
37   [FUNC_DEF]          }
37   [NONE]              