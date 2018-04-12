Line [Parent]            Text
1    [COMMENT_WHOLE]     //TestCase-001
1    [NONE]              
2    [NONE]              new
2    [NONE]              WaveformStreamer
2    [FUNC_CALL]         (
2    [NONE]              s_sweepedClip
2    [NONE]              ,
2    [NONE]              0
2    [NONE]              ,
2    [NONE]              s_sweepedClip
2    [NONE]              .
2    [NONE]              length
2    [NONE]              ,
2    [NONE]              1
2    [NONE]              ,
2    [NONE]              
3    [NONE]              (
3    [NONE]              streamer
3    [NONE]              ,
3    [NONE]              floats
3    [NONE]              ,
3    [NONE]              remaining
3    [NONE]              )
3    [NONE]              =>
3    [NONE]              
4    [LAMBDA]            {
4    [NONE]              
5    [NONE]              return
5    [NONE]              false
5    [NONE]              ;
5    [NONE]              
6    [LAMBDA]            }
6    [NONE]              
7    [FUNC_CALL]         )
7    [NONE]              ;
7    [NONE]              
9    [COMMENT_WHOLE]     //TestCase-002
9    [NONE]              
10   [NONE]              var
10   [NONE]              streamer
10   [NONE]              =
10   [NONE]              new
10   [NONE]              WaveformStreamer
10   [FUNC_CALL]         (
10   [NONE]              s_sweepedClip
10   [NONE]              ,
10   [NONE]              0
10   [NONE]              ,
10   [NONE]              s_sweepedClip
10   [NONE]              .
10   [NONE]              length
10   [NONE]              ,
10   [NONE]              s_sweepedClip
10   [NONE]              .
10   [NONE]              samples
10   [NONE]              ,
10   [NONE]              
11   [NONE]              (
11   [NONE]              s
11   [NONE]              ,
11   [NONE]              floats
11   [NONE]              ,
11   [NONE]              remaining
11   [NONE]              )
11   [NONE]              =>
11   [NONE]              
12   [LAMBDA]            {
12   [NONE]              
13   [NONE]              return
13   [NONE]              false
13   [NONE]              ;
13   [NONE]              
14   [LAMBDA]            }
14   [NONE]              
15   [FUNC_CALL]         )
15   [NONE]              ;
15   [NONE]              