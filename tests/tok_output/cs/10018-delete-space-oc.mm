Line [Token]             Text
1    [COMMENT]           /* EditorApplication */
1    [NEWLINE]           
3    [PREPROC]           #
3    [PP_OTHER]          include
3    [PREPROC_BODY]      <string>
3    [NEWLINE]           
5    [PREPROC]           #
5    [PP_IF]             ifdef
5    [WORD]              __OBJC__
5    [NEWLINE]           
6    [PREPROC]           #
6    [PP_OTHER]          import
6    [PREPROC_BODY]      <Cocoa/Cocoa.h>
6    [NEWLINE]           
8    [CLASS]             class
8    [TYPE]              HierarchyState
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [TYPE]              @interface
9    [LABEL]             EditorApplication
9    [LABEL_COLON]       :
9    [CS_PROPERTY]       NSObject
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
27   [NEG]               -
27   [PAREN_OPEN]        (
27   [TYPE]              IBAction
27   [PAREN_CLOSE]       )
27   [LABEL]             SaveAssets
27   [LABEL_COLON]       :
27   [PAREN_OPEN]        (
27   [TYPE]              id
27   [PAREN_CLOSE]       )
27   [WORD]              sender
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [NEG]               -
28   [PAREN_OPEN]        (
28   [TYPE]              IBAction
28   [PAREN_CLOSE]       )
28   [LABEL]             CloseScene
28   [LABEL_COLON]       :
28   [PAREN_OPEN]        (
28   [TYPE]              id
28   [PAREN_CLOSE]       )
28   [WORD]              sender
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [NEG]               -
29   [PAREN_OPEN]        (
29   [TYPE]              IBAction
29   [PAREN_CLOSE]       )
29   [LABEL]             NewProject
29   [LABEL_COLON]       :
29   [PAREN_OPEN]        (
29   [TYPE]              id
29   [PAREN_CLOSE]       )
29   [WORD]              sender
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [NEG]               -
30   [PAREN_OPEN]        (
30   [TYPE]              IBAction
30   [PAREN_CLOSE]       )
30   [LABEL]             OpenProject
30   [LABEL_COLON]       :
30   [PAREN_OPEN]        (
30   [TYPE]              id
30   [PAREN_CLOSE]       )
30   [WORD]              sender
30   [SEMICOLON]         ;
30   [NEWLINE]           
32   [NEG]               -
32   [PAREN_OPEN]        (
32   [TYPE]              IBAction
32   [PAREN_CLOSE]       )
32   [LABEL]             SaveAsSceneToDisk
32   [LABEL_COLON]       :
32   [PAREN_OPEN]        (
32   [TYPE]              id
32   [PAREN_CLOSE]       )
32   [WORD]              sender
32   [SEMICOLON]         ;
32   [NEWLINE]           
34   [NEG]               -
34   [PAREN_OPEN]        (
34   [TYPE]              IBAction
34   [PAREN_CLOSE]       )
34   [LABEL]             EnterSerialNumber
34   [LABEL_COLON]       :
34   [PAREN_OPEN]        (
34   [TYPE]              id
34   [PAREN_CLOSE]       )
34   [WORD]              sender
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [NEG]               -
35   [PAREN_OPEN]        (
35   [TYPE]              IBAction
35   [PAREN_CLOSE]       )
35   [LABEL]             ReturnLicense
35   [LABEL_COLON]       :
35   [PAREN_OPEN]        (
35   [TYPE]              id
35   [PAREN_CLOSE]       )
35   [WORD]              sender
35   [SEMICOLON]         ;
35   [NEWLINE]           
36   [NEG]               -
36   [PAREN_OPEN]        (
36   [TYPE]              IBAction
36   [PAREN_CLOSE]       )
36   [LABEL]             CompileScene
36   [LABEL_COLON]       :
36   [PAREN_OPEN]        (
36   [TYPE]              id
36   [PAREN_CLOSE]       )
36   [WORD]              sender
36   [SEMICOLON]         ;
36   [NEWLINE]           
37   [NEG]               -
37   [PAREN_OPEN]        (
37   [TYPE]              IBAction
37   [PAREN_CLOSE]       )
37   [LABEL]             CompileSceneAutomatic
37   [LABEL_COLON]       :
37   [PAREN_OPEN]        (
37   [TYPE]              id
37   [PAREN_CLOSE]       )
37   [WORD]              sender
37   [SEMICOLON]         ;
37   [NEWLINE]           
39   [NEG]               -
39   [PAREN_OPEN]        (
39   [TYPE]              IBAction
39   [PAREN_CLOSE]       )
39   [LABEL]             saveDocument
39   [LABEL_COLON]       :
39   [PAREN_OPEN]        (
39   [TYPE]              id
39   [PAREN_CLOSE]       )
39   [WORD]              sender
39   [SEMICOLON]         ;
39   [NEWLINE]           
41   [NEG]               -
41   [PAREN_OPEN]        (
41   [TYPE]              IBAction
41   [PAREN_CLOSE]       )
41   [LABEL]             LoadSceneFromDisk
41   [LABEL_COLON]       :
41   [PAREN_OPEN]        (
41   [TYPE]              id
41   [PAREN_CLOSE]       )
41   [WORD]              sender
41   [SEMICOLON]         ;
41   [NEWLINE]           
43   [NEG]               -
43   [PAREN_OPEN]        (
43   [TYPE]              void
43   [PAREN_CLOSE]       )
43   [WORD]              RemoveDisplayTimer
43   [SEMICOLON]         ;
43   [NEWLINE]           
44   [NEG]               -
44   [PAREN_OPEN]        (
44   [TYPE]              void
44   [PAREN_CLOSE]       )
44   [LABEL]             RegisterUpdateTimer
44   [LABEL_COLON]       :
44   [PAREN_OPEN]        (
44   [TYPE]              int
44   [PAREN_CLOSE]       )
44   [WORD]              frequency
44   [SEMICOLON]         ;
44   [NEWLINE]           
46   [NEG]               -
46   [PAREN_OPEN]        (
46   [TYPE]              void
46   [PAREN_CLOSE]       )
46   [LABEL]             refreshModifiedFile
46   [LABEL_COLON]       :
46   [PAREN_OPEN]        (
46   [TYPE]              NSAppleEventDescriptor
46   [PTR_TYPE]          *
46   [PAREN_CLOSE]       )
46   [TYPE]              event
46   [LABEL]             withReplyEvent
46   [LABEL_COLON]       :
46   [PAREN_OPEN]        (
46   [TYPE]              NSAppleEventDescriptor
46   [PTR_TYPE]          *
46   [PAREN_CLOSE]       )
46   [WORD]              replyEvent
46   [SEMICOLON]         ;
46   [NEWLINE]           
47   [NEG]               -
47   [PAREN_OPEN]        (
47   [TYPE]              void
47   [PAREN_CLOSE]       )
47   [LABEL]             closeFile
47   [LABEL_COLON]       :
47   [PAREN_OPEN]        (
47   [TYPE]              NSAppleEventDescriptor
47   [PTR_TYPE]          *
47   [PAREN_CLOSE]       )
47   [TYPE]              event
47   [LABEL]             withReplyEvent
47   [LABEL_COLON]       :
47   [PAREN_OPEN]        (
47   [TYPE]              NSAppleEventDescriptor
47   [PTR_TYPE]          *
47   [PAREN_CLOSE]       )
47   [WORD]              replyEvent
47   [SEMICOLON]         ;
47   [NEWLINE]           
49   [NEG]               -
49   [PAREN_OPEN]        (
49   [TYPE]              IBAction
49   [PAREN_CLOSE]       )
49   [LABEL]             ShowAboutDialog
49   [LABEL_COLON]       :
49   [PAREN_OPEN]        (
49   [TYPE]              id
49   [PAREN_CLOSE]       )
49   [WORD]              sender
49   [SEMICOLON]         ;
49   [NEWLINE]           
50   [NEG]               -
50   [PAREN_OPEN]        (
50   [TYPE]              IBAction
50   [PAREN_CLOSE]       )
50   [LABEL]             ShowPreferences
50   [LABEL_COLON]       :
50   [PAREN_OPEN]        (
50   [TYPE]              id
50   [PAREN_CLOSE]       )
50   [WORD]              sender
50   [SEMICOLON]         ;
50   [NEWLINE]           
51   [NEG]               -
51   [PAREN_OPEN]        (
51   [TYPE]              IBAction
51   [PAREN_CLOSE]       )
51   [LABEL]             ShowPackageManager
51   [LABEL_COLON]       :
51   [PAREN_OPEN]        (
51   [TYPE]              id
51   [PAREN_CLOSE]       )
51   [WORD]              sender
51   [SEMICOLON]         ;
51   [NEWLINE]           
53   [NEG]               -
53   [PAREN_OPEN]        (
53   [TYPE]              IBAction
53   [PAREN_CLOSE]       )
53   [LABEL]             delete
53   [LABEL_COLON]       :
53   [PAREN_OPEN]        (
53   [TYPE]              id
53   [PAREN_CLOSE]       )
53   [WORD]              sender
53   [SEMICOLON]         ;
53   [NEWLINE]           
54   [NEG]               -
54   [PAREN_OPEN]        (
54   [TYPE]              IBAction
54   [PAREN_CLOSE]       )
54   [LABEL]             copy
54   [LABEL_COLON]       :
54   [PAREN_OPEN]        (
54   [TYPE]              id
54   [PAREN_CLOSE]       )
54   [WORD]              action
54   [SEMICOLON]         ;
54   [NEWLINE]           
55   [NEG]               -
55   [PAREN_OPEN]        (
55   [TYPE]              IBAction
55   [PAREN_CLOSE]       )
55   [LABEL]             paste
55   [LABEL_COLON]       :
55   [PAREN_OPEN]        (
55   [TYPE]              id
55   [PAREN_CLOSE]       )
55   [WORD]              action
55   [SEMICOLON]         ;
55   [NEWLINE]           
56   [NEG]               -
56   [PAREN_OPEN]        (
56   [TYPE]              IBAction
56   [PAREN_CLOSE]       )
56   [LABEL]             duplicate
56   [LABEL_COLON]       :
56   [PAREN_OPEN]        (
56   [TYPE]              id
56   [PAREN_CLOSE]       )
56   [WORD]              action
56   [SEMICOLON]         ;
56   [NEWLINE]           
57   [NEG]               -
57   [PAREN_OPEN]        (
57   [TYPE]              IBAction
57   [PAREN_CLOSE]       )
57   [LABEL]             cut
57   [LABEL_COLON]       :
57   [PAREN_OPEN]        (
57   [TYPE]              id
57   [PAREN_CLOSE]       )
57   [WORD]              action
57   [SEMICOLON]         ;
57   [NEWLINE]           
58   [NEG]               -
58   [PAREN_OPEN]        (
58   [TYPE]              IBAction
58   [PAREN_CLOSE]       )
58   [LABEL]             selectAll
58   [LABEL_COLON]       :
58   [PAREN_OPEN]        (
58   [TYPE]              id
58   [PAREN_CLOSE]       )
58   [WORD]              action
58   [SEMICOLON]         ;
58   [NEWLINE]           
59   [NEG]               -
59   [PAREN_OPEN]        (
59   [TYPE]              IBAction
59   [PAREN_CLOSE]       )
59   [LABEL]             find
59   [LABEL_COLON]       :
59   [PAREN_OPEN]        (
59   [TYPE]              id
59   [PAREN_CLOSE]       )
59   [WORD]              action
59   [SEMICOLON]         ;
59   [NEWLINE]           
60   [NEG]               -
60   [PAREN_OPEN]        (
60   [TYPE]              IBAction
60   [PAREN_CLOSE]       )
60   [LABEL]             frameSelected
60   [LABEL_COLON]       :
60   [PAREN_OPEN]        (
60   [TYPE]              id
60   [PAREN_CLOSE]       )
60   [WORD]              action
60   [SEMICOLON]         ;
60   [NEWLINE]           
61   [NEG]               -
61   [PAREN_OPEN]        (
61   [TYPE]              IBAction
61   [PAREN_CLOSE]       )
61   [LABEL]             frameSelectedWithLock
61   [LABEL_COLON]       :
61   [PAREN_OPEN]        (
61   [TYPE]              id
61   [PAREN_CLOSE]       )
61   [WORD]              action
61   [SEMICOLON]         ;
61   [NEWLINE]           
63   [COMMENT_CPP]       // Assetstore protocol handler and registration
63   [NEWLINE]           
64   [NEG]               -
64   [PAREN_OPEN]        (
64   [TYPE]              void
64   [PAREN_CLOSE]       )
64   [WORD]              registerAssetStoreURLProtocol
64   [SEMICOLON]         ;
64   [NEWLINE]           
65   [NEG]               -
65   [PAREN_OPEN]        (
65   [TYPE]              void
65   [PAREN_CLOSE]       )
65   [LABEL]             getUrl
65   [LABEL_COLON]       :
65   [PAREN_OPEN]        (
65   [TYPE]              NSAppleEventDescriptor
65   [PTR_TYPE]          *
65   [PAREN_CLOSE]       )
65   [TYPE]              event
65   [LABEL]             withReplyEvent
65   [LABEL_COLON]       :
65   [PAREN_OPEN]        (
65   [TYPE]              NSAppleEventDescriptor
65   [PTR_TYPE]          *
65   [PAREN_CLOSE]       )
65   [WORD]              replyEvent
65   [SEMICOLON]         ;
65   [NEWLINE]           
67   [WORD]              @end
67   [NEWLINE]           
69   [PREPROC]           #
69   [PP_ENDIF]          endif
69   [NEWLINE]           