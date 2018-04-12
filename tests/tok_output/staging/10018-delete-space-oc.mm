Line [Token]             Text
1    [COMMENT]           /* EditorApplication */
1    [NEWLINE]           
3    [PREPROC]           #
3    [PP_INCLUDE]        include
3    [PREPROC_BODY]      <string>
3    [NEWLINE]           
5    [PREPROC]           #
5    [PP_IF]             ifdef
5    [WORD]              __OBJC__
5    [NEWLINE]           
6    [PREPROC]           #
6    [PP_INCLUDE]        import
6    [PREPROC_BODY]      <Cocoa/Cocoa.h>
6    [NEWLINE]           
8    [CLASS]             class
8    [TYPE]              HierarchyState
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [OC_INTF]           @interface
9    [OC_CLASS]          EditorApplication
9    [CLASS_COLON]       :
9    [WORD]              NSObject
9    [NEWLINE]           
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [TYPE]              IBOutlet
11   [TYPE]              id
11   [WORD]              m_MainWindow
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [TYPE]              IBOutlet
12   [TYPE]              id
12   [WORD]              m_PaneController
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [TYPE]              id
13   [WORD]              m_RenderTimer
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [TYPE]              IBOutlet
15   [TYPE]              id
15   [WORD]              m_CutItem
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [TYPE]              IBOutlet
16   [TYPE]              id
16   [WORD]              m_CopyItem
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [TYPE]              IBOutlet
17   [TYPE]              id
17   [WORD]              m_PasteItem
17   [SEMICOLON]         ;
17   [NEWLINE]           
19   [TYPE]              IBOutlet
19   [TYPE]              id
19   [WORD]              m_DuplicateItem
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [TYPE]              IBOutlet
20   [TYPE]              id
20   [WORD]              m_DeleteItem
20   [SEMICOLON]         ;
20   [NEWLINE]           
22   [TYPE]              IBOutlet
22   [TYPE]              id
22   [WORD]              m_FrameSelectedItem
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [TYPE]              IBOutlet
23   [TYPE]              id
23   [WORD]              m_FindItem
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [TYPE]              IBOutlet
24   [TYPE]              id
24   [WORD]              m_SelectAllItem
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [BRACE_CLOSE]       }
25   [NEWLINE]           
27   [OC_SCOPE]          -
27   [PAREN_OPEN]        (
27   [TYPE]              IBAction
27   [PAREN_CLOSE]       )
27   [OC_MSG_SPEC]       SaveAssets
27   [OC_COLON]          :
27   [PAREN_OPEN]        (
27   [TYPE]              id
27   [PAREN_CLOSE]       )
27   [WORD]              sender
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [OC_SCOPE]          -
28   [PAREN_OPEN]        (
28   [TYPE]              IBAction
28   [PAREN_CLOSE]       )
28   [OC_MSG_SPEC]       CloseScene
28   [OC_COLON]          :
28   [PAREN_OPEN]        (
28   [TYPE]              id
28   [PAREN_CLOSE]       )
28   [WORD]              sender
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [OC_SCOPE]          -
29   [PAREN_OPEN]        (
29   [TYPE]              IBAction
29   [PAREN_CLOSE]       )
29   [OC_MSG_SPEC]       NewProject
29   [OC_COLON]          :
29   [PAREN_OPEN]        (
29   [TYPE]              id
29   [PAREN_CLOSE]       )
29   [WORD]              sender
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [OC_SCOPE]          -
30   [PAREN_OPEN]        (
30   [TYPE]              IBAction
30   [PAREN_CLOSE]       )
30   [OC_MSG_SPEC]       OpenProject
30   [OC_COLON]          :
30   [PAREN_OPEN]        (
30   [TYPE]              id
30   [PAREN_CLOSE]       )
30   [WORD]              sender
30   [SEMICOLON]         ;
30   [NEWLINE]           
32   [OC_SCOPE]          -
32   [PAREN_OPEN]        (
32   [TYPE]              IBAction
32   [PAREN_CLOSE]       )
32   [OC_MSG_SPEC]       SaveAsSceneToDisk
32   [OC_COLON]          :
32   [PAREN_OPEN]        (
32   [TYPE]              id
32   [PAREN_CLOSE]       )
32   [WORD]              sender
32   [SEMICOLON]         ;
32   [NEWLINE]           
34   [OC_SCOPE]          -
34   [PAREN_OPEN]        (
34   [TYPE]              IBAction
34   [PAREN_CLOSE]       )
34   [OC_MSG_SPEC]       EnterSerialNumber
34   [OC_COLON]          :
34   [PAREN_OPEN]        (
34   [TYPE]              id
34   [PAREN_CLOSE]       )
34   [WORD]              sender
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [OC_SCOPE]          -
35   [PAREN_OPEN]        (
35   [TYPE]              IBAction
35   [PAREN_CLOSE]       )
35   [OC_MSG_SPEC]       ReturnLicense
35   [OC_COLON]          :
35   [PAREN_OPEN]        (
35   [TYPE]              id
35   [PAREN_CLOSE]       )
35   [WORD]              sender
35   [SEMICOLON]         ;
35   [NEWLINE]           
36   [OC_SCOPE]          -
36   [PAREN_OPEN]        (
36   [TYPE]              IBAction
36   [PAREN_CLOSE]       )
36   [OC_MSG_SPEC]       CompileScene
36   [OC_COLON]          :
36   [PAREN_OPEN]        (
36   [TYPE]              id
36   [PAREN_CLOSE]       )
36   [WORD]              sender
36   [SEMICOLON]         ;
36   [NEWLINE]           
37   [OC_SCOPE]          -
37   [PAREN_OPEN]        (
37   [TYPE]              IBAction
37   [PAREN_CLOSE]       )
37   [OC_MSG_SPEC]       CompileSceneAutomatic
37   [OC_COLON]          :
37   [PAREN_OPEN]        (
37   [TYPE]              id
37   [PAREN_CLOSE]       )
37   [WORD]              sender
37   [SEMICOLON]         ;
37   [NEWLINE]           
39   [OC_SCOPE]          -
39   [PAREN_OPEN]        (
39   [TYPE]              IBAction
39   [PAREN_CLOSE]       )
39   [OC_MSG_SPEC]       saveDocument
39   [OC_COLON]          :
39   [PAREN_OPEN]        (
39   [TYPE]              id
39   [PAREN_CLOSE]       )
39   [WORD]              sender
39   [SEMICOLON]         ;
39   [NEWLINE]           
41   [OC_SCOPE]          -
41   [PAREN_OPEN]        (
41   [TYPE]              IBAction
41   [PAREN_CLOSE]       )
41   [OC_MSG_SPEC]       LoadSceneFromDisk
41   [OC_COLON]          :
41   [PAREN_OPEN]        (
41   [TYPE]              id
41   [PAREN_CLOSE]       )
41   [WORD]              sender
41   [SEMICOLON]         ;
41   [NEWLINE]           
43   [OC_SCOPE]          -
43   [PAREN_OPEN]        (
43   [TYPE]              void
43   [PAREN_CLOSE]       )
43   [OC_MSG_SPEC]       RemoveDisplayTimer
43   [SEMICOLON]         ;
43   [NEWLINE]           
44   [OC_SCOPE]          -
44   [PAREN_OPEN]        (
44   [TYPE]              void
44   [PAREN_CLOSE]       )
44   [OC_MSG_SPEC]       RegisterUpdateTimer
44   [OC_COLON]          :
44   [PAREN_OPEN]        (
44   [TYPE]              int
44   [PAREN_CLOSE]       )
44   [WORD]              frequency
44   [SEMICOLON]         ;
44   [NEWLINE]           
46   [OC_SCOPE]          -
46   [PAREN_OPEN]        (
46   [TYPE]              void
46   [PAREN_CLOSE]       )
46   [OC_MSG_SPEC]       refreshModifiedFile
46   [OC_COLON]          :
46   [PAREN_OPEN]        (
46   [TYPE]              NSAppleEventDescriptor
46   [PTR_TYPE]          *
46   [PAREN_CLOSE]       )
46   [TYPE]              event
46   [WORD]              withReplyEvent
46   [OC_COLON]          :
46   [PAREN_OPEN]        (
46   [TYPE]              NSAppleEventDescriptor
46   [PTR_TYPE]          *
46   [PAREN_CLOSE]       )
46   [WORD]              replyEvent
46   [SEMICOLON]         ;
46   [NEWLINE]           
47   [OC_SCOPE]          -
47   [PAREN_OPEN]        (
47   [TYPE]              void
47   [PAREN_CLOSE]       )
47   [OC_MSG_SPEC]       closeFile
47   [OC_COLON]          :
47   [PAREN_OPEN]        (
47   [TYPE]              NSAppleEventDescriptor
47   [PTR_TYPE]          *
47   [PAREN_CLOSE]       )
47   [TYPE]              event
47   [WORD]              withReplyEvent
47   [OC_COLON]          :
47   [PAREN_OPEN]        (
47   [TYPE]              NSAppleEventDescriptor
47   [PTR_TYPE]          *
47   [PAREN_CLOSE]       )
47   [WORD]              replyEvent
47   [SEMICOLON]         ;
47   [NEWLINE]           
49   [OC_SCOPE]          -
49   [PAREN_OPEN]        (
49   [TYPE]              IBAction
49   [PAREN_CLOSE]       )
49   [OC_MSG_SPEC]       ShowAboutDialog
49   [OC_COLON]          :
49   [PAREN_OPEN]        (
49   [TYPE]              id
49   [PAREN_CLOSE]       )
49   [WORD]              sender
49   [SEMICOLON]         ;
49   [NEWLINE]           
50   [OC_SCOPE]          -
50   [PAREN_OPEN]        (
50   [TYPE]              IBAction
50   [PAREN_CLOSE]       )
50   [OC_MSG_SPEC]       ShowPreferences
50   [OC_COLON]          :
50   [PAREN_OPEN]        (
50   [TYPE]              id
50   [PAREN_CLOSE]       )
50   [WORD]              sender
50   [SEMICOLON]         ;
50   [NEWLINE]           
51   [OC_SCOPE]          -
51   [PAREN_OPEN]        (
51   [TYPE]              IBAction
51   [PAREN_CLOSE]       )
51   [OC_MSG_SPEC]       ShowPackageManager
51   [OC_COLON]          :
51   [PAREN_OPEN]        (
51   [TYPE]              id
51   [PAREN_CLOSE]       )
51   [WORD]              sender
51   [SEMICOLON]         ;
51   [NEWLINE]           
53   [OC_SCOPE]          -
53   [PAREN_OPEN]        (
53   [TYPE]              IBAction
53   [PAREN_CLOSE]       )
53   [DELETE]            delete
53   [OC_COLON]          :
53   [PAREN_OPEN]        (
53   [TYPE]              id
53   [PAREN_CLOSE]       )
53   [WORD]              sender
53   [SEMICOLON]         ;
53   [NEWLINE]           
54   [OC_SCOPE]          -
54   [PAREN_OPEN]        (
54   [TYPE]              IBAction
54   [PAREN_CLOSE]       )
54   [OC_MSG_SPEC]       copy
54   [OC_COLON]          :
54   [PAREN_OPEN]        (
54   [TYPE]              id
54   [PAREN_CLOSE]       )
54   [WORD]              action
54   [SEMICOLON]         ;
54   [NEWLINE]           
55   [OC_SCOPE]          -
55   [PAREN_OPEN]        (
55   [TYPE]              IBAction
55   [PAREN_CLOSE]       )
55   [OC_MSG_SPEC]       paste
55   [OC_COLON]          :
55   [PAREN_OPEN]        (
55   [TYPE]              id
55   [PAREN_CLOSE]       )
55   [WORD]              action
55   [SEMICOLON]         ;
55   [NEWLINE]           
56   [OC_SCOPE]          -
56   [PAREN_OPEN]        (
56   [TYPE]              IBAction
56   [PAREN_CLOSE]       )
56   [OC_MSG_SPEC]       duplicate
56   [OC_COLON]          :
56   [PAREN_OPEN]        (
56   [TYPE]              id
56   [PAREN_CLOSE]       )
56   [WORD]              action
56   [SEMICOLON]         ;
56   [NEWLINE]           
57   [OC_SCOPE]          -
57   [PAREN_OPEN]        (
57   [TYPE]              IBAction
57   [PAREN_CLOSE]       )
57   [OC_MSG_SPEC]       cut
57   [OC_COLON]          :
57   [PAREN_OPEN]        (
57   [TYPE]              id
57   [PAREN_CLOSE]       )
57   [WORD]              action
57   [SEMICOLON]         ;
57   [NEWLINE]           
58   [OC_SCOPE]          -
58   [PAREN_OPEN]        (
58   [TYPE]              IBAction
58   [PAREN_CLOSE]       )
58   [OC_MSG_SPEC]       selectAll
58   [OC_COLON]          :
58   [PAREN_OPEN]        (
58   [TYPE]              id
58   [PAREN_CLOSE]       )
58   [WORD]              action
58   [SEMICOLON]         ;
58   [NEWLINE]           
59   [OC_SCOPE]          -
59   [PAREN_OPEN]        (
59   [TYPE]              IBAction
59   [PAREN_CLOSE]       )
59   [OC_MSG_SPEC]       find
59   [OC_COLON]          :
59   [PAREN_OPEN]        (
59   [TYPE]              id
59   [PAREN_CLOSE]       )
59   [WORD]              action
59   [SEMICOLON]         ;
59   [NEWLINE]           
60   [OC_SCOPE]          -
60   [PAREN_OPEN]        (
60   [TYPE]              IBAction
60   [PAREN_CLOSE]       )
60   [OC_MSG_SPEC]       frameSelected
60   [OC_COLON]          :
60   [PAREN_OPEN]        (
60   [TYPE]              id
60   [PAREN_CLOSE]       )
60   [WORD]              action
60   [SEMICOLON]         ;
60   [NEWLINE]           
61   [OC_SCOPE]          -
61   [PAREN_OPEN]        (
61   [TYPE]              IBAction
61   [PAREN_CLOSE]       )
61   [OC_MSG_SPEC]       frameSelectedWithLock
61   [OC_COLON]          :
61   [PAREN_OPEN]        (
61   [TYPE]              id
61   [PAREN_CLOSE]       )
61   [WORD]              action
61   [SEMICOLON]         ;
61   [NEWLINE]           
63   [COMMENT_CPP]       // Assetstore protocol handler and registration
63   [NEWLINE]           
64   [OC_SCOPE]          -
64   [PAREN_OPEN]        (
64   [TYPE]              void
64   [PAREN_CLOSE]       )
64   [OC_MSG_SPEC]       registerAssetStoreURLProtocol
64   [SEMICOLON]         ;
64   [NEWLINE]           
65   [OC_SCOPE]          -
65   [PAREN_OPEN]        (
65   [TYPE]              void
65   [PAREN_CLOSE]       )
65   [OC_MSG_SPEC]       getUrl
65   [OC_COLON]          :
65   [PAREN_OPEN]        (
65   [TYPE]              NSAppleEventDescriptor
65   [PTR_TYPE]          *
65   [PAREN_CLOSE]       )
65   [TYPE]              event
65   [WORD]              withReplyEvent
65   [OC_COLON]          :
65   [PAREN_OPEN]        (
65   [TYPE]              NSAppleEventDescriptor
65   [PTR_TYPE]          *
65   [PAREN_CLOSE]       )
65   [WORD]              replyEvent
65   [SEMICOLON]         ;
65   [NEWLINE]           
67   [OC_END]            @end
67   [NEWLINE]           
69   [PREPROC]           #
69   [PP_ENDIF]          endif
69   [NEWLINE]           