Line [Parent]            Text
1    [NONE]              new
1    [NONE]              WaveformStreamer
1    [FUNC_CALL]         (
1    [NONE]              s_sweepedClip
1    [NONE]              ,
1    [NONE]              0
1    [NONE]              ,
1    [NONE]              s_sweepedClip
1    [NONE]              .
1    [NONE]              length
1    [NONE]              ,
1    [NONE]              1
1    [NONE]              ,
1    [NONE]              
2    [NONE]              (
2    [NONE]              streamer
2    [NONE]              ,
2    [NONE]              floats
2    [NONE]              ,
2    [NONE]              remaining
2    [NONE]              )
2    [NONE]              =>
2    [NONE]              
3    [LAMBDA]            {
3    [NONE]              
4    [NONE]              return
4    [NONE]              false
4    [NONE]              ;
4    [NONE]              
5    [LAMBDA]            }
5    [NONE]              
6    [FUNC_CALL]         )
6    [NONE]              ;
6    [NONE]              
8    [NONE]              using
8    [NONE]              System
8    [NONE]              .
8    [NONE]              Collections
8    [NONE]              .
8    [NONE]              Generic
8    [NONE]              ;
8    [NONE]              
10   [NONE]              class
10   [CLASS]             C
10   [NONE]              
11   [CLASS]             {
11   [NONE]              
12   [FUNC_DEF]          public
12   [FUNC_DEF]          void
12   [NONE]              S
12   [FUNC_DEF]          (
12   [FUNC_DEF]          )
12   [NONE]              
13   [FUNC_DEF]          {
13   [NONE]              
14   [NONE]              Action
14   [NONE]              localMethod
14   [NONE]              =
14   [NONE]              (
14   [NONE]              )
14   [NONE]              =>
14   [LAMBDA]            {
14   [NONE]              
15   [NONE]              SomeClass
15   [NONE]              .
15   [NONE]              OtherMethod
15   [FUNC_CALL]         (
15   [NONE]              new
15   [NONE]              Dictionary
15   [CS_PROPERTY]       <
15   [NONE]              string
15   [NONE]              ,
15   [NONE]              string
15   [CS_PROPERTY]       >
15   [NONE]              
16   [CS_PROPERTY]       {
16   [NONE]              
17   [NONE]              {
17   [NONE]              "a"
17   [NONE]              ,
17   [NONE]              "one"
17   [NONE]              }
17   [NONE]              ,
17   [NONE]              
18   [NONE]              {
18   [NONE]              "b"
18   [NONE]              ,
18   [NONE]              "two"
18   [NONE]              }
18   [NONE]              ,
18   [NONE]              
19   [NONE]              {
19   [NONE]              "c"
19   [NONE]              ,
19   [NONE]              "three"
19   [NONE]              }
19   [NONE]              
20   [CS_PROPERTY]       }
20   [FUNC_CALL]         )
20   [NONE]              ;
20   [NONE]              
21   [LAMBDA]            }
21   [NONE]              ;
21   [NONE]              
22   [NONE]              m_Mixers
22   [NONE]              .
22   [NONE]              Add
22   [FUNC_CALL]         (
22   [NONE]              
23   [NONE]              new
23   [NONE]              WeightInfo
23   [NONE]              
24   [CS_PROPERTY]       {
24   [NONE]              
25   [NONE]              parentMixer
25   [NONE]              =
25   [NONE]              parent
25   [NONE]              ,
25   [NONE]              
26   [NONE]              mixer
26   [NONE]              =
26   [NONE]              node
26   [NONE]              ,
26   [NONE]              
27   [NONE]              port
27   [NONE]              =
27   [NONE]              port
27   [NONE]              ,
27   [NONE]              
28   [NONE]              modulate
28   [NONE]              =
28   [NONE]              (
28   [NONE]              type
28   [NONE]              ==
28   [NONE]              typeof
28   [TYPE_CAST]         (
28   [NONE]              AnimationLayerMixerPlayable
28   [TYPE_CAST]         )
28   [NONE]              )
28   [NONE]              
29   [CS_PROPERTY]       }
29   [NONE]              
30   [FUNC_CALL]         )
30   [NONE]              ;
30   [NONE]              
31   [FUNC_DEF]          }
31   [NONE]              
32   [CLASS]             }
32   [NONE]              
34   [NONE]              MergeJSFiles
34   [FUNC_CALL]         (
34   [NONE]              new
34   [NONE]              string
34   [NONE]              []
34   [NONE]              {
34   [NONE]              
35   [NONE]              GetDecompressor
35   [FUNC_CALL]         (
35   [FUNC_CALL]         )
35   [NONE]              ,
35   [NONE]              
36   [NONE]              Paths
36   [NONE]              .
36   [NONE]              Combine
36   [FUNC_CALL]         (
36   [NONE]              buildToolsDir
36   [NONE]              ,
36   [NONE]              "UnityConfig"
36   [FUNC_CALL]         )
36   [NONE]              ,
36   [NONE]              
37   [NONE]              Paths
37   [NONE]              .
37   [NONE]              Combine
37   [FUNC_CALL]         (
37   [NONE]              args
37   [NONE]              .
37   [NONE]              stagingAreaData
37   [NONE]              ,
37   [NONE]              kOutputFileLoaderFileName
37   [FUNC_CALL]         )
37   [NONE]              ,
37   [NONE]              
38   [NONE]              }
38   [NONE]              ,
38   [NONE]              unityLoader
38   [NONE]              
39   [FUNC_CALL]         )
39   [NONE]              ;
39   [NONE]              
41   [FUNC_DEF]          public
41   [FUNC_DEF]          void
41   [NONE]              GeneratesCorrectVisualStudioProjectFile
41   [FUNC_DEF]          (
41   [FUNC_DEF]          )
41   [NONE]              
42   [FUNC_DEF]          {
42   [NONE]              
43   [NONE]              GenerateProjectsAndCompareWithTemplates
43   [FUNC_CALL]         (
43   [NONE]              
44   [NONE]              runInJam
44   [NONE]              :
44   [NONE]              InJamCreateTestProject
44   [NONE]              ,
44   [NONE]              
45   [NONE]              generatedPath
45   [NONE]              :
45   [NONE]              TestRoot
45   [NONE]              .
45   [NONE]              Combine
45   [FUNC_CALL]         (
45   [NONE]              "Solution"
45   [FUNC_CALL]         )
45   [NONE]              ,
45   [NONE]              
46   [NONE]              templatesPath
46   [NONE]              :
46   [NONE]              "Tools/Unity.BuildSystem/Unity.BuildSystem.VisualStudio.Tests/Templates"
46   [NONE]              ,
46   [NONE]              
47   [NONE]              templates
47   [NONE]              :
47   [NONE]              new
47   [NEW]               []
47   [NEW]               {
47   [NONE]              
48   [NONE]              "TestProjectGeneration_CApplication.sln"
48   [NONE]              ,
48   [NONE]              
49   [NONE]              "Projects/TestProjectGeneration_CApplication.vcxproj"
49   [NONE]              ,
49   [NONE]              
50   [NONE]              "Projects/TestProjectGeneration_CApplication.vcxproj.filters"
50   [NONE]              
51   [NEW]               }
51   [FUNC_CALL]         )
51   [NONE]              ;
51   [NONE]              
52   [FUNC_DEF]          }
52   [NONE]              
54   [FUNC_DEF]          public
54   [FUNC_DEF]          void
54   [NONE]              GeneratesCorrectVisualStudioProjectFile
54   [FUNC_DEF]          (
54   [FUNC_DEF]          )
54   [NONE]              
55   [FUNC_DEF]          {
55   [NONE]              
56   [NONE]              GenerateProjectsAndCompareWithTemplates
56   [FUNC_CALL]         (
56   [NONE]              
57   [NONE]              runInJam
57   [NONE]              :
57   [NONE]              InJamCreateTestProject
57   [NONE]              ,
57   [NONE]              
58   [NONE]              generatedPath
58   [NONE]              :
58   [NONE]              TestRoot
58   [NONE]              .
58   [NONE]              Combine
58   [FUNC_CALL]         (
58   [NONE]              "Solution"
58   [FUNC_CALL]         )
58   [NONE]              ,
58   [NONE]              
59   [NONE]              templatesPath
59   [NONE]              :
59   [NONE]              "Tools/Unity.BuildSystem/Unity.BuildSystem.VisualStudio.Tests/Templates"
59   [NONE]              ,
59   [NONE]              
60   [NONE]              templates
60   [NONE]              :
60   [NONE]              new
60   [NEW]               []
60   [NONE]              
61   [NEW]               {
61   [NONE]              
62   [NONE]              "TestProjectGeneration_CApplication.sln"
62   [NONE]              ,
62   [NONE]              
63   [NONE]              "Projects/TestProjectGeneration_CApplication.vcxproj"
63   [NONE]              ,
63   [NONE]              
64   [NONE]              "Projects/TestProjectGeneration_CApplication.vcxproj.filters"
64   [NONE]              
65   [NEW]               }
65   [NONE]              
66   [FUNC_CALL]         )
66   [NONE]              ;
66   [NONE]              
67   [FUNC_DEF]          }
67   [NONE]              