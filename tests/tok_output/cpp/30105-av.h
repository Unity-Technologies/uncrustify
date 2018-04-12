Line [Token]             Text
1    [COMMENT_MULTI]     /*␤2) There seems to be a problem handling .h-files compared to .cpp-files.␤The following problem only occurs in header-files, in source-files the␤output is as desired.␤*/
5    [NEWLINE]           
7    [QUALIFIER]         static
7    [QUALIFIER]         inline
7    [TYPE]              void
7    [FUNC_DEF]          foo
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [COMMENT_CPP]       //BEFORE:
9    [NEWLINE]           
10   [IF]                if
10   [SPAREN_OPEN]       (
10   [WORD]              cond
10   [SPAREN_CLOSE]      )
10   [BRACE_OPEN]        {
10   [NEWLINE]           
10   [FUNC_CALL]         callFunc
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
11   [COMMENT_CPP]       // DESIRED:
11   [NEWLINE]           
12   [IF]                if
12   [SPAREN_OPEN]       (
12   [WORD]              cond
12   [SPAREN_CLOSE]      )
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [FUNC_CALL]         callFunc
13   [FPAREN_OPEN]       (
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [NEWLINE]           
15   [COMMENT_CPP]       // AFTER:
15   [NEWLINE]           
16   [IF]                if
16   [SPAREN_OPEN]       (
16   [WORD]              cond
16   [SPAREN_CLOSE]      )
16   [BRACE_OPEN]        {
16   [NEWLINE]           
16   [FUNC_CALL]         callFunc
16   [FPAREN_OPEN]       (
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
19   [COMMENT_MULTI]     /*␤3) The spacing around pointer stars is not always maintained as desired.␤*/
21   [NEWLINE]           
22   [COMMENT_CPP]       //BEFORE:
22   [NEWLINE]           
23   [TYPE]              Buffer
23   [ANGLE_OPEN]        <
23   [TYPE]              T
23   [ANGLE_CLOSE]       >
23   [PTR_TYPE]          *
23   [WORD]              buffer
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [COMMENT_CPP]       //AFTER:
24   [NEWLINE]           
25   [TYPE]              Buffer
25   [ANGLE_OPEN]        <
25   [TYPE]              T
25   [ANGLE_CLOSE]       >
25   [PTR_TYPE]          *
25   [WORD]              buffer
25   [SEMICOLON]         ;
25   [NEWLINE]           
28   [COMMENT_MULTI]     /*␤4) Inside of casts the types are not formatted as outside.␤*/
30   [NEWLINE]           
31   [COMMENT_CPP]       //BEFORE:
31   [NEWLINE]           
32   [TYPE]              T
32   [PTR_TYPE]          *
32   [WORD]              t
32   [ASSIGN]            =
32   [TYPE_CAST]         dynamic_cast
32   [ANGLE_OPEN]        <
32   [TYPE]              T
32   [PTR_TYPE]          *
32   [ANGLE_CLOSE]       >
32   [PAREN_OPEN]        (
32   [WORD]              obj
32   [PAREN_CLOSE]       )
32   [SEMICOLON]         ;
32   [NEWLINE]           
33   [COMMENT_CPP]       //AFTER:
33   [NEWLINE]           
34   [TYPE]              T
34   [PTR_TYPE]          *
34   [WORD]              t
34   [ASSIGN]            =
34   [TYPE_CAST]         dynamic_cast
34   [ANGLE_OPEN]        <
34   [TYPE]              T
34   [PTR_TYPE]          *
34   [ANGLE_CLOSE]       >
34   [PAREN_OPEN]        (
34   [WORD]              obj
34   [PAREN_CLOSE]       )
34   [SEMICOLON]         ;
34   [NEWLINE]           
36   [COMMENT_MULTI]     /*␤5) Inside some template-stuff the spacing goes weird. Multiple spaces␤are inserted, although the configuration (should) say otherwise.␤*/
39   [NEWLINE]           
40   [COMMENT_CPP]       //BEFORE:
40   [NEWLINE]           
41   [FOR]               for
41   [SPAREN_OPEN]       (
41   [TYPE]              std
41   [DC_MEMBER]         ::
41   [TYPE]              map
41   [ANGLE_OPEN]        <
41   [TYPE]              Key
41   [COMMA]             ,
41   [TYPE]              Value
41   [PTR_TYPE]          *
41   [ANGLE_CLOSE]       >
41   [DC_MEMBER]         ::
41   [TYPE]              iterator
41   [WORD]              it
41   [ASSIGN]            =
41   [WORD]              map
41   [MEMBER]            .
41   [FUNC_CALL]         begin
41   [FPAREN_OPEN]       (
41   [FPAREN_CLOSE]      )
41   [SEMICOLON]         ;
41   [WORD]              it
41   [COMPARE]           !=
41   [WORD]              map
41   [MEMBER]            .
41   [FUNC_CALL]         end
41   [FPAREN_OPEN]       (
41   [FPAREN_CLOSE]      )
41   [SEMICOLON]         ;
41   [WORD]              it
41   [INCDEC_AFTER]      ++
41   [SPAREN_CLOSE]      )
41   [BRACE_OPEN]        {
41   [NEWLINE]           
42   [FUNC_CALL]         bar
42   [FPAREN_OPEN]       (
42   [WORD]              it
42   [FPAREN_CLOSE]      )
42   [SEMICOLON]         ;
42   [NEWLINE]           
43   [BRACE_CLOSE]       }
43   [NEWLINE]           
44   [COMMENT_CPP]       //AFTER:
44   [NEWLINE]           
45   [FOR]               for
45   [SPAREN_OPEN]       (
45   [TYPE]              std
45   [DC_MEMBER]         ::
45   [TYPE]              map
45   [ANGLE_OPEN]        <
45   [TYPE]              Key
45   [COMMA]             ,
45   [TYPE]              Value
45   [PTR_TYPE]          *
45   [ANGLE_CLOSE]       >
45   [DC_MEMBER]         ::
45   [TYPE]              iterator
45   [WORD]              it
45   [ASSIGN]            =
45   [WORD]              map
45   [MEMBER]            .
45   [FUNC_CALL]         begin
45   [FPAREN_OPEN]       (
45   [FPAREN_CLOSE]      )
45   [SEMICOLON]         ;
45   [WORD]              it
45   [COMPARE]           !=
45   [WORD]              map
45   [MEMBER]            .
45   [FUNC_CALL]         end
45   [FPAREN_OPEN]       (
45   [FPAREN_CLOSE]      )
45   [SEMICOLON]         ;
45   [WORD]              it
45   [INCDEC_AFTER]      ++
45   [SPAREN_CLOSE]      )
45   [BRACE_OPEN]        {
45   [NEWLINE]           
46   [FUNC_CALL]         bar
46   [FPAREN_OPEN]       (
46   [WORD]              it
46   [FPAREN_CLOSE]      )
46   [SEMICOLON]         ;
46   [NEWLINE]           
47   [BRACE_CLOSE]       }
47   [NEWLINE]           
48   [BRACE_CLOSE]       }
48   [NEWLINE]           