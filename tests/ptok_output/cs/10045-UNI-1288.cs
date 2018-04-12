Line [Parent]            Text
1    [NONE]              public
1    [NONE]              class
1    [CLASS]             Class
1    [NONE]              
2    [CLASS]             {
2    [NONE]              
3    [FUNC_DEF]          public
3    [FUNC_DEF]          Foo
3    [NONE]              GetFoo
3    [FUNC_DEF]          (
3    [FUNC_DEF]          )
3    [NONE]              
4    [FUNC_DEF]          {
4    [NONE]              
5    [NONE]              return
5    [NONE]              new
5    [NONE]              Foo
5    [NONE]              
6    [CS_PROPERTY]       {
6    [NONE]              
7    [NONE]              enabled
7    [NONE]              =
7    [NONE]              false
7    [NONE]              ,
7    [NONE]              
8    [CS_PROPERTY]       }
8    [NONE]              ;
8    [NONE]              
9    [FUNC_DEF]          }
9    [NONE]              
11   [FUNC_DEF]          public
11   [FUNC_DEF]          override
11   [FUNC_DEF]          Bar
11   [NONE]              GetBar
11   [FUNC_DEF]          (
11   [FUNC_DEF]          )
11   [NONE]              
12   [FUNC_DEF]          {
12   [NONE]              
13   [NONE]              return
13   [NONE]              new
13   [NONE]              Bar
13   [FUNC_CALL]         (
13   [FUNC_CALL]         )
13   [NONE]              
14   [FUNC_CALL]         {
14   [NONE]              
15   [NONE]              m_Name
15   [NONE]              =
15   [NONE]              TestPropertyName
15   [NONE]              
16   [FUNC_CALL]         }
16   [NONE]              ;
16   [NONE]              
17   [NONE]              return
17   [NONE]              new
17   [NONE]              
18   [NONE]              AA
18   [FUNC_CALL]         (
18   [FUNC_CALL]         )
18   [NONE]              ;
18   [NONE]              
19   [NONE]              return
19   [NONE]              new
19   [NONE]              AA
19   [CS_PROPERTY]       <
19   [NONE]              Type
19   [CS_PROPERTY]       >
19   [NONE]              
20   [CS_PROPERTY]       {
20   [NONE]              
22   [CS_PROPERTY]       }
22   [NONE]              ;
22   [NONE]              
23   [FUNC_DEF]          }
23   [NONE]              
25   [COMMENT_WHOLE]     //It appears uncrustify is adding double-indentation no matter what, to the initializer block.
25   [NONE]              
26   [COMMENT_WHOLE]     // Both of the above examples start out at a different level of indentation, and both get double-indented past original.
26   [NONE]              
27   [CLASS]             }
27   [NONE]              
29   [COMMENT_WHOLE]     // The following code consolidates examples from the topic.
29   [NONE]              
30   [NONE]              class
30   [CLASS]             ObjInitializers
30   [NONE]              
31   [CLASS]             {
31   [NONE]              
32   [NONE]              class
32   [CLASS]             Cat
32   [NONE]              
33   [CLASS]             {
33   [NONE]              
34   [COMMENT_WHOLE]     // Auto-implemented properties.
34   [NONE]              
35   [CS_PROPERTY]       public
35   [CS_PROPERTY]       int
35   [NONE]              Age
35   [CS_PROPERTY]       {
35   [NONE]              get
35   [GETSET]            ;
35   [NONE]              set
35   [GETSET]            ;
35   [CS_PROPERTY]       }
35   [NONE]              
36   [CS_PROPERTY]       public
36   [CS_PROPERTY]       string
36   [NONE]              Name
36   [CS_PROPERTY]       {
36   [NONE]              get
36   [GETSET]            ;
36   [NONE]              set
36   [GETSET]            ;
36   [CS_PROPERTY]       }
36   [NONE]              
37   [CLASS]             }
37   [NONE]              
39   [FUNC_DEF]          static
39   [FUNC_DEF]          void
39   [NONE]              Main
39   [FUNC_DEF]          (
39   [FUNC_DEF]          )
39   [NONE]              
40   [FUNC_DEF]          {
40   [NONE]              
41   [NONE]              Cat
41   [NONE]              cat
41   [NONE]              =
41   [NONE]              new
41   [NONE]              Cat
41   [CS_PROPERTY]       {
41   [NONE]              Age
41   [NONE]              =
41   [NONE]              10
41   [NONE]              ,
41   [NONE]              Name
41   [NONE]              =
41   [NONE]              "Fluffy"
41   [CS_PROPERTY]       }
41   [NONE]              ;
41   [NONE]              
43   [NONE]              List
43   [TEMPLATE]          <
43   [NONE]              Cat
43   [TEMPLATE]          >
43   [NONE]              cats
43   [NONE]              =
43   [NONE]              new
43   [NONE]              List
43   [CS_PROPERTY]       <
43   [NONE]              Cat
43   [CS_PROPERTY]       >
43   [NONE]              
44   [CS_PROPERTY]       {
44   [NONE]              
45   [NONE]              new
45   [NONE]              Cat
45   [FUNC_CALL]         (
45   [FUNC_CALL]         )
45   [FUNC_CALL]         {
45   [NONE]              Name
45   [NONE]              =
45   [NONE]              "Sylvester"
45   [NONE]              ,
45   [NONE]              Age
45   [NONE]              =
45   [NONE]              8
45   [FUNC_CALL]         }
45   [NONE]              ,
45   [NONE]              
46   [NONE]              new
46   [NONE]              Cat
46   [FUNC_CALL]         (
46   [FUNC_CALL]         )
46   [FUNC_CALL]         {
46   [NONE]              Name
46   [NONE]              =
46   [NONE]              "Whiskers"
46   [NONE]              ,
46   [NONE]              Age
46   [NONE]              =
46   [NONE]              2
46   [FUNC_CALL]         }
46   [NONE]              ,
46   [NONE]              
47   [NONE]              new
47   [NONE]              Cat
47   [FUNC_CALL]         (
47   [FUNC_CALL]         )
47   [FUNC_CALL]         {
47   [NONE]              Name
47   [NONE]              =
47   [NONE]              "Sasha"
47   [NONE]              ,
47   [NONE]              Age
47   [NONE]              =
47   [NONE]              14
47   [FUNC_CALL]         }
47   [NONE]              
48   [CS_PROPERTY]       }
48   [NONE]              ;
48   [NONE]              
50   [NONE]              List
50   [TEMPLATE]          <
50   [NONE]              Cat
50   [TEMPLATE]          >
50   [NONE]              moreCats
50   [NONE]              =
50   [NONE]              new
50   [NONE]              List
50   [CS_PROPERTY]       <
50   [NONE]              Cat
50   [CS_PROPERTY]       >
50   [NONE]              
51   [CS_PROPERTY]       {
51   [NONE]              
52   [NONE]              new
52   [NONE]              Cat
52   [FUNC_CALL]         (
52   [FUNC_CALL]         )
52   [FUNC_CALL]         {
52   [NONE]              Name
52   [NONE]              =
52   [NONE]              "Furrytail"
52   [NONE]              ,
52   [NONE]              Age
52   [NONE]              =
52   [NONE]              5
52   [FUNC_CALL]         }
52   [NONE]              ,
52   [NONE]              
53   [NONE]              new
53   [NONE]              Cat
53   [FUNC_CALL]         (
53   [FUNC_CALL]         )
53   [FUNC_CALL]         {
53   [NONE]              Name
53   [NONE]              =
53   [NONE]              "Peaches"
53   [NONE]              ,
53   [NONE]              Age
53   [NONE]              =
53   [NONE]              4
53   [FUNC_CALL]         }
53   [NONE]              ,
53   [NONE]              
54   [NONE]              null
54   [NONE]              
55   [CS_PROPERTY]       }
55   [NONE]              ;
55   [NONE]              
57   [COMMENT_WHOLE]     // Display results.
57   [NONE]              
58   [NONE]              System
58   [NONE]              .
58   [NONE]              Console
58   [NONE]              .
58   [NONE]              WriteLine
58   [FUNC_CALL]         (
58   [NONE]              cat
58   [NONE]              .
58   [NONE]              Name
58   [FUNC_CALL]         )
58   [NONE]              ;
58   [NONE]              
60   [NONE]              foreach
60   [FOR]               (
60   [NONE]              Cat
60   [NONE]              c
60   [NONE]              in
60   [NONE]              cats
60   [FOR]               )
60   [FOR]               
60   [NONE]              
61   [NONE]              System
61   [NONE]              .
61   [NONE]              Console
61   [NONE]              .
61   [NONE]              WriteLine
61   [FUNC_CALL]         (
61   [NONE]              c
61   [NONE]              .
61   [NONE]              Name
61   [FUNC_CALL]         )
61   [NONE]              ;
61   [FOR]               
61   [NONE]              
63   [NONE]              foreach
63   [FOR]               (
63   [NONE]              Cat
63   [NONE]              c
63   [NONE]              in
63   [NONE]              moreCats
63   [FOR]               )
63   [FOR]               
63   [NONE]              
64   [NONE]              if
64   [IF]                (
64   [NONE]              c
64   [NONE]              !=
64   [NONE]              null
64   [IF]                )
64   [IF]                
64   [NONE]              
65   [NONE]              System
65   [NONE]              .
65   [NONE]              Console
65   [NONE]              .
65   [NONE]              WriteLine
65   [FUNC_CALL]         (
65   [NONE]              c
65   [NONE]              .
65   [NONE]              Name
65   [FUNC_CALL]         )
65   [NONE]              ;
65   [IF]                
65   [NONE]              
66   [NONE]              else
66   [ELSE]              
66   [NONE]              
67   [NONE]              System
67   [NONE]              .
67   [NONE]              Console
67   [NONE]              .
67   [NONE]              WriteLine
67   [FUNC_CALL]         (
67   [NONE]              "List element has null value."
67   [FUNC_CALL]         )
67   [NONE]              ;
67   [ELSE]              
67   [FOR]               
67   [NONE]              
68   [FUNC_DEF]          }
68   [NONE]              
69   [COMMENT_WHOLE]     // Output:
69   [NONE]              
70   [COMMENT_WHOLE]     //Fluffy
70   [NONE]              
71   [COMMENT_WHOLE]     //Sylvester
71   [NONE]              
72   [COMMENT_WHOLE]     //Whiskers
72   [NONE]              
73   [COMMENT_WHOLE]     //Sasha
73   [NONE]              
74   [COMMENT_WHOLE]     //Furrytail
74   [NONE]              
75   [COMMENT_WHOLE]     //Peaches
75   [NONE]              
76   [COMMENT_WHOLE]     //List element has null value.
76   [NONE]              
77   [CLASS]             }
77   [NONE]              