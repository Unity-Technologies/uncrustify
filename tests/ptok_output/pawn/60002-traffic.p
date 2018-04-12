Line [Parent]            Text
1    [COMMENT_WHOLE]     /* traffic light synchronizer, using states in an event-driven model */
1    [NONE]              
2    [PP_INCLUDE]        #
2    [NONE]              include
2    [NONE]              <time>
2    [NONE]              
3    [NONE]              main
3    [FUNC_DEF]          (
3    [FUNC_DEF]          )
3    [NONE]              
3    [FUNC_DEF]          {
3    [NONE]              
3    [NONE]              state
3    [NONE]              green_wait
3    [NONE]              ;
3    [NONE]              
3    [FUNC_DEF]          }
3    [NONE]              
4    [NONE]              @keypressed
4    [FUNC_DEF]          (
4    [NONE]              key
4    [FUNC_DEF]          )
4    [FUNC_DEF]          <
4    [NONE]              green_wait
4    [FUNC_DEF]          >
4    [NONE]              
4    [FUNC_DEF]          {
4    [NONE]              
4    [NONE]              state
4    [NONE]              yellow_wait
4    [NONE]              ;
4    [NONE]              
4    [FUNC_DEF]          }
4    [NONE]              
5    [NONE]              @keypressed
5    [FUNC_DEF]          (
5    [NONE]              key
5    [FUNC_DEF]          )
5    [FUNC_DEF]          <
5    [NONE]              red_walk
5    [NONE]              ,
5    [NONE]              red_wait
5    [FUNC_DEF]          >
5    [NONE]              
5    [FUNC_DEF]          {
5    [NONE]              
5    [NONE]              state
5    [NONE]              red_walk
5    [NONE]              ;
5    [NONE]              
5    [FUNC_DEF]          }
5    [NONE]              
6    [NONE]              @keypressed
6    [FUNC_DEF]          (
6    [NONE]              key
6    [FUNC_DEF]          )
6    [FUNC_DEF]          <
6    [FUNC_DEF]          >
6    [NONE]              
6    [FUNC_DEF]          {
6    [NONE]              
6    [FUNC_DEF]          }
6    [COMMENT_END]       /* fallback */
6    [NONE]              
7    [NONE]              @timer
7    [FUNC_DEF]          (
7    [FUNC_DEF]          )
7    [FUNC_DEF]          <
7    [NONE]              yellow_wait
7    [FUNC_DEF]          >
7    [NONE]              
7    [FUNC_DEF]          {
7    [NONE]              
7    [NONE]              state
7    [NONE]              red_walk
7    [NONE]              ;
7    [NONE]              
7    [FUNC_DEF]          }
7    [NONE]              
8    [NONE]              @timer
8    [FUNC_DEF]          (
8    [FUNC_DEF]          )
8    [FUNC_DEF]          <
8    [NONE]              red_walk
8    [FUNC_DEF]          >
8    [NONE]              
8    [FUNC_DEF]          {
8    [NONE]              
8    [NONE]              state
8    [NONE]              red_wait
8    [NONE]              ;
8    [NONE]              
8    [FUNC_DEF]          }
8    [NONE]              
9    [NONE]              @timer
9    [FUNC_DEF]          (
9    [FUNC_DEF]          )
9    [FUNC_DEF]          <
9    [NONE]              red_wait
9    [FUNC_DEF]          >
9    [NONE]              
9    [FUNC_DEF]          {
9    [NONE]              
9    [NONE]              state
9    [NONE]              green_wait
9    [NONE]              ;
9    [NONE]              
9    [FUNC_DEF]          }
9    [NONE]              
10   [NONE]              @timer
10   [FUNC_DEF]          (
10   [FUNC_DEF]          )
10   [FUNC_DEF]          <
10   [FUNC_DEF]          >
10   [NONE]              
10   [FUNC_DEF]          {
10   [NONE]              
10   [FUNC_DEF]          }
10   [COMMENT_END]       /* fallback */
10   [NONE]              
11   [NONE]              entry
11   [FUNC_DEF]          (
11   [FUNC_DEF]          )
11   [FUNC_DEF]          <
11   [NONE]              green_wait
11   [FUNC_DEF]          >
11   [NONE]              
12   [FUNC_DEF]          {
12   [NONE]              
12   [NONE]              print
12   [NONE]              "Green / Don't walk\n"
12   [NONE]              ;
12   [NONE]              
12   [FUNC_DEF]          }
12   [NONE]              
13   [NONE]              entry
13   [FUNC_DEF]          (
13   [FUNC_DEF]          )
13   [FUNC_DEF]          <
13   [NONE]              yellow_wait
13   [FUNC_DEF]          >
13   [NONE]              
14   [FUNC_DEF]          {
14   [NONE]              
15   [NONE]              print
15   [NONE]              "Yellow / Don't walk\n"
15   [NONE]              ;
15   [NONE]              
16   [NONE]              settimer
16   [NONE]              2000
16   [NONE]              ;
16   [NONE]              
17   [FUNC_DEF]          }
17   [NONE]              
18   [NONE]              entry
18   [FUNC_DEF]          (
18   [FUNC_DEF]          )
18   [FUNC_DEF]          <
18   [NONE]              red_walk
18   [FUNC_DEF]          >
18   [NONE]              
19   [FUNC_DEF]          {
19   [NONE]              
20   [NONE]              print
20   [NONE]              "Red / Walk\n"
20   [NONE]              ;
20   [NONE]              
21   [NONE]              settimer
21   [NONE]              5000
21   [NONE]              ;
21   [NONE]              
22   [FUNC_DEF]          }
22   [NONE]              
23   [NONE]              entry
23   [FUNC_DEF]          (
23   [FUNC_DEF]          )
23   [FUNC_DEF]          <
23   [NONE]              red_wait
23   [FUNC_DEF]          >
23   [NONE]              
24   [FUNC_DEF]          {
24   [NONE]              
25   [NONE]              print
25   [NONE]              "Red / Don't walk\n"
25   [NONE]              ;
25   [NONE]              
26   [NONE]              settimer
26   [NONE]              2000
26   [NONE]              ;
26   [NONE]              
27   [FUNC_DEF]          }
27   [NONE]              