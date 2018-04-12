Line [Token]             Text
1    [PREPROC]           #
1    [PP_IF]             ifndef
1    [WORD]              NL_CLASS_H_INCLUDED
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_DEFINE]         define
2    [MACRO]             NL_CLASS_H_INCLUDED
2    [NEWLINE]           
4    [PREPROC]           #
4    [PP_INCLUDE]        include
4    [PREPROC_BODY]      <string>
4    [NEWLINE]           
6    [NAMESPACE]         namespace
6    [WORD]              example
6    [BRACE_OPEN]        {
6    [NEWLINE]           
8    [CLASS]             class
8    [TYPE]              IStreamable
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [CLASS]             class
9    [TYPE]              InStream
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [CLASS]             class
10   [TYPE]              OutStream
10   [SEMICOLON]         ;
10   [NEWLINE]           
12   [COMMENT_MULTI]     /**␤ * Timestamp is a timestamp with nanosecond resolution.␤ */
14   [NEWLINE]           
15   [CLASS]             class
15   [TYPE]              Inher
15   [NEWLINE]           
16   [CLASS_COLON]       :
16   [QUALIFIER]         public
16   [WORD]              IStreamable
17   [BRACE_OPEN]        {
17   [NEWLINE]           
19   [PRIVATE]           public
19   [PRIVATE_COLON]     :
19   [NEWLINE]           
20   [FUNC_CLASS_PROTO]    Inher
20   [FPAREN_OPEN]       (
20   [FPAREN_CLOSE]      )
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [QUALIFIER]         virtual
21   [DESTRUCTOR]        ~
21   [FUNC_CLASS_PROTO]    Inher
21   [FPAREN_OPEN]       (
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [SEMICOLON]         ;
23   [NEWLINE]           
25   [COMMENT_MULTI]     /**␤ * Timestamp is a timestamp with nanosecond resolution.␤ */
27   [NEWLINE]           
28   [CLASS]             class
28   [TYPE]              Inher2
28   [NEWLINE]           
29   [CLASS_COLON]       :
29   [QUALIFIER]         public
29   [WORD]              IStreamable
29   [BRACE_OPEN]        {
29   [NEWLINE]           
31   [PRIVATE]           public
31   [PRIVATE_COLON]     :
31   [NEWLINE]           
33   [FUNC_CLASS_PROTO]    Inher2
33   [FPAREN_OPEN]       (
33   [FPAREN_CLOSE]      )
33   [SEMICOLON]         ;
33   [NEWLINE]           
34   [FUNC_CLASS_PROTO]    Inher2
34   [FPAREN_OPEN]       (
34   [TYPE]              long
34   [WORD]              sec
34   [COMMA]             ,
34   [TYPE]              unsigned
34   [TYPE]              long
34   [WORD]              nsec
34   [FPAREN_CLOSE]      )
34   [SEMICOLON]         ;
34   [NEWLINE]           
36   [BRACE_CLOSE]       }
36   [SEMICOLON]         ;
36   [NEWLINE]           
38   [CLASS]             class
38   [TYPE]              Simple
38   [BRACE_OPEN]        {
38   [NEWLINE]           
40   [PRIVATE]           public
40   [PRIVATE_COLON]     :
40   [NEWLINE]           
42   [FUNC_CLASS_PROTO]    Simple
42   [FPAREN_OPEN]       (
42   [FPAREN_CLOSE]      )
42   [SEMICOLON]         ;
42   [NEWLINE]           
43   [QUALIFIER]         virtual
43   [DESTRUCTOR]        ~
43   [FUNC_CLASS_PROTO]    Simple
43   [FPAREN_OPEN]       (
43   [FPAREN_CLOSE]      )
43   [SEMICOLON]         ;
43   [NEWLINE]           
45   [BRACE_CLOSE]       }
45   [SEMICOLON]         ;
45   [NEWLINE]           
47   [CLASS]             class
47   [TYPE]              Simple2
48   [BRACE_OPEN]        {
48   [NEWLINE]           
50   [PRIVATE]           public
50   [PRIVATE_COLON]     :
50   [NEWLINE]           
52   [FUNC_CLASS_PROTO]    Simple2
52   [FPAREN_OPEN]       (
52   [FPAREN_CLOSE]      )
52   [SEMICOLON]         ;
52   [NEWLINE]           
53   [QUALIFIER]         virtual
53   [DESTRUCTOR]        ~
53   [FUNC_CLASS_PROTO]    Simple2
53   [FPAREN_OPEN]       (
53   [FPAREN_CLOSE]      )
53   [SEMICOLON]         ;
53   [NEWLINE]           
55   [BRACE_CLOSE]       }
55   [SEMICOLON]         ;
55   [NEWLINE]           
57   [BRACE_CLOSE]       }
57   [COMMENT_CPP]       // namespace
57   [NEWLINE]           
59   [PREPROC]           #
59   [PP_ENDIF]          endif
59   [COMMENT_CPP]       // NL_CLASS_H_INCLUDED
59   [NEWLINE]           