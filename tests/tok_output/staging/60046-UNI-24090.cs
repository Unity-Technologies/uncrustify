Line [Token]             Text
1    [NEW]               new
1    [FUNC_CALL]         WaveformStreamer
1    [FPAREN_OPEN]       (
1    [WORD]              s_sweepedClip
1    [COMMA]             ,
1    [NUMBER]            0
1    [COMMA]             ,
1    [WORD]              s_sweepedClip
1    [MEMBER]            .
1    [WORD]              length
1    [COMMA]             ,
1    [NUMBER]            1
1    [COMMA]             ,
1    [NEWLINE]           
2    [PAREN_OPEN]        (
2    [WORD]              streamer
2    [COMMA]             ,
2    [WORD]              floats
2    [COMMA]             ,
2    [WORD]              remaining
2    [PAREN_CLOSE]       )
2    [LAMBDA]            =>
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [RETURN]            return
4    [WORD]              false
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [NEWLINE]           
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
8    [USING]             using
8    [WORD]              System
8    [MEMBER]            .
8    [WORD]              Collections
8    [MEMBER]            .
8    [WORD]              Generic
8    [SEMICOLON]         ;
8    [NEWLINE]           
10   [CLASS]             class
10   [TYPE]              C
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [QUALIFIER]         public
12   [TYPE]              void
12   [FUNC_DEF]          S
12   [FPAREN_OPEN]       (
12   [FPAREN_CLOSE]      )
12   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
14   [TYPE]              Action
14   [WORD]              localMethod
14   [ASSIGN]            =
14   [PAREN_OPEN]        (
14   [PAREN_CLOSE]       )
14   [LAMBDA]            =>
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [TYPE]              SomeClass
15   [MEMBER]            .
15   [FUNC_CALL]         OtherMethod
15   [FPAREN_OPEN]       (
15   [NEW]               new
15   [CS_PROPERTY]       Dictionary
15   [ANGLE_OPEN]        <
15   [TYPE]              string
15   [COMMA]             ,
15   [TYPE]              string
15   [ANGLE_CLOSE]       >
15   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [BRACE_OPEN]        {
17   [STRING]            "a"
17   [COMMA]             ,
17   [STRING]            "one"
17   [BRACE_CLOSE]       }
17   [COMMA]             ,
17   [NEWLINE]           
18   [BRACE_OPEN]        {
18   [STRING]            "b"
18   [COMMA]             ,
18   [STRING]            "two"
18   [BRACE_CLOSE]       }
18   [COMMA]             ,
18   [NEWLINE]           
19   [BRACE_OPEN]        {
19   [STRING]            "c"
19   [COMMA]             ,
19   [STRING]            "three"
19   [BRACE_CLOSE]       }
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [FPAREN_CLOSE]      )
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [TYPE]              m_Mixers
22   [MEMBER]            .
22   [FUNC_CALL]         Add
22   [FPAREN_OPEN]       (
22   [NEWLINE]           
23   [NEW]               new
23   [CS_PROPERTY]       WeightInfo
23   [NEWLINE]           
24   [BRACE_OPEN]        {
24   [NEWLINE]           
25   [WORD]              parentMixer
25   [ASSIGN]            =
25   [WORD]              parent
25   [COMMA]             ,
25   [NEWLINE]           
26   [WORD]              mixer
26   [ASSIGN]            =
26   [WORD]              node
26   [COMMA]             ,
26   [NEWLINE]           
27   [WORD]              port
27   [ASSIGN]            =
27   [WORD]              port
27   [COMMA]             ,
27   [NEWLINE]           
28   [WORD]              modulate
28   [ASSIGN]            =
28   [PAREN_OPEN]        (
28   [WORD]              type
28   [COMPARE]           ==
28   [SIZEOF]            typeof
28   [PAREN_OPEN]        (
28   [WORD]              AnimationLayerMixerPlayable
28   [PAREN_CLOSE]       )
28   [PAREN_CLOSE]       )
28   [NEWLINE]           
29   [BRACE_CLOSE]       }
29   [NEWLINE]           
30   [FPAREN_CLOSE]      )
30   [SEMICOLON]         ;
30   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [NEWLINE]           
32   [BRACE_CLOSE]       }
32   [NEWLINE]           
34   [FUNC_CALL]         MergeJSFiles
34   [FPAREN_OPEN]       (
34   [NEW]               new
34   [TYPE]              string
34   [TSQUARE]           []
34   [BRACE_OPEN]        {
34   [NEWLINE]           
35   [FUNC_CALL]         GetDecompressor
35   [FPAREN_OPEN]       (
35   [FPAREN_CLOSE]      )
35   [COMMA]             ,
35   [NEWLINE]           
36   [WORD]              Paths
36   [MEMBER]            .
36   [FUNC_CALL]         Combine
36   [FPAREN_OPEN]       (
36   [WORD]              buildToolsDir
36   [COMMA]             ,
36   [STRING]            "UnityConfig"
36   [FPAREN_CLOSE]      )
36   [COMMA]             ,
36   [NEWLINE]           
37   [WORD]              Paths
37   [MEMBER]            .
37   [FUNC_CALL]         Combine
37   [FPAREN_OPEN]       (
37   [WORD]              args
37   [MEMBER]            .
37   [WORD]              stagingAreaData
37   [COMMA]             ,
37   [WORD]              kOutputFileLoaderFileName
37   [FPAREN_CLOSE]      )
37   [COMMA]             ,
37   [NEWLINE]           
38   [BRACE_CLOSE]       }
38   [COMMA]             ,
38   [WORD]              unityLoader
38   [NEWLINE]           
39   [FPAREN_CLOSE]      )
39   [SEMICOLON]         ;
39   [NEWLINE]           
41   [QUALIFIER]         public
41   [TYPE]              void
41   [FUNC_DEF]          GeneratesCorrectVisualStudioProjectFile
41   [FPAREN_OPEN]       (
41   [FPAREN_CLOSE]      )
41   [NEWLINE]           
42   [BRACE_OPEN]        {
42   [NEWLINE]           
43   [FUNC_CALL]         GenerateProjectsAndCompareWithTemplates
43   [FPAREN_OPEN]       (
43   [NEWLINE]           
44   [WORD]              runInJam
44   [LABEL_COLON]       :
44   [WORD]              InJamCreateTestProject
44   [COMMA]             ,
44   [NEWLINE]           
45   [WORD]              generatedPath
45   [LABEL_COLON]       :
45   [WORD]              TestRoot
45   [MEMBER]            .
45   [FUNC_CALL]         Combine
45   [FPAREN_OPEN]       (
45   [STRING]            "Solution"
45   [FPAREN_CLOSE]      )
45   [COMMA]             ,
45   [NEWLINE]           
46   [WORD]              templatesPath
46   [LABEL_COLON]       :
46   [STRING]            "Tools/Unity.BuildSystem/Unity.BuildSystem.VisualStudio.Tests/Templates"
46   [COMMA]             ,
46   [NEWLINE]           
47   [WORD]              templates
47   [LABEL_COLON]       :
47   [NEW]               new
47   [TSQUARE]           []
47   [BRACE_OPEN]        {
47   [NEWLINE]           
48   [STRING]            "TestProjectGeneration_CApplication.sln"
48   [COMMA]             ,
48   [NEWLINE]           
49   [STRING]            "Projects/TestProjectGeneration_CApplication.vcxproj"
49   [COMMA]             ,
49   [NEWLINE]           
50   [STRING]            "Projects/TestProjectGeneration_CApplication.vcxproj.filters"
50   [NEWLINE]           
51   [BRACE_CLOSE]       }
51   [FPAREN_CLOSE]      )
51   [SEMICOLON]         ;
51   [NEWLINE]           
52   [BRACE_CLOSE]       }
52   [NEWLINE]           
54   [QUALIFIER]         public
54   [TYPE]              void
54   [FUNC_DEF]          GeneratesCorrectVisualStudioProjectFile
54   [FPAREN_OPEN]       (
54   [FPAREN_CLOSE]      )
54   [NEWLINE]           
55   [BRACE_OPEN]        {
55   [NEWLINE]           
56   [FUNC_CALL]         GenerateProjectsAndCompareWithTemplates
56   [FPAREN_OPEN]       (
56   [NEWLINE]           
57   [WORD]              runInJam
57   [LABEL_COLON]       :
57   [WORD]              InJamCreateTestProject
57   [COMMA]             ,
57   [NEWLINE]           
58   [WORD]              generatedPath
58   [LABEL_COLON]       :
58   [WORD]              TestRoot
58   [MEMBER]            .
58   [FUNC_CALL]         Combine
58   [FPAREN_OPEN]       (
58   [STRING]            "Solution"
58   [FPAREN_CLOSE]      )
58   [COMMA]             ,
58   [NEWLINE]           
59   [WORD]              templatesPath
59   [LABEL_COLON]       :
59   [STRING]            "Tools/Unity.BuildSystem/Unity.BuildSystem.VisualStudio.Tests/Templates"
59   [COMMA]             ,
59   [NEWLINE]           
60   [WORD]              templates
60   [LABEL_COLON]       :
60   [NEW]               new
60   [TSQUARE]           []
60   [NEWLINE]           
61   [BRACE_OPEN]        {
61   [NEWLINE]           
62   [STRING]            "TestProjectGeneration_CApplication.sln"
62   [COMMA]             ,
62   [NEWLINE]           
63   [STRING]            "Projects/TestProjectGeneration_CApplication.vcxproj"
63   [COMMA]             ,
63   [NEWLINE]           
64   [STRING]            "Projects/TestProjectGeneration_CApplication.vcxproj.filters"
64   [NEWLINE]           
65   [BRACE_CLOSE]       }
65   [NEWLINE]           
66   [FPAREN_CLOSE]      )
66   [SEMICOLON]         ;
66   [NEWLINE]           
67   [BRACE_CLOSE]       }
67   [NEWLINE]           