Line [Parent]            Text
1    [NONE]              template
1    [TEMPLATE]          <
1    [NONE]              typename
1    [NONE]              TImage
1    [TEMPLATE]          >
1    [NONE]              
2    [TEMPLATE]          class
2    [CLASS]             MorphologicalContourInterpolator
2    [NONE]              :
2    [NONE]              
3    [NONE]              public
3    [NONE]              ImageToImageFilter
3    [TEMPLATE]          <
3    [NONE]              TImage
3    [NONE]              ,
3    [NONE]              TImage
3    [TEMPLATE]          >
3    [NONE]              
4    [CLASS]             {
4    [NONE]              
5    [NONE]              template
5    [TEMPLATE]          <
5    [NONE]              typename
5    [NONE]              T
5    [TEMPLATE]          >
5    [NONE]              
6    [NONE]              friend
6    [NONE]              class
6    [CLASS]             MorphologicalContourInterpolatorParallelInvoker
6    [NONE]              ;
6    [NONE]              
7    [NONE]              friend
7    [NONE]              class
7    [NONE]              ::
7    [CLASS]             MultiLabelMeshPipeline
7    [NONE]              ;
7    [NONE]              
9    [NONE]              public
9    [NONE]              :
9    [NONE]              
10   [COMMENT_WHOLE]     /** Standard class typedefs. */
10   [NONE]              
11   [NONE]              typedef
11   [NONE]              MorphologicalContourInterpolator
11   [NONE]              Self
11   [TYPEDEF]           ;
11   [NONE]              
13   [NONE]              protected
13   [NONE]              :
13   [NONE]              
14   [NONE]              MorphologicalContourInterpolator
14   [FUNC_CLASS_PROTO]    (
14   [FUNC_CLASS_PROTO]    )
14   [FUNC_CLASS_PROTO]    ;
14   [NONE]              
15   [NONE]              ~
15   [DESTRUCTOR]        MorphologicalContourInterpolator
15   [FUNC_CLASS_DEF]    (
15   [FUNC_CLASS_DEF]    )
15   [FUNC_CLASS_DEF]    {
15   [NONE]              
15   [FUNC_CLASS_DEF]    }
15   [NONE]              
16   [NONE]              typename
16   [NONE]              TImage
16   [NONE]              ::
16   [NONE]              PixelType
16   [NONE]              m_Label
16   [NONE]              ;
16   [NONE]              
17   [NONE]              int
17   [NONE]              m_Axis
17   [NONE]              ;
17   [NONE]              
18   [NONE]              bool
18   [NONE]              m_HeuristicAlignment
18   [NONE]              ;
18   [NONE]              
20   [NONE]              private
20   [NONE]              :
20   [NONE]              
21   [NONE]              MorphologicalContourInterpolator
21   [FUNC_CLASS_PROTO]    (
21   [NONE]              const
21   [NONE]              Self
21   [NONE]              &
21   [FUNC_CLASS_PROTO]    )
21   [NONE]              ITK_DELETE_FUNCTION
21   [FUNC_CLASS_PROTO]    ;
21   [NONE]              
22   [FUNC_PROTO]        void
22   [NONE]              
23   [FUNC_PROTO]        operator
23   [OPERATOR]          =
23   [FUNC_PROTO]        (
23   [NONE]              const
23   [NONE]              Self
23   [NONE]              &
23   [FUNC_PROTO]        )
23   [NONE]              ITK_DELETE_FUNCTION
23   [FUNC_PROTO]        ;
23   [NONE]              
24   [CLASS]             }
24   [CLASS]             ;
24   [NONE]              