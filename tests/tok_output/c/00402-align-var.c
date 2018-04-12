Line [Token]             Text
1    [STRUCT]            struct
1    [TYPE]              foo1
1    [NEWLINE]           
1    [BRACE_OPEN]        {
1    [NEWLINE]           
2    [TYPE]              unsigned
2    [TYPE]              int
2    [WORD]              d_ino
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [QUALIFIER]         const
3    [TYPE]              char
3    [PTR_TYPE]          *
3    [WORD]              d_reclen
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [TYPE]              unsigned
4    [TYPE]              short
4    [WORD]              d_namlen
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [TYPE]              char
5    [WORD]              d_name
5    [SQUARE_OPEN]       [
5    [NUMBER]            1
5    [SQUARE_CLOSE]      ]
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [SEMICOLON]         ;
6    [NEWLINE]           
8    [STRUCT]            struct
8    [TYPE]              foo2
8    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [TYPE]              unsigned
10   [TYPE]              int
10   [WORD]              a
10   [BIT_COLON]         :
10   [NUMBER]            1
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [TYPE]              unsigned
11   [TYPE]              int
11   [WORD]              bcd
11   [BIT_COLON]         :
11   [NUMBER]            3
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [TYPE]              unsigned
12   [TYPE]              int
12   [WORD]              ef
12   [BIT_COLON]         :
12   [NUMBER]            2
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [TYPE]              unsigned
13   [TYPE]              int
13   [BIT_COLON]         :
13   [NUMBER]            2
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [TYPE]              unsigned
15   [TYPE]              short
15   [WORD]              more
15   [SEMICOLON]         ;
15   [NEWLINE]           
17   [TYPE]              int
17   [WORD]              fields
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [SEMICOLON]         ;
18   [NEWLINE]           
20   [TYPEDEF]           typedef
20   [STRUCT]            struct
20   [NEWLINE]           
20   [BRACE_OPEN]        {
20   [NEWLINE]           
21   [TYPE]              bitfld
21   [WORD]              a
21   [BIT_COLON]         :
21   [NUMBER]            8
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [TYPE]              bitfld
22   [WORD]              b
22   [BIT_COLON]         :
22   [NUMBER]            16
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [WORD]              bitfld
23   [BIT_COLON]         :
23   [NUMBER]            8
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [TYPE]              type_t
24   [SEMICOLON]         ;
24   [NEWLINE]           
26   [STRUCT]            struct
26   [TYPE]              foo
26   [BRACE_OPEN]        {
26   [TYPE]              int
26   [WORD]              a
26   [SEMICOLON]         ;
26   [TYPE]              char
26   [PTR_TYPE]          *
26   [WORD]              b
26   [BRACE_CLOSE]       }
26   [SEMICOLON]         ;
26   [NEWLINE]           
28   [QUALIFIER]         static
28   [TYPE]              int
28   [WORD]              idx
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [QUALIFIER]         static
29   [QUALIFIER]         const
29   [TYPE]              char
29   [PTR_TYPE]          *
29   [PTR_TYPE]          *
29   [WORD]              tmp
29   [SEMICOLON]         ;
29   [NEWLINE]           
31   [QUALIFIER]         static
31   [TYPE]              char
31   [WORD]              buf
31   [SQUARE_OPEN]       [
31   [NUMBER]            64
31   [SQUARE_CLOSE]      ]
31   [SEMICOLON]         ;
31   [NEWLINE]           
32   [QUALIFIER]         static
32   [TYPE]              unsigned
32   [TYPE]              long
32   [WORD]              how_long
32   [SEMICOLON]         ;
32   [NEWLINE]           
33   [COMMENT_CPP]       // comment
33   [NEWLINE]           
34   [QUALIFIER]         static
34   [TYPE]              int
34   [PTR_TYPE]          *
34   [PTR_TYPE]          *
34   [WORD]              tmp
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [QUALIFIER]         static
35   [TYPE]              char
35   [WORD]              buf
35   [SQUARE_OPEN]       [
35   [NUMBER]            64
35   [SQUARE_CLOSE]      ]
35   [SEMICOLON]         ;
35   [NEWLINE]           
38   [TYPE]              void
38   [FUNC_DEF]          bar
38   [FPAREN_OPEN]       (
38   [TYPE]              int
38   [WORD]              someval
38   [COMMA]             ,
38   [NEWLINE]           
39   [TYPE]              void
39   [PTR_TYPE]          *
39   [WORD]              puser
39   [COMMA]             ,
39   [NEWLINE]           
40   [QUALIFIER]         const
40   [TYPE]              char
40   [PTR_TYPE]          *
40   [WORD]              filename
40   [COMMA]             ,
40   [NEWLINE]           
41   [STRUCT]            struct
41   [TYPE]              willy
41   [PTR_TYPE]          *
41   [WORD]              the_list
41   [COMMA]             ,
41   [NEWLINE]           
42   [TYPE]              int
42   [WORD]              list_len
42   [FPAREN_CLOSE]      )
42   [NEWLINE]           
43   [BRACE_OPEN]        {
43   [NEWLINE]           
44   [TYPE]              int
44   [WORD]              idx
44   [SEMICOLON]         ;
44   [NEWLINE]           
45   [QUALIFIER]         const
45   [TYPE]              char
45   [PTR_TYPE]          *
45   [PTR_TYPE]          *
45   [WORD]              tmp
45   [SEMICOLON]         ;
45   [NEWLINE]           
46   [TYPE]              char
46   [WORD]              buf
46   [SQUARE_OPEN]       [
46   [NUMBER]            64
46   [SQUARE_CLOSE]      ]
46   [SEMICOLON]         ;
46   [NEWLINE]           
48   [TYPE]              unsigned
48   [TYPE]              long
48   [WORD]              how_long
48   [SEMICOLON]         ;
48   [NEWLINE]           
50   [RETURN]            return
50   [PAREN_OPEN]        (
50   [NEG]               -
50   [NUMBER]            1
50   [PAREN_CLOSE]       )
50   [SEMICOLON]         ;
50   [NEWLINE]           
51   [BRACE_CLOSE]       }
51   [NEWLINE]           