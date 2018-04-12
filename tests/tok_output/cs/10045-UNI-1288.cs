Line [Token]             Text
1    [QUALIFIER]         public
1    [CLASS]             class
1    [TYPE]              Class
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [QUALIFIER]         public
3    [TYPE]              Foo
3    [FUNC_DEF]          GetFoo
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [RETURN]            return
5    [NEW]               new
5    [CS_PROPERTY]       Foo
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [WORD]              enabled
7    [ASSIGN]            =
7    [WORD]              false
7    [COMMA]             ,
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
11   [QUALIFIER]         public
11   [QUALIFIER]         override
11   [TYPE]              Bar
11   [FUNC_DEF]          GetBar
11   [FPAREN_OPEN]       (
11   [FPAREN_CLOSE]      )
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [RETURN]            return
13   [NEW]               new
13   [FUNC_CALL]         Bar
13   [FPAREN_OPEN]       (
13   [FPAREN_CLOSE]      )
13   [NEWLINE]           
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [WORD]              m_Name
15   [ASSIGN]            =
15   [WORD]              TestPropertyName
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [RETURN]            return
17   [NEW]               new
17   [NEWLINE]           
18   [FUNC_CALL]         AA
18   [FPAREN_OPEN]       (
18   [FPAREN_CLOSE]      )
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [RETURN]            return
19   [NEW]               new
19   [CS_PROPERTY]       AA
19   [ANGLE_OPEN]        <
19   [TYPE]              Type
19   [ANGLE_CLOSE]       >
19   [NEWLINE]           
20   [BRACE_OPEN]        {
20   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           
25   [COMMENT_CPP]       //It appears uncrustify is adding double-indentation no matter what, to the initializer block.
25   [NEWLINE]           
26   [COMMENT_CPP]       // Both of the above examples start out at a different level of indentation, and both get double-indented past original.
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
29   [COMMENT_CPP]       // The following code consolidates examples from the topic.
29   [NEWLINE]           
30   [CLASS]             class
30   [TYPE]              ObjInitializers
30   [NEWLINE]           
31   [BRACE_OPEN]        {
31   [NEWLINE]           
32   [CLASS]             class
32   [TYPE]              Cat
32   [NEWLINE]           
33   [BRACE_OPEN]        {
33   [NEWLINE]           
34   [COMMENT_CPP]       // Auto-implemented properties.
34   [NEWLINE]           
35   [QUALIFIER]         public
35   [TYPE]              int
35   [CS_PROPERTY]       Age
35   [BRACE_OPEN]        {
35   [GETSET_EMPTY]      get
35   [SEMICOLON]         ;
35   [GETSET_EMPTY]      set
35   [SEMICOLON]         ;
35   [BRACE_CLOSE]       }
35   [NEWLINE]           
36   [QUALIFIER]         public
36   [TYPE]              string
36   [CS_PROPERTY]       Name
36   [BRACE_OPEN]        {
36   [GETSET_EMPTY]      get
36   [SEMICOLON]         ;
36   [GETSET_EMPTY]      set
36   [SEMICOLON]         ;
36   [BRACE_CLOSE]       }
36   [NEWLINE]           
37   [BRACE_CLOSE]       }
37   [NEWLINE]           
39   [QUALIFIER]         static
39   [TYPE]              void
39   [FUNC_DEF]          Main
39   [FPAREN_OPEN]       (
39   [FPAREN_CLOSE]      )
39   [NEWLINE]           
40   [BRACE_OPEN]        {
40   [NEWLINE]           
41   [TYPE]              Cat
41   [WORD]              cat
41   [ASSIGN]            =
41   [NEW]               new
41   [CS_PROPERTY]       Cat
41   [BRACE_OPEN]        {
41   [WORD]              Age
41   [ASSIGN]            =
41   [NUMBER]            10
41   [COMMA]             ,
41   [WORD]              Name
41   [ASSIGN]            =
41   [STRING]            "Fluffy"
41   [BRACE_CLOSE]       }
41   [SEMICOLON]         ;
41   [NEWLINE]           
43   [TYPE]              List
43   [ANGLE_OPEN]        <
43   [TYPE]              Cat
43   [ANGLE_CLOSE]       >
43   [WORD]              cats
43   [ASSIGN]            =
43   [NEW]               new
43   [CS_PROPERTY]       List
43   [ANGLE_OPEN]        <
43   [TYPE]              Cat
43   [ANGLE_CLOSE]       >
43   [NEWLINE]           
44   [BRACE_OPEN]        {
44   [NEWLINE]           
45   [NEW]               new
45   [FUNC_CALL]         Cat
45   [FPAREN_OPEN]       (
45   [FPAREN_CLOSE]      )
45   [BRACE_OPEN]        {
45   [WORD]              Name
45   [ASSIGN]            =
45   [STRING]            "Sylvester"
45   [COMMA]             ,
45   [WORD]              Age
45   [ASSIGN]            =
45   [NUMBER]            8
45   [BRACE_CLOSE]       }
45   [COMMA]             ,
45   [NEWLINE]           
46   [NEW]               new
46   [FUNC_CALL]         Cat
46   [FPAREN_OPEN]       (
46   [FPAREN_CLOSE]      )
46   [BRACE_OPEN]        {
46   [WORD]              Name
46   [ASSIGN]            =
46   [STRING]            "Whiskers"
46   [COMMA]             ,
46   [WORD]              Age
46   [ASSIGN]            =
46   [NUMBER]            2
46   [BRACE_CLOSE]       }
46   [COMMA]             ,
46   [NEWLINE]           
47   [NEW]               new
47   [FUNC_CALL]         Cat
47   [FPAREN_OPEN]       (
47   [FPAREN_CLOSE]      )
47   [BRACE_OPEN]        {
47   [WORD]              Name
47   [ASSIGN]            =
47   [STRING]            "Sasha"
47   [COMMA]             ,
47   [WORD]              Age
47   [ASSIGN]            =
47   [NUMBER]            14
47   [BRACE_CLOSE]       }
47   [NEWLINE]           
48   [BRACE_CLOSE]       }
48   [SEMICOLON]         ;
48   [NEWLINE]           
50   [TYPE]              List
50   [ANGLE_OPEN]        <
50   [TYPE]              Cat
50   [ANGLE_CLOSE]       >
50   [WORD]              moreCats
50   [ASSIGN]            =
50   [NEW]               new
50   [CS_PROPERTY]       List
50   [ANGLE_OPEN]        <
50   [TYPE]              Cat
50   [ANGLE_CLOSE]       >
50   [NEWLINE]           
51   [BRACE_OPEN]        {
51   [NEWLINE]           
52   [NEW]               new
52   [FUNC_CALL]         Cat
52   [FPAREN_OPEN]       (
52   [FPAREN_CLOSE]      )
52   [BRACE_OPEN]        {
52   [WORD]              Name
52   [ASSIGN]            =
52   [STRING]            "Furrytail"
52   [COMMA]             ,
52   [WORD]              Age
52   [ASSIGN]            =
52   [NUMBER]            5
52   [BRACE_CLOSE]       }
52   [COMMA]             ,
52   [NEWLINE]           
53   [NEW]               new
53   [FUNC_CALL]         Cat
53   [FPAREN_OPEN]       (
53   [FPAREN_CLOSE]      )
53   [BRACE_OPEN]        {
53   [WORD]              Name
53   [ASSIGN]            =
53   [STRING]            "Peaches"
53   [COMMA]             ,
53   [WORD]              Age
53   [ASSIGN]            =
53   [NUMBER]            4
53   [BRACE_CLOSE]       }
53   [COMMA]             ,
53   [NEWLINE]           
54   [WORD]              null
54   [NEWLINE]           
55   [BRACE_CLOSE]       }
55   [SEMICOLON]         ;
55   [NEWLINE]           
57   [COMMENT_CPP]       // Display results.
57   [NEWLINE]           
58   [TYPE]              System
58   [MEMBER]            .
58   [TYPE]              Console
58   [MEMBER]            .
58   [FUNC_CALL]         WriteLine
58   [FPAREN_OPEN]       (
58   [WORD]              cat
58   [MEMBER]            .
58   [WORD]              Name
58   [FPAREN_CLOSE]      )
58   [SEMICOLON]         ;
58   [NEWLINE]           
60   [FOR]               foreach
60   [SPAREN_OPEN]       (
60   [TYPE]              Cat
60   [WORD]              c
60   [IN]                in
60   [WORD]              cats
60   [SPAREN_CLOSE]      )
60   [VBRACE_OPEN]       
60   [NEWLINE]           
61   [WORD]              System
61   [MEMBER]            .
61   [WORD]              Console
61   [MEMBER]            .
61   [FUNC_CALL]         WriteLine
61   [FPAREN_OPEN]       (
61   [WORD]              c
61   [MEMBER]            .
61   [WORD]              Name
61   [FPAREN_CLOSE]      )
61   [SEMICOLON]         ;
61   [VBRACE_CLOSE]      
61   [NEWLINE]           
63   [FOR]               foreach
63   [SPAREN_OPEN]       (
63   [TYPE]              Cat
63   [WORD]              c
63   [IN]                in
63   [WORD]              moreCats
63   [SPAREN_CLOSE]      )
63   [VBRACE_OPEN]       
63   [NEWLINE]           
64   [IF]                if
64   [SPAREN_OPEN]       (
64   [WORD]              c
64   [COMPARE]           !=
64   [WORD]              null
64   [SPAREN_CLOSE]      )
64   [VBRACE_OPEN]       
64   [NEWLINE]           
65   [WORD]              System
65   [MEMBER]            .
65   [WORD]              Console
65   [MEMBER]            .
65   [FUNC_CALL]         WriteLine
65   [FPAREN_OPEN]       (
65   [WORD]              c
65   [MEMBER]            .
65   [WORD]              Name
65   [FPAREN_CLOSE]      )
65   [SEMICOLON]         ;
65   [VBRACE_CLOSE]      
65   [NEWLINE]           
66   [ELSE]              else
66   [VBRACE_OPEN]       
66   [NEWLINE]           
67   [TYPE]              System
67   [MEMBER]            .
67   [TYPE]              Console
67   [MEMBER]            .
67   [FUNC_CALL]         WriteLine
67   [FPAREN_OPEN]       (
67   [STRING]            "List element has null value."
67   [FPAREN_CLOSE]      )
67   [SEMICOLON]         ;
67   [VBRACE_CLOSE]      
67   [VBRACE_CLOSE]      
67   [NEWLINE]           
68   [BRACE_CLOSE]       }
68   [NEWLINE]           
69   [COMMENT_CPP]       // Output:
69   [NEWLINE]           
70   [COMMENT_CPP]       //Fluffy
70   [NEWLINE]           
71   [COMMENT_CPP]       //Sylvester
71   [NEWLINE]           
72   [COMMENT_CPP]       //Whiskers
72   [NEWLINE]           
73   [COMMENT_CPP]       //Sasha
73   [NEWLINE]           
74   [COMMENT_CPP]       //Furrytail
74   [NEWLINE]           
75   [COMMENT_CPP]       //Peaches
75   [NEWLINE]           
76   [COMMENT_CPP]       //List element has null value.
76   [NEWLINE]           
77   [BRACE_CLOSE]       }
77   [NEWLINE]           