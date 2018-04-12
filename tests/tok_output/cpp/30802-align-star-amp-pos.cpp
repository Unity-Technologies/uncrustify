Line [Token]             Text
1    [NEWLINE]           
2    [COMMENT]           /** First, the typedefs */
2    [NEWLINE]           
3    [TYPEDEF]           typedef
3    [TYPE]              int
3    [TYPE]              MY_INT
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [TYPEDEF]           typedef
4    [TYPE]              int
4    [PTR_TYPE]          *
4    [TYPE]              MY_INTP
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [TYPEDEF]           typedef
5    [TYPE]              int
5    [BYREF]             &
5    [TYPE]              MY_INTR
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [TYPEDEF]           typedef
6    [TYPE]              CFoo
6    [BYREF]             &
6    [TYPE]              foo_ref_t
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [TYPEDEF]           typedef
7    [TYPE]              int
7    [TPAREN_OPEN]       (
7    [PTR_TYPE]          *
7    [TYPE]              foo_t
7    [TPAREN_CLOSE]      )
7    [FPAREN_OPEN]       (
7    [TYPE]              void
7    [PTR_TYPE]          *
7    [WORD]              bar
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [TYPEDEF]           typedef
8    [QUALIFIER]         const
8    [TYPE]              char
8    [PTR_TYPE]          *
8    [TPAREN_OPEN]       (
8    [PTR_TYPE]          *
8    [TYPE]              somefunc_t
8    [TPAREN_CLOSE]      )
8    [FPAREN_OPEN]       (
8    [TYPE]              void
8    [PTR_TYPE]          *
8    [WORD]              barstool
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
10   [COMMENT]           /* Now, the types */
10   [NEWLINE]           
11   [STRUCT]            struct
11   [TYPE]              foo1
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [TYPE]              unsigned
12   [TYPE]              int
12   [WORD]              d_ino
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [QUALIFIER]         const
13   [TYPE]              char
13   [PTR_TYPE]          *
13   [WORD]              d_reclen
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [TYPE]              unsigned
14   [TYPE]              short
14   [WORD]              d_namlen
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [TYPE]              char
15   [WORD]              d_name
15   [SQUARE_OPEN]       [
15   [NUMBER]            1
15   [SQUARE_CLOSE]      ]
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [TYPE]              CFoo
16   [BYREF]             &
16   [WORD]              fref
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [SEMICOLON]         ;
17   [NEWLINE]           
19   [STRUCT]            struct
19   [TYPE]              foo
19   [BRACE_OPEN]        {
19   [TYPE]              int
19   [WORD]              a
19   [SEMICOLON]         ;
19   [TYPE]              char
19   [PTR_TYPE]          *
19   [WORD]              b
19   [BRACE_CLOSE]       }
19   [SEMICOLON]         ;
19   [NEWLINE]           
21   [QUALIFIER]         static
21   [TYPE]              int
21   [WORD]              idx
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [QUALIFIER]         static
22   [QUALIFIER]         const
22   [TYPE]              char
22   [PTR_TYPE]          *
22   [PTR_TYPE]          *
22   [WORD]              tmp
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [TYPE]              CFoo
23   [BYREF]             &
23   [WORD]              fref
23   [SEMICOLON]         ;
23   [NEWLINE]           
25   [QUALIFIER]         static
25   [TYPE]              char
25   [WORD]              buf
25   [SQUARE_OPEN]       [
25   [NUMBER]            64
25   [SQUARE_CLOSE]      ]
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [QUALIFIER]         static
26   [TYPE]              unsigned
26   [TYPE]              long
26   [WORD]              how_long
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [COMMENT_CPP]       // comment
27   [NEWLINE]           
28   [QUALIFIER]         static
28   [TYPE]              int
28   [PTR_TYPE]          *
28   [PTR_TYPE]          *
28   [WORD]              tmp
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [QUALIFIER]         static
29   [TYPE]              char
29   [WORD]              buf
29   [SQUARE_OPEN]       [
29   [NUMBER]            64
29   [SQUARE_CLOSE]      ]
29   [SEMICOLON]         ;
29   [NEWLINE]           
32   [TYPE]              void
32   [FUNC_DEF]          bar
32   [FPAREN_OPEN]       (
32   [TYPE]              int
32   [WORD]              someval
32   [COMMA]             ,
32   [NEWLINE]           
33   [TYPE]              void
33   [PTR_TYPE]          *
33   [WORD]              puser
33   [COMMA]             ,
33   [NEWLINE]           
34   [QUALIFIER]         const
34   [TYPE]              char
34   [PTR_TYPE]          *
34   [WORD]              filename
34   [COMMA]             ,
34   [NEWLINE]           
35   [STRUCT]            struct
35   [TYPE]              willy
35   [PTR_TYPE]          *
35   [WORD]              the_list
35   [COMMA]             ,
35   [NEWLINE]           
36   [TYPE]              int
36   [WORD]              list_len
36   [FPAREN_CLOSE]      )
36   [NEWLINE]           
37   [BRACE_OPEN]        {
37   [NEWLINE]           
38   [TYPE]              int
38   [WORD]              idx
38   [SEMICOLON]         ;
38   [NEWLINE]           
39   [QUALIFIER]         const
39   [TYPE]              char
39   [PTR_TYPE]          *
39   [PTR_TYPE]          *
39   [WORD]              tmp
39   [SEMICOLON]         ;
39   [NEWLINE]           
40   [TYPE]              char
40   [WORD]              buf
40   [SQUARE_OPEN]       [
40   [NUMBER]            64
40   [SQUARE_CLOSE]      ]
40   [SEMICOLON]         ;
40   [NEWLINE]           
41   [TYPE]              CFoo
41   [BYREF]             &
41   [WORD]              fref
41   [SEMICOLON]         ;
41   [NEWLINE]           
43   [TYPE]              unsigned
43   [TYPE]              long
43   [WORD]              how_long
43   [SEMICOLON]         ;
43   [NEWLINE]           
45   [RETURN]            return
45   [PAREN_OPEN]        (
45   [NEG]               -
45   [NUMBER]            1
45   [PAREN_CLOSE]       )
45   [SEMICOLON]         ;
45   [NEWLINE]           
46   [BRACE_CLOSE]       }
46   [NEWLINE]           