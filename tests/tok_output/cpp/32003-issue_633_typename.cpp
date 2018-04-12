Line [Token]             Text
1    [TEMPLATE]          template
1    [ANGLE_OPEN]        <
1    [TYPENAME]          typename
1    [TYPE]              TImage
1    [ANGLE_CLOSE]       >
1    [NEWLINE]           
2    [CLASS]             class
2    [TYPE]              MorphologicalContourInterpolator
2    [CLASS_COLON]       :
2    [NEWLINE]           
3    [QUALIFIER]         public
3    [WORD]              ImageToImageFilter
3    [ANGLE_OPEN]        <
3    [TYPE]              TImage
3    [COMMA]             ,
3    [TYPE]              TImage
3    [ANGLE_CLOSE]       >
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [TEMPLATE]          template
5    [ANGLE_OPEN]        <
5    [TYPENAME]          typename
5    [TYPE]              T
5    [ANGLE_CLOSE]       >
5    [NEWLINE]           
6    [FRIEND]            friend
6    [CLASS]             class
6    [TYPE]              MorphologicalContourInterpolatorParallelInvoker
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [FRIEND]            friend
7    [CLASS]             class
7    [DC_MEMBER]         ::
7    [TYPE]              MultiLabelMeshPipeline
7    [SEMICOLON]         ;
7    [NEWLINE]           
9    [PRIVATE]           public
9    [PRIVATE_COLON]     :
9    [NEWLINE]           
10   [COMMENT]           /** Standard class typedefs. */
10   [NEWLINE]           
11   [TYPEDEF]           typedef
11   [TYPE]              MorphologicalContourInterpolator
11   [TYPE]              Self
11   [SEMICOLON]         ;
11   [NEWLINE]           
13   [PRIVATE]           protected
13   [PRIVATE_COLON]     :
13   [NEWLINE]           
14   [FUNC_CLASS_PROTO]    MorphologicalContourInterpolator
14   [FPAREN_OPEN]       (
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [DESTRUCTOR]        ~
15   [FUNC_CLASS_DEF]    MorphologicalContourInterpolator
15   [FPAREN_OPEN]       (
15   [FPAREN_CLOSE]      )
15   [BRACE_OPEN]        {
15   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
16   [TYPENAME]          typename
16   [TYPE]              TImage
16   [DC_MEMBER]         ::
16   [TYPE]              PixelType
16   [WORD]              m_Label
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [TYPE]              int
17   [WORD]              m_Axis
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [TYPE]              bool
18   [WORD]              m_HeuristicAlignment
18   [SEMICOLON]         ;
18   [NEWLINE]           
20   [PRIVATE]           private
20   [PRIVATE_COLON]     :
20   [NEWLINE]           
21   [FUNC_CLASS_PROTO]    MorphologicalContourInterpolator
21   [FPAREN_OPEN]       (
21   [QUALIFIER]         const
21   [TYPE]              Self
21   [BYREF]             &
21   [FPAREN_CLOSE]      )
21   [WORD]              ITK_DELETE_FUNCTION
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [TYPE]              void
22   [NEWLINE]           
23   [OPERATOR]          operator
23   [FUNC_PROTO]        =
23   [FPAREN_OPEN]       (
23   [QUALIFIER]         const
23   [TYPE]              Self
23   [BYREF]             &
23   [FPAREN_CLOSE]      )
23   [WORD]              ITK_DELETE_FUNCTION
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [SEMICOLON]         ;
24   [NEWLINE]           