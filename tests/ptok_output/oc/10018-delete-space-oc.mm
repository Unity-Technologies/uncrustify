Line [Parent]            Text
1    [COMMENT_WHOLE]     /* EditorApplication */
1    [NONE]              
3    [PP_INCLUDE]        #
3    [NONE]              include
3    [NONE]              <string>
3    [NONE]              
5    [PP_IF]             #
5    [NONE]              ifdef
5    [NONE]              __OBJC__
5    [NONE]              
6    [PP_INCLUDE]        #
6    [NONE]              import
6    [NONE]              <Cocoa/Cocoa.h>
6    [NONE]              
8    [NONE]              class
8    [NONE]              HierarchyState
8    [NONE]              ;
8    [NONE]              
9    [NONE]              @interface
9    [OC_INTF]           EditorApplication
9    [OC_CLASS]          :
9    [NONE]              NSObject
9    [NONE]              
10   [OC_CLASS]          {
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
25   [OC_CLASS]          }
25   [NONE]              
27   [OC_MSG_SPEC]       -
27   [OC_MSG_SPEC]       (
27   [NONE]              IBAction
27   [OC_MSG_SPEC]       )
27   [OC_MSG_SPEC]       SaveAssets
27   [OC_MSG_SPEC]       :
27   [OC_MSG_SPEC]       (
27   [NONE]              id
27   [OC_MSG_SPEC]       )
27   [NONE]              sender
27   [OC_MSG_SPEC]       ;
27   [NONE]              
28   [OC_MSG_SPEC]       -
28   [OC_MSG_SPEC]       (
28   [NONE]              IBAction
28   [OC_MSG_SPEC]       )
28   [OC_MSG_SPEC]       CloseScene
28   [OC_MSG_SPEC]       :
28   [OC_MSG_SPEC]       (
28   [NONE]              id
28   [OC_MSG_SPEC]       )
28   [NONE]              sender
28   [OC_MSG_SPEC]       ;
28   [NONE]              
29   [OC_MSG_SPEC]       -
29   [OC_MSG_SPEC]       (
29   [NONE]              IBAction
29   [OC_MSG_SPEC]       )
29   [OC_MSG_SPEC]       NewProject
29   [OC_MSG_SPEC]       :
29   [OC_MSG_SPEC]       (
29   [NONE]              id
29   [OC_MSG_SPEC]       )
29   [NONE]              sender
29   [OC_MSG_SPEC]       ;
29   [NONE]              
30   [OC_MSG_SPEC]       -
30   [OC_MSG_SPEC]       (
30   [NONE]              IBAction
30   [OC_MSG_SPEC]       )
30   [OC_MSG_SPEC]       OpenProject
30   [OC_MSG_SPEC]       :
30   [OC_MSG_SPEC]       (
30   [NONE]              id
30   [OC_MSG_SPEC]       )
30   [NONE]              sender
30   [OC_MSG_SPEC]       ;
30   [NONE]              
32   [OC_MSG_SPEC]       -
32   [OC_MSG_SPEC]       (
32   [NONE]              IBAction
32   [OC_MSG_SPEC]       )
32   [OC_MSG_SPEC]       SaveAsSceneToDisk
32   [OC_MSG_SPEC]       :
32   [OC_MSG_SPEC]       (
32   [NONE]              id
32   [OC_MSG_SPEC]       )
32   [NONE]              sender
32   [OC_MSG_SPEC]       ;
32   [NONE]              
34   [OC_MSG_SPEC]       -
34   [OC_MSG_SPEC]       (
34   [NONE]              IBAction
34   [OC_MSG_SPEC]       )
34   [OC_MSG_SPEC]       EnterSerialNumber
34   [OC_MSG_SPEC]       :
34   [OC_MSG_SPEC]       (
34   [NONE]              id
34   [OC_MSG_SPEC]       )
34   [NONE]              sender
34   [OC_MSG_SPEC]       ;
34   [NONE]              
35   [OC_MSG_SPEC]       -
35   [OC_MSG_SPEC]       (
35   [NONE]              IBAction
35   [OC_MSG_SPEC]       )
35   [OC_MSG_SPEC]       ReturnLicense
35   [OC_MSG_SPEC]       :
35   [OC_MSG_SPEC]       (
35   [NONE]              id
35   [OC_MSG_SPEC]       )
35   [NONE]              sender
35   [OC_MSG_SPEC]       ;
35   [NONE]              
36   [OC_MSG_SPEC]       -
36   [OC_MSG_SPEC]       (
36   [NONE]              IBAction
36   [OC_MSG_SPEC]       )
36   [OC_MSG_SPEC]       CompileScene
36   [OC_MSG_SPEC]       :
36   [OC_MSG_SPEC]       (
36   [NONE]              id
36   [OC_MSG_SPEC]       )
36   [NONE]              sender
36   [OC_MSG_SPEC]       ;
36   [NONE]              
37   [OC_MSG_SPEC]       -
37   [OC_MSG_SPEC]       (
37   [NONE]              IBAction
37   [OC_MSG_SPEC]       )
37   [OC_MSG_SPEC]       CompileSceneAutomatic
37   [OC_MSG_SPEC]       :
37   [OC_MSG_SPEC]       (
37   [NONE]              id
37   [OC_MSG_SPEC]       )
37   [NONE]              sender
37   [OC_MSG_SPEC]       ;
37   [NONE]              
39   [OC_MSG_SPEC]       -
39   [OC_MSG_SPEC]       (
39   [NONE]              IBAction
39   [OC_MSG_SPEC]       )
39   [OC_MSG_SPEC]       saveDocument
39   [OC_MSG_SPEC]       :
39   [OC_MSG_SPEC]       (
39   [NONE]              id
39   [OC_MSG_SPEC]       )
39   [NONE]              sender
39   [OC_MSG_SPEC]       ;
39   [NONE]              
41   [OC_MSG_SPEC]       -
41   [OC_MSG_SPEC]       (
41   [NONE]              IBAction
41   [OC_MSG_SPEC]       )
41   [OC_MSG_SPEC]       LoadSceneFromDisk
41   [OC_MSG_SPEC]       :
41   [OC_MSG_SPEC]       (
41   [NONE]              id
41   [OC_MSG_SPEC]       )
41   [NONE]              sender
41   [OC_MSG_SPEC]       ;
41   [NONE]              
43   [OC_MSG_SPEC]       -
43   [OC_MSG_SPEC]       (
43   [NONE]              void
43   [OC_MSG_SPEC]       )
43   [OC_MSG_SPEC]       RemoveDisplayTimer
43   [OC_MSG_SPEC]       ;
43   [NONE]              
44   [OC_MSG_SPEC]       -
44   [OC_MSG_SPEC]       (
44   [NONE]              void
44   [OC_MSG_SPEC]       )
44   [OC_MSG_SPEC]       RegisterUpdateTimer
44   [OC_MSG_SPEC]       :
44   [OC_MSG_SPEC]       (
44   [NONE]              int
44   [OC_MSG_SPEC]       )
44   [NONE]              frequency
44   [OC_MSG_SPEC]       ;
44   [NONE]              
46   [OC_MSG_SPEC]       -
46   [OC_MSG_SPEC]       (
46   [NONE]              void
46   [OC_MSG_SPEC]       )
46   [OC_MSG_SPEC]       refreshModifiedFile
46   [OC_MSG_SPEC]       :
46   [OC_MSG_SPEC]       (
46   [NONE]              NSAppleEventDescriptor
46   [NONE]              *
46   [OC_MSG_SPEC]       )
46   [NONE]              event
46   [OC_MSG_SPEC]       withReplyEvent
46   [OC_MSG_SPEC]       :
46   [OC_MSG_SPEC]       (
46   [NONE]              NSAppleEventDescriptor
46   [NONE]              *
46   [OC_MSG_SPEC]       )
46   [NONE]              replyEvent
46   [OC_MSG_SPEC]       ;
46   [NONE]              
47   [OC_MSG_SPEC]       -
47   [OC_MSG_SPEC]       (
47   [NONE]              void
47   [OC_MSG_SPEC]       )
47   [OC_MSG_SPEC]       closeFile
47   [OC_MSG_SPEC]       :
47   [OC_MSG_SPEC]       (
47   [NONE]              NSAppleEventDescriptor
47   [NONE]              *
47   [OC_MSG_SPEC]       )
47   [NONE]              event
47   [OC_MSG_SPEC]       withReplyEvent
47   [OC_MSG_SPEC]       :
47   [OC_MSG_SPEC]       (
47   [NONE]              NSAppleEventDescriptor
47   [NONE]              *
47   [OC_MSG_SPEC]       )
47   [NONE]              replyEvent
47   [OC_MSG_SPEC]       ;
47   [NONE]              
49   [OC_MSG_SPEC]       -
49   [OC_MSG_SPEC]       (
49   [NONE]              IBAction
49   [OC_MSG_SPEC]       )
49   [OC_MSG_SPEC]       ShowAboutDialog
49   [OC_MSG_SPEC]       :
49   [OC_MSG_SPEC]       (
49   [NONE]              id
49   [OC_MSG_SPEC]       )
49   [NONE]              sender
49   [OC_MSG_SPEC]       ;
49   [NONE]              
50   [OC_MSG_SPEC]       -
50   [OC_MSG_SPEC]       (
50   [NONE]              IBAction
50   [OC_MSG_SPEC]       )
50   [OC_MSG_SPEC]       ShowPreferences
50   [OC_MSG_SPEC]       :
50   [OC_MSG_SPEC]       (
50   [NONE]              id
50   [OC_MSG_SPEC]       )
50   [NONE]              sender
50   [OC_MSG_SPEC]       ;
50   [NONE]              
51   [OC_MSG_SPEC]       -
51   [OC_MSG_SPEC]       (
51   [NONE]              IBAction
51   [OC_MSG_SPEC]       )
51   [OC_MSG_SPEC]       ShowPackageManager
51   [OC_MSG_SPEC]       :
51   [OC_MSG_SPEC]       (
51   [NONE]              id
51   [OC_MSG_SPEC]       )
51   [NONE]              sender
51   [OC_MSG_SPEC]       ;
51   [NONE]              
53   [OC_MSG_SPEC]       -
53   [OC_MSG_SPEC]       (
53   [NONE]              IBAction
53   [OC_MSG_SPEC]       )
53   [OC_MSG_SPEC]       delete
53   [OC_MSG_SPEC]       :
53   [OC_MSG_SPEC]       (
53   [NONE]              id
53   [OC_MSG_SPEC]       )
53   [NONE]              sender
53   [OC_MSG_SPEC]       ;
53   [NONE]              
54   [OC_MSG_SPEC]       -
54   [OC_MSG_SPEC]       (
54   [NONE]              IBAction
54   [OC_MSG_SPEC]       )
54   [OC_MSG_SPEC]       copy
54   [OC_MSG_SPEC]       :
54   [OC_MSG_SPEC]       (
54   [NONE]              id
54   [OC_MSG_SPEC]       )
54   [NONE]              action
54   [OC_MSG_SPEC]       ;
54   [NONE]              
55   [OC_MSG_SPEC]       -
55   [OC_MSG_SPEC]       (
55   [NONE]              IBAction
55   [OC_MSG_SPEC]       )
55   [OC_MSG_SPEC]       paste
55   [OC_MSG_SPEC]       :
55   [OC_MSG_SPEC]       (
55   [NONE]              id
55   [OC_MSG_SPEC]       )
55   [NONE]              action
55   [OC_MSG_SPEC]       ;
55   [NONE]              
56   [OC_MSG_SPEC]       -
56   [OC_MSG_SPEC]       (
56   [NONE]              IBAction
56   [OC_MSG_SPEC]       )
56   [OC_MSG_SPEC]       duplicate
56   [OC_MSG_SPEC]       :
56   [OC_MSG_SPEC]       (
56   [NONE]              id
56   [OC_MSG_SPEC]       )
56   [NONE]              action
56   [OC_MSG_SPEC]       ;
56   [NONE]              
57   [OC_MSG_SPEC]       -
57   [OC_MSG_SPEC]       (
57   [NONE]              IBAction
57   [OC_MSG_SPEC]       )
57   [OC_MSG_SPEC]       cut
57   [OC_MSG_SPEC]       :
57   [OC_MSG_SPEC]       (
57   [NONE]              id
57   [OC_MSG_SPEC]       )
57   [NONE]              action
57   [OC_MSG_SPEC]       ;
57   [NONE]              
58   [OC_MSG_SPEC]       -
58   [OC_MSG_SPEC]       (
58   [NONE]              IBAction
58   [OC_MSG_SPEC]       )
58   [OC_MSG_SPEC]       selectAll
58   [OC_MSG_SPEC]       :
58   [OC_MSG_SPEC]       (
58   [NONE]              id
58   [OC_MSG_SPEC]       )
58   [NONE]              action
58   [OC_MSG_SPEC]       ;
58   [NONE]              
59   [OC_MSG_SPEC]       -
59   [OC_MSG_SPEC]       (
59   [NONE]              IBAction
59   [OC_MSG_SPEC]       )
59   [OC_MSG_SPEC]       find
59   [OC_MSG_SPEC]       :
59   [OC_MSG_SPEC]       (
59   [NONE]              id
59   [OC_MSG_SPEC]       )
59   [NONE]              action
59   [OC_MSG_SPEC]       ;
59   [NONE]              
60   [OC_MSG_SPEC]       -
60   [OC_MSG_SPEC]       (
60   [NONE]              IBAction
60   [OC_MSG_SPEC]       )
60   [OC_MSG_SPEC]       frameSelected
60   [OC_MSG_SPEC]       :
60   [OC_MSG_SPEC]       (
60   [NONE]              id
60   [OC_MSG_SPEC]       )
60   [NONE]              action
60   [OC_MSG_SPEC]       ;
60   [NONE]              
61   [OC_MSG_SPEC]       -
61   [OC_MSG_SPEC]       (
61   [NONE]              IBAction
61   [OC_MSG_SPEC]       )
61   [OC_MSG_SPEC]       frameSelectedWithLock
61   [OC_MSG_SPEC]       :
61   [OC_MSG_SPEC]       (
61   [NONE]              id
61   [OC_MSG_SPEC]       )
61   [NONE]              action
61   [OC_MSG_SPEC]       ;
61   [NONE]              
63   [COMMENT_WHOLE]     // Assetstore protocol handler and registration
63   [NONE]              
64   [OC_MSG_SPEC]       -
64   [OC_MSG_SPEC]       (
64   [NONE]              void
64   [OC_MSG_SPEC]       )
64   [OC_MSG_SPEC]       registerAssetStoreURLProtocol
64   [OC_MSG_SPEC]       ;
64   [NONE]              
65   [OC_MSG_SPEC]       -
65   [OC_MSG_SPEC]       (
65   [NONE]              void
65   [OC_MSG_SPEC]       )
65   [OC_MSG_SPEC]       getUrl
65   [OC_MSG_SPEC]       :
65   [OC_MSG_SPEC]       (
65   [NONE]              NSAppleEventDescriptor
65   [NONE]              *
65   [OC_MSG_SPEC]       )
65   [NONE]              event
65   [OC_MSG_SPEC]       withReplyEvent
65   [OC_MSG_SPEC]       :
65   [OC_MSG_SPEC]       (
65   [NONE]              NSAppleEventDescriptor
65   [NONE]              *
65   [OC_MSG_SPEC]       )
65   [NONE]              replyEvent
65   [OC_MSG_SPEC]       ;
65   [NONE]              
67   [OC_INTF]           @end
67   [NONE]              
69   [PP_ENDIF]          #
69   [NONE]              endif
69   [NONE]              