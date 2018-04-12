Line [Token]             Text
1    [PREPROC]           #
1    [PP_DEFINE]         define
1    [MACRO]             RENDER_POINTS_USING_MESH
1    [NEWLINE]           
3    [NAMESPACE]         namespace
3    [WORD]              UnityEditor
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [QUALIFIER]         internal
5    [CLASS]             class
5    [TYPE]              CurveWrapper
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [QUALIFIER]         private
7    [TYPE]              void
7    [FUNC_DEF]          DoIconAndName
7    [FPAREN_OPEN]       (
7    [TYPE]              Rect
7    [WORD]              rect
7    [COMMA]             ,
7    [TYPE]              AnimationWindowHierarchyNode
7    [WORD]              node
7    [COMMA]             ,
7    [TYPE]              bool
7    [WORD]              selected
7    [COMMA]             ,
7    [TYPE]              bool
7    [WORD]              focused
7    [COMMA]             ,
7    [TYPE]              float
7    [WORD]              indent
7    [FPAREN_CLOSE]      )
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [TYPE]              EditorGUIUtility
9    [MEMBER]            .
9    [FUNC_CALL]         SetIconSize
9    [FPAREN_OPEN]       (
9    [NEW]               new
9    [FUNC_CALL]         Vector2
9    [FPAREN_OPEN]       (
9    [NUMBER]            13
9    [COMMA]             ,
9    [NUMBER]            13
9    [FPAREN_CLOSE]      )
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [COMMENT_CPP]       // If not set we see icons scaling down if text is being cropped
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
11   [QUALIFIER]         public
11   [TYPE]              void
11   [FUNC_DEF]          foo
11   [FPAREN_OPEN]       (
11   [FPAREN_CLOSE]      )
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [IF]                if
13   [SPAREN_OPEN]       (
13   [THIS]              this
13   [SPAREN_CLOSE]      )
13   [NEWLINE]           
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [IF]                if
15   [SPAREN_OPEN]       (
15   [WORD]              b
15   [SPAREN_CLOSE]      )
15   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [COMMENT_CPP]       // Now draw
17   [NEWLINE]           
18   [FOR]               for
18   [SPAREN_OPEN]       (
18   [TYPE]              int
18   [WORD]              i
18   [ASSIGN]            =
18   [NUMBER]            0
18   [SEMICOLON]         ;
18   [WORD]              i
18   [COMPARE]           <
18   [WORD]              ticks
18   [MEMBER]            .
18   [WORD]              Length
18   [SEMICOLON]         ;
18   [WORD]              i
18   [INCDEC_AFTER]      ++
18   [SPAREN_CLOSE]      )
18   [NEWLINE]           
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [WORD]              ticksPos
20   [SQUARE_OPEN]       [
20   [WORD]              i
20   [SQUARE_CLOSE]      ]
20   [ASSIGN]            /=
20   [WORD]              axisUiScalars
20   [MEMBER]            .
20   [WORD]              y
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [IF]                if
21   [SPAREN_OPEN]       (
21   [WORD]              ticksPos
21   [SQUARE_OPEN]       [
21   [WORD]              i
21   [SQUARE_CLOSE]      ]
21   [COMPARE]           <
21   [WORD]              vRangeMin
21   [BOOL]              ||
21   [WORD]              ticksPos
21   [SQUARE_OPEN]       [
21   [WORD]              i
21   [SQUARE_CLOSE]      ]
21   [COMPARE]           >
21   [WORD]              vRangeMax
21   [SPAREN_CLOSE]      )
21   [VBRACE_OPEN]       
21   [NEWLINE]           
22   [CONTINUE]          continue
22   [SEMICOLON]         ;
22   [VBRACE_CLOSE]      
22   [NEWLINE]           
24   [TYPE]              Vector2
24   [WORD]              pos
24   [ASSIGN]            =
24   [FUNC_CALL]         DrawingToViewTransformPoint
24   [FPAREN_OPEN]       (
24   [NEW]               new
24   [FUNC_CALL]         Vector2
24   [FPAREN_OPEN]       (
24   [NUMBER]            0
24   [COMMA]             ,
24   [WORD]              ticksPos
24   [SQUARE_OPEN]       [
24   [WORD]              i
24   [SQUARE_CLOSE]      ]
24   [FPAREN_CLOSE]      )
24   [FPAREN_CLOSE]      )
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [COMMENT_CPP]       // Important to take floor of positions of GUI stuff to get pixel correct alignment of
25   [NEWLINE]           
26   [COMMENT_CPP]       // stuff drawn with both GUI and Handles/GL. Otherwise things are off by one pixel half the time.
26   [NEWLINE]           
27   [WORD]              pos
27   [ASSIGN]            =
27   [NEW]               new
27   [FUNC_CALL]         Vector2
27   [FPAREN_OPEN]       (
27   [WORD]              pos
27   [MEMBER]            .
27   [WORD]              x
27   [COMMA]             ,
27   [WORD]              Mathf
27   [MEMBER]            .
27   [FUNC_CALL]         Floor
27   [FPAREN_OPEN]       (
27   [WORD]              pos
27   [MEMBER]            .
27   [WORD]              y
27   [FPAREN_CLOSE]      )
27   [FPAREN_CLOSE]      )
27   [SEMICOLON]         ;
27   [NEWLINE]           
29   [TYPE]              float
29   [WORD]              uiValue
29   [ASSIGN]            =
29   [WORD]              ticks
29   [SQUARE_OPEN]       [
29   [WORD]              i
29   [SQUARE_CLOSE]      ]
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [TYPE]              Rect
30   [WORD]              labelRect
30   [SEMICOLON]         ;
30   [NEWLINE]           
31   [IF]                if
31   [SPAREN_OPEN]       (
31   [WORD]              settings
31   [MEMBER]            .
31   [WORD]              vTickStyle
31   [MEMBER]            .
31   [WORD]              centerLabel
31   [SPAREN_CLOSE]      )
31   [VBRACE_OPEN]       
31   [NEWLINE]           
32   [WORD]              labelRect
32   [ASSIGN]            =
32   [NEW]               new
32   [FUNC_CALL]         Rect
32   [FPAREN_OPEN]       (
32   [NUMBER]            0
32   [COMMA]             ,
32   [WORD]              pos
32   [MEMBER]            .
32   [WORD]              y
32   [ARITH]             -
32   [NUMBER]            8
32   [COMMA]             ,
32   [WORD]              leftmargin
32   [ARITH]             -
32   [NUMBER]            4
32   [COMMA]             ,
32   [NUMBER]            16
32   [FPAREN_CLOSE]      )
32   [SEMICOLON]         ;
32   [VBRACE_CLOSE]      
32   [COMMENT_CPP]       // text expands to the left starting from where grid starts (leftmargin size must ensure text is visible)
32   [NEWLINE]           
33   [ELSE]              else
33   [VBRACE_OPEN]       
33   [NEWLINE]           
34   [WORD]              labelRect
34   [ASSIGN]            =
34   [NEW]               new
34   [FUNC_CALL]         Rect
34   [FPAREN_OPEN]       (
34   [NUMBER]            0
34   [COMMA]             ,
34   [WORD]              pos
34   [MEMBER]            .
34   [WORD]              y
34   [ARITH]             -
34   [NUMBER]            13
34   [COMMA]             ,
34   [WORD]              labelSize
34   [COMMA]             ,
34   [NUMBER]            16
34   [FPAREN_CLOSE]      )
34   [SEMICOLON]         ;
34   [VBRACE_CLOSE]      
34   [COMMENT_CPP]       // text expands to the right starting from left side of window
34   [NEWLINE]           
36   [TYPE]              GUI
36   [MEMBER]            .
36   [FUNC_CALL]         Label
36   [FPAREN_OPEN]       (
36   [WORD]              labelRect
36   [COMMA]             ,
36   [WORD]              uiValue
36   [MEMBER]            .
36   [FUNC_CALL]         ToString
36   [FPAREN_OPEN]       (
36   [WORD]              format
36   [FPAREN_CLOSE]      )
36   [ARITH]             +
36   [WORD]              settings
36   [MEMBER]            .
36   [WORD]              vTickStyle
36   [MEMBER]            .
36   [WORD]              unit
36   [COMMA]             ,
36   [WORD]              ms_Styles
36   [MEMBER]            .
36   [WORD]              labelTickMarksY
36   [FPAREN_CLOSE]      )
36   [SEMICOLON]         ;
36   [NEWLINE]           
37   [BRACE_CLOSE]       }
37   [NEWLINE]           
38   [BRACE_CLOSE]       }
38   [NEWLINE]           
39   [BRACE_CLOSE]       }
39   [NEWLINE]           
40   [COMMENT_CPP]       // Cleanup
40   [NEWLINE]           
41   [TYPE]              GUI
41   [MEMBER]            .
41   [WORD]              color
41   [ASSIGN]            =
41   [WORD]              tempCol
41   [SEMICOLON]         ;
41   [NEWLINE]           
43   [TYPE]              GUI
43   [MEMBER]            .
43   [FUNC_CALL]         EndClip
43   [FPAREN_OPEN]       (
43   [FPAREN_CLOSE]      )
43   [SEMICOLON]         ;
43   [NEWLINE]           
44   [BRACE_CLOSE]       }
44   [NEWLINE]           
45   [BRACE_CLOSE]       }
45   [NEWLINE]           
46   [BRACE_CLOSE]       }
46   [COMMENT_CPP]       // namespace
46   [NEWLINE]           
48   [NAMESPACE]         namespace
48   [WORD]              UnityEditor
48   [NEWLINE]           
49   [BRACE_OPEN]        {
49   [NEWLINE]           
50   [QUALIFIER]         internal
50   [CLASS]             class
50   [TYPE]              TreeView
50   [NEWLINE]           
51   [BRACE_OPEN]        {
51   [NEWLINE]           
52   [QUALIFIER]         public
52   [TYPE]              System
52   [MEMBER]            .
52   [TYPE]              Action
52   [ANGLE_OPEN]        <
52   [TYPE]              int
52   [TSQUARE]           []
52   [ANGLE_CLOSE]       >
52   [CS_PROPERTY]       selectionChangedCallback
52   [BRACE_OPEN]        {
52   [GETSET_EMPTY]      get
52   [SEMICOLON]         ;
52   [GETSET_EMPTY]      set
52   [SEMICOLON]         ;
52   [BRACE_CLOSE]       }
52   [COMMENT_CPP]       // ids
52   [NEWLINE]           
53   [QUALIFIER]         public
53   [TYPE]              System
53   [MEMBER]            .
53   [TYPE]              Action
53   [ANGLE_OPEN]        <
53   [TYPE]              int
53   [ANGLE_CLOSE]       >
53   [CS_PROPERTY]       itemDoubleClickedCallback
53   [BRACE_OPEN]        {
53   [GETSET_EMPTY]      get
53   [SEMICOLON]         ;
53   [GETSET_EMPTY]      set
53   [SEMICOLON]         ;
53   [BRACE_CLOSE]       }
53   [COMMENT_CPP]       // id
53   [NEWLINE]           
54   [QUALIFIER]         public
54   [TYPE]              System
54   [MEMBER]            .
54   [TYPE]              Action
54   [ANGLE_OPEN]        <
54   [TYPE]              int
54   [TSQUARE]           []
54   [COMMA]             ,
54   [TYPE]              bool
54   [ANGLE_CLOSE]       >
54   [CS_PROPERTY]       dragEndedCallback
54   [BRACE_OPEN]        {
54   [GETSET_EMPTY]      get
54   [SEMICOLON]         ;
54   [GETSET_EMPTY]      set
54   [SEMICOLON]         ;
54   [BRACE_CLOSE]       }
54   [COMMENT_CPP]       // dragged ids, if null then drag was not allowed, bool == true if dragging tree view items from own treeview, false if drag was started outside
54   [NEWLINE]           
55   [QUALIFIER]         public
55   [TYPE]              System
55   [MEMBER]            .
55   [TYPE]              Action
55   [ANGLE_OPEN]        <
55   [TYPE]              int
55   [ANGLE_CLOSE]       >
55   [CS_PROPERTY]       contextClickItemCallback
55   [BRACE_OPEN]        {
55   [GETSET_EMPTY]      get
55   [SEMICOLON]         ;
55   [GETSET_EMPTY]      set
55   [SEMICOLON]         ;
55   [BRACE_CLOSE]       }
55   [COMMENT_CPP]       // clicked item id
55   [NEWLINE]           
56   [BRACE_CLOSE]       }
56   [NEWLINE]           
57   [BRACE_CLOSE]       }
57   [NEWLINE]           