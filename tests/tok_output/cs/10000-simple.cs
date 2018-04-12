Line [Token]             Text
1    [CLASS]             class
1    [TYPE]              X
1    [CLASS_COLON]       :
1    [WORD]              Y
1    [BRACE_OPEN]        {
1    [NEWLINE]           
2    [TYPE]              bool
2    [FUNC_DEF]          Method
2    [FPAREN_OPEN]       (
2    [TYPE]              int
2    [WORD]              argument_1
2    [COMMA]             ,
2    [TYPE]              int
2    [WORD]              argument_2
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [PREPROC]           #
4    [PP_REGION]         region
4    [PREPROC_BODY]      something
4    [NEWLINE]           
5    [TYPE]              int
5    [WORD]              foo
5    [ASSIGN]            =
5    [NUMBER]            0
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [PREPROC]           #
6    [PP_ENDREGION]      endregion
6    [NEWLINE]           
8    [IF]                if
8    [SPAREN_OPEN]       (
8    [WORD]              argument_1
8    [COMPARE]           ==
8    [WORD]              argument_2
8    [SPAREN_CLOSE]      )
8    [VBRACE_OPEN]       
8    [NEWLINE]           
9    [THROW]             throw
9    [NEW]               new
9    [FUNC_CALL]         Exception
9    [FPAREN_OPEN]       (
9    [WORD]              Locale
9    [MEMBER]            .
9    [FUNC_CALL]         GetText
9    [FPAREN_OPEN]       (
9    [STRING]            "They are equal!"
9    [FPAREN_CLOSE]      )
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [VBRACE_CLOSE]      
9    [NEWLINE]           
11   [IF]                if
11   [SPAREN_OPEN]       (
11   [WORD]              argument_1
11   [COMPARE]           <
11   [WORD]              argument_2
11   [SPAREN_CLOSE]      )
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [IF]                if
12   [SPAREN_OPEN]       (
12   [WORD]              argument_1
12   [ARITH]             *
12   [NUMBER]            3
12   [COMPARE]           >
12   [NUMBER]            4
12   [SPAREN_CLOSE]      )
12   [VBRACE_OPEN]       
12   [NEWLINE]           
13   [RETURN]            return
13   [WORD]              true
13   [SEMICOLON]         ;
13   [VBRACE_CLOSE]      
13   [NEWLINE]           
14   [ELSE]              else
14   [VBRACE_OPEN]       
14   [NEWLINE]           
15   [RETURN]            return
15   [WORD]              false
15   [SEMICOLON]         ;
15   [VBRACE_CLOSE]      
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
18   [COMMENT_CPP]       //
18   [NEWLINE]           
19   [COMMENT_CPP]       // This sample helps keep your sanity while using 8-spaces for tabs
19   [NEWLINE]           
20   [COMMENT_CPP]       //
20   [NEWLINE]           
21   [FUNC_CALL]         VeryLongIdentifierWhichTakesManyArguments
21   [FPAREN_OPEN]       (
21   [NEWLINE]           
22   [WORD]              Argument1
22   [COMMA]             ,
22   [NEWLINE]           
23   [WORD]              Argument2
23   [COMMA]             ,
23   [WORD]              Argument3
23   [COMMA]             ,
23   [NEWLINE]           
24   [FUNC_CALL]         NestedCallHere
24   [FPAREN_OPEN]       (
24   [NEWLINE]           
25   [WORD]              MoreNested
25   [FPAREN_CLOSE]      )
25   [FPAREN_CLOSE]      )
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [BRACE_CLOSE]       }
26   [NEWLINE]           
28   [TYPE]              bool
28   [CS_PROPERTY]       MyProperty
28   [BRACE_OPEN]        {
28   [NEWLINE]           
29   [GETSET]            get
29   [BRACE_OPEN]        {
29   [RETURN]            return
29   [WORD]              x
29   [SEMICOLON]         ;
29   [BRACE_CLOSE]       }
29   [NEWLINE]           
31   [GETSET]            set
31   [BRACE_OPEN]        {
31   [WORD]              x
31   [ASSIGN]            =
31   [WORD]              value
31   [SEMICOLON]         ;
31   [BRACE_CLOSE]       }
31   [NEWLINE]           
32   [BRACE_CLOSE]       }
32   [NEWLINE]           
34   [TYPE]              void
34   [FUNC_DEF]          AnotherMethod
34   [FPAREN_OPEN]       (
34   [FPAREN_CLOSE]      )
34   [NEWLINE]           
35   [BRACE_OPEN]        {
35   [NEWLINE]           
36   [TYPE]              Logger
36   [WORD]              log
36   [ASSIGN]            =
36   [NEW]               new
36   [FUNC_CALL]         Logger
36   [FPAREN_OPEN]       (
36   [FPAREN_CLOSE]      )
36   [SEMICOLON]         ;
36   [NEWLINE]           
37   [TYPE]              log
37   [MEMBER]            .
37   [TYPE]              foo
37   [MEMBER]            .
37   [WORD]              bar
37   [ASSIGN]            =
37   [NUMBER]            5
37   [SEMICOLON]         ;
37   [NEWLINE]           
38   [TYPE]              log
38   [MEMBER]            .
38   [TYPE]              narf
38   [MEMBER]            .
38   [WORD]              sweat
38   [ASSIGN]            =
38   [STRING]            "cat"
38   [SEMICOLON]         ;
38   [NEWLINE]           
40   [IF]                if
40   [SPAREN_OPEN]       (
40   [PAREN_OPEN]        (
40   [WORD]              a
40   [ARITH]             +
40   [NUMBER]            5
40   [PAREN_CLOSE]       )
40   [COMPARE]           !=
40   [NUMBER]            4
40   [SPAREN_CLOSE]      )
40   [BRACE_OPEN]        {
40   [NEWLINE]           
41   [BRACE_CLOSE]       }
41   [NEWLINE]           
43   [WHILE]             while
43   [SPAREN_OPEN]       (
43   [WORD]              blah
43   [SPAREN_CLOSE]      )
43   [BRACE_OPEN]        {
43   [NEWLINE]           
44   [IF]                if
44   [SPAREN_OPEN]       (
44   [WORD]              a
44   [SPAREN_CLOSE]      )
44   [VBRACE_OPEN]       
44   [NEWLINE]           
45   [CONTINUE]          continue
45   [SEMICOLON]         ;
45   [VBRACE_CLOSE]      
45   [NEWLINE]           
46   [WORD]              b
46   [INCDEC_AFTER]      ++
46   [SEMICOLON]         ;
46   [NEWLINE]           
47   [BRACE_CLOSE]       }
47   [NEWLINE]           
48   [BRACE_CLOSE]       }
48   [NEWLINE]           
49   [BRACE_CLOSE]       }
49   [NEWLINE]           
51   [TYPE]              object
51   [WORD]              lockA
51   [SEMICOLON]         ;
51   [NEWLINE]           
52   [TYPE]              object
52   [WORD]              lockB
52   [SEMICOLON]         ;
52   [NEWLINE]           
54   [TYPE]              void
54   [FUNC_DEF]          Foo
54   [FPAREN_OPEN]       (
54   [FPAREN_CLOSE]      )
54   [NEWLINE]           
54   [BRACE_OPEN]        {
54   [NEWLINE]           
55   [LOCK]              lock
55   [SPAREN_OPEN]       (
55   [WORD]              lockA
55   [SPAREN_CLOSE]      )
55   [BRACE_OPEN]        {
55   [NEWLINE]           
56   [LOCK]              lock
56   [SPAREN_OPEN]       (
56   [WORD]              lockB
56   [SPAREN_CLOSE]      )
56   [BRACE_OPEN]        {
56   [NEWLINE]           
57   [BRACE_CLOSE]       }
57   [NEWLINE]           
58   [BRACE_CLOSE]       }
58   [NEWLINE]           
59   [BRACE_CLOSE]       }
59   [NEWLINE]           
61   [TYPE]              void
61   [FUNC_DEF]          Bar
61   [FPAREN_OPEN]       (
61   [FPAREN_CLOSE]      )
61   [NEWLINE]           
61   [BRACE_OPEN]        {
61   [NEWLINE]           
62   [LOCK]              lock
62   [SPAREN_OPEN]       (
62   [WORD]              lockB
62   [SPAREN_CLOSE]      )
62   [BRACE_OPEN]        {
62   [NEWLINE]           
63   [LOCK]              lock
63   [SPAREN_OPEN]       (
63   [WORD]              lockA
63   [SPAREN_CLOSE]      )
63   [BRACE_OPEN]        {
63   [NEWLINE]           
64   [BRACE_CLOSE]       }
64   [NEWLINE]           
65   [BRACE_CLOSE]       }
65   [NEWLINE]           
66   [BRACE_CLOSE]       }
66   [NEWLINE]           
69   [COMMENT_CPP]       // class library
69   [NEWLINE]           
70   [CLASS]             class
70   [TYPE]              Blah
70   [BRACE_OPEN]        {
70   [NEWLINE]           
71   [TYPE]              Hashtable
71   [WORD]              ht
71   [SEMICOLON]         ;
71   [NEWLINE]           
72   [TYPE]              void
72   [FUNC_DEF]          Foo
72   [FPAREN_OPEN]       (
72   [TYPE]              int
72   [WORD]              zzz
72   [COMMA]             ,
72   [TYPE]              Entry
72   [WORD]              blah
72   [FPAREN_CLOSE]      )
72   [NEWLINE]           
72   [BRACE_OPEN]        {
72   [NEWLINE]           
73   [LOCK]              lock
73   [SPAREN_OPEN]       (
73   [WORD]              ht
73   [SPAREN_CLOSE]      )
73   [BRACE_OPEN]        {
73   [NEWLINE]           
74   [TYPE]              ht
74   [MEMBER]            .
74   [FUNC_CALL]         Add
74   [FPAREN_OPEN]       (
74   [WORD]              zzz
74   [COMMA]             ,
74   [WORD]              blah
74   [FPAREN_CLOSE]      )
74   [SEMICOLON]         ;
74   [NEWLINE]           
75   [BRACE_CLOSE]       }
75   [NEWLINE]           
76   [BRACE_CLOSE]       }
76   [NEWLINE]           
78   [TYPE]              void
78   [FUNC_DEF]          Bar
78   [FPAREN_OPEN]       (
78   [FPAREN_CLOSE]      )
78   [NEWLINE]           
79   [BRACE_OPEN]        {
79   [NEWLINE]           
80   [LOCK]              lock
80   [SPAREN_OPEN]       (
80   [WORD]              ht
80   [SPAREN_CLOSE]      )
80   [BRACE_OPEN]        {
80   [NEWLINE]           
81   [FOR]               foreach
81   [SPAREN_OPEN]       (
81   [TYPE]              Entry
81   [WORD]              e
81   [IN]                in
81   [WORD]              ht
81   [SPAREN_CLOSE]      )
81   [VBRACE_OPEN]       
81   [NEWLINE]           
82   [FUNC_CALL]         EachBar
82   [FPAREN_OPEN]       (
82   [WORD]              e
82   [FPAREN_CLOSE]      )
82   [SEMICOLON]         ;
82   [VBRACE_CLOSE]      
82   [NEWLINE]           
83   [BRACE_CLOSE]       }
83   [NEWLINE]           
84   [BRACE_CLOSE]       }
84   [NEWLINE]           
86   [QUALIFIER]         virtual
86   [TYPE]              void
86   [FUNC_DEF]          EachBar
86   [FPAREN_OPEN]       (
86   [TYPE]              Entry
86   [WORD]              e
86   [FPAREN_CLOSE]      )
86   [NEWLINE]           
87   [BRACE_OPEN]        {
87   [NEWLINE]           
88   [BRACE_CLOSE]       }
88   [NEWLINE]           
89   [BRACE_CLOSE]       }
89   [NEWLINE]           
91   [COMMENT_CPP]       // User
91   [NEWLINE]           
92   [CLASS]             class
92   [TYPE]              MyBlah
92   [BRACE_OPEN]        {
92   [NEWLINE]           
93   [TYPE]              byte
93   [TSQUARE]           []
93   [WORD]              box
93   [ASSIGN]            =
93   [NEW]               new
93   [TYPE]              byte
93   [SQUARE_OPEN]       [
93   [NUMBER]            6
93   [SQUARE_CLOSE]      ]
93   [SEMICOLON]         ;
93   [NEWLINE]           
95   [WORD]              box
95   [SQUARE_OPEN]       [
95   [NUMBER]            2
95   [SQUARE_CLOSE]      ]
95   [ASSIGN]            =
95   [NUMBER]            56
95   [SEMICOLON]         ;
95   [NEWLINE]           
97   [TYPE]              void
97   [FUNC_DEF]          DoStuff
97   [FPAREN_OPEN]       (
97   [FPAREN_CLOSE]      )
97   [NEWLINE]           
98   [BRACE_OPEN]        {
98   [NEWLINE]           
99   [LOCK]              lock
99   [SPAREN_OPEN]       (
99   [THIS]              this
99   [SPAREN_CLOSE]      )
99   [BRACE_OPEN]        {
99   [NEWLINE]           
100  [TYPE]              int
100  [WORD]              i
100  [ASSIGN]            =
100  [FUNC_CALL]         GetNumber
100  [FPAREN_OPEN]       (
100  [FPAREN_CLOSE]      )
100  [SEMICOLON]         ;
100  [NEWLINE]           
101  [TYPE]              Entry
101  [WORD]              e
101  [ASSIGN]            =
101  [FUNC_CALL]         GetEntry
101  [FPAREN_OPEN]       (
101  [FPAREN_CLOSE]      )
101  [SEMICOLON]         ;
101  [NEWLINE]           
103  [FUNC_CALL]         Foo
103  [FPAREN_OPEN]       (
103  [WORD]              i
103  [COMMA]             ,
103  [WORD]              e
103  [FPAREN_CLOSE]      )
103  [SEMICOLON]         ;
103  [NEWLINE]           
104  [BRACE_CLOSE]       }
104  [NEWLINE]           
105  [BRACE_CLOSE]       }
105  [NEWLINE]           
107  [QUALIFIER]         override
107  [TYPE]              void
107  [FUNC_DEF]          EachBar
107  [FPAREN_OPEN]       (
107  [TYPE]              Entry
107  [WORD]              e
107  [FPAREN_CLOSE]      )
107  [NEWLINE]           
108  [BRACE_OPEN]        {
108  [NEWLINE]           
109  [LOCK]              lock
109  [SPAREN_OPEN]       (
109  [THIS]              this
109  [SPAREN_CLOSE]      )
109  [BRACE_OPEN]        {
109  [NEWLINE]           
110  [FUNC_CALL]         DoSomething
110  [FPAREN_OPEN]       (
110  [WORD]              e
110  [FPAREN_CLOSE]      )
110  [SEMICOLON]         ;
110  [NEWLINE]           
111  [BRACE_CLOSE]       }
111  [NEWLINE]           
112  [BRACE_CLOSE]       }
112  [NEWLINE]           
113  [BRACE_CLOSE]       }
113  [NEWLINE]           