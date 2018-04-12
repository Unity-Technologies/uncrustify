Line [Token]             Text
1    [PREPROC]           #
1    [PP_DEFINE]         define
1    [MACRO]             A
1    [NEG]               -
1    [NUMBER]            3
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_DEFINE]         define
2    [MACRO]             B
2    [NUMBER]            163
2    [NEWLINE]           
3    [PREPROC]           #
3    [PP_DEFINE]         define
3    [MACRO]             C
3    [NUMBER]            2
3    [NEWLINE]           
5    [TYPE]              void
5    [FUNC_DEF]          foo
5    [FPAREN_OPEN]       (
5    [FPAREN_CLOSE]      )
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [QUALIFIER]         const
7    [TYPE]              std
7    [DC_MEMBER]         ::
7    [TYPE]              string
7    [BYREF]             &
7    [WORD]              targetName1
7    [ASSIGN]            =
7    [WORD]              pEntry
7    [MEMBER]            ->
7    [FUNC_CALL]         getTargetName
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [QUALIFIER]         const
8    [TYPE]              Point3d_t
8    [WORD]              currentPosition1
8    [ASSIGN]            =
8    [WORD]              pSatOrbit
8    [MEMBER]            ->
8    [FUNC_CALL]         GetPositionAtTime
8    [FPAREN_OPEN]       (
8    [WORD]              jdNow
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
11   [TYPE]              void
11   [FUNC_DEF]          foo2
11   [FPAREN_OPEN]       (
11   [FPAREN_CLOSE]      )
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [QUALIFIER]         const
13   [TYPE]              std
13   [DC_MEMBER]         ::
13   [TYPE]              string
13   [PTR_TYPE]          *
13   [PTR_TYPE]          *
13   [WORD]              targetName2
13   [ASSIGN]            =
13   [WORD]              pEntry
13   [MEMBER]            ->
13   [FUNC_CALL]         getTargetName
13   [FPAREN_OPEN]       (
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [QUALIFIER]         const
14   [TYPE]              Point3d_t
14   [WORD]              currentPosition2
14   [ASSIGN]            =
14   [WORD]              pSatOrbit
14   [MEMBER]            ->
14   [FUNC_CALL]         GetPositionAtTime
14   [FPAREN_OPEN]       (
14   [WORD]              jdNow
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
17   [TYPE]              void
17   [FUNC_DEF]          foo2
17   [FPAREN_OPEN]       (
17   [FPAREN_CLOSE]      )
17   [NEWLINE]           
18   [BRACE_OPEN]        {
18   [NEWLINE]           
19   [QUALIFIER]         const
19   [TYPE]              std
19   [DC_MEMBER]         ::
19   [TYPE]              string
19   [PTR_TYPE]          *
19   [PTR_TYPE]          *
19   [WORD]              targetName3
19   [ASSIGN]            =
19   [WORD]              pEntry
19   [MEMBER]            ->
19   [FUNC_CALL]         getTargetName
19   [FPAREN_OPEN]       (
19   [FPAREN_CLOSE]      )
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [QUALIFIER]         const
20   [TYPE]              Point3d_t
20   [WORD]              currentPosition3
20   [ASSIGN]            =
20   [WORD]              pSatOrbit
20   [MEMBER]            ->
20   [FUNC_CALL]         GetPositionAtTime
20   [FPAREN_OPEN]       (
20   [WORD]              jdNow
20   [FPAREN_CLOSE]      )
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [NEWLINE]           
23   [TYPEDEF]           typedef
23   [TYPE]              int
23   [TYPE]              MY_INT
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [TYPEDEF]           typedef
24   [TYPE]              int
24   [PTR_TYPE]          *
24   [TYPE]              MY_INTP
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [TYPEDEF]           typedef
25   [TYPE]              int
25   [TPAREN_OPEN]       (
25   [PTR_TYPE]          *
25   [TYPE]              foo_t
25   [TPAREN_CLOSE]      )
25   [FPAREN_OPEN]       (
25   [TYPE]              void
25   [PTR_TYPE]          *
25   [WORD]              bar
25   [FPAREN_CLOSE]      )
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [TYPEDEF]           typedef
26   [TYPE]              int
26   [TPAREN_OPEN]       (
26   [PTR_TYPE]          *
26   [TYPE]              somefunc_t
26   [TPAREN_CLOSE]      )
26   [FPAREN_OPEN]       (
26   [TYPE]              void
26   [PTR_TYPE]          *
26   [WORD]              barstool
26   [FPAREN_CLOSE]      )
26   [SEMICOLON]         ;
26   [NEWLINE]           