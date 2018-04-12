Line [Parent]            Text
1    [COMMENT_WHOLE]     /* EditorApplication */
1    [NONE]              
3    [PP_OTHER]          #
3    [NONE]              include
3    [NONE]              <string>
3    [NONE]              
5    [PP_IF]             #
5    [NONE]              ifdef
5    [NONE]              __OBJC__
5    [NONE]              
6    [PP_OTHER]          #
6    [NONE]              import
6    [NONE]              <Cocoa/Cocoa.h>
6    [NONE]              
8    [NONE]              class
8    [CLASS]             HierarchyState
8    [NONE]              ;
8    [NONE]              
9    [NONE]              @interface
9    [NONE]              EditorApplication
9    [NONE]              :
9    [NONE]              NSObject
9    [NONE]              
10   [CS_PROPERTY]       {
10   [NONE]              
11   [NONE]              IBOutlet
11   [NONE]              id
11   [NONE]              m_MainWindow
11   [NONE]              ;
11   [NONE]              
12   [NONE]              IBOutlet
12   [NONE]              id
12   [NONE]              m_PaneController
12   [NONE]              ;
12   [NONE]              
13   [NONE]              id
13   [NONE]              m_RenderTimer
13   [NONE]              ;
13   [NONE]              
15   [NONE]              IBOutlet
15   [NONE]              id
15   [NONE]              m_CutItem
15   [NONE]              ;
15   [NONE]              
16   [NONE]              IBOutlet
16   [NONE]              id
16   [NONE]              m_CopyItem
16   [NONE]              ;
16   [NONE]              
17   [NONE]              IBOutlet
17   [NONE]              id
17   [NONE]              m_PasteItem
17   [NONE]              ;
17   [NONE]              
19   [NONE]              IBOutlet
19   [NONE]              id
19   [NONE]              m_DuplicateItem
19   [NONE]              ;
19   [NONE]              
20   [NONE]              IBOutlet
20   [NONE]              id
20   [NONE]              m_DeleteItem
20   [NONE]              ;
20   [NONE]              
22   [NONE]              IBOutlet
22   [NONE]              id
22   [NONE]              m_FrameSelectedItem
22   [NONE]              ;
22   [NONE]              
23   [NONE]              IBOutlet
23   [NONE]              id
23   [NONE]              m_FindItem
23   [NONE]              ;
23   [NONE]              
24   [NONE]              IBOutlet
24   [NONE]              id
24   [NONE]              m_SelectAllItem
24   [NONE]              ;
24   [NONE]              
25   [CS_PROPERTY]       }
25   [NONE]              
27   [NONE]              -
27   [C_CAST]            (
27   [C_CAST]            IBAction
27   [C_CAST]            )
27   [NONE]              SaveAssets
27   [NONE]              :
27   [C_CAST]            (
27   [C_CAST]            id
27   [C_CAST]            )
27   [NONE]              sender
27   [NONE]              ;
27   [NONE]              
28   [NONE]              -
28   [C_CAST]            (
28   [C_CAST]            IBAction
28   [C_CAST]            )
28   [NONE]              CloseScene
28   [NONE]              :
28   [C_CAST]            (
28   [C_CAST]            id
28   [C_CAST]            )
28   [NONE]              sender
28   [NONE]              ;
28   [NONE]              
29   [NONE]              -
29   [C_CAST]            (
29   [C_CAST]            IBAction
29   [C_CAST]            )
29   [NONE]              NewProject
29   [NONE]              :
29   [C_CAST]            (
29   [C_CAST]            id
29   [C_CAST]            )
29   [NONE]              sender
29   [NONE]              ;
29   [NONE]              
30   [NONE]              -
30   [C_CAST]            (
30   [C_CAST]            IBAction
30   [C_CAST]            )
30   [NONE]              OpenProject
30   [NONE]              :
30   [C_CAST]            (
30   [C_CAST]            id
30   [C_CAST]            )
30   [NONE]              sender
30   [NONE]              ;
30   [NONE]              
32   [NONE]              -
32   [C_CAST]            (
32   [C_CAST]            IBAction
32   [C_CAST]            )
32   [NONE]              SaveAsSceneToDisk
32   [NONE]              :
32   [C_CAST]            (
32   [C_CAST]            id
32   [C_CAST]            )
32   [NONE]              sender
32   [NONE]              ;
32   [NONE]              
34   [NONE]              -
34   [C_CAST]            (
34   [C_CAST]            IBAction
34   [C_CAST]            )
34   [NONE]              EnterSerialNumber
34   [NONE]              :
34   [C_CAST]            (
34   [C_CAST]            id
34   [C_CAST]            )
34   [NONE]              sender
34   [NONE]              ;
34   [NONE]              
35   [NONE]              -
35   [C_CAST]            (
35   [C_CAST]            IBAction
35   [C_CAST]            )
35   [NONE]              ReturnLicense
35   [NONE]              :
35   [C_CAST]            (
35   [C_CAST]            id
35   [C_CAST]            )
35   [NONE]              sender
35   [NONE]              ;
35   [NONE]              
36   [NONE]              -
36   [C_CAST]            (
36   [C_CAST]            IBAction
36   [C_CAST]            )
36   [NONE]              CompileScene
36   [NONE]              :
36   [C_CAST]            (
36   [C_CAST]            id
36   [C_CAST]            )
36   [NONE]              sender
36   [NONE]              ;
36   [NONE]              
37   [NONE]              -
37   [C_CAST]            (
37   [C_CAST]            IBAction
37   [C_CAST]            )
37   [NONE]              CompileSceneAutomatic
37   [NONE]              :
37   [C_CAST]            (
37   [C_CAST]            id
37   [C_CAST]            )
37   [NONE]              sender
37   [NONE]              ;
37   [NONE]              
39   [NONE]              -
39   [C_CAST]            (
39   [C_CAST]            IBAction
39   [C_CAST]            )
39   [NONE]              saveDocument
39   [NONE]              :
39   [C_CAST]            (
39   [C_CAST]            id
39   [C_CAST]            )
39   [NONE]              sender
39   [NONE]              ;
39   [NONE]              
41   [NONE]              -
41   [C_CAST]            (
41   [C_CAST]            IBAction
41   [C_CAST]            )
41   [NONE]              LoadSceneFromDisk
41   [NONE]              :
41   [C_CAST]            (
41   [C_CAST]            id
41   [C_CAST]            )
41   [NONE]              sender
41   [NONE]              ;
41   [NONE]              
43   [NONE]              -
43   [C_CAST]            (
43   [C_CAST]            void
43   [C_CAST]            )
43   [NONE]              RemoveDisplayTimer
43   [NONE]              ;
43   [NONE]              
44   [NONE]              -
44   [C_CAST]            (
44   [C_CAST]            void
44   [C_CAST]            )
44   [NONE]              RegisterUpdateTimer
44   [NONE]              :
44   [C_CAST]            (
44   [C_CAST]            int
44   [C_CAST]            )
44   [NONE]              frequency
44   [NONE]              ;
44   [NONE]              
46   [NONE]              -
46   [C_CAST]            (
46   [C_CAST]            void
46   [C_CAST]            )
46   [NONE]              refreshModifiedFile
46   [NONE]              :
46   [C_CAST]            (
46   [C_CAST]            NSAppleEventDescriptor
46   [C_CAST]            *
46   [C_CAST]            )
46   [NONE]              event
46   [NONE]              withReplyEvent
46   [NONE]              :
46   [C_CAST]            (
46   [C_CAST]            NSAppleEventDescriptor
46   [C_CAST]            *
46   [C_CAST]            )
46   [NONE]              replyEvent
46   [NONE]              ;
46   [NONE]              
47   [NONE]              -
47   [C_CAST]            (
47   [C_CAST]            void
47   [C_CAST]            )
47   [NONE]              closeFile
47   [NONE]              :
47   [C_CAST]            (
47   [C_CAST]            NSAppleEventDescriptor
47   [C_CAST]            *
47   [C_CAST]            )
47   [NONE]              event
47   [NONE]              withReplyEvent
47   [NONE]              :
47   [C_CAST]            (
47   [C_CAST]            NSAppleEventDescriptor
47   [C_CAST]            *
47   [C_CAST]            )
47   [NONE]              replyEvent
47   [NONE]              ;
47   [NONE]              
49   [NONE]              -
49   [C_CAST]            (
49   [C_CAST]            IBAction
49   [C_CAST]            )
49   [NONE]              ShowAboutDialog
49   [NONE]              :
49   [C_CAST]            (
49   [C_CAST]            id
49   [C_CAST]            )
49   [NONE]              sender
49   [NONE]              ;
49   [NONE]              
50   [NONE]              -
50   [C_CAST]            (
50   [C_CAST]            IBAction
50   [C_CAST]            )
50   [NONE]              ShowPreferences
50   [NONE]              :
50   [C_CAST]            (
50   [C_CAST]            id
50   [C_CAST]            )
50   [NONE]              sender
50   [NONE]              ;
50   [NONE]              
51   [NONE]              -
51   [C_CAST]            (
51   [C_CAST]            IBAction
51   [C_CAST]            )
51   [NONE]              ShowPackageManager
51   [NONE]              :
51   [C_CAST]            (
51   [C_CAST]            id
51   [C_CAST]            )
51   [NONE]              sender
51   [NONE]              ;
51   [NONE]              
53   [NONE]              -
53   [C_CAST]            (
53   [C_CAST]            IBAction
53   [C_CAST]            )
53   [NONE]              delete
53   [NONE]              :
53   [C_CAST]            (
53   [C_CAST]            id
53   [C_CAST]            )
53   [NONE]              sender
53   [NONE]              ;
53   [NONE]              
54   [NONE]              -
54   [C_CAST]            (
54   [C_CAST]            IBAction
54   [C_CAST]            )
54   [NONE]              copy
54   [NONE]              :
54   [C_CAST]            (
54   [C_CAST]            id
54   [C_CAST]            )
54   [NONE]              action
54   [NONE]              ;
54   [NONE]              
55   [NONE]              -
55   [C_CAST]            (
55   [C_CAST]            IBAction
55   [C_CAST]            )
55   [NONE]              paste
55   [NONE]              :
55   [C_CAST]            (
55   [C_CAST]            id
55   [C_CAST]            )
55   [NONE]              action
55   [NONE]              ;
55   [NONE]              
56   [NONE]              -
56   [C_CAST]            (
56   [C_CAST]            IBAction
56   [C_CAST]            )
56   [NONE]              duplicate
56   [NONE]              :
56   [C_CAST]            (
56   [C_CAST]            id
56   [C_CAST]            )
56   [NONE]              action
56   [NONE]              ;
56   [NONE]              
57   [NONE]              -
57   [C_CAST]            (
57   [C_CAST]            IBAction
57   [C_CAST]            )
57   [NONE]              cut
57   [NONE]              :
57   [C_CAST]            (
57   [C_CAST]            id
57   [C_CAST]            )
57   [NONE]              action
57   [NONE]              ;
57   [NONE]              
58   [NONE]              -
58   [C_CAST]            (
58   [C_CAST]            IBAction
58   [C_CAST]            )
58   [NONE]              selectAll
58   [NONE]              :
58   [C_CAST]            (
58   [C_CAST]            id
58   [C_CAST]            )
58   [NONE]              action
58   [NONE]              ;
58   [NONE]              
59   [NONE]              -
59   [C_CAST]            (
59   [C_CAST]            IBAction
59   [C_CAST]            )
59   [NONE]              find
59   [NONE]              :
59   [C_CAST]            (
59   [C_CAST]            id
59   [C_CAST]            )
59   [NONE]              action
59   [NONE]              ;
59   [NONE]              
60   [NONE]              -
60   [C_CAST]            (
60   [C_CAST]            IBAction
60   [C_CAST]            )
60   [NONE]              frameSelected
60   [NONE]              :
60   [C_CAST]            (
60   [C_CAST]            id
60   [C_CAST]            )
60   [NONE]              action
60   [NONE]              ;
60   [NONE]              
61   [NONE]              -
61   [C_CAST]            (
61   [C_CAST]            IBAction
61   [C_CAST]            )
61   [NONE]              frameSelectedWithLock
61   [NONE]              :
61   [C_CAST]            (
61   [C_CAST]            id
61   [C_CAST]            )
61   [NONE]              action
61   [NONE]              ;
61   [NONE]              
63   [COMMENT_WHOLE]     // Assetstore protocol handler and registration
63   [NONE]              
64   [NONE]              -
64   [C_CAST]            (
64   [C_CAST]            void
64   [C_CAST]            )
64   [NONE]              registerAssetStoreURLProtocol
64   [NONE]              ;
64   [NONE]              
65   [NONE]              -
65   [C_CAST]            (
65   [C_CAST]            void
65   [C_CAST]            )
65   [NONE]              getUrl
65   [NONE]              :
65   [C_CAST]            (
65   [C_CAST]            NSAppleEventDescriptor
65   [C_CAST]            *
65   [C_CAST]            )
65   [NONE]              event
65   [NONE]              withReplyEvent
65   [NONE]              :
65   [C_CAST]            (
65   [C_CAST]            NSAppleEventDescriptor
65   [C_CAST]            *
65   [C_CAST]            )
65   [NONE]              replyEvent
65   [NONE]              ;
65   [NONE]              
67   [NONE]              @end
67   [NONE]              
69   [PP_ENDIF]          #
69   [NONE]              endif
69   [NONE]              