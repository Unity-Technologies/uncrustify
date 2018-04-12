Line [Token]             Text
1    [COMMENT_MULTI]     /*␤ File: ATColorTableController.m␤ Abstract: A controller used by the ATImageTextCell to edit the color property. It is implemented in an abstract enough way to be used by a class other than the cell. ␤ ␤ Version: 1.0␤ ␤ Disclaimer: IMPORTANT:  This Apple software is supplied to you by Apple␤ Inc. ("Apple") in consideration of your agreement to the following␤ terms, and your use, installation, modification or redistribution of␤ this Apple software constitutes acceptance of these terms.  If you do␤ not agree with these terms, please do not use, install, modify or␤ redistribute this Apple software.␤ ␤ In consideration of your agreement to abide by the following terms, and␤ subject to these terms, Apple grants you a personal, non-exclusive␤ license, under Apple's copyrights in this original Apple software (the␤ "Apple Software"), to use, reproduce, modify and redistribute the Apple␤ Software, with or without modifications, in source and/or binary forms;␤ provided that if you redistribute the Apple Software in its entirety and␤ without modifications, you must retain this notice and the following␤ text and disclaimers in all such redistributions of the Apple Software.␤ Neither the name, trademarks, service marks or logos of Apple Inc. may␤ be used to endorse or promote products derived from the Apple Software␤ without specific prior written permission from Apple.  Except as␤ expressly stated in this notice, no other rights or licenses, express or␤ implied, are granted by Apple herein, including but not limited to any␤ patent rights that may be infringed by your derivative works or by other␤ works in which the Apple Software may be incorporated.␤ ␤ The Apple Software is provided by Apple on an "AS IS" basis.  APPLE␤ MAKES NO WARRANTIES, EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION␤ THE IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY AND FITNESS␤ FOR A PARTICULAR PURPOSE, REGARDING THE APPLE SOFTWARE OR ITS USE AND␤ OPERATION ALONE OR IN COMBINATION WITH YOUR PRODUCTS.␤ ␤ IN NO EVENT SHALL APPLE BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL␤ OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF␤ SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS␤ INTERRUPTION) ARISING IN ANY WAY OUT OF THE USE, REPRODUCTION,␤ MODIFICATION AND/OR DISTRIBUTION OF THE APPLE SOFTWARE, HOWEVER CAUSED␤ AND WHETHER UNDER THEORY OF CONTRACT, TORT (INCLUDING NEGLIGENCE),␤ STRICT LIABILITY OR OTHERWISE, EVEN IF APPLE HAS BEEN ADVISED OF THE␤ POSSIBILITY OF SUCH DAMAGE.␤ ␤ Copyright (C) 2009 Apple Inc. All Rights Reserved.␤ ␤ */
47   [NEWLINE]           
49   [PREPROC]           #
49   [PP_INCLUDE]        import
49   [PREPROC_BODY]      "ATColorTableController.h"
49   [NEWLINE]           
50   [PREPROC]           #
50   [PP_INCLUDE]        import
50   [PREPROC_BODY]      "ATPopupWindow.h"
50   [NEWLINE]           
52   [OC_IMPL]           @implementation
52   [OC_CLASS]          ATColorTableController
52   [NEWLINE]           
54   [OC_SCOPE]          +
54   [PAREN_OPEN]        (
54   [TYPE]              ATColorTableController
54   [PTR_TYPE]          *
54   [PAREN_CLOSE]       )
54   [OC_MSG_DECL]       sharedColorTableController
54   [BRACE_OPEN]        {
54   [NEWLINE]           
55   [QUALIFIER]         static
55   [TYPE]              ATColorTableController
55   [PTR_TYPE]          *
55   [WORD]              gSharedColorTableController
55   [ASSIGN]            =
55   [WORD]              nil
55   [SEMICOLON]         ;
55   [NEWLINE]           
56   [IF]                if
56   [SPAREN_OPEN]       (
56   [WORD]              gSharedColorTableController
56   [COMPARE]           ==
56   [WORD]              nil
56   [SPAREN_CLOSE]      )
56   [BRACE_OPEN]        {
56   [NEWLINE]           
57   [WORD]              gSharedColorTableController
57   [ASSIGN]            =
57   [SQUARE_OPEN]       [
57   [SQUARE_OPEN]       [
57   [SQUARE_OPEN]       [
57   [OC_MSG_CLASS]      self
57   [OC_MSG_FUNC]       class
57   [SQUARE_CLOSE]      ]
57   [OC_MSG_FUNC]       alloc
57   [SQUARE_CLOSE]      ]
57   [OC_MSG_FUNC]       initWithNibName
57   [OC_COLON]          :
57   [STRING]            @"ColorTable"
57   [OC_MSG_NAME]       bundle
57   [OC_COLON]          :
57   [SQUARE_OPEN]       [
57   [OC_MSG_CLASS]      NSBundle
57   [OC_MSG_FUNC]       bundleForClass
57   [OC_COLON]          :
57   [SQUARE_OPEN]       [
57   [OC_MSG_CLASS]      self
57   [OC_MSG_FUNC]       class
57   [SQUARE_CLOSE]      ]
57   [SQUARE_CLOSE]      ]
57   [SQUARE_CLOSE]      ]
57   [SEMICOLON]         ;
57   [NEWLINE]           
58   [BRACE_CLOSE]       }
58   [NEWLINE]           
59   [RETURN]            return
59   [WORD]              gSharedColorTableController
59   [SEMICOLON]         ;
59   [NEWLINE]           
60   [BRACE_CLOSE]       }
60   [NEWLINE]           
62   [OC_DYNAMIC]        @synthesize
62   [WORD]              delegate
62   [ASSIGN]            =
62   [WORD]              _delegate
62   [SEMICOLON]         ;
62   [NEWLINE]           
63   [OC_DYNAMIC]        @dynamic
63   [WORD]              selectedColor
63   [COMMA]             ,
63   [WORD]              selectedColorName
63   [SEMICOLON]         ;
63   [NEWLINE]           
65   [OC_SCOPE]          -
65   [PAREN_OPEN]        (
65   [TYPE]              void
65   [PAREN_CLOSE]       )
65   [OC_MSG_DECL]       dealloc
65   [BRACE_OPEN]        {
65   [NEWLINE]           
66   [SQUARE_OPEN]       [
66   [OC_MSG_CLASS]      _colorList
66   [OC_MSG_FUNC]       release
66   [SQUARE_CLOSE]      ]
66   [SEMICOLON]         ;
66   [NEWLINE]           
67   [SQUARE_OPEN]       [
67   [OC_MSG_CLASS]      _colorNames
67   [OC_MSG_FUNC]       release
67   [SQUARE_CLOSE]      ]
67   [SEMICOLON]         ;
67   [NEWLINE]           
68   [SQUARE_OPEN]       [
68   [OC_MSG_CLASS]      _window
68   [OC_MSG_FUNC]       release
68   [SQUARE_CLOSE]      ]
68   [SEMICOLON]         ;
68   [NEWLINE]           
69   [SQUARE_OPEN]       [
69   [OC_MSG_CLASS]      super
69   [OC_MSG_FUNC]       dealloc
69   [SQUARE_CLOSE]      ]
69   [SEMICOLON]         ;
69   [NEWLINE]           
70   [BRACE_CLOSE]       }
70   [NEWLINE]           
72   [OC_SCOPE]          -
72   [PAREN_OPEN]        (
72   [TYPE]              void
72   [PAREN_CLOSE]       )
72   [OC_MSG_DECL]       loadView
72   [BRACE_OPEN]        {
72   [NEWLINE]           
73   [SQUARE_OPEN]       [
73   [OC_MSG_CLASS]      super
73   [OC_MSG_FUNC]       loadView
73   [SQUARE_CLOSE]      ]
73   [SEMICOLON]         ;
73   [NEWLINE]           
74   [WORD]              _colorList
74   [ASSIGN]            =
74   [SQUARE_OPEN]       [
74   [SQUARE_OPEN]       [
74   [OC_MSG_CLASS]      NSColorList
74   [OC_MSG_FUNC]       colorListNamed
74   [OC_COLON]          :
74   [STRING]            @"Crayons"
74   [SQUARE_CLOSE]      ]
74   [OC_MSG_FUNC]       retain
74   [SQUARE_CLOSE]      ]
74   [SEMICOLON]         ;
74   [NEWLINE]           
75   [WORD]              _colorNames
75   [ASSIGN]            =
75   [SQUARE_OPEN]       [
75   [SQUARE_OPEN]       [
75   [OC_MSG_CLASS]      _colorList
75   [OC_MSG_FUNC]       allKeys
75   [SQUARE_CLOSE]      ]
75   [OC_MSG_FUNC]       retain
75   [SQUARE_CLOSE]      ]
75   [SEMICOLON]         ;
75   [NEWLINE]           
76   [SQUARE_OPEN]       [
76   [OC_MSG_CLASS]      _tableColorList
76   [OC_MSG_FUNC]       setIntercellSpacing
76   [OC_COLON]          :
76   [FUNC_CALL]         NSMakeSize
76   [FPAREN_OPEN]       (
76   [NUMBER]            3
76   [COMMA]             ,
76   [NUMBER]            3
76   [FPAREN_CLOSE]      )
76   [SQUARE_CLOSE]      ]
76   [SEMICOLON]         ;
76   [NEWLINE]           
77   [SQUARE_OPEN]       [
77   [OC_MSG_CLASS]      _tableColorList
77   [OC_MSG_FUNC]       setTarget
77   [OC_COLON]          :
77   [THIS]              self
77   [SQUARE_CLOSE]      ]
77   [SEMICOLON]         ;
77   [NEWLINE]           
78   [SQUARE_OPEN]       [
78   [OC_MSG_CLASS]      _tableColorList
78   [OC_MSG_FUNC]       setAction
78   [OC_COLON]          :
78   [OC_SEL]            @selector
78   [PAREN_OPEN]        (
78   [OC_SEL_NAME]       _tableViewAction
78   [OC_SEL_NAME]       :
78   [PAREN_CLOSE]       )
78   [SQUARE_CLOSE]      ]
78   [SEMICOLON]         ;
78   [NEWLINE]           
79   [BRACE_CLOSE]       }
79   [NEWLINE]           
81   [OC_SCOPE]          -
81   [PAREN_OPEN]        (
81   [TYPE]              NSColor
81   [PTR_TYPE]          *
81   [PAREN_CLOSE]       )
81   [OC_MSG_DECL]       selectedColor
81   [BRACE_OPEN]        {
81   [NEWLINE]           
82   [TYPE]              NSString
82   [PTR_TYPE]          *
82   [WORD]              name
82   [ASSIGN]            =
82   [SQUARE_OPEN]       [
82   [OC_MSG_CLASS]      self
82   [OC_MSG_FUNC]       selectedColorName
82   [SQUARE_CLOSE]      ]
82   [SEMICOLON]         ;
82   [NEWLINE]           
83   [IF]                if
83   [SPAREN_OPEN]       (
83   [WORD]              name
83   [COMPARE]           !=
83   [WORD]              nil
83   [SPAREN_CLOSE]      )
83   [BRACE_OPEN]        {
83   [NEWLINE]           
84   [RETURN]            return
84   [SQUARE_OPEN]       [
84   [OC_MSG_CLASS]      _colorList
84   [OC_MSG_FUNC]       colorWithKey
84   [OC_COLON]          :
84   [WORD]              name
84   [SQUARE_CLOSE]      ]
84   [SEMICOLON]         ;
84   [NEWLINE]           
85   [BRACE_CLOSE]       }
85   [ELSE]              else
85   [BRACE_OPEN]        {
85   [NEWLINE]           
86   [RETURN]            return
86   [WORD]              nil
86   [SEMICOLON]         ;
86   [NEWLINE]           
87   [BRACE_CLOSE]       }
87   [NEWLINE]           
88   [BRACE_CLOSE]       }
88   [NEWLINE]           
90   [OC_SCOPE]          -
90   [PAREN_OPEN]        (
90   [TYPE]              NSString
90   [PTR_TYPE]          *
90   [PAREN_CLOSE]       )
90   [OC_MSG_DECL]       selectedColorName
90   [BRACE_OPEN]        {
90   [NEWLINE]           
91   [IF]                if
91   [SPAREN_OPEN]       (
91   [SQUARE_OPEN]       [
91   [OC_MSG_CLASS]      _tableColorList
91   [OC_MSG_FUNC]       selectedRow
91   [SQUARE_CLOSE]      ]
91   [COMPARE]           !=
91   [NEG]               -
91   [NUMBER]            1
91   [SPAREN_CLOSE]      )
91   [BRACE_OPEN]        {
91   [NEWLINE]           
92   [RETURN]            return
92   [SQUARE_OPEN]       [
92   [OC_MSG_CLASS]      _colorNames
92   [OC_MSG_FUNC]       objectAtIndex
92   [OC_COLON]          :
92   [SQUARE_OPEN]       [
92   [OC_MSG_CLASS]      _tableColorList
92   [OC_MSG_FUNC]       selectedRow
92   [SQUARE_CLOSE]      ]
92   [SQUARE_CLOSE]      ]
92   [SEMICOLON]         ;
92   [NEWLINE]           
93   [BRACE_CLOSE]       }
93   [ELSE]              else
93   [BRACE_OPEN]        {
93   [NEWLINE]           
94   [RETURN]            return
94   [WORD]              nil
94   [SEMICOLON]         ;
94   [NEWLINE]           
95   [BRACE_CLOSE]       }
95   [NEWLINE]           
96   [BRACE_CLOSE]       }
96   [NEWLINE]           
98   [OC_SCOPE]          -
98   [PAREN_OPEN]        (
98   [TYPE]              void
98   [PAREN_CLOSE]       )
98   [OC_MSG_DECL]       _selectColor
98   [OC_COLON]          :
98   [PAREN_OPEN]        (
98   [TYPE]              NSColor
98   [PTR_TYPE]          *
98   [PAREN_CLOSE]       )
98   [WORD]              color
98   [BRACE_OPEN]        {
98   [NEWLINE]           
99   [COMMENT_CPP]       // Search for that color in our list
99   [NEWLINE]           
100  [TYPE]              NSInteger
100  [WORD]              row
100  [ASSIGN]            =
100  [NUMBER]            0
100  [SEMICOLON]         ;
100  [NEWLINE]           
101  [FOR]               for
101  [SPAREN_OPEN]       (
101  [TYPE]              NSString
101  [PTR_TYPE]          *
101  [WORD]              name
101  [IN]                in
101  [WORD]              _colorNames
101  [SPAREN_CLOSE]      )
101  [BRACE_OPEN]        {
101  [NEWLINE]           
102  [TYPE]              NSColor
102  [PTR_TYPE]          *
102  [WORD]              colorInList
102  [ASSIGN]            =
102  [SQUARE_OPEN]       [
102  [OC_MSG_CLASS]      _colorList
102  [OC_MSG_FUNC]       colorWithKey
102  [OC_COLON]          :
102  [WORD]              name
102  [SQUARE_CLOSE]      ]
102  [SEMICOLON]         ;
102  [NEWLINE]           
103  [IF]                if
103  [SPAREN_OPEN]       (
103  [SQUARE_OPEN]       [
103  [OC_MSG_CLASS]      color
103  [OC_MSG_FUNC]       isEqual
103  [OC_COLON]          :
103  [WORD]              colorInList
103  [SQUARE_CLOSE]      ]
103  [SPAREN_CLOSE]      )
103  [BRACE_OPEN]        {
103  [NEWLINE]           
104  [BREAK]             break
104  [SEMICOLON]         ;
104  [NEWLINE]           
105  [BRACE_CLOSE]       }
105  [NEWLINE]           
106  [WORD]              row
106  [INCDEC_AFTER]      ++
106  [SEMICOLON]         ;
106  [NEWLINE]           
107  [BRACE_CLOSE]       }
107  [NEWLINE]           
108  [WORD]              _updatingSelection
108  [ASSIGN]            =
108  [WORD]              YES
108  [SEMICOLON]         ;
108  [NEWLINE]           
109  [IF]                if
109  [SPAREN_OPEN]       (
109  [WORD]              row
109  [COMPARE]           !=
109  [NEG]               -
109  [NUMBER]            1
109  [SPAREN_CLOSE]      )
109  [BRACE_OPEN]        {
109  [NEWLINE]           
110  [SQUARE_OPEN]       [
110  [OC_MSG_CLASS]      _tableColorList
110  [OC_MSG_FUNC]       scrollRowToVisible
110  [OC_COLON]          :
110  [WORD]              row
110  [SQUARE_CLOSE]      ]
110  [SEMICOLON]         ;
110  [NEWLINE]           
111  [SQUARE_OPEN]       [
111  [OC_MSG_CLASS]      _tableColorList
111  [OC_MSG_FUNC]       selectRowIndexes
111  [OC_COLON]          :
111  [SQUARE_OPEN]       [
111  [OC_MSG_CLASS]      NSIndexSet
111  [OC_MSG_FUNC]       indexSetWithIndex
111  [OC_COLON]          :
111  [WORD]              row
111  [SQUARE_CLOSE]      ]
111  [OC_MSG_NAME]       byExtendingSelection
111  [OC_COLON]          :
111  [WORD]              NO
111  [SQUARE_CLOSE]      ]
111  [SEMICOLON]         ;
111  [NEWLINE]           
112  [BRACE_CLOSE]       }
112  [ELSE]              else
112  [BRACE_OPEN]        {
112  [NEWLINE]           
113  [SQUARE_OPEN]       [
113  [OC_MSG_CLASS]      _tableColorList
113  [OC_MSG_FUNC]       scrollRowToVisible
113  [OC_COLON]          :
113  [NUMBER]            0
113  [SQUARE_CLOSE]      ]
113  [SEMICOLON]         ;
113  [NEWLINE]           
114  [SQUARE_OPEN]       [
114  [OC_MSG_CLASS]      _tableColorList
114  [OC_MSG_FUNC]       selectRowIndexes
114  [OC_COLON]          :
114  [SQUARE_OPEN]       [
114  [OC_MSG_CLASS]      NSIndexSet
114  [OC_MSG_FUNC]       indexSet
114  [SQUARE_CLOSE]      ]
114  [OC_MSG_NAME]       byExtendingSelection
114  [OC_COLON]          :
114  [WORD]              NO
114  [SQUARE_CLOSE]      ]
114  [SEMICOLON]         ;
114  [NEWLINE]           
115  [BRACE_CLOSE]       }
115  [NEWLINE]           
116  [WORD]              _updatingSelection
116  [ASSIGN]            =
116  [WORD]              NO
116  [SEMICOLON]         ;
116  [NEWLINE]           
117  [BRACE_CLOSE]       }
117  [NEWLINE]           
119  [OC_SCOPE]          -
119  [PAREN_OPEN]        (
119  [TYPE]              void
119  [PAREN_CLOSE]       )
119  [OC_MSG_DECL]       _createWindowIfNeeded
119  [BRACE_OPEN]        {
119  [NEWLINE]           
120  [IF]                if
120  [SPAREN_OPEN]       (
120  [WORD]              _window
120  [COMPARE]           ==
120  [WORD]              nil
120  [SPAREN_CLOSE]      )
120  [BRACE_OPEN]        {
120  [NEWLINE]           
121  [TYPE]              NSRect
121  [WORD]              viewFrame
121  [ASSIGN]            =
121  [THIS]              self
121  [MEMBER]            .
121  [WORD]              view
121  [MEMBER]            .
121  [WORD]              frame
121  [SEMICOLON]         ;
121  [NEWLINE]           
122  [COMMENT_CPP]       // Create and setup our window
122  [NEWLINE]           
123  [WORD]              _window
123  [ASSIGN]            =
123  [SQUARE_OPEN]       [
123  [SQUARE_OPEN]       [
123  [OC_MSG_CLASS]      ATPopupWindow
123  [OC_MSG_FUNC]       alloc
123  [SQUARE_CLOSE]      ]
123  [OC_MSG_FUNC]       initWithContentRect
123  [OC_COLON]          :
123  [TYPE]              viewFrame
123  [OC_MSG_NAME]       styleMask
123  [OC_COLON]          :
123  [TYPE]              NSBorderlessWindowMask
123  [OC_MSG_NAME]       backing
123  [OC_COLON]          :
123  [TYPE]              NSBackingStoreBuffered
123  [OC_MSG_NAME]       defer
123  [OC_COLON]          :
123  [WORD]              NO
123  [SQUARE_CLOSE]      ]
123  [SEMICOLON]         ;
123  [NEWLINE]           
124  [SQUARE_OPEN]       [
124  [OC_MSG_CLASS]      _window
124  [OC_MSG_FUNC]       setReleasedWhenClosed
124  [OC_COLON]          :
124  [WORD]              NO
124  [SQUARE_CLOSE]      ]
124  [SEMICOLON]         ;
124  [NEWLINE]           
125  [SQUARE_OPEN]       [
125  [OC_MSG_CLASS]      _window
125  [OC_MSG_FUNC]       setLevel
125  [OC_COLON]          :
125  [WORD]              NSPopUpMenuWindowLevel
125  [SQUARE_CLOSE]      ]
125  [SEMICOLON]         ;
125  [NEWLINE]           
126  [SQUARE_OPEN]       [
126  [OC_MSG_CLASS]      _window
126  [OC_MSG_FUNC]       setHasShadow
126  [OC_COLON]          :
126  [WORD]              YES
126  [SQUARE_CLOSE]      ]
126  [SEMICOLON]         ;
126  [NEWLINE]           
127  [SQUARE_OPEN]       [
127  [SQUARE_OPEN]       [
127  [OC_MSG_CLASS]      _window
127  [OC_MSG_FUNC]       contentView
127  [SQUARE_CLOSE]      ]
127  [OC_MSG_FUNC]       addSubview
127  [OC_COLON]          :
127  [THIS]              self
127  [MEMBER]            .
127  [WORD]              view
127  [SQUARE_CLOSE]      ]
127  [SEMICOLON]         ;
127  [NEWLINE]           
128  [SQUARE_OPEN]       [
128  [OC_MSG_CLASS]      _window
128  [OC_MSG_FUNC]       makeFirstResponder
128  [OC_COLON]          :
128  [WORD]              _tableColorList
128  [SQUARE_CLOSE]      ]
128  [SEMICOLON]         ;
128  [NEWLINE]           
130  [COMMENT_CPP]       // Make the window have a clear color and be non-opaque for our pop-up animation
130  [NEWLINE]           
131  [SQUARE_OPEN]       [
131  [OC_MSG_CLASS]      _window
131  [OC_MSG_FUNC]       setBackgroundColor
131  [OC_COLON]          :
131  [SQUARE_OPEN]       [
131  [OC_MSG_CLASS]      NSColor
131  [OC_MSG_FUNC]       clearColor
131  [SQUARE_CLOSE]      ]
131  [SQUARE_CLOSE]      ]
131  [SEMICOLON]         ;
131  [NEWLINE]           
132  [SQUARE_OPEN]       [
132  [OC_MSG_CLASS]      _window
132  [OC_MSG_FUNC]       setOpaque
132  [OC_COLON]          :
132  [WORD]              NO
132  [SQUARE_CLOSE]      ]
132  [SEMICOLON]         ;
132  [NEWLINE]           
133  [BRACE_CLOSE]       }
133  [NEWLINE]           
134  [BRACE_CLOSE]       }
134  [NEWLINE]           
136  [OC_SCOPE]          -
136  [PAREN_OPEN]        (
136  [TYPE]              void
136  [PAREN_CLOSE]       )
136  [OC_MSG_DECL]       _windowClosed
136  [OC_COLON]          :
136  [PAREN_OPEN]        (
136  [TYPE]              NSNotification
136  [PTR_TYPE]          *
136  [PAREN_CLOSE]       )
136  [WORD]              note
136  [BRACE_OPEN]        {
136  [NEWLINE]           
137  [IF]                if
137  [SPAREN_OPEN]       (
137  [WORD]              _eventMonitor
137  [SPAREN_CLOSE]      )
137  [BRACE_OPEN]        {
137  [NEWLINE]           
138  [SQUARE_OPEN]       [
138  [OC_MSG_CLASS]      NSEvent
138  [OC_MSG_FUNC]       removeMonitor
138  [OC_COLON]          :
138  [WORD]              _eventMonitor
138  [SQUARE_CLOSE]      ]
138  [SEMICOLON]         ;
138  [NEWLINE]           
139  [WORD]              _eventMonitor
139  [ASSIGN]            =
139  [WORD]              nil
139  [SEMICOLON]         ;
139  [NEWLINE]           
140  [BRACE_CLOSE]       }
140  [NEWLINE]           
141  [SQUARE_OPEN]       [
141  [SQUARE_OPEN]       [
141  [OC_MSG_CLASS]      NSNotificationCenter
141  [OC_MSG_FUNC]       defaultCenter
141  [SQUARE_CLOSE]      ]
141  [OC_MSG_FUNC]       removeObserver
141  [OC_COLON]          :
141  [THIS]              self
141  [OC_MSG_NAME]       name
141  [OC_COLON]          :
141  [TYPE]              NSWindowWillCloseNotification
141  [OC_MSG_NAME]       object
141  [OC_COLON]          :
141  [WORD]              _window
141  [SQUARE_CLOSE]      ]
141  [SEMICOLON]         ;
141  [NEWLINE]           
142  [SQUARE_OPEN]       [
142  [SQUARE_OPEN]       [
142  [OC_MSG_CLASS]      NSNotificationCenter
142  [OC_MSG_FUNC]       defaultCenter
142  [SQUARE_CLOSE]      ]
142  [OC_MSG_FUNC]       removeObserver
142  [OC_COLON]          :
142  [THIS]              self
142  [OC_MSG_NAME]       name
142  [OC_COLON]          :
142  [TYPE]              NSApplicationDidResignActiveNotification
142  [OC_MSG_NAME]       object
142  [OC_COLON]          :
142  [WORD]              nil
142  [SQUARE_CLOSE]      ]
142  [SEMICOLON]         ;
142  [NEWLINE]           
143  [BRACE_CLOSE]       }
143  [NEWLINE]           
145  [OC_SCOPE]          -
145  [PAREN_OPEN]        (
145  [TYPE]              void
145  [PAREN_CLOSE]       )
145  [OC_MSG_DECL]       _closeAndSendAction
145  [OC_COLON]          :
145  [PAREN_OPEN]        (
145  [TYPE]              BOOL
145  [PAREN_CLOSE]       )
145  [WORD]              sendAction
145  [BRACE_OPEN]        {
145  [NEWLINE]           
146  [SQUARE_OPEN]       [
146  [OC_MSG_CLASS]      _window
146  [OC_MSG_FUNC]       close
146  [SQUARE_CLOSE]      ]
146  [SEMICOLON]         ;
146  [NEWLINE]           
147  [IF]                if
147  [SPAREN_OPEN]       (
147  [WORD]              sendAction
147  [SPAREN_CLOSE]      )
147  [BRACE_OPEN]        {
147  [NEWLINE]           
148  [IF]                if
148  [SPAREN_OPEN]       (
148  [SQUARE_OPEN]       [
148  [OC_MSG_CLASS]      self
148  [MEMBER]            .
148  [TYPE]              delegate
148  [OC_MSG_FUNC]       respondsToSelector
148  [OC_COLON]          :
148  [OC_SEL]            @selector
148  [PAREN_OPEN]        (
148  [OC_SEL_NAME]       colorTableController
148  [OC_SEL_NAME]       :
148  [OC_SEL_NAME]       didChooseColor
148  [OC_SEL_NAME]       :
148  [OC_SEL_NAME]       named
148  [OC_SEL_NAME]       :
148  [PAREN_CLOSE]       )
148  [SQUARE_CLOSE]      ]
148  [SPAREN_CLOSE]      )
148  [BRACE_OPEN]        {
148  [NEWLINE]           
149  [SQUARE_OPEN]       [
149  [OC_MSG_CLASS]      self
149  [MEMBER]            .
149  [TYPE]              delegate
149  [OC_MSG_FUNC]       colorTableController
149  [OC_COLON]          :
149  [THIS]              self
149  [OC_MSG_NAME]       didChooseColor
149  [OC_COLON]          :
149  [THIS]              self
149  [MEMBER]            .
149  [TYPE]              selectedColor
149  [OC_MSG_NAME]       named
149  [OC_COLON]          :
149  [THIS]              self
149  [MEMBER]            .
149  [WORD]              selectedColorName
149  [SQUARE_CLOSE]      ]
149  [SEMICOLON]         ;
149  [NEWLINE]           
150  [BRACE_CLOSE]       }
150  [NEWLINE]           
151  [BRACE_CLOSE]       }
151  [ELSE]              else
151  [BRACE_OPEN]        {
151  [NEWLINE]           
152  [IF]                if
152  [SPAREN_OPEN]       (
152  [SQUARE_OPEN]       [
152  [OC_MSG_CLASS]      self
152  [MEMBER]            .
152  [TYPE]              delegate
152  [OC_MSG_FUNC]       respondsToSelector
152  [OC_COLON]          :
152  [OC_SEL]            @selector
152  [PAREN_OPEN]        (
152  [OC_SEL_NAME]       didCancelColorTableController
152  [OC_SEL_NAME]       :
152  [PAREN_CLOSE]       )
152  [SQUARE_CLOSE]      ]
152  [SPAREN_CLOSE]      )
152  [BRACE_OPEN]        {
152  [NEWLINE]           
153  [SQUARE_OPEN]       [
153  [OC_MSG_CLASS]      self
153  [MEMBER]            .
153  [TYPE]              delegate
153  [OC_MSG_FUNC]       didCancelColorTableController
153  [OC_COLON]          :
153  [THIS]              self
153  [SQUARE_CLOSE]      ]
153  [SEMICOLON]         ;
153  [NEWLINE]           
154  [BRACE_CLOSE]       }
154  [NEWLINE]           
155  [BRACE_CLOSE]       }
155  [NEWLINE]           
156  [BRACE_CLOSE]       }
156  [NEWLINE]           
158  [OC_SCOPE]          -
158  [PAREN_OPEN]        (
158  [TYPE]              void
158  [PAREN_CLOSE]       )
158  [OC_MSG_DECL]       _windowShouldClose
158  [OC_COLON]          :
158  [PAREN_OPEN]        (
158  [TYPE]              NSNotification
158  [PTR_TYPE]          *
158  [PAREN_CLOSE]       )
158  [WORD]              note
158  [BRACE_OPEN]        {
158  [NEWLINE]           
159  [SQUARE_OPEN]       [
159  [OC_MSG_CLASS]      self
159  [OC_MSG_FUNC]       _closeAndSendAction
159  [OC_COLON]          :
159  [WORD]              NO
159  [SQUARE_CLOSE]      ]
159  [SEMICOLON]         ;
159  [NEWLINE]           
160  [BRACE_CLOSE]       }
160  [NEWLINE]           
162  [OC_SCOPE]          -
162  [PAREN_OPEN]        (
162  [TYPE]              void
162  [PAREN_CLOSE]       )
162  [OC_MSG_DECL]       editColor
162  [OC_COLON]          :
162  [PAREN_OPEN]        (
162  [TYPE]              NSColor
162  [PTR_TYPE]          *
162  [PAREN_CLOSE]       )
162  [TYPE]              color
162  [WORD]              locatedAtScreenRect
162  [OC_COLON]          :
162  [PAREN_OPEN]        (
162  [TYPE]              NSRect
162  [PAREN_CLOSE]       )
162  [WORD]              rect
162  [BRACE_OPEN]        {
162  [NEWLINE]           
163  [SQUARE_OPEN]       [
163  [OC_MSG_CLASS]      self
163  [OC_MSG_FUNC]       _createWindowIfNeeded
163  [SQUARE_CLOSE]      ]
163  [SEMICOLON]         ;
163  [NEWLINE]           
164  [SQUARE_OPEN]       [
164  [OC_MSG_CLASS]      self
164  [OC_MSG_FUNC]       _selectColor
164  [OC_COLON]          :
164  [WORD]              color
164  [SQUARE_CLOSE]      ]
164  [SEMICOLON]         ;
164  [NEWLINE]           
165  [TYPE]              NSPoint
165  [WORD]              origin
165  [ASSIGN]            =
165  [WORD]              rect
165  [MEMBER]            .
165  [WORD]              origin
165  [SEMICOLON]         ;
165  [NEWLINE]           
166  [TYPE]              NSRect
166  [WORD]              windowFrame
166  [ASSIGN]            =
166  [SQUARE_OPEN]       [
166  [OC_MSG_CLASS]      _window
166  [OC_MSG_FUNC]       frame
166  [SQUARE_CLOSE]      ]
166  [SEMICOLON]         ;
166  [NEWLINE]           
167  [COMMENT_CPP]       // The origin is the lower left; subtract the window's height
167  [NEWLINE]           
168  [TYPE]              origin
168  [MEMBER]            .
168  [WORD]              y
168  [ASSIGN]            -=
168  [FUNC_CALL]         NSHeight
168  [FPAREN_OPEN]       (
168  [WORD]              windowFrame
168  [FPAREN_CLOSE]      )
168  [SEMICOLON]         ;
168  [NEWLINE]           
169  [COMMENT_CPP]       // Center the popup window under the rect
169  [NEWLINE]           
170  [TYPE]              origin
170  [MEMBER]            .
170  [WORD]              y
170  [ASSIGN]            +=
170  [FUNC_CALL]         floor
170  [FPAREN_OPEN]       (
170  [FUNC_CALL]         NSHeight
170  [FPAREN_OPEN]       (
170  [WORD]              rect
170  [FPAREN_CLOSE]      )
170  [ARITH]             /
170  [NUMBER_FP]         3.0
170  [FPAREN_CLOSE]      )
170  [SEMICOLON]         ;
170  [NEWLINE]           
171  [TYPE]              origin
171  [MEMBER]            .
171  [WORD]              x
171  [ASSIGN]            -=
171  [FUNC_CALL]         floor
171  [FPAREN_OPEN]       (
171  [FUNC_CALL]         NSWidth
171  [FPAREN_OPEN]       (
171  [WORD]              windowFrame
171  [FPAREN_CLOSE]      )
171  [ARITH]             /
171  [NUMBER_FP]         2.0
171  [FPAREN_CLOSE]      )
171  [SEMICOLON]         ;
171  [NEWLINE]           
172  [TYPE]              origin
172  [MEMBER]            .
172  [WORD]              x
172  [ASSIGN]            +=
172  [FUNC_CALL]         floor
172  [FPAREN_OPEN]       (
172  [FUNC_CALL]         NSWidth
172  [FPAREN_OPEN]       (
172  [WORD]              rect
172  [FPAREN_CLOSE]      )
172  [ARITH]             /
172  [NUMBER_FP]         2.0
172  [FPAREN_CLOSE]      )
172  [SEMICOLON]         ;
172  [NEWLINE]           
174  [SQUARE_OPEN]       [
174  [OC_MSG_CLASS]      _window
174  [OC_MSG_FUNC]       setFrameOrigin
174  [OC_COLON]          :
174  [WORD]              origin
174  [SQUARE_CLOSE]      ]
174  [SEMICOLON]         ;
174  [NEWLINE]           
175  [SQUARE_OPEN]       [
175  [OC_MSG_CLASS]      _window
175  [OC_MSG_FUNC]       popup
175  [SQUARE_CLOSE]      ]
175  [SEMICOLON]         ;
175  [NEWLINE]           
177  [COMMENT_CPP]       // Add some watches on the window and application
177  [NEWLINE]           
178  [SQUARE_OPEN]       [
178  [SQUARE_OPEN]       [
178  [OC_MSG_CLASS]      NSNotificationCenter
178  [OC_MSG_FUNC]       defaultCenter
178  [SQUARE_CLOSE]      ]
178  [OC_MSG_FUNC]       addObserver
178  [OC_COLON]          :
178  [THIS]              self
178  [NEWLINE]           
179  [OC_MSG_NAME]       selector
179  [OC_COLON]          :
179  [OC_SEL]            @selector
179  [PAREN_OPEN]        (
179  [OC_SEL_NAME]       _windowClosed
179  [OC_SEL_NAME]       :
179  [PAREN_CLOSE]       )
179  [NEWLINE]           
180  [OC_MSG_NAME]       name
180  [OC_COLON]          :
180  [TYPE]              NSWindowWillCloseNotification
180  [NEWLINE]           
181  [OC_MSG_NAME]       object
181  [OC_COLON]          :
181  [WORD]              _window
181  [SQUARE_CLOSE]      ]
181  [SEMICOLON]         ;
181  [NEWLINE]           
183  [SQUARE_OPEN]       [
183  [SQUARE_OPEN]       [
183  [OC_MSG_CLASS]      NSNotificationCenter
183  [OC_MSG_FUNC]       defaultCenter
183  [SQUARE_CLOSE]      ]
183  [OC_MSG_FUNC]       addObserver
183  [OC_COLON]          :
183  [THIS]              self
183  [OC_MSG_NAME]       selector
183  [OC_COLON]          :
183  [OC_SEL]            @selector
183  [PAREN_OPEN]        (
183  [OC_SEL_NAME]       _windowShouldClose
183  [OC_SEL_NAME]       :
183  [PAREN_CLOSE]       )
183  [OC_MSG_NAME]       name
183  [OC_COLON]          :
183  [TYPE]              NSApplicationDidResignActiveNotification
183  [OC_MSG_NAME]       object
183  [OC_COLON]          :
183  [WORD]              nil
183  [SQUARE_CLOSE]      ]
183  [SEMICOLON]         ;
183  [NEWLINE]           
185  [COMMENT_CPP]       // Start watching events to figure out when to close the window
185  [NEWLINE]           
186  [FUNC_CALL]         NSAssert
186  [FPAREN_OPEN]       (
186  [WORD]              _eventMonitor
186  [COMPARE]           ==
186  [WORD]              nil
186  [COMMA]             ,
186  [STRING]            @"_eventMonitor should not be created yet"
186  [FPAREN_CLOSE]      )
186  [SEMICOLON]         ;
186  [NEWLINE]           
187  [WORD]              _eventMonitor
187  [ASSIGN]            =
187  [SQUARE_OPEN]       [
187  [OC_MSG_CLASS]      NSEvent
187  [OC_MSG_FUNC]       addLocalMonitorForEventsMatchingMask
187  [OC_COLON]          :
187  [WORD]              NSLeftMouseDownMask
187  [ARITH]             |
187  [WORD]              NSRightMouseDownMask
187  [ARITH]             |
187  [WORD]              NSOtherMouseDownMask
187  [ARITH]             |
187  [TYPE]              NSKeyDownMask
187  [OC_MSG_NAME]       handler
187  [OC_COLON]          :
187  [OC_BLOCK_CARET]    ^
187  [FPAREN_OPEN]       (
187  [TYPE]              NSEvent
187  [PTR_TYPE]          *
187  [WORD]              incomingEvent
187  [FPAREN_CLOSE]      )
187  [BRACE_OPEN]        {
187  [NEWLINE]           
188  [TYPE]              NSEvent
188  [PTR_TYPE]          *
188  [WORD]              result
188  [ASSIGN]            =
188  [WORD]              incomingEvent
188  [SEMICOLON]         ;
188  [NEWLINE]           
189  [TYPE]              NSWindow
189  [PTR_TYPE]          *
189  [WORD]              targetWindowForEvent
189  [ASSIGN]            =
189  [SQUARE_OPEN]       [
189  [OC_MSG_CLASS]      incomingEvent
189  [OC_MSG_FUNC]       window
189  [SQUARE_CLOSE]      ]
189  [SEMICOLON]         ;
189  [NEWLINE]           
190  [IF]                if
190  [SPAREN_OPEN]       (
190  [WORD]              targetWindowForEvent
190  [COMPARE]           !=
190  [WORD]              _window
190  [SPAREN_CLOSE]      )
190  [BRACE_OPEN]        {
190  [NEWLINE]           
191  [SQUARE_OPEN]       [
191  [OC_MSG_CLASS]      self
191  [OC_MSG_FUNC]       _closeAndSendAction
191  [OC_COLON]          :
191  [WORD]              NO
191  [SQUARE_CLOSE]      ]
191  [SEMICOLON]         ;
191  [NEWLINE]           
192  [BRACE_CLOSE]       }
192  [ELSE]              else
192  [ELSEIF]            if
192  [SPAREN_OPEN]       (
192  [SQUARE_OPEN]       [
192  [OC_MSG_CLASS]      incomingEvent
192  [OC_MSG_FUNC]       type
192  [SQUARE_CLOSE]      ]
192  [COMPARE]           ==
192  [WORD]              NSKeyDown
192  [SPAREN_CLOSE]      )
192  [BRACE_OPEN]        {
192  [NEWLINE]           
193  [IF]                if
193  [SPAREN_OPEN]       (
193  [SQUARE_OPEN]       [
193  [OC_MSG_CLASS]      incomingEvent
193  [OC_MSG_FUNC]       keyCode
193  [SQUARE_CLOSE]      ]
193  [COMPARE]           ==
193  [NUMBER]            53
193  [SPAREN_CLOSE]      )
193  [BRACE_OPEN]        {
193  [NEWLINE]           
194  [COMMENT_CPP]       // Escape
194  [NEWLINE]           
195  [SQUARE_OPEN]       [
195  [OC_MSG_CLASS]      self
195  [OC_MSG_FUNC]       _closeAndSendAction
195  [OC_COLON]          :
195  [WORD]              NO
195  [SQUARE_CLOSE]      ]
195  [SEMICOLON]         ;
195  [NEWLINE]           
196  [WORD]              result
196  [ASSIGN]            =
196  [WORD]              nil
196  [SEMICOLON]         ;
196  [COMMENT_CPP]       // Don't process the event
196  [NEWLINE]           
197  [BRACE_CLOSE]       }
197  [ELSE]              else
197  [ELSEIF]            if
197  [SPAREN_OPEN]       (
197  [SQUARE_OPEN]       [
197  [OC_MSG_CLASS]      incomingEvent
197  [OC_MSG_FUNC]       keyCode
197  [SQUARE_CLOSE]      ]
197  [COMPARE]           ==
197  [NUMBER]            36
197  [SPAREN_CLOSE]      )
197  [BRACE_OPEN]        {
197  [NEWLINE]           
198  [COMMENT_CPP]       // Enter
198  [NEWLINE]           
199  [SQUARE_OPEN]       [
199  [OC_MSG_CLASS]      self
199  [OC_MSG_FUNC]       _closeAndSendAction
199  [OC_COLON]          :
199  [WORD]              YES
199  [SQUARE_CLOSE]      ]
199  [SEMICOLON]         ;
199  [NEWLINE]           
200  [WORD]              result
200  [ASSIGN]            =
200  [WORD]              nil
200  [SEMICOLON]         ;
200  [NEWLINE]           
201  [BRACE_CLOSE]       }
201  [NEWLINE]           
202  [BRACE_CLOSE]       }
202  [NEWLINE]           
203  [RETURN]            return
203  [WORD]              result
203  [SEMICOLON]         ;
203  [NEWLINE]           
204  [BRACE_CLOSE]       }
204  [SQUARE_CLOSE]      ]
204  [SEMICOLON]         ;
204  [NEWLINE]           
205  [BRACE_CLOSE]       }
205  [NEWLINE]           
207  [OC_SCOPE]          -
207  [PAREN_OPEN]        (
207  [TYPE]              NSInteger
207  [PAREN_CLOSE]       )
207  [OC_MSG_DECL]       numberOfRowsInTableView
207  [OC_COLON]          :
207  [PAREN_OPEN]        (
207  [TYPE]              NSTableView
207  [PTR_TYPE]          *
207  [PAREN_CLOSE]       )
207  [WORD]              tableView
207  [BRACE_OPEN]        {
207  [NEWLINE]           
208  [RETURN]            return
208  [WORD]              _colorNames
208  [MEMBER]            .
208  [WORD]              count
208  [SEMICOLON]         ;
208  [NEWLINE]           
209  [BRACE_CLOSE]       }
209  [NEWLINE]           
211  [OC_SCOPE]          -
211  [PAREN_OPEN]        (
211  [TYPE]              id
211  [PAREN_CLOSE]       )
211  [OC_MSG_DECL]       tableView
211  [OC_COLON]          :
211  [PAREN_OPEN]        (
211  [TYPE]              NSTableView
211  [PTR_TYPE]          *
211  [PAREN_CLOSE]       )
211  [TYPE]              tableView
211  [WORD]              objectValueForTableColumn
211  [OC_COLON]          :
211  [PAREN_OPEN]        (
211  [TYPE]              NSTableColumn
211  [PTR_TYPE]          *
211  [PAREN_CLOSE]       )
211  [TYPE]              tableColumn
211  [WORD]              row
211  [OC_COLON]          :
211  [PAREN_OPEN]        (
211  [TYPE]              NSInteger
211  [PAREN_CLOSE]       )
211  [WORD]              row
211  [BRACE_OPEN]        {
211  [NEWLINE]           
212  [RETURN]            return
212  [SQUARE_OPEN]       [
212  [OC_MSG_CLASS]      _colorNames
212  [OC_MSG_FUNC]       objectAtIndex
212  [OC_COLON]          :
212  [WORD]              row
212  [SQUARE_CLOSE]      ]
212  [SEMICOLON]         ;
212  [NEWLINE]           
213  [BRACE_CLOSE]       }
213  [NEWLINE]           
215  [OC_SCOPE]          -
215  [PAREN_OPEN]        (
215  [TYPE]              void
215  [PAREN_CLOSE]       )
215  [OC_MSG_DECL]       tableView
215  [OC_COLON]          :
215  [PAREN_OPEN]        (
215  [TYPE]              NSTableView
215  [PTR_TYPE]          *
215  [PAREN_CLOSE]       )
215  [TYPE]              tableView
215  [WORD]              willDisplayCell
215  [OC_COLON]          :
215  [PAREN_OPEN]        (
215  [TYPE]              id
215  [PAREN_CLOSE]       )
215  [TYPE]              cell
215  [WORD]              forTableColumn
215  [OC_COLON]          :
215  [PAREN_OPEN]        (
215  [TYPE]              NSTableColumn
215  [PTR_TYPE]          *
215  [PAREN_CLOSE]       )
215  [TYPE]              tableColumn
215  [WORD]              row
215  [OC_COLON]          :
215  [PAREN_OPEN]        (
215  [TYPE]              NSInteger
215  [PAREN_CLOSE]       )
215  [WORD]              row
215  [BRACE_OPEN]        {
215  [NEWLINE]           
216  [TYPE]              NSColor
216  [PTR_TYPE]          *
216  [WORD]              color
216  [ASSIGN]            =
216  [SQUARE_OPEN]       [
216  [OC_MSG_CLASS]      _colorList
216  [OC_MSG_FUNC]       colorWithKey
216  [OC_COLON]          :
216  [SQUARE_OPEN]       [
216  [OC_MSG_CLASS]      _colorNames
216  [OC_MSG_FUNC]       objectAtIndex
216  [OC_COLON]          :
216  [WORD]              row
216  [SQUARE_CLOSE]      ]
216  [SQUARE_CLOSE]      ]
216  [SEMICOLON]         ;
216  [NEWLINE]           
217  [SQUARE_OPEN]       [
217  [OC_MSG_CLASS]      cell
217  [OC_MSG_FUNC]       setColor
217  [OC_COLON]          :
217  [WORD]              color
217  [SQUARE_CLOSE]      ]
217  [SEMICOLON]         ;
217  [NEWLINE]           
218  [BRACE_CLOSE]       }
218  [NEWLINE]           
220  [OC_SCOPE]          -
220  [PAREN_OPEN]        (
220  [TYPE]              void
220  [PAREN_CLOSE]       )
220  [OC_MSG_DECL]       _tableViewAction
220  [OC_COLON]          :
220  [PAREN_OPEN]        (
220  [TYPE]              id
220  [PAREN_CLOSE]       )
220  [WORD]              sender
220  [BRACE_OPEN]        {
220  [NEWLINE]           
221  [SQUARE_OPEN]       [
221  [OC_MSG_CLASS]      self
221  [OC_MSG_FUNC]       _closeAndSendAction
221  [OC_COLON]          :
221  [WORD]              YES
221  [SQUARE_CLOSE]      ]
221  [SEMICOLON]         ;
221  [NEWLINE]           
222  [BRACE_CLOSE]       }
222  [NEWLINE]           
224  [OC_END]            @end
224  [NEWLINE]           