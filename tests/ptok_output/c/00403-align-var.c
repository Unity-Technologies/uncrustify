Line [Parent]            Text
1    [NONE]              struct
1    [STRUCT]            foo1
1    [NONE]              
1    [STRUCT]            {
1    [NONE]              
2    [NONE]              unsigned
2    [NONE]              int
2    [NONE]              d_ino
2    [NONE]              ;
2    [NONE]              
3    [NONE]              const
3    [NONE]              char
3    [NONE]              *
3    [NONE]              d_reclen
3    [NONE]              ;
3    [NONE]              
4    [NONE]              unsigned
4    [NONE]              short
4    [NONE]              d_namlen
4    [NONE]              ;
4    [NONE]              
5    [NONE]              char
5    [NONE]              d_name
5    [NONE]              [
5    [NONE]              1
5    [NONE]              ]
5    [NONE]              ;
5    [NONE]              
6    [STRUCT]            }
6    [STRUCT]            ;
6    [NONE]              
8    [NONE]              struct
8    [STRUCT]            foo2
8    [NONE]              
9    [STRUCT]            {
9    [NONE]              
10   [NONE]              unsigned
10   [NONE]              int
10   [NONE]              a
10   [NONE]              :
10   [NONE]              1
10   [NONE]              ;
10   [NONE]              
11   [NONE]              unsigned
11   [NONE]              int
11   [NONE]              bcd
11   [NONE]              :
11   [NONE]              3
11   [NONE]              ;
11   [NONE]              
12   [NONE]              unsigned
12   [NONE]              int
12   [NONE]              ef
12   [NONE]              :
12   [NONE]              2
12   [NONE]              ;
12   [NONE]              
13   [NONE]              unsigned
13   [NONE]              int
13   [NONE]              :
13   [NONE]              2
13   [NONE]              ;
13   [NONE]              
15   [NONE]              unsigned
15   [NONE]              short
15   [NONE]              more
15   [NONE]              ;
15   [NONE]              
17   [NONE]              int
17   [NONE]              fields
17   [NONE]              ;
17   [NONE]              
18   [STRUCT]            }
18   [STRUCT]            ;
18   [NONE]              
20   [NONE]              typedef
20   [NONE]              struct
20   [NONE]              
20   [STRUCT]            {
20   [NONE]              
21   [NONE]              bitfld
21   [NONE]              a
21   [NONE]              :
21   [NONE]              8
21   [NONE]              ;
21   [NONE]              
22   [NONE]              bitfld
22   [NONE]              b
22   [NONE]              :
22   [NONE]              16
22   [NONE]              ;
22   [NONE]              
23   [NONE]              bitfld
23   [NONE]              :
23   [NONE]              8
23   [NONE]              ;
23   [NONE]              
24   [STRUCT]            }
24   [NONE]              type_t
24   [TYPEDEF]           ;
24   [NONE]              
26   [NONE]              struct
26   [STRUCT]            foo
26   [STRUCT]            {
26   [NONE]              int
26   [NONE]              a
26   [NONE]              ;
26   [NONE]              char
26   [NONE]              *
26   [NONE]              b
26   [STRUCT]            }
26   [STRUCT]            ;
26   [NONE]              
28   [NONE]              static
28   [NONE]              int
28   [NONE]              idx
28   [NONE]              ;
28   [NONE]              
29   [NONE]              static
29   [NONE]              const
29   [NONE]              char
29   [NONE]              *
29   [NONE]              *
29   [NONE]              tmp
29   [NONE]              ;
29   [NONE]              
31   [NONE]              static
31   [NONE]              char
31   [NONE]              buf
31   [NONE]              [
31   [NONE]              64
31   [NONE]              ]
31   [NONE]              ;
31   [NONE]              
32   [NONE]              static
32   [NONE]              unsigned
32   [NONE]              long
32   [NONE]              how_long
32   [NONE]              ;
32   [NONE]              
33   [COMMENT_WHOLE]     // comment
33   [NONE]              
34   [NONE]              static
34   [NONE]              int
34   [NONE]              *
34   [NONE]              *
34   [NONE]              tmp
34   [NONE]              ;
34   [NONE]              
35   [NONE]              static
35   [NONE]              char
35   [NONE]              buf
35   [NONE]              [
35   [NONE]              64
35   [NONE]              ]
35   [NONE]              ;
35   [NONE]              
38   [FUNC_DEF]          void
38   [NONE]              bar
38   [FUNC_DEF]          (
38   [NONE]              int
38   [NONE]              someval
38   [NONE]              ,
38   [NONE]              
39   [NONE]              void
39   [NONE]              *
39   [NONE]              puser
39   [NONE]              ,
39   [NONE]              
40   [NONE]              const
40   [NONE]              char
40   [NONE]              *
40   [NONE]              filename
40   [NONE]              ,
40   [NONE]              
41   [NONE]              struct
41   [NONE]              willy
41   [STRUCT]            *
41   [NONE]              the_list
41   [NONE]              ,
41   [NONE]              
42   [NONE]              int
42   [NONE]              list_len
42   [FUNC_DEF]          )
42   [NONE]              
43   [FUNC_DEF]          {
43   [NONE]              
44   [NONE]              int
44   [NONE]              idx
44   [NONE]              ;
44   [NONE]              
45   [NONE]              const
45   [NONE]              char
45   [NONE]              *
45   [NONE]              *
45   [NONE]              tmp
45   [NONE]              ;
45   [NONE]              
46   [NONE]              char
46   [NONE]              buf
46   [NONE]              [
46   [NONE]              64
46   [NONE]              ]
46   [NONE]              ;
46   [NONE]              
48   [NONE]              unsigned
48   [NONE]              long
48   [NONE]              how_long
48   [NONE]              ;
48   [NONE]              
50   [NONE]              return
50   [RETURN]            (
50   [NONE]              -
50   [NONE]              1
50   [RETURN]            )
50   [NONE]              ;
50   [NONE]              
51   [FUNC_DEF]          }
51   [NONE]              