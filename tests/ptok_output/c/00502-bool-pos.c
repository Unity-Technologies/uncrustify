Line [Parent]            Text
1    [FUNC_DEF]          void
1    [NONE]              foo
1    [FUNC_DEF]          (
1    [NONE]              void
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              if
3    [IF]                (
3    [NONE]              (
3    [NONE]              a
3    [NONE]              !=
3    [NONE]              0
3    [NONE]              )
3    [NONE]              
3    [NONE]              &&
4    [NONE]              (
4    [NONE]              b
4    [NONE]              ==
4    [NONE]              0
4    [NONE]              )
4    [NONE]              
4    [NONE]              &&
5    [NONE]              (
5    [NONE]              c
5    [NONE]              <
5    [NONE]              0
5    [NONE]              )
5    [NONE]              &&
5    [NONE]              (
5    [NONE]              d
5    [NONE]              >
5    [NONE]              0
5    [NONE]              )
5    [IF]                )
5    [NONE]              
6    [IF]                {
6    [NONE]              
7    [NONE]              printf
7    [FUNC_CALL]         (
7    [NONE]              "hi"
7    [FUNC_CALL]         )
7    [NONE]              ;
7    [NONE]              
8    [IF]                }
8    [NONE]              
10   [NONE]              if
10   [IF]                (
10   [NONE]              flag1
10   [NONE]              
11   [PP_IF]             #
11   [NONE]              ifdef
11   [NONE]              FLAG2
11   [NONE]              
12   [NONE]              ||
12   [NONE]              flag2
12   [NONE]              
13   [PP_ENDIF]          #
13   [NONE]              endif
13   [NONE]              
14   [IF]                )
14   [NONE]              
15   [IF]                {
15   [NONE]              
16   [NONE]              printf
16   [FUNC_CALL]         (
16   [NONE]              "yar"
16   [FUNC_CALL]         )
16   [NONE]              ;
16   [NONE]              
17   [IF]                }
17   [NONE]              
19   [NONE]              if
19   [IF]                (
19   [NONE]              flag1
19   [NONE]              &&
19   [NONE]              
20   [PP_IF]             #
20   [NONE]              ifdef
20   [NONE]              FLAG2
20   [NONE]              
21   [NONE]              flag2
21   [NONE]              &&
21   [NONE]              
22   [PP_ENDIF]          #
22   [NONE]              endif
22   [NONE]              
23   [NONE]              flag3
23   [IF]                )
23   [NONE]              
24   [IF]                {
24   [NONE]              
25   [NONE]              printf
25   [FUNC_CALL]         (
25   [NONE]              "bo"
25   [FUNC_CALL]         )
25   [NONE]              ;
25   [NONE]              
26   [IF]                }
26   [NONE]              
28   [NONE]              if
28   [IF]                (
28   [NONE]              (
28   [NONE]              a
28   [NONE]              !=
28   [NONE]              0
28   [NONE]              )
28   [NONE]              
29   [NONE]              &&
29   [NONE]              (
29   [NONE]              b
29   [NONE]              ==
29   [NONE]              0
29   [NONE]              )
29   [NONE]              
30   [NONE]              &&
30   [NONE]              (
30   [NONE]              c
30   [NONE]              <
30   [NONE]              0
30   [NONE]              )
30   [IF]                )
30   [NONE]              
31   [IF]                {
31   [NONE]              
32   [NONE]              printf
32   [FUNC_CALL]         (
32   [NONE]              "hi"
32   [FUNC_CALL]         )
32   [NONE]              ;
32   [NONE]              
33   [IF]                }
33   [NONE]              
35   [NONE]              if
35   [IF]                (
35   [NONE]              (
35   [NONE]              a
35   [NONE]              !=
35   [NONE]              0
35   [NONE]              )
35   [NONE]              
36   [NONE]              &&
36   [NONE]              
37   [NONE]              (
37   [NONE]              b
37   [NONE]              ==
37   [NONE]              0
37   [NONE]              )
37   [NONE]              
38   [NONE]              &&
38   [NONE]              
39   [NONE]              (
39   [NONE]              c
39   [NONE]              <
39   [NONE]              0
39   [NONE]              )
39   [IF]                )
39   [NONE]              
40   [IF]                {
40   [NONE]              
41   [NONE]              printf
41   [FUNC_CALL]         (
41   [NONE]              "hi"
41   [FUNC_CALL]         )
41   [NONE]              ;
41   [NONE]              
42   [IF]                }
42   [NONE]              
44   [NONE]              if
44   [IF]                (
44   [NONE]              !
44   [NONE]              this
44   [NONE]              ->
44   [NONE]              writeOwiFile
44   [FUNC_CALL]         (
44   [FUNC_CALL]         )
44   [COMMENT_END]       // comment1
44   [NONE]              
44   [NONE]              ||
45   [NONE]              broken
45   [FUNC_CALL]         (
45   [FUNC_CALL]         )
45   [NONE]              ||
45   [NONE]              !
45   [NONE]              saveArchiveData
45   [FUNC_CALL]         (
45   [FUNC_CALL]         )
45   [COMMENT_END]       /* comment2 */
45   [NONE]              
46   [NONE]              ||
46   [NONE]              broken
46   [FUNC_CALL]         (
46   [FUNC_CALL]         )
46   [NONE]              ||
46   [NONE]              !
46   [NONE]              deleteCentralArchive
46   [FUNC_CALL]         (
46   [FUNC_CALL]         )
46   [COMMENT_END]       // comment3
46   [NONE]              
47   [NONE]              ||
47   [NONE]              broken
47   [FUNC_CALL]         (
47   [FUNC_CALL]         )
47   [NONE]              ||
47   [NONE]              !
47   [NONE]              copyArchivFiles
47   [FUNC_CALL]         (
47   [FUNC_CALL]         )
47   [COMMENT_END]       // comment4
47   [NONE]              
48   [NONE]              ||
48   [NONE]              broken
48   [FUNC_CALL]         (
48   [FUNC_CALL]         )
48   [NONE]              ||
48   [NONE]              !
48   [NONE]              appendToPlanetDb
48   [FUNC_CALL]         (
48   [FUNC_CALL]         )
48   [IF]                )
48   [COMMENT_END]       // comment5
48   [NONE]              
49   [IF]                {
49   [NONE]              
50   [NONE]              ;
50   [NONE]              
51   [IF]                }
51   [NONE]              
53   [NONE]              foobar
53   [FUNC_CALL]         (
53   [NONE]              param1
53   [NONE]              
53   [NONE]              ,
54   [NONE]              param2
54   [NONE]              ,
54   [NONE]              param3
54   [NONE]              
54   [NONE]              ,
55   [NONE]              param4
55   [FUNC_CALL]         )
55   [NONE]              ;
55   [NONE]              
57   [NONE]              foobar2
57   [FUNC_CALL]         (
57   [NONE]              param1
57   [NONE]              
58   [NONE]              ,
58   [NONE]              param2
58   [NONE]              ,
58   [NONE]              param3
58   [NONE]              
59   [NONE]              ,
59   [NONE]              param4
59   [FUNC_CALL]         )
59   [NONE]              ;
59   [NONE]              
60   [FUNC_DEF]          }
60   [NONE]              