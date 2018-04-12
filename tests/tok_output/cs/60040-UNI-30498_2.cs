Line [Token]             Text
1    [CLASS]             class
1    [TYPE]              Foo
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [QUALIFIER]         public
3    [QUALIFIER]         static
3    [TYPE]              IEnumerable
3    [ANGLE_OPEN]        <
3    [TYPE]              NPath
3    [ANGLE_CLOSE]       >
3    [CS_PROPERTY]       RuntimeIncludes
3    [BRACE_OPEN]        {
3    [GETSET_EMPTY]      get
3    [SEMICOLON]         ;
3    [BRACE_CLOSE]       }
3    [NEWLINE]           
4    [ASSIGN]            =
4    [NEW]               new
4    [TSQUARE]           []
4    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [NEW]               new
6    [FUNC_CALL]         NPath
6    [FPAREN_OPEN]       (
6    [STRING]            "Projects/PrecompiledHeaders"
6    [FPAREN_CLOSE]      )
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [SEMICOLON]         ;
7    [NEWLINE]           
9    [TYPE]              void
9    [FUNC_CLASS_DEF]    Foo
9    [FPAREN_OPEN]       (
9    [TYPE]              string
9    [WORD]              file
9    [FPAREN_CLOSE]      )
9    [NEWLINE]           
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [TYPE]              var
11   [WORD]              type
11   [ASSIGN]            =
11   [WORD]              Path
11   [MEMBER]            .
11   [FUNC_CALL]         GetFileNameWithoutExtension
11   [FPAREN_OPEN]       (
11   [WORD]              file
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [SWITCH]            switch
12   [SPAREN_OPEN]       (
12   [WORD]              Path
12   [MEMBER]            .
12   [FUNC_CALL]         GetExtension
12   [FPAREN_OPEN]       (
12   [WORD]              file
12   [FPAREN_CLOSE]      )
12   [SPAREN_CLOSE]      )
12   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
14   [CASE]              case
14   [STRING]            ".cs"
14   [CASE_COLON]        :
14   [NEWLINE]           
15   [WORD]              resource
15   [ASSIGN]            =
15   [NEW]               new
15   [FUNC_CALL]         Bar
15   [FPAREN_OPEN]       (
15   [TYPE]              string
15   [MEMBER]            .
15   [FUNC_CALL]         Format
15   [FPAREN_OPEN]       (
15   [STRING]            "test output"
15   [COMMA]             ,
15   [NEWLINE]           
16   [WORD]              type
16   [FPAREN_CLOSE]      )
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [BREAK]             break
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [CASE]              case
18   [STRING]            ".baz"
18   [CASE_COLON]        :
18   [NEWLINE]           
19   [WORD]              resource
19   [ASSIGN]            =
19   [NEW]               new
19   [FUNC_CALL]         Baz
19   [FPAREN_OPEN]       (
19   [WORD]              type
19   [COMMA]             ,
19   [NEWLINE]           
20   [TYPE]              string
20   [MEMBER]            .
20   [FUNC_CALL]         Format
20   [FPAREN_OPEN]       (
20   [STRING_MULTI]      @"test output␍␤with multiple␍␤lines␍␤"
23   [COMMA]             ,
23   [NEWLINE]           
24   [WORD]              type
24   [FPAREN_CLOSE]      )
24   [FPAREN_CLOSE]      )
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [BREAK]             break
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [BRACE_CLOSE]       }
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
28   [BRACE_CLOSE]       }
28   [NEWLINE]           
30   [QUALIFIER]         public
30   [CLASS]             class
30   [TYPE]              Bar
30   [NEWLINE]           
31   [BRACE_OPEN]        {
31   [NEWLINE]           
32   [QUALIFIER]         private
32   [QUALIFIER]         static
32   [TYPE]              FooBar
32   [CS_PROPERTY]       Baz
32   [BRACE_OPEN]        {
32   [GETSET_EMPTY]      get
32   [SEMICOLON]         ;
32   [BRACE_CLOSE]       }
32   [NEWLINE]           
33   [ASSIGN]            =
33   [NEW]               new
33   [FUNC_CALL]         FooBar
33   [FPAREN_OPEN]       (
33   [FPAREN_CLOSE]      )
33   [NEWLINE]           
34   [MEMBER]            .
34   [FUNC_CALL]         WithPath
34   [FPAREN_OPEN]       (
34   [STRING]            "foo/bar/baz"
34   [FPAREN_CLOSE]      )
34   [NEWLINE]           
35   [MEMBER]            .
35   [FUNC_CALL]         WithSource
35   [FPAREN_OPEN]       (
35   [STRING]            "qux/quux/quuz"
35   [FPAREN_CLOSE]      )
35   [NEWLINE]           
36   [MEMBER]            .
36   [FUNC_CALL]         WithPrebuiltReference
36   [FPAREN_OPEN]       (
36   [WORD]              FooBar
36   [MEMBER]            .
36   [WORD]              Baz
36   [FPAREN_CLOSE]      )
36   [NEWLINE]           
37   [MEMBER]            .
37   [FUNC_CALL]         WithBaz
37   [FPAREN_OPEN]       (
37   [STRING]            "2"
37   [FPAREN_CLOSE]      )
37   [NEWLINE]           
38   [MEMBER]            .
38   [FUNC_CALL]         Complete
38   [FPAREN_OPEN]       (
38   [FPAREN_CLOSE]      )
38   [SEMICOLON]         ;
38   [NEWLINE]           
39   [BRACE_CLOSE]       }
39   [NEWLINE]           