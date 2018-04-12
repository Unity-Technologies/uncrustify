Line [Token]             Text
1    [COMMENT_CPP]       // incorrect
1    [NEWLINE]           
3    [TYPEDEF]           typedef
3    [DC_MEMBER]         ::
3    [TYPE]              GlobalType
3    [TYPE]              GlobalType
3    [SEMICOLON]         ;
3    [NEWLINE]           
5    [COMMENT_CPP]       // Using the sp_before_dc and sp_after_dc options with 'remove' causes the above due to global scope. Need to fix Uncrustify to only do this removal only for CT_WORD and not keywords (or anything else, probably).
5    [NEWLINE]           
7    [COMMENT_CPP]       // Also make sure this is handled right:
7    [NEWLINE]           
9    [COMMENT_CPP]       // correct
9    [NEWLINE]           
11   [TYPE]              void
11   [FUNC_DEF]          foo
11   [FPAREN_OPEN]       (
11   [FPAREN_CLOSE]      )
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [RETURN]            return
13   [PAREN_OPEN]        (
13   [TYPE]              int
13   [PAREN_CLOSE]       )
13   [DC_MEMBER]         ::
13   [FUNC_CALL]         Bar
13   [FPAREN_OPEN]       (
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [COMMENT_CPP]       // ... --> ...
14   [NEWLINE]           
15   [RETURN]            return
15   [PAREN_OPEN]        (
15   [TYPE]              int
15   [PAREN_CLOSE]       )
15   [DC_MEMBER]         ::
15   [FUNC_CALL]         Bar
15   [FPAREN_OPEN]       (
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
18   [COMMENT_CPP]       // Second line removes the space, which we still want in the new setup. (Though really that removal should depend on casting operator spacing but whatev.)
18   [NEWLINE]           
20   [COMMENT_CPP]       // correct
20   [NEWLINE]           
22   [TYPEDEF]           typedef
22   [TYPE]              void
22   [TPAREN_OPEN]       (
22   [TYPE]              Goo
22   [DC_MEMBER]         ::
22   [PTR_TYPE]          *
22   [TYPE]              Boo
22   [TPAREN_CLOSE]      )
22   [FPAREN_OPEN]       (
22   [QUALIFIER]         const
22   [TYPE]              TYPE
22   [BYREF]             &
22   [WORD]              data
22   [COMMA]             ,
22   [TYPE]              ULONG
22   [WORD]              index
22   [COMMA]             ,
22   [TYPE]              LONG
22   [WORD]              minimum
22   [COMMA]             ,
22   [TYPE]              LONG
22   [WORD]              maximum
22   [FPAREN_CLOSE]      )
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [COMMENT_CPP]       // ... --> ...
23   [NEWLINE]           
24   [TYPEDEF]           typedef
24   [TYPE]              void
24   [TPAREN_OPEN]       (
24   [TYPE]              Goo
24   [DC_MEMBER]         ::
24   [PTR_TYPE]          *
24   [TYPE]              Boo
24   [TPAREN_CLOSE]      )
24   [FPAREN_OPEN]       (
24   [QUALIFIER]         const
24   [TYPE]              TYPE
24   [BYREF]             &
24   [WORD]              data
24   [COMMA]             ,
24   [TYPE]              ULONG
24   [WORD]              index
24   [COMMA]             ,
24   [TYPE]              LONG
24   [WORD]              minimum
24   [COMMA]             ,
24   [TYPE]              LONG
24   [WORD]              maximum
24   [FPAREN_CLOSE]      )
24   [SEMICOLON]         ;
24   [NEWLINE]           
26   [COMMENT_CPP]       // incorrect
26   [NEWLINE]           
28   [STRUCT]            struct
28   [TYPE]              ClassImpl
28   [CLASS_COLON]       :
28   [QUALIFIER]         public
28   [DC_MEMBER]         ::
28   [WORD]              Class
28   [BRACE_OPEN]        {
28   [BRACE_CLOSE]       }
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [COMMENT_CPP]       // ... --> ...
29   [NEWLINE]           
30   [STRUCT]            struct
30   [TYPE]              ClassImpl
30   [CLASS_COLON]       :
30   [QUALIFIER]         public
30   [DC_MEMBER]         ::
30   [WORD]              Class
30   [BRACE_OPEN]        {
30   [BRACE_CLOSE]       }
30   [SEMICOLON]         ;
30   [NEWLINE]           
32   [COMMENT_CPP]       // incorrect
32   [NEWLINE]           
34   [FRIEND]            friend
34   [CLASS]             class
34   [DC_MEMBER]         ::
34   [TYPE]              Clasz
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [COMMENT_CPP]       // ... --> ...
35   [NEWLINE]           
36   [FRIEND]            friend
36   [CLASS]             class
36   [DC_MEMBER]         ::
36   [TYPE]              Clasz
36   [SEMICOLON]         ;
36   [NEWLINE]           
38   [COMMENT_CPP]       // correct
38   [NEWLINE]           
40   [TYPE]              void
40   [FUNC_DEF]          bar
40   [FPAREN_OPEN]       (
40   [FPAREN_CLOSE]      )
40   [NEWLINE]           
41   [BRACE_OPEN]        {
41   [NEWLINE]           
42   [TYPE]              vector
42   [ANGLE_OPEN]        <
42   [TYPE]              Texture2D
42   [PTR_TYPE]          *
42   [ANGLE_CLOSE]       >
42   [DC_MEMBER]         ::
42   [TYPE]              iterator
42   [WORD]              found
42   [ASSIGN]            =
42   [FUNC_CALL]         find
42   [FPAREN_OPEN]       (
42   [WORD]              uniqueTextures
42   [MEMBER]            .
42   [FUNC_CALL]         begin
42   [FPAREN_OPEN]       (
42   [FPAREN_CLOSE]      )
42   [COMMA]             ,
42   [WORD]              uniqueTextures
42   [MEMBER]            .
42   [FUNC_CALL]         end
42   [FPAREN_OPEN]       (
42   [FPAREN_CLOSE]      )
42   [COMMA]             ,
42   [WORD]              textures
42   [SQUARE_OPEN]       [
42   [WORD]              i
42   [SQUARE_CLOSE]      ]
42   [FPAREN_CLOSE]      )
42   [SEMICOLON]         ;
42   [NEWLINE]           
43   [COMMENT_CPP]       // ... --> ...
43   [NEWLINE]           
44   [TYPE]              vector
44   [ANGLE_OPEN]        <
44   [TYPE]              Texture2D
44   [PTR_TYPE]          *
44   [ANGLE_CLOSE]       >
44   [DC_MEMBER]         ::
44   [TYPE]              iterator
44   [WORD]              found
44   [ASSIGN]            =
44   [FUNC_CALL]         find
44   [FPAREN_OPEN]       (
44   [WORD]              uniqueTextures
44   [MEMBER]            .
44   [FUNC_CALL]         begin
44   [FPAREN_OPEN]       (
44   [FPAREN_CLOSE]      )
44   [COMMA]             ,
44   [WORD]              uniqueTextures
44   [MEMBER]            .
44   [FUNC_CALL]         end
44   [FPAREN_OPEN]       (
44   [FPAREN_CLOSE]      )
44   [COMMA]             ,
44   [WORD]              textures
44   [SQUARE_OPEN]       [
44   [WORD]              i
44   [SQUARE_CLOSE]      ]
44   [FPAREN_CLOSE]      )
44   [SEMICOLON]         ;
44   [NEWLINE]           
45   [BRACE_CLOSE]       }
45   [NEWLINE]           
47   [COMMENT_CPP]       // incorrect
47   [NEWLINE]           
49   [USING]             using
49   [NAMESPACE]         namespace
49   [DC_MEMBER]         ::
49   [WORD]              comp
49   [SEMICOLON]         ;
49   [NEWLINE]           
50   [USING]             using
50   [NAMESPACE]         namespace
50   [DC_MEMBER]         ::
50   [TYPE]              comp
50   [DC_MEMBER]         ::
50   [WORD]              run
50   [SEMICOLON]         ;
50   [NEWLINE]           
51   [COMMENT_CPP]       // ... --> ...
51   [NEWLINE]           
52   [USING]             using
52   [NAMESPACE]         namespace
52   [DC_MEMBER]         ::
52   [WORD]              comp
52   [SEMICOLON]         ;
52   [NEWLINE]           
53   [USING]             using
53   [NAMESPACE]         namespace
53   [DC_MEMBER]         ::
53   [TYPE]              comp
53   [DC_MEMBER]         ::
53   [WORD]              run
53   [SEMICOLON]         ;
53   [NEWLINE]           
55   [COMMENT_CPP]       // incorrect
55   [NEWLINE]           
57   [CLASS]             class
57   [TYPE]              ClassDummy
57   [CLASS_COLON]       :
57   [QUALIFIER]         public
57   [DC_MEMBER]         ::
57   [TYPE]              comp
57   [DC_MEMBER]         ::
57   [TYPE]              run
57   [DC_MEMBER]         ::
57   [WORD]              Class
57   [BRACE_OPEN]        {
57   [BRACE_CLOSE]       }
57   [SEMICOLON]         ;
57   [NEWLINE]           
58   [COMMENT_CPP]       // ... --> ...
58   [NEWLINE]           
59   [CLASS]             class
59   [TYPE]              ClassDummy
59   [CLASS_COLON]       :
59   [QUALIFIER]         public
59   [DC_MEMBER]         ::
59   [TYPE]              comp
59   [DC_MEMBER]         ::
59   [TYPE]              run
59   [DC_MEMBER]         ::
59   [WORD]              Class
59   [BRACE_OPEN]        {
59   [BRACE_CLOSE]       }
59   [SEMICOLON]         ;
59   [NEWLINE]           
61   [COMMENT_CPP]       // Starting to think this may be too hard, because what precedes the :: may be complex. What if it's just a > operator in a comparison expression against a global?
61   [NEWLINE]           