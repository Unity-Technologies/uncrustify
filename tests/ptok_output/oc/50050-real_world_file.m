Line [Parent]            Text
1    [COMMENT_WHOLE]     /*␤ File: ATColorTableController.m␤ Abstract: A controller used by the ATImageTextCell to edit the color property. It is implemented in an abstract enough way to be used by a class other than the cell. ␤ ␤ Version: 1.0␤ ␤ Disclaimer: IMPORTANT:  This Apple software is supplied to you by Apple␤ Inc. ("Apple") in consideration of your agreement to the following␤ terms, and your use, installation, modification or redistribution of␤ this Apple software constitutes acceptance of these terms.  If you do␤ not agree with these terms, please do not use, install, modify or␤ redistribute this Apple software.␤ ␤ In consideration of your agreement to abide by the following terms, and␤ subject to these terms, Apple grants you a personal, non-exclusive␤ license, under Apple's copyrights in this original Apple software (the␤ "Apple Software"), to use, reproduce, modify and redistribute the Apple␤ Software, with or without modifications, in source and/or binary forms;␤ provided that if you redistribute the Apple Software in its entirety and␤ without modifications, you must retain this notice and the following␤ text and disclaimers in all such redistributions of the Apple Software.␤ Neither the name, trademarks, service marks or logos of Apple Inc. may␤ be used to endorse or promote products derived from the Apple Software␤ without specific prior written permission from Apple.  Except as␤ expressly stated in this notice, no other rights or licenses, express or␤ implied, are granted by Apple herein, including but not limited to any␤ patent rights that may be infringed by your derivative works or by other␤ works in which the Apple Software may be incorporated.␤ ␤ The Apple Software is provided by Apple on an "AS IS" basis.  APPLE␤ MAKES NO WARRANTIES, EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION␤ THE IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY AND FITNESS␤ FOR A PARTICULAR PURPOSE, REGARDING THE APPLE SOFTWARE OR ITS USE AND␤ OPERATION ALONE OR IN COMBINATION WITH YOUR PRODUCTS.␤ ␤ IN NO EVENT SHALL APPLE BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL␤ OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF␤ SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS␤ INTERRUPTION) ARISING IN ANY WAY OUT OF THE USE, REPRODUCTION,␤ MODIFICATION AND/OR DISTRIBUTION OF THE APPLE SOFTWARE, HOWEVER CAUSED␤ AND WHETHER UNDER THEORY OF CONTRACT, TORT (INCLUDING NEGLIGENCE),␤ STRICT LIABILITY OR OTHERWISE, EVEN IF APPLE HAS BEEN ADVISED OF THE␤ POSSIBILITY OF SUCH DAMAGE.␤ ␤ Copyright (C) 2009 Apple Inc. All Rights Reserved.␤ ␤ */
47   [NONE]              
49   [PP_INCLUDE]        #
49   [NONE]              import
49   [NONE]              "ATColorTableController.h"
49   [NONE]              
50   [PP_INCLUDE]        #
50   [NONE]              import
50   [NONE]              "ATPopupWindow.h"
50   [NONE]              
52   [NONE]              @implementation
52   [OC_IMPL]           ATColorTableController
52   [NONE]              
54   [OC_MSG_DECL]       +
54   [OC_MSG_DECL]       (
54   [NONE]              ATColorTableController
54   [NONE]              *
54   [OC_MSG_DECL]       )
54   [OC_MSG_DECL]       sharedColorTableController
54   [OC_MSG_DECL]       {
54   [NONE]              
55   [NONE]              static
55   [NONE]              ATColorTableController
55   [NONE]              *
55   [NONE]              gSharedColorTableController
55   [NONE]              =
55   [NONE]              nil
55   [NONE]              ;
55   [NONE]              
56   [NONE]              if
56   [IF]                (
56   [NONE]              gSharedColorTableController
56   [NONE]              ==
56   [NONE]              nil
56   [IF]                )
56   [IF]                {
56   [NONE]              
57   [NONE]              gSharedColorTableController
57   [NONE]              =
57   [OC_MSG]            [
57   [OC_MSG]            [
57   [OC_MSG]            [
57   [NONE]              self
57   [NONE]              class
57   [OC_MSG]            ]
57   [NONE]              alloc
57   [OC_MSG]            ]
57   [NONE]              initWithNibName
57   [NONE]              :
57   [NONE]              @"ColorTable"
57   [NONE]              bundle
57   [OC_MSG_NAME]       :
57   [OC_MSG]            [
57   [NONE]              NSBundle
57   [NONE]              bundleForClass
57   [NONE]              :
57   [OC_MSG]            [
57   [NONE]              self
57   [NONE]              class
57   [OC_MSG]            ]
57   [OC_MSG]            ]
57   [OC_MSG]            ]
57   [OC_MSG]            ;
57   [NONE]              
58   [IF]                }
58   [NONE]              
59   [NONE]              return
59   [NONE]              gSharedColorTableController
59   [NONE]              ;
59   [NONE]              
60   [OC_MSG_DECL]       }
60   [NONE]              
62   [NONE]              @synthesize
62   [NONE]              delegate
62   [NONE]              =
62   [NONE]              _delegate
62   [NONE]              ;
62   [NONE]              
63   [NONE]              @dynamic
63   [NONE]              selectedColor
63   [NONE]              ,
63   [NONE]              selectedColorName
63   [NONE]              ;
63   [NONE]              
65   [OC_MSG_DECL]       -
65   [OC_MSG_DECL]       (
65   [NONE]              void
65   [OC_MSG_DECL]       )
65   [OC_MSG_DECL]       dealloc
65   [OC_MSG_DECL]       {
65   [NONE]              
66   [OC_MSG]            [
66   [NONE]              _colorList
66   [NONE]              release
66   [OC_MSG]            ]
66   [OC_MSG]            ;
66   [NONE]              
67   [OC_MSG]            [
67   [NONE]              _colorNames
67   [NONE]              release
67   [OC_MSG]            ]
67   [OC_MSG]            ;
67   [NONE]              
68   [OC_MSG]            [
68   [NONE]              _window
68   [NONE]              release
68   [OC_MSG]            ]
68   [OC_MSG]            ;
68   [NONE]              
69   [OC_MSG]            [
69   [NONE]              super
69   [NONE]              dealloc
69   [OC_MSG]            ]
69   [OC_MSG]            ;
69   [NONE]              
70   [OC_MSG_DECL]       }
70   [NONE]              
72   [OC_MSG_DECL]       -
72   [OC_MSG_DECL]       (
72   [NONE]              void
72   [OC_MSG_DECL]       )
72   [OC_MSG_DECL]       loadView
72   [OC_MSG_DECL]       {
72   [NONE]              
73   [OC_MSG]            [
73   [NONE]              super
73   [NONE]              loadView
73   [OC_MSG]            ]
73   [OC_MSG]            ;
73   [NONE]              
74   [NONE]              _colorList
74   [NONE]              =
74   [OC_MSG]            [
74   [OC_MSG]            [
74   [NONE]              NSColorList
74   [NONE]              colorListNamed
74   [NONE]              :
74   [NONE]              @"Crayons"
74   [OC_MSG]            ]
74   [NONE]              retain
74   [OC_MSG]            ]
74   [OC_MSG]            ;
74   [NONE]              
75   [NONE]              _colorNames
75   [NONE]              =
75   [OC_MSG]            [
75   [OC_MSG]            [
75   [NONE]              _colorList
75   [NONE]              allKeys
75   [OC_MSG]            ]
75   [NONE]              retain
75   [OC_MSG]            ]
75   [OC_MSG]            ;
75   [NONE]              
76   [OC_MSG]            [
76   [NONE]              _tableColorList
76   [NONE]              setIntercellSpacing
76   [NONE]              :
76   [NONE]              NSMakeSize
76   [FUNC_CALL]         (
76   [NONE]              3
76   [NONE]              ,
76   [NONE]              3
76   [FUNC_CALL]         )
76   [OC_MSG]            ]
76   [OC_MSG]            ;
76   [NONE]              
77   [OC_MSG]            [
77   [NONE]              _tableColorList
77   [NONE]              setTarget
77   [NONE]              :
77   [NONE]              self
77   [OC_MSG]            ]
77   [OC_MSG]            ;
77   [NONE]              
78   [OC_MSG]            [
78   [NONE]              _tableColorList
78   [NONE]              setAction
78   [NONE]              :
78   [NONE]              @selector
78   [OC_SEL]            (
78   [OC_SEL]            _tableViewAction
78   [OC_SEL]            :
78   [OC_SEL]            )
78   [OC_MSG]            ]
78   [OC_MSG]            ;
78   [NONE]              
79   [OC_MSG_DECL]       }
79   [NONE]              
81   [OC_MSG_DECL]       -
81   [OC_MSG_DECL]       (
81   [NONE]              NSColor
81   [NONE]              *
81   [OC_MSG_DECL]       )
81   [OC_MSG_DECL]       selectedColor
81   [OC_MSG_DECL]       {
81   [NONE]              
82   [NONE]              NSString
82   [NONE]              *
82   [NONE]              name
82   [NONE]              =
82   [OC_MSG]            [
82   [NONE]              self
82   [NONE]              selectedColorName
82   [OC_MSG]            ]
82   [OC_MSG]            ;
82   [NONE]              
83   [NONE]              if
83   [IF]                (
83   [NONE]              name
83   [NONE]              !=
83   [NONE]              nil
83   [IF]                )
83   [IF]                {
83   [NONE]              
84   [NONE]              return
84   [OC_MSG]            [
84   [NONE]              _colorList
84   [NONE]              colorWithKey
84   [NONE]              :
84   [NONE]              name
84   [OC_MSG]            ]
84   [OC_MSG]            ;
84   [NONE]              
85   [IF]                }
85   [NONE]              else
85   [ELSE]              {
85   [NONE]              
86   [NONE]              return
86   [NONE]              nil
86   [NONE]              ;
86   [NONE]              
87   [ELSE]              }
87   [NONE]              
88   [OC_MSG_DECL]       }
88   [NONE]              
90   [OC_MSG_DECL]       -
90   [OC_MSG_DECL]       (
90   [NONE]              NSString
90   [NONE]              *
90   [OC_MSG_DECL]       )
90   [OC_MSG_DECL]       selectedColorName
90   [OC_MSG_DECL]       {
90   [NONE]              
91   [NONE]              if
91   [IF]                (
91   [OC_MSG]            [
91   [NONE]              _tableColorList
91   [NONE]              selectedRow
91   [OC_MSG]            ]
91   [NONE]              !=
91   [NONE]              -
91   [NONE]              1
91   [IF]                )
91   [IF]                {
91   [NONE]              
92   [NONE]              return
92   [OC_MSG]            [
92   [NONE]              _colorNames
92   [NONE]              objectAtIndex
92   [NONE]              :
92   [OC_MSG]            [
92   [NONE]              _tableColorList
92   [NONE]              selectedRow
92   [OC_MSG]            ]
92   [OC_MSG]            ]
92   [OC_MSG]            ;
92   [NONE]              
93   [IF]                }
93   [NONE]              else
93   [ELSE]              {
93   [NONE]              
94   [NONE]              return
94   [NONE]              nil
94   [NONE]              ;
94   [NONE]              
95   [ELSE]              }
95   [NONE]              
96   [OC_MSG_DECL]       }
96   [NONE]              
98   [OC_MSG_DECL]       -
98   [OC_MSG_DECL]       (
98   [NONE]              void
98   [OC_MSG_DECL]       )
98   [OC_MSG_DECL]       _selectColor
98   [OC_MSG_DECL]       :
98   [OC_MSG_DECL]       (
98   [NONE]              NSColor
98   [NONE]              *
98   [OC_MSG_DECL]       )
98   [NONE]              color
98   [OC_MSG_DECL]       {
98   [NONE]              
99   [COMMENT_WHOLE]     // Search for that color in our list
99   [NONE]              
100  [NONE]              NSInteger
100  [NONE]              row
100  [NONE]              =
100  [NONE]              0
100  [NONE]              ;
100  [NONE]              
101  [NONE]              for
101  [FOR]               (
101  [NONE]              NSString
101  [NONE]              *
101  [NONE]              name
101  [NONE]              in
101  [NONE]              _colorNames
101  [FOR]               )
101  [FOR]               {
101  [NONE]              
102  [NONE]              NSColor
102  [NONE]              *
102  [NONE]              colorInList
102  [NONE]              =
102  [OC_MSG]            [
102  [NONE]              _colorList
102  [NONE]              colorWithKey
102  [NONE]              :
102  [NONE]              name
102  [OC_MSG]            ]
102  [OC_MSG]            ;
102  [NONE]              
103  [NONE]              if
103  [IF]                (
103  [OC_MSG]            [
103  [NONE]              color
103  [NONE]              isEqual
103  [NONE]              :
103  [NONE]              colorInList
103  [OC_MSG]            ]
103  [IF]                )
103  [IF]                {
103  [NONE]              
104  [NONE]              break
104  [NONE]              ;
104  [NONE]              
105  [IF]                }
105  [NONE]              
106  [NONE]              row
106  [NONE]              ++
106  [NONE]              ;
106  [NONE]              
107  [FOR]               }
107  [NONE]              
108  [NONE]              _updatingSelection
108  [NONE]              =
108  [NONE]              YES
108  [NONE]              ;
108  [NONE]              
109  [NONE]              if
109  [IF]                (
109  [NONE]              row
109  [NONE]              !=
109  [NONE]              -
109  [NONE]              1
109  [IF]                )
109  [IF]                {
109  [NONE]              
110  [OC_MSG]            [
110  [NONE]              _tableColorList
110  [NONE]              scrollRowToVisible
110  [NONE]              :
110  [NONE]              row
110  [OC_MSG]            ]
110  [OC_MSG]            ;
110  [NONE]              
111  [OC_MSG]            [
111  [NONE]              _tableColorList
111  [NONE]              selectRowIndexes
111  [NONE]              :
111  [OC_MSG]            [
111  [NONE]              NSIndexSet
111  [NONE]              indexSetWithIndex
111  [NONE]              :
111  [NONE]              row
111  [OC_MSG]            ]
111  [NONE]              byExtendingSelection
111  [OC_MSG_NAME]       :
111  [NONE]              NO
111  [OC_MSG]            ]
111  [OC_MSG]            ;
111  [NONE]              
112  [IF]                }
112  [NONE]              else
112  [ELSE]              {
112  [NONE]              
113  [OC_MSG]            [
113  [NONE]              _tableColorList
113  [NONE]              scrollRowToVisible
113  [NONE]              :
113  [NONE]              0
113  [OC_MSG]            ]
113  [OC_MSG]            ;
113  [NONE]              
114  [OC_MSG]            [
114  [NONE]              _tableColorList
114  [NONE]              selectRowIndexes
114  [NONE]              :
114  [OC_MSG]            [
114  [NONE]              NSIndexSet
114  [NONE]              indexSet
114  [OC_MSG]            ]
114  [NONE]              byExtendingSelection
114  [OC_MSG_NAME]       :
114  [NONE]              NO
114  [OC_MSG]            ]
114  [OC_MSG]            ;
114  [NONE]              
115  [ELSE]              }
115  [NONE]              
116  [NONE]              _updatingSelection
116  [NONE]              =
116  [NONE]              NO
116  [NONE]              ;
116  [NONE]              
117  [OC_MSG_DECL]       }
117  [NONE]              
119  [OC_MSG_DECL]       -
119  [OC_MSG_DECL]       (
119  [NONE]              void
119  [OC_MSG_DECL]       )
119  [OC_MSG_DECL]       _createWindowIfNeeded
119  [OC_MSG_DECL]       {
119  [NONE]              
120  [NONE]              if
120  [IF]                (
120  [NONE]              _window
120  [NONE]              ==
120  [NONE]              nil
120  [IF]                )
120  [IF]                {
120  [NONE]              
121  [NONE]              NSRect
121  [NONE]              viewFrame
121  [NONE]              =
121  [NONE]              self
121  [NONE]              .
121  [NONE]              view
121  [NONE]              .
121  [NONE]              frame
121  [NONE]              ;
121  [NONE]              
122  [COMMENT_WHOLE]     // Create and setup our window
122  [NONE]              
123  [NONE]              _window
123  [NONE]              =
123  [OC_MSG]            [
123  [OC_MSG]            [
123  [NONE]              ATPopupWindow
123  [NONE]              alloc
123  [OC_MSG]            ]
123  [NONE]              initWithContentRect
123  [NONE]              :
123  [NONE]              viewFrame
123  [NONE]              styleMask
123  [OC_MSG_NAME]       :
123  [NONE]              NSBorderlessWindowMask
123  [NONE]              backing
123  [OC_MSG_NAME]       :
123  [NONE]              NSBackingStoreBuffered
123  [NONE]              defer
123  [OC_MSG_NAME]       :
123  [NONE]              NO
123  [OC_MSG]            ]
123  [OC_MSG]            ;
123  [NONE]              
124  [OC_MSG]            [
124  [NONE]              _window
124  [NONE]              setReleasedWhenClosed
124  [NONE]              :
124  [NONE]              NO
124  [OC_MSG]            ]
124  [OC_MSG]            ;
124  [NONE]              
125  [OC_MSG]            [
125  [NONE]              _window
125  [NONE]              setLevel
125  [NONE]              :
125  [NONE]              NSPopUpMenuWindowLevel
125  [OC_MSG]            ]
125  [OC_MSG]            ;
125  [NONE]              
126  [OC_MSG]            [
126  [NONE]              _window
126  [NONE]              setHasShadow
126  [NONE]              :
126  [NONE]              YES
126  [OC_MSG]            ]
126  [OC_MSG]            ;
126  [NONE]              
127  [OC_MSG]            [
127  [OC_MSG]            [
127  [NONE]              _window
127  [NONE]              contentView
127  [OC_MSG]            ]
127  [NONE]              addSubview
127  [NONE]              :
127  [NONE]              self
127  [NONE]              .
127  [NONE]              view
127  [OC_MSG]            ]
127  [OC_MSG]            ;
127  [NONE]              
128  [OC_MSG]            [
128  [NONE]              _window
128  [NONE]              makeFirstResponder
128  [NONE]              :
128  [NONE]              _tableColorList
128  [OC_MSG]            ]
128  [OC_MSG]            ;
128  [NONE]              
130  [COMMENT_WHOLE]     // Make the window have a clear color and be non-opaque for our pop-up animation
130  [NONE]              
131  [OC_MSG]            [
131  [NONE]              _window
131  [NONE]              setBackgroundColor
131  [NONE]              :
131  [OC_MSG]            [
131  [NONE]              NSColor
131  [NONE]              clearColor
131  [OC_MSG]            ]
131  [OC_MSG]            ]
131  [OC_MSG]            ;
131  [NONE]              
132  [OC_MSG]            [
132  [NONE]              _window
132  [NONE]              setOpaque
132  [NONE]              :
132  [NONE]              NO
132  [OC_MSG]            ]
132  [OC_MSG]            ;
132  [NONE]              
133  [IF]                }
133  [NONE]              
134  [OC_MSG_DECL]       }
134  [NONE]              
136  [OC_MSG_DECL]       -
136  [OC_MSG_DECL]       (
136  [NONE]              void
136  [OC_MSG_DECL]       )
136  [OC_MSG_DECL]       _windowClosed
136  [OC_MSG_DECL]       :
136  [OC_MSG_DECL]       (
136  [NONE]              NSNotification
136  [NONE]              *
136  [OC_MSG_DECL]       )
136  [NONE]              note
136  [OC_MSG_DECL]       {
136  [NONE]              
137  [NONE]              if
137  [IF]                (
137  [NONE]              _eventMonitor
137  [IF]                )
137  [IF]                {
137  [NONE]              
138  [OC_MSG]            [
138  [NONE]              NSEvent
138  [NONE]              removeMonitor
138  [NONE]              :
138  [NONE]              _eventMonitor
138  [OC_MSG]            ]
138  [OC_MSG]            ;
138  [NONE]              
139  [NONE]              _eventMonitor
139  [NONE]              =
139  [NONE]              nil
139  [NONE]              ;
139  [NONE]              
140  [IF]                }
140  [NONE]              
141  [OC_MSG]            [
141  [OC_MSG]            [
141  [NONE]              NSNotificationCenter
141  [NONE]              defaultCenter
141  [OC_MSG]            ]
141  [NONE]              removeObserver
141  [NONE]              :
141  [NONE]              self
141  [NONE]              name
141  [OC_MSG_NAME]       :
141  [NONE]              NSWindowWillCloseNotification
141  [NONE]              object
141  [OC_MSG_NAME]       :
141  [NONE]              _window
141  [OC_MSG]            ]
141  [OC_MSG]            ;
141  [NONE]              
142  [OC_MSG]            [
142  [OC_MSG]            [
142  [NONE]              NSNotificationCenter
142  [NONE]              defaultCenter
142  [OC_MSG]            ]
142  [NONE]              removeObserver
142  [NONE]              :
142  [NONE]              self
142  [NONE]              name
142  [OC_MSG_NAME]       :
142  [NONE]              NSApplicationDidResignActiveNotification
142  [NONE]              object
142  [OC_MSG_NAME]       :
142  [NONE]              nil
142  [OC_MSG]            ]
142  [OC_MSG]            ;
142  [NONE]              
143  [OC_MSG_DECL]       }
143  [NONE]              
145  [OC_MSG_DECL]       -
145  [OC_MSG_DECL]       (
145  [NONE]              void
145  [OC_MSG_DECL]       )
145  [OC_MSG_DECL]       _closeAndSendAction
145  [OC_MSG_DECL]       :
145  [OC_MSG_DECL]       (
145  [NONE]              BOOL
145  [OC_MSG_DECL]       )
145  [NONE]              sendAction
145  [OC_MSG_DECL]       {
145  [NONE]              
146  [OC_MSG]            [
146  [NONE]              _window
146  [NONE]              close
146  [OC_MSG]            ]
146  [OC_MSG]            ;
146  [NONE]              
147  [NONE]              if
147  [IF]                (
147  [NONE]              sendAction
147  [IF]                )
147  [IF]                {
147  [NONE]              
148  [NONE]              if
148  [IF]                (
148  [OC_MSG]            [
148  [NONE]              self
148  [NONE]              .
148  [NONE]              delegate
148  [NONE]              respondsToSelector
148  [NONE]              :
148  [NONE]              @selector
148  [OC_SEL]            (
148  [OC_SEL]            colorTableController
148  [OC_SEL]            :
148  [OC_SEL]            didChooseColor
148  [OC_SEL]            :
148  [OC_SEL]            named
148  [OC_SEL]            :
148  [OC_SEL]            )
148  [OC_MSG]            ]
148  [IF]                )
148  [IF]                {
148  [NONE]              
149  [OC_MSG]            [
149  [NONE]              self
149  [NONE]              .
149  [NONE]              delegate
149  [NONE]              colorTableController
149  [NONE]              :
149  [NONE]              self
149  [NONE]              didChooseColor
149  [OC_MSG_NAME]       :
149  [NONE]              self
149  [NONE]              .
149  [NONE]              selectedColor
149  [NONE]              named
149  [OC_MSG_NAME]       :
149  [NONE]              self
149  [NONE]              .
149  [NONE]              selectedColorName
149  [OC_MSG]            ]
149  [OC_MSG]            ;
149  [NONE]              
150  [IF]                }
150  [NONE]              
151  [IF]                }
151  [NONE]              else
151  [ELSE]              {
151  [NONE]              
152  [NONE]              if
152  [IF]                (
152  [OC_MSG]            [
152  [NONE]              self
152  [NONE]              .
152  [NONE]              delegate
152  [NONE]              respondsToSelector
152  [NONE]              :
152  [NONE]              @selector
152  [OC_SEL]            (
152  [OC_SEL]            didCancelColorTableController
152  [OC_SEL]            :
152  [OC_SEL]            )
152  [OC_MSG]            ]
152  [IF]                )
152  [IF]                {
152  [NONE]              
153  [OC_MSG]            [
153  [NONE]              self
153  [NONE]              .
153  [NONE]              delegate
153  [NONE]              didCancelColorTableController
153  [NONE]              :
153  [NONE]              self
153  [OC_MSG]            ]
153  [OC_MSG]            ;
153  [NONE]              
154  [IF]                }
154  [NONE]              
155  [ELSE]              }
155  [NONE]              
156  [OC_MSG_DECL]       }
156  [NONE]              
158  [OC_MSG_DECL]       -
158  [OC_MSG_DECL]       (
158  [NONE]              void
158  [OC_MSG_DECL]       )
158  [OC_MSG_DECL]       _windowShouldClose
158  [OC_MSG_DECL]       :
158  [OC_MSG_DECL]       (
158  [NONE]              NSNotification
158  [NONE]              *
158  [OC_MSG_DECL]       )
158  [NONE]              note
158  [OC_MSG_DECL]       {
158  [NONE]              
159  [OC_MSG]            [
159  [NONE]              self
159  [NONE]              _closeAndSendAction
159  [NONE]              :
159  [NONE]              NO
159  [OC_MSG]            ]
159  [OC_MSG]            ;
159  [NONE]              
160  [OC_MSG_DECL]       }
160  [NONE]              
162  [OC_MSG_DECL]       -
162  [OC_MSG_DECL]       (
162  [NONE]              void
162  [OC_MSG_DECL]       )
162  [OC_MSG_DECL]       editColor
162  [OC_MSG_DECL]       :
162  [OC_MSG_DECL]       (
162  [NONE]              NSColor
162  [NONE]              *
162  [OC_MSG_DECL]       )
162  [NONE]              color
162  [OC_MSG_DECL]       locatedAtScreenRect
162  [OC_MSG_DECL]       :
162  [OC_MSG_DECL]       (
162  [NONE]              NSRect
162  [OC_MSG_DECL]       )
162  [NONE]              rect
162  [OC_MSG_DECL]       {
162  [NONE]              
163  [OC_MSG]            [
163  [NONE]              self
163  [NONE]              _createWindowIfNeeded
163  [OC_MSG]            ]
163  [OC_MSG]            ;
163  [NONE]              
164  [OC_MSG]            [
164  [NONE]              self
164  [NONE]              _selectColor
164  [NONE]              :
164  [NONE]              color
164  [OC_MSG]            ]
164  [OC_MSG]            ;
164  [NONE]              
165  [NONE]              NSPoint
165  [NONE]              origin
165  [NONE]              =
165  [NONE]              rect
165  [NONE]              .
165  [NONE]              origin
165  [NONE]              ;
165  [NONE]              
166  [NONE]              NSRect
166  [NONE]              windowFrame
166  [NONE]              =
166  [OC_MSG]            [
166  [NONE]              _window
166  [NONE]              frame
166  [OC_MSG]            ]
166  [OC_MSG]            ;
166  [NONE]              
167  [COMMENT_WHOLE]     // The origin is the lower left; subtract the window's height
167  [NONE]              
168  [NONE]              origin
168  [NONE]              .
168  [NONE]              y
168  [NONE]              -=
168  [NONE]              NSHeight
168  [FUNC_CALL]         (
168  [NONE]              windowFrame
168  [FUNC_CALL]         )
168  [NONE]              ;
168  [NONE]              
169  [COMMENT_WHOLE]     // Center the popup window under the rect
169  [NONE]              
170  [NONE]              origin
170  [NONE]              .
170  [NONE]              y
170  [NONE]              +=
170  [NONE]              floor
170  [FUNC_CALL]         (
170  [NONE]              NSHeight
170  [FUNC_CALL]         (
170  [NONE]              rect
170  [FUNC_CALL]         )
170  [NONE]              /
170  [NONE]              3.0
170  [FUNC_CALL]         )
170  [NONE]              ;
170  [NONE]              
171  [NONE]              origin
171  [NONE]              .
171  [NONE]              x
171  [NONE]              -=
171  [NONE]              floor
171  [FUNC_CALL]         (
171  [NONE]              NSWidth
171  [FUNC_CALL]         (
171  [NONE]              windowFrame
171  [FUNC_CALL]         )
171  [NONE]              /
171  [NONE]              2.0
171  [FUNC_CALL]         )
171  [NONE]              ;
171  [NONE]              
172  [NONE]              origin
172  [NONE]              .
172  [NONE]              x
172  [NONE]              +=
172  [NONE]              floor
172  [FUNC_CALL]         (
172  [NONE]              NSWidth
172  [FUNC_CALL]         (
172  [NONE]              rect
172  [FUNC_CALL]         )
172  [NONE]              /
172  [NONE]              2.0
172  [FUNC_CALL]         )
172  [NONE]              ;
172  [NONE]              
174  [OC_MSG]            [
174  [NONE]              _window
174  [NONE]              setFrameOrigin
174  [NONE]              :
174  [NONE]              origin
174  [OC_MSG]            ]
174  [OC_MSG]            ;
174  [NONE]              
175  [OC_MSG]            [
175  [NONE]              _window
175  [NONE]              popup
175  [OC_MSG]            ]
175  [OC_MSG]            ;
175  [NONE]              
177  [COMMENT_WHOLE]     // Add some watches on the window and application
177  [NONE]              
178  [OC_MSG]            [
178  [OC_MSG]            [
178  [NONE]              NSNotificationCenter
178  [NONE]              defaultCenter
178  [OC_MSG]            ]
178  [NONE]              addObserver
178  [NONE]              :
178  [NONE]              self
178  [NONE]              
179  [NONE]              selector
179  [OC_MSG_NAME]       :
179  [NONE]              @selector
179  [OC_SEL]            (
179  [OC_SEL]            _windowClosed
179  [OC_SEL]            :
179  [OC_SEL]            )
179  [NONE]              
180  [NONE]              name
180  [OC_MSG_NAME]       :
180  [NONE]              NSWindowWillCloseNotification
180  [NONE]              
181  [NONE]              object
181  [OC_MSG_NAME]       :
181  [NONE]              _window
181  [OC_MSG]            ]
181  [OC_MSG]            ;
181  [NONE]              
183  [OC_MSG]            [
183  [OC_MSG]            [
183  [NONE]              NSNotificationCenter
183  [NONE]              defaultCenter
183  [OC_MSG]            ]
183  [NONE]              addObserver
183  [NONE]              :
183  [NONE]              self
183  [NONE]              selector
183  [OC_MSG_NAME]       :
183  [NONE]              @selector
183  [OC_SEL]            (
183  [OC_SEL]            _windowShouldClose
183  [OC_SEL]            :
183  [OC_SEL]            )
183  [NONE]              name
183  [OC_MSG_NAME]       :
183  [NONE]              NSApplicationDidResignActiveNotification
183  [NONE]              object
183  [OC_MSG_NAME]       :
183  [NONE]              nil
183  [OC_MSG]            ]
183  [OC_MSG]            ;
183  [NONE]              
185  [COMMENT_WHOLE]     // Start watching events to figure out when to close the window
185  [NONE]              
186  [NONE]              NSAssert
186  [FUNC_CALL]         (
186  [NONE]              _eventMonitor
186  [NONE]              ==
186  [NONE]              nil
186  [NONE]              ,
186  [NONE]              @"_eventMonitor should not be created yet"
186  [FUNC_CALL]         )
186  [NONE]              ;
186  [NONE]              
187  [NONE]              _eventMonitor
187  [NONE]              =
187  [OC_MSG]            [
187  [NONE]              NSEvent
187  [NONE]              addLocalMonitorForEventsMatchingMask
187  [NONE]              :
187  [NONE]              NSLeftMouseDownMask
187  [NONE]              |
187  [NONE]              NSRightMouseDownMask
187  [NONE]              |
187  [NONE]              NSOtherMouseDownMask
187  [NONE]              |
187  [NONE]              NSKeyDownMask
187  [NONE]              handler
187  [OC_MSG_NAME]       :
187  [OC_BLOCK_EXPR]     ^
187  [OC_BLOCK_EXPR]     (
187  [OC_BLOCK_EXPR]     NSEvent
187  [OC_BLOCK_EXPR]     *
187  [OC_BLOCK_EXPR]     incomingEvent
187  [OC_BLOCK_EXPR]     )
187  [OC_BLOCK_EXPR]     {
187  [NONE]              
188  [NONE]              NSEvent
188  [NONE]              *
188  [NONE]              result
188  [NONE]              =
188  [NONE]              incomingEvent
188  [NONE]              ;
188  [NONE]              
189  [NONE]              NSWindow
189  [NONE]              *
189  [NONE]              targetWindowForEvent
189  [NONE]              =
189  [OC_MSG]            [
189  [NONE]              incomingEvent
189  [NONE]              window
189  [OC_MSG]            ]
189  [OC_MSG]            ;
189  [NONE]              
190  [NONE]              if
190  [IF]                (
190  [NONE]              targetWindowForEvent
190  [NONE]              !=
190  [NONE]              _window
190  [IF]                )
190  [IF]                {
190  [NONE]              
191  [OC_MSG]            [
191  [NONE]              self
191  [NONE]              _closeAndSendAction
191  [NONE]              :
191  [NONE]              NO
191  [OC_MSG]            ]
191  [OC_MSG]            ;
191  [NONE]              
192  [IF]                }
192  [NONE]              else
192  [NONE]              if
192  [ELSEIF]            (
192  [OC_MSG]            [
192  [NONE]              incomingEvent
192  [NONE]              type
192  [OC_MSG]            ]
192  [NONE]              ==
192  [NONE]              NSKeyDown
192  [ELSEIF]            )
192  [ELSEIF]            {
192  [NONE]              
193  [NONE]              if
193  [IF]                (
193  [OC_MSG]            [
193  [NONE]              incomingEvent
193  [NONE]              keyCode
193  [OC_MSG]            ]
193  [NONE]              ==
193  [NONE]              53
193  [IF]                )
193  [IF]                {
193  [NONE]              
194  [COMMENT_WHOLE]     // Escape
194  [NONE]              
195  [OC_MSG]            [
195  [NONE]              self
195  [NONE]              _closeAndSendAction
195  [NONE]              :
195  [NONE]              NO
195  [OC_MSG]            ]
195  [OC_MSG]            ;
195  [NONE]              
196  [NONE]              result
196  [NONE]              =
196  [NONE]              nil
196  [NONE]              ;
196  [COMMENT_END]       // Don't process the event
196  [NONE]              
197  [IF]                }
197  [NONE]              else
197  [NONE]              if
197  [ELSEIF]            (
197  [OC_MSG]            [
197  [NONE]              incomingEvent
197  [NONE]              keyCode
197  [OC_MSG]            ]
197  [NONE]              ==
197  [NONE]              36
197  [ELSEIF]            )
197  [ELSEIF]            {
197  [NONE]              
198  [COMMENT_WHOLE]     // Enter
198  [NONE]              
199  [OC_MSG]            [
199  [NONE]              self
199  [NONE]              _closeAndSendAction
199  [NONE]              :
199  [NONE]              YES
199  [OC_MSG]            ]
199  [OC_MSG]            ;
199  [NONE]              
200  [NONE]              result
200  [NONE]              =
200  [NONE]              nil
200  [NONE]              ;
200  [NONE]              
201  [ELSEIF]            }
201  [NONE]              
202  [ELSEIF]            }
202  [NONE]              
203  [NONE]              return
203  [NONE]              result
203  [NONE]              ;
203  [NONE]              
204  [OC_BLOCK_EXPR]     }
204  [OC_MSG]            ]
204  [OC_MSG]            ;
204  [NONE]              
205  [OC_MSG_DECL]       }
205  [NONE]              
207  [OC_MSG_DECL]       -
207  [OC_MSG_DECL]       (
207  [NONE]              NSInteger
207  [OC_MSG_DECL]       )
207  [OC_MSG_DECL]       numberOfRowsInTableView
207  [OC_MSG_DECL]       :
207  [OC_MSG_DECL]       (
207  [NONE]              NSTableView
207  [NONE]              *
207  [OC_MSG_DECL]       )
207  [NONE]              tableView
207  [OC_MSG_DECL]       {
207  [NONE]              
208  [NONE]              return
208  [NONE]              _colorNames
208  [NONE]              .
208  [NONE]              count
208  [NONE]              ;
208  [NONE]              
209  [OC_MSG_DECL]       }
209  [NONE]              
211  [OC_MSG_DECL]       -
211  [OC_MSG_DECL]       (
211  [NONE]              id
211  [OC_MSG_DECL]       )
211  [OC_MSG_DECL]       tableView
211  [OC_MSG_DECL]       :
211  [OC_MSG_DECL]       (
211  [NONE]              NSTableView
211  [NONE]              *
211  [OC_MSG_DECL]       )
211  [NONE]              tableView
211  [OC_MSG_DECL]       objectValueForTableColumn
211  [OC_MSG_DECL]       :
211  [OC_MSG_DECL]       (
211  [NONE]              NSTableColumn
211  [NONE]              *
211  [OC_MSG_DECL]       )
211  [NONE]              tableColumn
211  [OC_MSG_DECL]       row
211  [OC_MSG_DECL]       :
211  [OC_MSG_DECL]       (
211  [NONE]              NSInteger
211  [OC_MSG_DECL]       )
211  [NONE]              row
211  [OC_MSG_DECL]       {
211  [NONE]              
212  [NONE]              return
212  [OC_MSG]            [
212  [NONE]              _colorNames
212  [NONE]              objectAtIndex
212  [NONE]              :
212  [NONE]              row
212  [OC_MSG]            ]
212  [OC_MSG]            ;
212  [NONE]              
213  [OC_MSG_DECL]       }
213  [NONE]              
215  [OC_MSG_DECL]       -
215  [OC_MSG_DECL]       (
215  [NONE]              void
215  [OC_MSG_DECL]       )
215  [OC_MSG_DECL]       tableView
215  [OC_MSG_DECL]       :
215  [OC_MSG_DECL]       (
215  [NONE]              NSTableView
215  [NONE]              *
215  [OC_MSG_DECL]       )
215  [NONE]              tableView
215  [OC_MSG_DECL]       willDisplayCell
215  [OC_MSG_DECL]       :
215  [OC_MSG_DECL]       (
215  [NONE]              id
215  [OC_MSG_DECL]       )
215  [NONE]              cell
215  [OC_MSG_DECL]       forTableColumn
215  [OC_MSG_DECL]       :
215  [OC_MSG_DECL]       (
215  [NONE]              NSTableColumn
215  [NONE]              *
215  [OC_MSG_DECL]       )
215  [NONE]              tableColumn
215  [OC_MSG_DECL]       row
215  [OC_MSG_DECL]       :
215  [OC_MSG_DECL]       (
215  [NONE]              NSInteger
215  [OC_MSG_DECL]       )
215  [NONE]              row
215  [OC_MSG_DECL]       {
215  [NONE]              
216  [NONE]              NSColor
216  [NONE]              *
216  [NONE]              color
216  [NONE]              =
216  [OC_MSG]            [
216  [NONE]              _colorList
216  [NONE]              colorWithKey
216  [NONE]              :
216  [OC_MSG]            [
216  [NONE]              _colorNames
216  [NONE]              objectAtIndex
216  [NONE]              :
216  [NONE]              row
216  [OC_MSG]            ]
216  [OC_MSG]            ]
216  [OC_MSG]            ;
216  [NONE]              
217  [OC_MSG]            [
217  [NONE]              cell
217  [NONE]              setColor
217  [NONE]              :
217  [NONE]              color
217  [OC_MSG]            ]
217  [OC_MSG]            ;
217  [NONE]              
218  [OC_MSG_DECL]       }
218  [NONE]              
220  [OC_MSG_DECL]       -
220  [OC_MSG_DECL]       (
220  [NONE]              void
220  [OC_MSG_DECL]       )
220  [OC_MSG_DECL]       _tableViewAction
220  [OC_MSG_DECL]       :
220  [OC_MSG_DECL]       (
220  [NONE]              id
220  [OC_MSG_DECL]       )
220  [NONE]              sender
220  [OC_MSG_DECL]       {
220  [NONE]              
221  [OC_MSG]            [
221  [NONE]              self
221  [NONE]              _closeAndSendAction
221  [NONE]              :
221  [NONE]              YES
221  [OC_MSG]            ]
221  [OC_MSG]            ;
221  [NONE]              
222  [OC_MSG_DECL]       }
222  [NONE]              
224  [OC_IMPL]           @end
224  [NONE]              