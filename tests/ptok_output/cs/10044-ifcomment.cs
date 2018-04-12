Line [Parent]            Text
1    [PP_DEFINE]         #
1    [NONE]              define
1    [NONE]              RENDER_POINTS_USING_MESH
1    [NONE]              
3    [NONE]              namespace
3    [NAMESPACE]         UnityEditor
3    [NONE]              
4    [NAMESPACE]         {
4    [NONE]              
5    [NONE]              internal
5    [NONE]              class
5    [CLASS]             CurveWrapper
5    [NONE]              
6    [CLASS]             {
6    [NONE]              
7    [FUNC_DEF]          private
7    [FUNC_DEF]          void
7    [NONE]              DoIconAndName
7    [FUNC_DEF]          (
7    [NONE]              Rect
7    [NONE]              rect
7    [NONE]              ,
7    [NONE]              AnimationWindowHierarchyNode
7    [NONE]              node
7    [NONE]              ,
7    [NONE]              bool
7    [NONE]              selected
7    [NONE]              ,
7    [NONE]              bool
7    [NONE]              focused
7    [NONE]              ,
7    [NONE]              float
7    [NONE]              indent
7    [FUNC_DEF]          )
7    [NONE]              
8    [FUNC_DEF]          {
8    [NONE]              
9    [NONE]              EditorGUIUtility
9    [NONE]              .
9    [NONE]              SetIconSize
9    [FUNC_CALL]         (
9    [NONE]              new
9    [NONE]              Vector2
9    [FUNC_CALL]         (
9    [NONE]              13
9    [NONE]              ,
9    [NONE]              13
9    [FUNC_CALL]         )
9    [FUNC_CALL]         )
9    [NONE]              ;
9    [COMMENT_END]       // If not set we see icons scaling down if text is being cropped
9    [NONE]              
10   [FUNC_DEF]          }
10   [NONE]              
11   [FUNC_DEF]          public
11   [FUNC_DEF]          void
11   [NONE]              foo
11   [FUNC_DEF]          (
11   [FUNC_DEF]          )
11   [NONE]              
12   [FUNC_DEF]          {
12   [NONE]              
13   [NONE]              if
13   [IF]                (
13   [NONE]              this
13   [IF]                )
13   [NONE]              
14   [IF]                {
14   [NONE]              
15   [NONE]              if
15   [IF]                (
15   [NONE]              b
15   [IF]                )
15   [NONE]              
16   [IF]                {
16   [NONE]              
17   [COMMENT_WHOLE]     // Now draw
17   [NONE]              
18   [NONE]              for
18   [FOR]               (
18   [NONE]              int
18   [NONE]              i
18   [NONE]              =
18   [NONE]              0
18   [FOR]               ;
18   [NONE]              i
18   [NONE]              <
18   [NONE]              ticks
18   [NONE]              .
18   [NONE]              Length
18   [FOR]               ;
18   [NONE]              i
18   [NONE]              ++
18   [FOR]               )
18   [NONE]              
19   [FOR]               {
19   [NONE]              
20   [NONE]              ticksPos
20   [NONE]              [
20   [NONE]              i
20   [NONE]              ]
20   [NONE]              /=
20   [NONE]              axisUiScalars
20   [NONE]              .
20   [NONE]              y
20   [NONE]              ;
20   [NONE]              
21   [NONE]              if
21   [IF]                (
21   [NONE]              ticksPos
21   [NONE]              [
21   [NONE]              i
21   [NONE]              ]
21   [NONE]              <
21   [NONE]              vRangeMin
21   [NONE]              ||
21   [NONE]              ticksPos
21   [NONE]              [
21   [NONE]              i
21   [NONE]              ]
21   [NONE]              >
21   [NONE]              vRangeMax
21   [IF]                )
21   [IF]                
21   [NONE]              
22   [NONE]              continue
22   [NONE]              ;
22   [IF]                
22   [NONE]              
24   [NONE]              Vector2
24   [NONE]              pos
24   [NONE]              =
24   [NONE]              DrawingToViewTransformPoint
24   [FUNC_CALL]         (
24   [NONE]              new
24   [NONE]              Vector2
24   [FUNC_CALL]         (
24   [NONE]              0
24   [NONE]              ,
24   [NONE]              ticksPos
24   [NONE]              [
24   [NONE]              i
24   [NONE]              ]
24   [FUNC_CALL]         )
24   [FUNC_CALL]         )
24   [NONE]              ;
24   [NONE]              
25   [COMMENT_WHOLE]     // Important to take floor of positions of GUI stuff to get pixel correct alignment of
25   [NONE]              
26   [COMMENT_WHOLE]     // stuff drawn with both GUI and Handles/GL. Otherwise things are off by one pixel half the time.
26   [NONE]              
27   [NONE]              pos
27   [NONE]              =
27   [NONE]              new
27   [NONE]              Vector2
27   [FUNC_CALL]         (
27   [NONE]              pos
27   [NONE]              .
27   [NONE]              x
27   [NONE]              ,
27   [NONE]              Mathf
27   [NONE]              .
27   [NONE]              Floor
27   [FUNC_CALL]         (
27   [NONE]              pos
27   [NONE]              .
27   [NONE]              y
27   [FUNC_CALL]         )
27   [FUNC_CALL]         )
27   [NONE]              ;
27   [NONE]              
29   [NONE]              float
29   [NONE]              uiValue
29   [NONE]              =
29   [NONE]              ticks
29   [NONE]              [
29   [NONE]              i
29   [NONE]              ]
29   [NONE]              ;
29   [NONE]              
30   [NONE]              Rect
30   [NONE]              labelRect
30   [NONE]              ;
30   [NONE]              
31   [NONE]              if
31   [IF]                (
31   [NONE]              settings
31   [NONE]              .
31   [NONE]              vTickStyle
31   [NONE]              .
31   [NONE]              centerLabel
31   [IF]                )
31   [IF]                
31   [NONE]              
32   [NONE]              labelRect
32   [NONE]              =
32   [NONE]              new
32   [NONE]              Rect
32   [FUNC_CALL]         (
32   [NONE]              0
32   [NONE]              ,
32   [NONE]              pos
32   [NONE]              .
32   [NONE]              y
32   [NONE]              -
32   [NONE]              8
32   [NONE]              ,
32   [NONE]              leftmargin
32   [NONE]              -
32   [NONE]              4
32   [NONE]              ,
32   [NONE]              16
32   [FUNC_CALL]         )
32   [NONE]              ;
32   [IF]                
32   [COMMENT_END]       // text expands to the left starting from where grid starts (leftmargin size must ensure text is visible)
32   [NONE]              
33   [NONE]              else
33   [ELSE]              
33   [NONE]              
34   [NONE]              labelRect
34   [NONE]              =
34   [NONE]              new
34   [NONE]              Rect
34   [FUNC_CALL]         (
34   [NONE]              0
34   [NONE]              ,
34   [NONE]              pos
34   [NONE]              .
34   [NONE]              y
34   [NONE]              -
34   [NONE]              13
34   [NONE]              ,
34   [NONE]              labelSize
34   [NONE]              ,
34   [NONE]              16
34   [FUNC_CALL]         )
34   [NONE]              ;
34   [ELSE]              
34   [COMMENT_END]       // text expands to the right starting from left side of window
34   [NONE]              
36   [NONE]              GUI
36   [NONE]              .
36   [NONE]              Label
36   [FUNC_CALL]         (
36   [NONE]              labelRect
36   [NONE]              ,
36   [NONE]              uiValue
36   [NONE]              .
36   [NONE]              ToString
36   [FUNC_CALL]         (
36   [NONE]              format
36   [FUNC_CALL]         )
36   [NONE]              +
36   [NONE]              settings
36   [NONE]              .
36   [NONE]              vTickStyle
36   [NONE]              .
36   [NONE]              unit
36   [NONE]              ,
36   [NONE]              ms_Styles
36   [NONE]              .
36   [NONE]              labelTickMarksY
36   [FUNC_CALL]         )
36   [NONE]              ;
36   [NONE]              
37   [FOR]               }
37   [NONE]              
38   [IF]                }
38   [NONE]              
39   [IF]                }
39   [NONE]              
40   [COMMENT_WHOLE]     // Cleanup
40   [NONE]              
41   [NONE]              GUI
41   [NONE]              .
41   [NONE]              color
41   [NONE]              =
41   [NONE]              tempCol
41   [NONE]              ;
41   [NONE]              
43   [NONE]              GUI
43   [NONE]              .
43   [NONE]              EndClip
43   [FUNC_CALL]         (
43   [FUNC_CALL]         )
43   [NONE]              ;
43   [NONE]              
44   [FUNC_DEF]          }
44   [NONE]              
45   [CLASS]             }
45   [NONE]              
46   [NAMESPACE]         }
46   [COMMENT_END]       // namespace
46   [NONE]              
48   [NONE]              namespace
48   [NAMESPACE]         UnityEditor
48   [NONE]              
49   [NAMESPACE]         {
49   [NONE]              
50   [NONE]              internal
50   [NONE]              class
50   [CLASS]             TreeView
50   [NONE]              
51   [CLASS]             {
51   [NONE]              
52   [CS_PROPERTY]       public
52   [CS_PROPERTY]       System
52   [CS_PROPERTY]       .
52   [CS_PROPERTY]       Action
52   [CS_PROPERTY]       <
52   [NONE]              int
52   [NONE]              []
52   [CS_PROPERTY]       >
52   [NONE]              selectionChangedCallback
52   [CS_PROPERTY]       {
52   [NONE]              get
52   [GETSET]            ;
52   [NONE]              set
52   [GETSET]            ;
52   [CS_PROPERTY]       }
52   [COMMENT_END]       // ids
52   [NONE]              
53   [CS_PROPERTY]       public
53   [CS_PROPERTY]       System
53   [CS_PROPERTY]       .
53   [CS_PROPERTY]       Action
53   [CS_PROPERTY]       <
53   [NONE]              int
53   [CS_PROPERTY]       >
53   [NONE]              itemDoubleClickedCallback
53   [CS_PROPERTY]       {
53   [NONE]              get
53   [GETSET]            ;
53   [NONE]              set
53   [GETSET]            ;
53   [CS_PROPERTY]       }
53   [COMMENT_END]       // id
53   [NONE]              
54   [CS_PROPERTY]       public
54   [CS_PROPERTY]       System
54   [CS_PROPERTY]       .
54   [CS_PROPERTY]       Action
54   [CS_PROPERTY]       <
54   [NONE]              int
54   [NONE]              []
54   [NONE]              ,
54   [NONE]              bool
54   [CS_PROPERTY]       >
54   [NONE]              dragEndedCallback
54   [CS_PROPERTY]       {
54   [NONE]              get
54   [GETSET]            ;
54   [NONE]              set
54   [GETSET]            ;
54   [CS_PROPERTY]       }
54   [COMMENT_END]       // dragged ids, if null then drag was not allowed, bool == true if dragging tree view items from own treeview, false if drag was started outside
54   [NONE]              
55   [CS_PROPERTY]       public
55   [CS_PROPERTY]       System
55   [CS_PROPERTY]       .
55   [CS_PROPERTY]       Action
55   [CS_PROPERTY]       <
55   [NONE]              int
55   [CS_PROPERTY]       >
55   [NONE]              contextClickItemCallback
55   [CS_PROPERTY]       {
55   [NONE]              get
55   [GETSET]            ;
55   [NONE]              set
55   [GETSET]            ;
55   [CS_PROPERTY]       }
55   [COMMENT_END]       // clicked item id
55   [NONE]              
56   [CLASS]             }
56   [NONE]              
57   [NAMESPACE]         }
57   [NONE]              