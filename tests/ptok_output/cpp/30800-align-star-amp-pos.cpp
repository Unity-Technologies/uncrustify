Line [Parent]            Text
1    [NONE]              
2    [COMMENT_WHOLE]     /** First, the typedefs */
2    [NONE]              
3    [NONE]              typedef
3    [NONE]              int
3    [NONE]              MY_INT
3    [TYPEDEF]           ;
3    [NONE]              
4    [NONE]              typedef
4    [NONE]              int
4    [NONE]              *
4    [NONE]              MY_INTP
4    [TYPEDEF]           ;
4    [NONE]              
5    [NONE]              typedef
5    [NONE]              int
5    [NONE]              &
5    [NONE]              MY_INTR
5    [TYPEDEF]           ;
5    [NONE]              
6    [NONE]              typedef
6    [NONE]              CFoo
6    [NONE]              &
6    [NONE]              foo_ref_t
6    [TYPEDEF]           ;
6    [NONE]              
7    [NONE]              typedef
7    [FUNC_TYPE]         int
7    [FUNC_TYPE]         (
7    [NONE]              *
7    [TYPEDEF]           foo_t
7    [FUNC_TYPE]         )
7    [FUNC_PROTO]        (
7    [NONE]              void
7    [NONE]              *
7    [NONE]              bar
7    [FUNC_PROTO]        )
7    [TYPEDEF]           ;
7    [NONE]              
8    [NONE]              typedef
8    [FUNC_TYPE]         const
8    [FUNC_TYPE]         char
8    [FUNC_TYPE]         *
8    [FUNC_TYPE]         (
8    [NONE]              *
8    [TYPEDEF]           somefunc_t
8    [FUNC_TYPE]         )
8    [FUNC_PROTO]        (
8    [NONE]              void
8    [NONE]              *
8    [NONE]              barstool
8    [FUNC_PROTO]        )
8    [TYPEDEF]           ;
8    [NONE]              
10   [COMMENT_WHOLE]     /* Now, the types */
10   [NONE]              
11   [NONE]              struct
11   [STRUCT]            foo1
11   [STRUCT]            {
11   [NONE]              
12   [NONE]              unsigned
12   [NONE]              int
12   [NONE]              d_ino
12   [NONE]              ;
12   [NONE]              
13   [NONE]              const
13   [NONE]              char
13   [NONE]              *
13   [NONE]              d_reclen
13   [NONE]              ;
13   [NONE]              
14   [NONE]              unsigned
14   [NONE]              short
14   [NONE]              d_namlen
14   [NONE]              ;
14   [NONE]              
15   [NONE]              char
15   [NONE]              d_name
15   [NONE]              [
15   [NONE]              1
15   [NONE]              ]
15   [NONE]              ;
15   [NONE]              
16   [NONE]              CFoo
16   [NONE]              &
16   [NONE]              fref
16   [NONE]              ;
16   [NONE]              
17   [STRUCT]            }
17   [STRUCT]            ;
17   [NONE]              
19   [NONE]              struct
19   [STRUCT]            foo
19   [STRUCT]            {
19   [NONE]              int
19   [NONE]              a
19   [NONE]              ;
19   [NONE]              char
19   [NONE]              *
19   [NONE]              b
19   [STRUCT]            }
19   [STRUCT]            ;
19   [NONE]              
21   [NONE]              static
21   [NONE]              int
21   [NONE]              idx
21   [NONE]              ;
21   [NONE]              
22   [NONE]              static
22   [NONE]              const
22   [NONE]              char
22   [NONE]              *
22   [NONE]              *
22   [NONE]              tmp
22   [NONE]              ;
22   [NONE]              
23   [NONE]              CFoo
23   [NONE]              &
23   [NONE]              fref
23   [NONE]              ;
23   [NONE]              
25   [NONE]              static
25   [NONE]              char
25   [NONE]              buf
25   [NONE]              [
25   [NONE]              64
25   [NONE]              ]
25   [NONE]              ;
25   [NONE]              
26   [NONE]              static
26   [NONE]              unsigned
26   [NONE]              long
26   [NONE]              how_long
26   [NONE]              ;
26   [NONE]              
27   [COMMENT_WHOLE]     // comment
27   [NONE]              
28   [NONE]              static
28   [NONE]              int
28   [NONE]              *
28   [NONE]              *
28   [NONE]              tmp
28   [NONE]              ;
28   [NONE]              
29   [NONE]              static
29   [NONE]              char
29   [NONE]              buf
29   [NONE]              [
29   [NONE]              64
29   [NONE]              ]
29   [NONE]              ;
29   [NONE]              
32   [FUNC_DEF]          void
32   [NONE]              bar
32   [FUNC_DEF]          (
32   [NONE]              int
32   [NONE]              someval
32   [NONE]              ,
32   [NONE]              
33   [NONE]              void
33   [NONE]              *
33   [NONE]              puser
33   [NONE]              ,
33   [NONE]              
34   [NONE]              const
34   [NONE]              char
34   [NONE]              *
34   [NONE]              filename
34   [NONE]              ,
34   [NONE]              
35   [NONE]              struct
35   [NONE]              willy
35   [STRUCT]            *
35   [NONE]              the_list
35   [NONE]              ,
35   [NONE]              
36   [NONE]              int
36   [NONE]              list_len
36   [FUNC_DEF]          )
36   [NONE]              
37   [FUNC_DEF]          {
37   [NONE]              
38   [NONE]              int
38   [NONE]              idx
38   [NONE]              ;
38   [NONE]              
39   [NONE]              const
39   [NONE]              char
39   [NONE]              *
39   [NONE]              *
39   [NONE]              tmp
39   [NONE]              ;
39   [NONE]              
40   [NONE]              char
40   [NONE]              buf
40   [NONE]              [
40   [NONE]              64
40   [NONE]              ]
40   [NONE]              ;
40   [NONE]              
41   [NONE]              CFoo
41   [NONE]              &
41   [NONE]              fref
41   [NONE]              ;
41   [NONE]              
43   [NONE]              unsigned
43   [NONE]              long
43   [NONE]              how_long
43   [NONE]              ;
43   [NONE]              
45   [NONE]              return
45   [RETURN]            (
45   [NONE]              -
45   [NONE]              1
45   [RETURN]            )
45   [NONE]              ;
45   [NONE]              
46   [FUNC_DEF]          }
46   [NONE]              