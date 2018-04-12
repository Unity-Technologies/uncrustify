Line [Parent]            Text
1    [COMMENT_WHOLE]     // C/C++/Obj-C/Obj-C++ wrapper that exports C functions
1    [NONE]              
2    [COMMENT_WHOLE]     //
2    [NONE]              
3    [COMMENT_WHOLE]     // As an example, distributed with .c suffix,
3    [NONE]              
4    [COMMENT_WHOLE]     // but depending on extension needs, can be
4    [NONE]              
5    [COMMENT_WHOLE]     // compiled as C, C++, Obj-C or Obj-C++
5    [NONE]              
7    [PP_INCLUDE]        #
7    [NONE]              include
7    [NONE]              <stdio.h>
7    [NONE]              
8    [PP_INCLUDE]        #
8    [NONE]              include
8    [NONE]              <unistd.h>
8    [NONE]              
9    [PP_INCLUDE]        #
9    [NONE]              include
9    [NONE]              "TestClassNativeHelper.h"
9    [NONE]              
11   [PP_UNDEF]          #
11   [NONE]              undef
11   [NONE]              NDEBUG
11   [NONE]              
13   [PP_IF]             #
13   [NONE]              if
13   [NONE]              defined
13   [NONE]              (
13   [NONE]              __ANDROID__
13   [NONE]              )
13   [NONE]              
15   [PP_DEFINE]         #
15   [NONE]              define
15   [NONE]              TCH_LOGI
15   [MACRO_FUNC]        (
15   [NONE]              ...
15   [MACRO_FUNC]        )
15   [NONE]              __android_log_print
15   [FUNC_CALL]         (
15   [NONE]              ANDROID_LOG_INFO
15   [NONE]              ,
15   [NONE]              "TestClassNativeHelper"
15   [NONE]              ,
15   [NONE]              __VA_ARGS__
15   [FUNC_CALL]         )
15   [NONE]              
16   [PP_DEFINE]         #
16   [NONE]              define
16   [NONE]              TCH_LOGE
16   [MACRO_FUNC]        (
16   [NONE]              ...
16   [MACRO_FUNC]        )
16   [NONE]              __android_log_print
16   [FUNC_CALL]         (
16   [NONE]              ANDROID_LOG_ERROR
16   [NONE]              ,
16   [NONE]              "TestClassNativeHelper"
16   [NONE]              ,
16   [NONE]              __VA_ARGS__
16   [FUNC_CALL]         )
16   [NONE]              
18   [PP_IF]             #
18   [NONE]              ifndef
18   [NONE]              NDEBUG
18   [NONE]              
19   [PP_DEFINE]         #
19   [NONE]              define
19   [NONE]              TCH_LOGV
19   [MACRO_FUNC]        (
19   [NONE]              ...
19   [MACRO_FUNC]        )
19   [NONE]              __android_log_print
19   [FUNC_CALL]         (
19   [NONE]              ANDROID_LOG_VERBOSE
19   [NONE]              ,
19   [NONE]              "TestClassNativeHelper"
19   [NONE]              ,
19   [NONE]              __VA_ARGS__
19   [FUNC_CALL]         )
19   [NONE]              
20   [PP_ELSE]           #
20   [NONE]              else
20   [NONE]              
21   [PP_DEFINE]         #
21   [NONE]              define
21   [NONE]              TCH_LOGV
21   [MACRO_FUNC]        (
21   [NONE]              ...
21   [MACRO_FUNC]        )
21   [NONE]              
22   [PP_ENDIF]          #
22   [NONE]              endif
22   [NONE]              
24   [PP_DEFINE]         #
24   [NONE]              define
24   [NONE]              TCH_ELOG
24   [NONE]              TCH_LOGV
24   [FUNC_CALL]         (
24   [NONE]              "%s"
24   [NONE]              ,
24   [NONE]              __FUNCTION__
24   [FUNC_CALL]         )
24   [NONE]              
26   [FUNC_DEF]          void
26   [NONE]              TCH_onTestClassUploadDidProgress
26   [FUNC_DEF]          (
26   [NONE]              C_JNIEnv
26   [NONE]              *
26   [NONE]              env
26   [NONE]              ,
26   [NONE]              jobject
26   [NONE]              thiz
26   [NONE]              ,
26   [NONE]              jint
26   [NONE]              videoId
26   [NONE]              ,
26   [NONE]              jdouble
26   [NONE]              progress
26   [FUNC_DEF]          )
26   [FUNC_DEF]          {
26   [NONE]              
27   [NONE]              TCH_ELOG
27   [NONE]              ;
27   [NONE]              
28   [FUNC_DEF]          }
28   [NONE]              
30   [PP_IF]             #
30   [NONE]              ifndef
30   [NONE]              TCH_NELEM
30   [NONE]              
31   [PP_DEFINE]         #
31   [NONE]              define
31   [NONE]              TCH_NELEM
31   [MACRO_FUNC]        (
31   [NONE]              x
31   [MACRO_FUNC]        )
31   [NONE]              (
31   [C_CAST]            (
31   [C_CAST]            int
31   [C_CAST]            )
31   [NONE]              (
31   [NONE]              sizeof
31   [TYPE_CAST]         (
31   [NONE]              x
31   [TYPE_CAST]         )
31   [NONE]              /
31   [NONE]              sizeof
31   [TYPE_CAST]         (
31   [C_CAST]            (
31   [C_CAST]            x
31   [C_CAST]            )
31   [NONE]              [
31   [NONE]              0
31   [NONE]              ]
31   [TYPE_CAST]         )
31   [NONE]              )
31   [NONE]              )
31   [NONE]              
32   [PP_ENDIF]          #
32   [NONE]              endif
32   [NONE]              
34   [NONE]              static
34   [NONE]              const
34   [NONE]              char
34   [NONE]              *
34   [NONE]              kTCHTestClassClass
34   [NONE]              =
34   [NONE]              "com/testclass/TestClass/TestClass"
34   [NONE]              ;
34   [NONE]              
35   [NONE]              static
35   [NONE]              const
35   [NONE]              char
35   [NONE]              *
35   [NONE]              kTCHTestClassLoader
35   [NONE]              =
35   [NONE]              "com.testclass.TestClass.TestClass"
35   [NONE]              ;
35   [NONE]              
37   [NONE]              static
37   [NONE]              const
37   [NONE]              char
37   [NONE]              *
37   [NONE]              kTCHTestClassNativeListenerClass
37   [NONE]              =
37   [NONE]              "com/testclass/TestClass/communication/TestClassNativeListener"
37   [NONE]              ;
37   [NONE]              
38   [NONE]              static
38   [NONE]              const
38   [NONE]              char
38   [NONE]              *
38   [NONE]              kTCHTestClassNativeListenerLoader
38   [NONE]              =
38   [NONE]              "com.testclass.TestClass.communication.TestClassNativeListener"
38   [NONE]              ;
38   [NONE]              
40   [NONE]              static
40   [NONE]              JavaVM
40   [NONE]              *
40   [NONE]              TCH_vm
40   [NONE]              =
40   [NONE]              NULL
40   [NONE]              ;
40   [NONE]              
42   [NONE]              static
42   [NONE]              JNINativeMethod
42   [NONE]              TCH_listenerMethods
42   [NONE]              []
42   [NONE]              =
42   [ASSIGN]            {
42   [NONE]              
43   [NONE]              {
43   [NONE]              "onTestClassUploadDidProgress"
43   [NONE]              ,
43   [NONE]              "(ID)V"
43   [NONE]              ,
43   [C_CAST]            (
43   [C_CAST]            void
43   [C_CAST]            *
43   [C_CAST]            )
43   [NONE]              TCH_onTestClassUploadDidProgress
43   [NONE]              }
43   [NONE]              ,
43   [NONE]              
44   [ASSIGN]            }
44   [NONE]              ;
44   [NONE]              
46   [FUNC_DEF]          static
46   [FUNC_DEF]          C_JNIEnv
46   [FUNC_DEF]          *
46   [NONE]              TCH_getEnv
46   [FUNC_DEF]          (
46   [FUNC_DEF]          )
46   [FUNC_DEF]          {
46   [NONE]              
47   [NONE]              C_JNIEnv
47   [NONE]              *
47   [NONE]              ret
47   [NONE]              =
47   [NONE]              NULL
47   [NONE]              ;
47   [NONE]              
49   [NONE]              if
49   [IF]                (
49   [NONE]              TCH_vm
49   [NONE]              ==
49   [NONE]              NULL
49   [IF]                )
49   [IF]                {
49   [NONE]              
50   [NONE]              TCH_LOGE
50   [FUNC_CALL]         (
50   [NONE]              "TCH_getEnv failed, no JVM"
50   [FUNC_CALL]         )
50   [NONE]              ;
50   [NONE]              
51   [NONE]              return
51   [NONE]              NULL
51   [NONE]              ;
51   [NONE]              
52   [IF]                }
52   [NONE]              
54   [PP_IF]             #
54   [NONE]              if
54   [NONE]              defined
54   [NONE]              (
54   [NONE]              __cplusplus
54   [NONE]              )
54   [NONE]              
55   [NONE]              JNIEnv
55   [NONE]              *
55   [NONE]              env
55   [NONE]              =
55   [NONE]              NULL
55   [NONE]              ;
55   [NONE]              
57   [NONE]              if
57   [IF]                (
57   [NONE]              TCH_vm
57   [NONE]              ->
57   [NONE]              GetEnv
57   [FUNC_CALL]         (
57   [C_CAST]            (
57   [C_CAST]            void
57   [C_CAST]            *
57   [C_CAST]            *
57   [C_CAST]            )
57   [NONE]              &
57   [NONE]              env
57   [NONE]              ,
57   [NONE]              JNI_VERSION_1_6
57   [FUNC_CALL]         )
57   [NONE]              !=
57   [NONE]              JNI_OK
57   [IF]                )
57   [IF]                {
57   [NONE]              
58   [NONE]              JavaVMAttachArgs
58   [NONE]              args
58   [NONE]              ;
58   [NONE]              
59   [NONE]              args
59   [NONE]              .
59   [NONE]              version
59   [NONE]              =
59   [NONE]              JNI_VERSION_1_6
59   [NONE]              ;
59   [NONE]              
60   [NONE]              args
60   [NONE]              .
60   [NONE]              name
60   [NONE]              =
60   [NONE]              NULL
60   [NONE]              ;
60   [NONE]              
61   [NONE]              args
61   [NONE]              .
61   [NONE]              group
61   [NONE]              =
61   [NONE]              NULL
61   [NONE]              ;
61   [NONE]              
63   [NONE]              int
63   [NONE]              attachStatus
63   [NONE]              ;
63   [NONE]              
64   [NONE]              if
64   [IF]                (
64   [NONE]              (
64   [NONE]              attachStatus
64   [NONE]              =
64   [NONE]              TCH_vm
64   [NONE]              ->
64   [NONE]              AttachCurrentThread
64   [FUNC_CALL]         (
64   [NONE]              &
64   [NONE]              env
64   [NONE]              ,
64   [NONE]              &
64   [NONE]              args
64   [FUNC_CALL]         )
64   [NONE]              )
64   [NONE]              <
64   [NONE]              0
64   [IF]                )
64   [IF]                {
64   [NONE]              
65   [NONE]              TCH_LOGE
65   [FUNC_CALL]         (
65   [NONE]              "TCH_getEnv failed"
65   [FUNC_CALL]         )
65   [NONE]              ;
65   [NONE]              
66   [IF]                }
66   [NONE]              
67   [IF]                }
67   [NONE]              
68   [NONE]              ret
68   [NONE]              =
68   [C_CAST]            (
68   [C_CAST]            C_JNIEnv
68   [C_CAST]            *
68   [C_CAST]            )
68   [NONE]              env
68   [NONE]              ;
68   [NONE]              
69   [PP_ELSE]           #
69   [NONE]              else
69   [NONE]              
70   [NONE]              JNIEnv
70   [NONE]              *
70   [NONE]              env
70   [NONE]              =
70   [NONE]              NULL
70   [NONE]              ;
70   [NONE]              
72   [NONE]              if
72   [IF]                (
72   [NONE]              (
72   [NONE]              *
72   [NONE]              TCH_vm
72   [NONE]              )
72   [NONE]              ->
72   [NONE]              GetEnv
72   [FUNC_CALL]         (
72   [NONE]              TCH_vm
72   [NONE]              ,
72   [C_CAST]            (
72   [C_CAST]            void
72   [C_CAST]            *
72   [C_CAST]            *
72   [C_CAST]            )
72   [NONE]              &
72   [NONE]              env
72   [NONE]              ,
72   [NONE]              JNI_VERSION_1_6
72   [FUNC_CALL]         )
72   [NONE]              !=
72   [NONE]              JNI_OK
72   [IF]                )
72   [IF]                {
72   [NONE]              
73   [NONE]              JavaVMAttachArgs
73   [NONE]              args
73   [NONE]              ;
73   [NONE]              
74   [NONE]              args
74   [NONE]              .
74   [NONE]              version
74   [NONE]              =
74   [NONE]              JNI_VERSION_1_6
74   [NONE]              ;
74   [NONE]              
75   [NONE]              args
75   [NONE]              .
75   [NONE]              name
75   [NONE]              =
75   [NONE]              NULL
75   [NONE]              ;
75   [NONE]              
76   [NONE]              args
76   [NONE]              .
76   [NONE]              group
76   [NONE]              =
76   [NONE]              NULL
76   [NONE]              ;
76   [NONE]              
78   [NONE]              int
78   [NONE]              attachStatus
78   [NONE]              ;
78   [NONE]              
79   [NONE]              if
79   [IF]                (
79   [NONE]              (
79   [NONE]              attachStatus
79   [NONE]              =
79   [NONE]              (
79   [NONE]              *
79   [NONE]              TCH_vm
79   [NONE]              )
79   [NONE]              ->
79   [NONE]              AttachCurrentThread
79   [FUNC_CALL]         (
79   [NONE]              TCH_vm
79   [NONE]              ,
79   [NONE]              &
79   [NONE]              env
79   [NONE]              ,
79   [NONE]              &
79   [NONE]              args
79   [FUNC_CALL]         )
79   [NONE]              )
79   [NONE]              <
79   [NONE]              0
79   [IF]                )
79   [IF]                {
79   [NONE]              
80   [NONE]              TCH_LOGE
80   [FUNC_CALL]         (
80   [NONE]              "TCH_getEnv failed"
80   [FUNC_CALL]         )
80   [NONE]              ;
80   [NONE]              
81   [IF]                }
81   [NONE]              
82   [IF]                }
82   [NONE]              
83   [NONE]              ret
83   [NONE]              =
83   [NONE]              env
83   [NONE]              ;
83   [NONE]              
84   [PP_ENDIF]          #
84   [NONE]              endif
84   [COMMENT_END]       /* if defined(__cplusplus) */
84   [NONE]              
85   [NONE]              return
85   [NONE]              ret
85   [NONE]              ;
85   [NONE]              
86   [FUNC_DEF]          }
86   [NONE]              
88   [FUNC_DEF]          static
88   [FUNC_DEF]          jclass
88   [NONE]              TCH_loadClass
88   [FUNC_DEF]          (
88   [NONE]              C_JNIEnv
88   [NONE]              *
88   [NONE]              env
88   [NONE]              ,
88   [NONE]              jobject
88   [NONE]              activity
88   [NONE]              ,
88   [NONE]              const
88   [NONE]              char
88   [NONE]              *
88   [NONE]              className
88   [FUNC_DEF]          )
88   [FUNC_DEF]          {
88   [NONE]              
89   [NONE]              jclass
89   [NONE]              cls_Activity
89   [NONE]              =
89   [NONE]              (
89   [NONE]              *
89   [NONE]              env
89   [NONE]              )
89   [NONE]              ->
89   [NONE]              GetObjectClass
89   [FUNC_CALL]         (
89   [C_CAST]            (
89   [C_CAST]            JNIEnv
89   [C_CAST]            *
89   [C_CAST]            )
89   [NONE]              env
89   [NONE]              ,
89   [NONE]              activity
89   [FUNC_CALL]         )
89   [NONE]              ;
89   [NONE]              
90   [NONE]              jmethodID
90   [NONE]              mid_getClassLoader
90   [NONE]              =
90   [NONE]              (
90   [NONE]              *
90   [NONE]              env
90   [NONE]              )
90   [NONE]              ->
90   [NONE]              GetMethodID
90   [FUNC_CALL]         (
90   [C_CAST]            (
90   [C_CAST]            JNIEnv
90   [C_CAST]            *
90   [C_CAST]            )
90   [NONE]              env
90   [NONE]              ,
90   [NONE]              cls_Activity
90   [NONE]              ,
90   [NONE]              "getClassLoader"
90   [NONE]              ,
90   [NONE]              "()Ljava/lang/ClassLoader;"
90   [FUNC_CALL]         )
90   [NONE]              ;
90   [NONE]              
91   [NONE]              jobject
91   [NONE]              obj_classLoader
91   [NONE]              =
91   [NONE]              (
91   [NONE]              *
91   [NONE]              env
91   [NONE]              )
91   [NONE]              ->
91   [NONE]              CallObjectMethod
91   [FUNC_CALL]         (
91   [C_CAST]            (
91   [C_CAST]            JNIEnv
91   [C_CAST]            *
91   [C_CAST]            )
91   [NONE]              env
91   [NONE]              ,
91   [NONE]              activity
91   [NONE]              ,
91   [NONE]              mid_getClassLoader
91   [FUNC_CALL]         )
91   [NONE]              ;
91   [NONE]              
93   [NONE]              jclass
93   [NONE]              cls_classLoader
93   [NONE]              =
93   [NONE]              (
93   [NONE]              *
93   [NONE]              env
93   [NONE]              )
93   [NONE]              ->
93   [NONE]              GetObjectClass
93   [FUNC_CALL]         (
93   [C_CAST]            (
93   [C_CAST]            JNIEnv
93   [C_CAST]            *
93   [C_CAST]            )
93   [NONE]              env
93   [NONE]              ,
93   [NONE]              obj_classLoader
93   [FUNC_CALL]         )
93   [NONE]              ;
93   [NONE]              
94   [NONE]              jmethodID
94   [NONE]              mid_loadClass
94   [NONE]              =
94   [NONE]              (
94   [NONE]              *
94   [NONE]              env
94   [NONE]              )
94   [NONE]              ->
94   [NONE]              GetMethodID
94   [FUNC_CALL]         (
94   [C_CAST]            (
94   [C_CAST]            JNIEnv
94   [C_CAST]            *
94   [C_CAST]            )
94   [NONE]              env
94   [NONE]              ,
94   [NONE]              cls_classLoader
94   [NONE]              ,
94   [NONE]              "loadClass"
94   [NONE]              ,
94   [NONE]              "(Ljava/lang/String;)Ljava/lang/Class;"
94   [FUNC_CALL]         )
94   [NONE]              ;
94   [NONE]              
96   [NONE]              jstring
96   [NONE]              _className
96   [NONE]              =
96   [NONE]              (
96   [NONE]              *
96   [NONE]              env
96   [NONE]              )
96   [NONE]              ->
96   [NONE]              NewStringUTF
96   [FUNC_CALL]         (
96   [C_CAST]            (
96   [C_CAST]            JNIEnv
96   [C_CAST]            *
96   [C_CAST]            )
96   [NONE]              env
96   [NONE]              ,
96   [NONE]              className
96   [FUNC_CALL]         )
96   [NONE]              ;
96   [NONE]              
97   [NONE]              jclass
97   [NONE]              cls
97   [NONE]              =
97   [C_CAST]            (
97   [C_CAST]            jclass
97   [C_CAST]            )
97   [NONE]              (
97   [NONE]              *
97   [NONE]              env
97   [NONE]              )
97   [NONE]              ->
97   [NONE]              CallObjectMethod
97   [FUNC_CALL]         (
97   [C_CAST]            (
97   [C_CAST]            JNIEnv
97   [C_CAST]            *
97   [C_CAST]            )
97   [NONE]              env
97   [NONE]              ,
97   [NONE]              obj_classLoader
97   [NONE]              ,
97   [NONE]              mid_loadClass
97   [NONE]              ,
97   [NONE]              _className
97   [FUNC_CALL]         )
97   [NONE]              ;
97   [NONE]              
99   [NONE]              (
99   [NONE]              *
99   [NONE]              env
99   [NONE]              )
99   [NONE]              ->
99   [NONE]              DeleteLocalRef
99   [FUNC_CALL]         (
99   [C_CAST]            (
99   [C_CAST]            JNIEnv
99   [C_CAST]            *
99   [C_CAST]            )
99   [NONE]              env
99   [NONE]              ,
99   [NONE]              _className
99   [FUNC_CALL]         )
99   [NONE]              ;
99   [NONE]              
101  [NONE]              if
101  [IF]                (
101  [NONE]              !
101  [NONE]              cls
101  [IF]                )
101  [IF]                {
101  [NONE]              
102  [NONE]              TCH_LOGE
102  [FUNC_CALL]         (
102  [NONE]              "Couldn't find class %s"
102  [NONE]              ,
102  [NONE]              className
102  [FUNC_CALL]         )
102  [NONE]              ;
102  [NONE]              
103  [IF]                }
103  [NONE]              
105  [NONE]              return
105  [NONE]              cls
105  [NONE]              ;
105  [NONE]              
106  [FUNC_DEF]          }
106  [NONE]              
108  [PP_DEFINE]         #
108  [NONE]              define
108  [NONE]              TCH_str2
108  [MACRO_FUNC]        (
108  [NONE]              x
108  [MACRO_FUNC]        )
108  [NONE]              #
108  [NONE]              x
108  [NONE]              
109  [PP_DEFINE]         #
109  [NONE]              define
109  [NONE]              TCH_str
109  [MACRO_FUNC]        (
109  [NONE]              x
109  [MACRO_FUNC]        )
109  [NONE]              TCH_str2
109  [FUNC_CALL]         (
109  [NONE]              x
109  [FUNC_CALL]         )
109  [NONE]              
111  [PP_DEFINE]         #
111  [NONE]              define
111  [NONE]              TCH_CLASS
111  [MACRO_FUNC]        (
111  [NONE]              _class
111  [MACRO_FUNC]        )
111  [NONE]              tchClass_
111  [NONE]              ##
111  [NONE]              _class
111  [NONE]              
113  [PP_DEFINE]         #
113  [NONE]              define
113  [NONE]              TCH_LOCAL_CLASS
113  [MACRO_FUNC]        (
113  [NONE]              _class
113  [MACRO_FUNC]        )
113  [NONE]              local_tchClass_
113  [NONE]              ##
113  [NONE]              _class
113  [NONE]              
115  [PP_DEFINE]         #
115  [NONE]              define
115  [NONE]              TCH_REGISTER_CLASS
115  [MACRO_FUNC]        (
115  [NONE]              _class
115  [MACRO_FUNC]        )
115  [NONE]              \
116  [NONE]              jclass
116  [NONE]              TCH_CLASS
116  [FUNC_CALL]         (
116  [NONE]              _class
116  [FUNC_CALL]         )
116  [NONE]              =
116  [NONE]              NULL
116  [NONE]              ;
116  [NONE]              
118  [PP_DEFINE]         #
118  [NONE]              define
118  [NONE]              TCH_EXTERN_CLASS
118  [MACRO_FUNC]        (
118  [NONE]              _class
118  [MACRO_FUNC]        )
118  [NONE]              \
119  [NONE]              jclass
119  [NONE]              TCH_CLASS
119  [FUNC_CALL]         (
119  [NONE]              _class
119  [FUNC_CALL]         )
119  [NONE]              ;
119  [NONE]              
121  [PP_DEFINE]         #
121  [NONE]              define
121  [NONE]              TCH_METHOD
121  [MACRO_FUNC]        (
121  [NONE]              _method
121  [MACRO_FUNC]        )
121  [NONE]              tchMethod_
121  [NONE]              ##
121  [NONE]              _method
121  [NONE]              
123  [PP_DEFINE]         #
123  [NONE]              define
123  [NONE]              TCH_REGISTER_METHOD
123  [MACRO_FUNC]        (
123  [NONE]              _method
123  [MACRO_FUNC]        )
123  [NONE]              \
124  [NONE]              jmethodID
124  [NONE]              TCH_METHOD
124  [FUNC_CALL]         (
124  [NONE]              _method
124  [FUNC_CALL]         )
124  [NONE]              =
124  [NONE]              NULL
124  [NONE]              ;
124  [NONE]              
126  [PP_DEFINE]         #
126  [NONE]              define
126  [NONE]              TCH_EXTERN_METHOD
126  [MACRO_FUNC]        (
126  [NONE]              _method
126  [MACRO_FUNC]        )
126  [NONE]              \
127  [NONE]              jmethodID
127  [NONE]              TCH_METHOD
127  [FUNC_CALL]         (
127  [NONE]              _method
127  [FUNC_CALL]         )
127  [NONE]              ;
127  [NONE]              
129  [PP_DEFINE]         #
129  [NONE]              define
129  [NONE]              TCH_REGISTER_NATIVES
129  [MACRO_FUNC]        (
129  [NONE]              _env
129  [NONE]              ,
129  [NONE]              _class
129  [NONE]              ,
129  [NONE]              methods
129  [MACRO_FUNC]        )
129  [NONE]              \
130  [NONE]              if
130  [IF]                (
130  [NONE]              (
130  [NONE]              *
130  [NONE]              _env
130  [NONE]              )
130  [NONE]              ->
130  [NONE]              RegisterNatives
130  [FUNC_CALL]         (
130  [C_CAST]            (
130  [C_CAST]            JNIEnv
130  [C_CAST]            *
130  [C_CAST]            )
130  [NONE]              _env
130  [NONE]              ,
130  [NONE]              TCH_CLASS
130  [FUNC_CALL]         (
130  [NONE]              _class
130  [FUNC_CALL]         )
130  [NONE]              ,
130  [NONE]              methods
130  [NONE]              ,
130  [NONE]              TCH_NELEM
130  [FUNC_CALL]         (
130  [NONE]              methods
130  [FUNC_CALL]         )
130  [FUNC_CALL]         )
130  [NONE]              <
130  [NONE]              0
130  [IF]                )
130  [IF]                {
130  [NONE]              \
131  [NONE]              TCH_LOGE
131  [FUNC_CALL]         (
131  [NONE]              "RegisterNatives failed for %s\n"
131  [NONE]              ,
131  [NONE]              TCH_str
131  [FUNC_CALL]         (
131  [NONE]              _class
131  [FUNC_CALL]         )
131  [FUNC_CALL]         )
131  [NONE]              ;
131  [NONE]              \
132  [IF]                }
132  [NONE]              
134  [PP_DEFINE]         #
134  [NONE]              define
134  [NONE]              TCH_FIND_CLASS
134  [MACRO_FUNC]        (
134  [NONE]              _env
134  [NONE]              ,
134  [NONE]              _class
134  [NONE]              ,
134  [NONE]              _className
134  [MACRO_FUNC]        )
134  [NONE]              \
135  [NONE]              jclass
135  [NONE]              TCH_LOCAL_CLASS
135  [FUNC_CALL]         (
135  [NONE]              _class
135  [FUNC_CALL]         )
135  [NONE]              =
135  [NONE]              (
135  [NONE]              *
135  [NONE]              _env
135  [NONE]              )
135  [NONE]              ->
135  [NONE]              FindClass
135  [FUNC_CALL]         (
135  [C_CAST]            (
135  [C_CAST]            JNIEnv
135  [C_CAST]            *
135  [C_CAST]            )
135  [NONE]              _env
135  [NONE]              ,
135  [NONE]              _className
135  [FUNC_CALL]         )
135  [NONE]              ;
135  [NONE]              \
136  [NONE]              if
136  [IF]                (
136  [NONE]              TCH_LOCAL_CLASS
136  [FUNC_CALL]         (
136  [NONE]              _class
136  [FUNC_CALL]         )
136  [NONE]              ==
136  [NONE]              NULL
136  [IF]                )
136  [IF]                {
136  [NONE]              \
137  [NONE]              TCH_LOGE
137  [FUNC_CALL]         (
137  [NONE]              "Unable to find class %s\n"
137  [NONE]              ,
137  [NONE]              _className
137  [FUNC_CALL]         )
137  [NONE]              ;
137  [NONE]              \
138  [IF]                }
138  [NONE]              else
138  [ELSE]              {
138  [NONE]              \
139  [NONE]              TCH_CLASS
139  [FUNC_CALL]         (
139  [NONE]              _class
139  [FUNC_CALL]         )
139  [NONE]              =
139  [C_CAST]            (
139  [C_CAST]            jclass
139  [C_CAST]            )
139  [NONE]              (
139  [NONE]              *
139  [NONE]              _env
139  [NONE]              )
139  [NONE]              ->
139  [NONE]              NewGlobalRef
139  [FUNC_CALL]         (
139  [C_CAST]            (
139  [C_CAST]            JNIEnv
139  [C_CAST]            *
139  [C_CAST]            )
139  [NONE]              _env
139  [NONE]              ,
139  [NONE]              TCH_LOCAL_CLASS
139  [FUNC_CALL]         (
139  [NONE]              _class
139  [FUNC_CALL]         )
139  [FUNC_CALL]         )
139  [NONE]              ;
139  [NONE]              \
140  [ELSE]              }
140  [NONE]              
142  [PP_DEFINE]         #
142  [NONE]              define
142  [NONE]              TCH_FIND_STATIC_METHOD
142  [MACRO_FUNC]        (
142  [NONE]              _env
142  [NONE]              ,
142  [NONE]              _class
142  [NONE]              ,
142  [NONE]              _method
142  [NONE]              ,
142  [NONE]              _prototype
142  [MACRO_FUNC]        )
142  [NONE]              \
143  [NONE]              TCH_METHOD
143  [FUNC_CALL]         (
143  [NONE]              _method
143  [FUNC_CALL]         )
143  [NONE]              =
143  [NONE]              (
143  [NONE]              *
143  [NONE]              _env
143  [NONE]              )
143  [NONE]              ->
143  [NONE]              GetStaticMethodID
143  [FUNC_CALL]         (
143  [C_CAST]            (
143  [C_CAST]            JNIEnv
143  [C_CAST]            *
143  [C_CAST]            )
143  [NONE]              _env
143  [NONE]              ,
143  [NONE]              TCH_CLASS
143  [FUNC_CALL]         (
143  [NONE]              _class
143  [FUNC_CALL]         )
143  [NONE]              ,
143  [NONE]              TCH_str
143  [FUNC_CALL]         (
143  [NONE]              _method
143  [FUNC_CALL]         )
143  [NONE]              ,
143  [NONE]              _prototype
143  [FUNC_CALL]         )
143  [NONE]              ;
143  [NONE]              \
144  [NONE]              if
144  [IF]                (
144  [NONE]              TCH_METHOD
144  [FUNC_CALL]         (
144  [NONE]              _method
144  [FUNC_CALL]         )
144  [NONE]              ==
144  [NONE]              NULL
144  [IF]                )
144  [IF]                {
144  [NONE]              \
145  [NONE]              TCH_LOGE
145  [FUNC_CALL]         (
145  [NONE]              "Unable to find method %s"
145  [NONE]              ,
145  [NONE]              TCH_str
145  [FUNC_CALL]         (
145  [NONE]              _method
145  [FUNC_CALL]         )
145  [FUNC_CALL]         )
145  [NONE]              ;
145  [NONE]              \
146  [IF]                }
146  [NONE]              
148  [PP_DEFINE]         #
148  [NONE]              define
148  [NONE]              TCH_FIND_STATIC_METHOD2
148  [MACRO_FUNC]        (
148  [NONE]              _env
148  [NONE]              ,
148  [NONE]              _class
148  [NONE]              ,
148  [NONE]              _method
148  [NONE]              ,
148  [NONE]              _symbol
148  [NONE]              ,
148  [NONE]              _prototype
148  [MACRO_FUNC]        )
148  [NONE]              \
149  [NONE]              TCH_METHOD
149  [FUNC_CALL]         (
149  [NONE]              _method
149  [FUNC_CALL]         )
149  [NONE]              =
149  [NONE]              (
149  [NONE]              *
149  [NONE]              _env
149  [NONE]              )
149  [NONE]              ->
149  [NONE]              GetStaticMethodID
149  [FUNC_CALL]         (
149  [C_CAST]            (
149  [C_CAST]            JNIEnv
149  [C_CAST]            *
149  [C_CAST]            )
149  [NONE]              _env
149  [NONE]              ,
149  [NONE]              TCH_CLASS
149  [FUNC_CALL]         (
149  [NONE]              _class
149  [FUNC_CALL]         )
149  [NONE]              ,
149  [NONE]              TCH_str
149  [FUNC_CALL]         (
149  [NONE]              _symbol
149  [FUNC_CALL]         )
149  [NONE]              ,
149  [NONE]              _prototype
149  [FUNC_CALL]         )
149  [NONE]              ;
149  [NONE]              \
150  [NONE]              if
150  [IF]                (
150  [NONE]              TCH_METHOD
150  [FUNC_CALL]         (
150  [NONE]              _method
150  [FUNC_CALL]         )
150  [NONE]              ==
150  [NONE]              NULL
150  [IF]                )
150  [IF]                {
150  [NONE]              \
151  [NONE]              TCH_LOGE
151  [FUNC_CALL]         (
151  [NONE]              "Unable to find method %s"
151  [NONE]              ,
151  [NONE]              TCH_str
151  [FUNC_CALL]         (
151  [NONE]              _method
151  [FUNC_CALL]         )
151  [FUNC_CALL]         )
151  [NONE]              ;
151  [NONE]              \
152  [IF]                }
152  [NONE]              
154  [PP_DEFINE]         #
154  [NONE]              define
154  [NONE]              TCH_CALL_STATIC_METHOD_ARGS
154  [MACRO_FUNC]        (
154  [NONE]              _env
154  [NONE]              ,
154  [NONE]              _class
154  [NONE]              ,
154  [NONE]              _method
154  [NONE]              ,
154  [NONE]              ...
154  [MACRO_FUNC]        )
154  [NONE]              \
155  [NONE]              (
155  [NONE]              *
155  [NONE]              _env
155  [NONE]              )
155  [NONE]              ->
155  [NONE]              CallStaticVoidMethod
155  [FUNC_CALL]         (
155  [C_CAST]            (
155  [C_CAST]            JNIEnv
155  [C_CAST]            *
155  [C_CAST]            )
155  [NONE]              _env
155  [NONE]              ,
155  [NONE]              TCH_CLASS
155  [FUNC_CALL]         (
155  [NONE]              _class
155  [FUNC_CALL]         )
155  [NONE]              ,
155  [NONE]              TCH_METHOD
155  [FUNC_CALL]         (
155  [NONE]              _method
155  [FUNC_CALL]         )
155  [NONE]              ,
155  [NONE]              __VA_ARGS__
155  [FUNC_CALL]         )
155  [NONE]              ;
155  [NONE]              
157  [PP_DEFINE]         #
157  [NONE]              define
157  [NONE]              TCH_CALL_STATIC_METHOD_BOOL
157  [MACRO_FUNC]        (
157  [NONE]              _env
157  [NONE]              ,
157  [NONE]              _class
157  [NONE]              ,
157  [NONE]              _method
157  [MACRO_FUNC]        )
157  [NONE]              \
158  [NONE]              (
158  [NONE]              *
158  [NONE]              _env
158  [NONE]              )
158  [NONE]              ->
158  [NONE]              CallStaticBooleanMethod
158  [FUNC_CALL]         (
158  [C_CAST]            (
158  [C_CAST]            JNIEnv
158  [C_CAST]            *
158  [C_CAST]            )
158  [NONE]              _env
158  [NONE]              ,
158  [NONE]              TCH_CLASS
158  [FUNC_CALL]         (
158  [NONE]              _class
158  [FUNC_CALL]         )
158  [NONE]              ,
158  [NONE]              TCH_METHOD
158  [FUNC_CALL]         (
158  [NONE]              _method
158  [FUNC_CALL]         )
158  [FUNC_CALL]         )
158  [NONE]              ;
158  [NONE]              
160  [NONE]              TCH_REGISTER_CLASS
160  [FUNC_CALL]         (
160  [NONE]              testclassClass
160  [FUNC_CALL]         )
160  [NONE]              ;
160  [NONE]              
161  [NONE]              TCH_REGISTER_METHOD
161  [FUNC_CALL]         (
161  [NONE]              testclassConstructor
161  [FUNC_CALL]         )
161  [NONE]              ;
161  [NONE]              
162  [NONE]              static
162  [NONE]              jobject
162  [NONE]              TCH_testclassInstance
162  [NONE]              =
162  [NONE]              NULL
162  [NONE]              ;
162  [NONE]              
164  [NONE]              TCH_REGISTER_CLASS
164  [FUNC_CALL]         (
164  [NONE]              testclassNativeListenerClass
164  [FUNC_CALL]         )
164  [NONE]              ;
164  [NONE]              
165  [NONE]              TCH_REGISTER_METHOD
165  [FUNC_CALL]         (
165  [NONE]              testclassNativeListenerConstructor
165  [FUNC_CALL]         )
165  [NONE]              ;
165  [NONE]              
166  [NONE]              static
166  [NONE]              jobject
166  [NONE]              TCH_testclassNativeListenerInstance
166  [NONE]              =
166  [NONE]              NULL
166  [NONE]              ;
166  [NONE]              
168  [NONE]              TCH_REGISTER_METHOD
168  [FUNC_CALL]         (
168  [NONE]              isSupported
168  [FUNC_CALL]         )
168  [NONE]              ;
168  [NONE]              
169  [NONE]              TCH_REGISTER_METHOD
169  [FUNC_CALL]         (
169  [NONE]              initTestClass
169  [FUNC_CALL]         )
169  [NONE]              ;
169  [NONE]              
171  [FUNC_DEF]          static
171  [FUNC_DEF]          void
171  [NONE]              TCH_preload
171  [FUNC_DEF]          (
171  [NONE]              C_JNIEnv
171  [NONE]              *
171  [NONE]              env
171  [FUNC_DEF]          )
171  [FUNC_DEF]          {
171  [NONE]              
172  [NONE]              TCH_ELOG
172  [NONE]              ;
172  [NONE]              
174  [NONE]              if
174  [IF]                (
174  [NONE]              TCH_CLASS
174  [FUNC_CALL]         (
174  [NONE]              testclassClass
174  [FUNC_CALL]         )
174  [NONE]              ==
174  [NONE]              NULL
174  [IF]                )
174  [IF]                {
174  [NONE]              
175  [NONE]              TCH_FIND_CLASS
175  [FUNC_CALL]         (
175  [NONE]              env
175  [NONE]              ,
175  [NONE]              testclassClass
175  [NONE]              ,
175  [NONE]              kTCHTestClassClass
175  [FUNC_CALL]         )
175  [NONE]              ;
175  [NONE]              
176  [IF]                }
176  [NONE]              
178  [COMMENT_WHOLE]     // Class really not found or not loaded, bail
178  [NONE]              
179  [NONE]              if
179  [IF]                (
179  [NONE]              TCH_CLASS
179  [FUNC_CALL]         (
179  [NONE]              testclassClass
179  [FUNC_CALL]         )
179  [NONE]              ==
179  [NONE]              NULL
179  [IF]                )
179  [IF]                {
179  [NONE]              
180  [NONE]              return
180  [NONE]              ;
180  [NONE]              
181  [IF]                }
181  [NONE]              
183  [NONE]              if
183  [IF]                (
183  [NONE]              TCH_CLASS
183  [FUNC_CALL]         (
183  [NONE]              testclassClass
183  [FUNC_CALL]         )
183  [NONE]              !=
183  [NONE]              NULL
183  [NONE]              &&
183  [NONE]              TCH_METHOD
183  [FUNC_CALL]         (
183  [NONE]              isSupported
183  [FUNC_CALL]         )
183  [NONE]              ==
183  [NONE]              NULL
183  [IF]                )
183  [IF]                {
183  [NONE]              
184  [NONE]              TCH_FIND_STATIC_METHOD
184  [FUNC_CALL]         (
184  [NONE]              env
184  [NONE]              ,
184  [NONE]              testclassClass
184  [NONE]              ,
184  [NONE]              isSupported
184  [NONE]              ,
184  [NONE]              "()Z"
184  [FUNC_CALL]         )
184  [NONE]              ;
184  [NONE]              
185  [NONE]              TCH_FIND_STATIC_METHOD
185  [FUNC_CALL]         (
185  [NONE]              env
185  [NONE]              ,
185  [NONE]              testclassClass
185  [NONE]              ,
185  [NONE]              initTestClass
185  [NONE]              ,
185  [NONE]              "(Lcom/testclass/TestClass/ITestClassListener;Landroid/app/Activity;)Z"
185  [FUNC_CALL]         )
185  [NONE]              ;
185  [NONE]              
187  [NONE]              if
187  [IF]                (
187  [NONE]              TCH_CLASS
187  [FUNC_CALL]         (
187  [NONE]              testclassClass
187  [FUNC_CALL]         )
187  [NONE]              !=
187  [NONE]              NULL
187  [IF]                )
187  [IF]                {
187  [NONE]              
188  [NONE]              TCH_METHOD
188  [FUNC_CALL]         (
188  [NONE]              testclassConstructor
188  [FUNC_CALL]         )
188  [NONE]              =
188  [NONE]              (
188  [NONE]              *
188  [NONE]              env
188  [NONE]              )
188  [NONE]              ->
188  [NONE]              GetMethodID
188  [FUNC_CALL]         (
188  [C_CAST]            (
188  [C_CAST]            JNIEnv
188  [C_CAST]            *
188  [C_CAST]            )
188  [NONE]              env
188  [NONE]              ,
188  [NONE]              TCH_CLASS
188  [FUNC_CALL]         (
188  [NONE]              testclassClass
188  [FUNC_CALL]         )
188  [NONE]              ,
188  [NONE]              "<init>"
188  [NONE]              ,
188  [NONE]              "()V"
188  [FUNC_CALL]         )
188  [NONE]              ;
188  [NONE]              
189  [NONE]              jobject
189  [NONE]              constructor
189  [NONE]              =
189  [NONE]              (
189  [NONE]              *
189  [NONE]              env
189  [NONE]              )
189  [NONE]              ->
189  [NONE]              NewObject
189  [FUNC_CALL]         (
189  [C_CAST]            (
189  [C_CAST]            JNIEnv
189  [C_CAST]            *
189  [C_CAST]            )
189  [NONE]              env
189  [NONE]              ,
189  [NONE]              TCH_CLASS
189  [FUNC_CALL]         (
189  [NONE]              testclassClass
189  [FUNC_CALL]         )
189  [NONE]              ,
189  [NONE]              TCH_METHOD
189  [FUNC_CALL]         (
189  [NONE]              testclassConstructor
189  [FUNC_CALL]         )
189  [FUNC_CALL]         )
189  [NONE]              ;
189  [NONE]              
190  [NONE]              TCH_testclassInstance
190  [NONE]              =
190  [NONE]              (
190  [NONE]              *
190  [NONE]              env
190  [NONE]              )
190  [NONE]              ->
190  [NONE]              NewGlobalRef
190  [FUNC_CALL]         (
190  [C_CAST]            (
190  [C_CAST]            JNIEnv
190  [C_CAST]            *
190  [C_CAST]            )
190  [NONE]              env
190  [NONE]              ,
190  [NONE]              constructor
190  [FUNC_CALL]         )
190  [NONE]              ;
190  [NONE]              
191  [IF]                }
191  [NONE]              
193  [NONE]              if
193  [IF]                (
193  [NONE]              TCH_CLASS
193  [FUNC_CALL]         (
193  [NONE]              testclassNativeListenerClass
193  [FUNC_CALL]         )
193  [NONE]              ==
193  [NONE]              NULL
193  [IF]                )
193  [IF]                {
193  [NONE]              
194  [NONE]              TCH_FIND_CLASS
194  [FUNC_CALL]         (
194  [NONE]              env
194  [NONE]              ,
194  [NONE]              testclassNativeListenerClass
194  [NONE]              ,
194  [NONE]              kTCHTestClassNativeListenerClass
194  [FUNC_CALL]         )
194  [NONE]              ;
194  [NONE]              
195  [IF]                }
195  [NONE]              
197  [NONE]              if
197  [IF]                (
197  [NONE]              TCH_CLASS
197  [FUNC_CALL]         (
197  [NONE]              testclassNativeListenerClass
197  [FUNC_CALL]         )
197  [NONE]              !=
197  [NONE]              NULL
197  [IF]                )
197  [IF]                {
197  [NONE]              
198  [NONE]              TCH_METHOD
198  [FUNC_CALL]         (
198  [NONE]              testclassNativeListenerConstructor
198  [FUNC_CALL]         )
198  [NONE]              =
198  [NONE]              (
198  [NONE]              *
198  [NONE]              env
198  [NONE]              )
198  [NONE]              ->
198  [NONE]              GetMethodID
198  [FUNC_CALL]         (
198  [C_CAST]            (
198  [C_CAST]            JNIEnv
198  [C_CAST]            *
198  [C_CAST]            )
198  [NONE]              env
198  [NONE]              ,
198  [NONE]              TCH_CLASS
198  [FUNC_CALL]         (
198  [NONE]              testclassNativeListenerClass
198  [FUNC_CALL]         )
198  [NONE]              ,
198  [NONE]              "<init>"
198  [NONE]              ,
198  [NONE]              "()V"
198  [FUNC_CALL]         )
198  [NONE]              ;
198  [NONE]              
199  [NONE]              jobject
199  [NONE]              listener
199  [NONE]              =
199  [NONE]              (
199  [NONE]              *
199  [NONE]              env
199  [NONE]              )
199  [NONE]              ->
199  [NONE]              NewObject
199  [FUNC_CALL]         (
199  [C_CAST]            (
199  [C_CAST]            JNIEnv
199  [C_CAST]            *
199  [C_CAST]            )
199  [NONE]              env
199  [NONE]              ,
199  [NONE]              TCH_CLASS
199  [FUNC_CALL]         (
199  [NONE]              testclassNativeListenerClass
199  [FUNC_CALL]         )
199  [NONE]              ,
199  [NONE]              TCH_METHOD
199  [FUNC_CALL]         (
199  [NONE]              testclassNativeListenerConstructor
199  [FUNC_CALL]         )
199  [FUNC_CALL]         )
199  [NONE]              ;
199  [NONE]              
200  [NONE]              TCH_testclassNativeListenerInstance
200  [NONE]              =
200  [NONE]              (
200  [NONE]              *
200  [NONE]              env
200  [NONE]              )
200  [NONE]              ->
200  [NONE]              NewGlobalRef
200  [FUNC_CALL]         (
200  [C_CAST]            (
200  [C_CAST]            JNIEnv
200  [C_CAST]            *
200  [C_CAST]            )
200  [NONE]              env
200  [NONE]              ,
200  [NONE]              listener
200  [FUNC_CALL]         )
200  [NONE]              ;
200  [NONE]              
201  [NONE]              TCH_REGISTER_NATIVES
201  [FUNC_CALL]         (
201  [NONE]              env
201  [NONE]              ,
201  [NONE]              testclassNativeListenerClass
201  [NONE]              ,
201  [NONE]              TCH_listenerMethods
201  [FUNC_CALL]         )
201  [NONE]              ;
201  [NONE]              
202  [NONE]              TCH_LOGV
202  [FUNC_CALL]         (
202  [NONE]              "Initializing built-in listener"
202  [FUNC_CALL]         )
202  [NONE]              ;
202  [NONE]              
203  [IF]                }
203  [NONE]              
204  [IF]                }
204  [NONE]              
205  [FUNC_DEF]          }
205  [NONE]              
207  [PP_ELSE]           #
207  [NONE]              elif
207  [NONE]              defined
207  [NONE]              (
207  [NONE]              __APPLE__
207  [NONE]              )
207  [NONE]              
209  [PP_IF]             #
209  [NONE]              ifndef
209  [NONE]              NDEBUG
209  [NONE]              
210  [PP_DEFINE]         #
210  [NONE]              define
210  [NONE]              TCH_LOGV
210  [MACRO_FUNC]        (
210  [NONE]              ...
210  [MACRO_FUNC]        )
210  [NONE]              NSLog
210  [FUNC_CALL]         (
210  [NONE]              __VA_ARGS__
210  [FUNC_CALL]         )
210  [NONE]              
211  [PP_ELSE]           #
211  [NONE]              else
211  [NONE]              
212  [PP_DEFINE]         #
212  [NONE]              define
212  [NONE]              TCH_LOGV
212  [MACRO_FUNC]        (
212  [NONE]              ...
212  [MACRO_FUNC]        )
212  [NONE]              
213  [PP_ENDIF]          #
213  [NONE]              endif
213  [NONE]              
215  [PP_DEFINE]         #
215  [NONE]              define
215  [NONE]              TCH_ELOG
215  [NONE]              TCH_LOGV
215  [FUNC_CALL]         (
215  [NONE]              @"%s"
215  [NONE]              ,
215  [NONE]              __FUNCTION__
215  [FUNC_CALL]         )
215  [NONE]              
217  [PP_IF]             #
217  [NONE]              if
217  [NONE]              defined
217  [NONE]              (
217  [NONE]              __cplusplus
217  [NONE]              )
217  [NONE]              
218  [PP_DEFINE]         #
218  [NONE]              define
218  [NONE]              TCH_NS
218  [MACRO_FUNC]        (
218  [NONE]              _class
218  [MACRO_FUNC]        )
218  [NONE]              ::
218  [NONE]              _class
218  [NONE]              
219  [PP_ELSE]           #
219  [NONE]              else
219  [NONE]              
220  [PP_DEFINE]         #
220  [NONE]              define
220  [NONE]              TCH_NS
220  [MACRO_FUNC]        (
220  [NONE]              _class
220  [MACRO_FUNC]        )
220  [NONE]              _class
220  [NONE]              
221  [PP_ENDIF]          #
221  [NONE]              endif
221  [NONE]              
223  [NONE]              @interface
223  [OC_INTF]           TCH_delegateHandler
223  [OC_CLASS]          :
223  [NONE]              NSObject
223  [OC_PROTO_LIST]     <
223  [OC_PROTO_LIST]     TestClassDelegate
223  [OC_PROTO_LIST]     >
223  [NONE]              
224  [OC_INTF]           @end
224  [NONE]              
226  [NONE]              @implementation
226  [OC_IMPL]           TCH_delegateHandler
226  [NONE]              
227  [OC_MSG_DECL]       -
227  [OC_MSG_DECL]       (
227  [NONE]              void
227  [OC_MSG_DECL]       )
227  [OC_MSG_DECL]       testclassUploadDidProgress
227  [OC_MSG_DECL]       :
227  [OC_MSG_DECL]       (
227  [NONE]              NSNumber
227  [NONE]              *
227  [OC_MSG_DECL]       )
227  [NONE]              videoId
227  [OC_MSG_DECL]       progress
227  [OC_MSG_DECL]       :
227  [OC_MSG_DECL]       (
227  [NONE]              NSNumber
227  [NONE]              *
227  [OC_MSG_DECL]       )
227  [NONE]              progress
227  [OC_MSG_DECL]       {
227  [NONE]              
228  [NONE]              TCH_ELOG
228  [NONE]              ;
228  [NONE]              
229  [OC_MSG_DECL]       }
229  [NONE]              
231  [OC_IMPL]           @end
231  [NONE]              
233  [NONE]              static
233  [NONE]              TCH_delegateHandler
233  [NONE]              *
233  [NONE]              TCH_builtInHandler
233  [NONE]              =
233  [NONE]              nil
233  [NONE]              ;
233  [NONE]              
235  [PP_ENDIF]          #
235  [NONE]              endif
235  [COMMENT_END]       /* if defined(__ANDROID__) */
235  [NONE]              
237  [PP_IF]             #
237  [NONE]              if
237  [NONE]              defined
237  [NONE]              (
237  [NONE]              __ANDROID__
237  [NONE]              )
237  [NONE]              
239  [FUNC_DEF]          void
239  [NONE]              TCH_initTestClass
239  [FUNC_DEF]          (
239  [NONE]              JNIEnv
239  [NONE]              *
239  [NONE]              env
239  [NONE]              ,
239  [NONE]              jobject
239  [NONE]              activity
239  [NONE]              ,
239  [NONE]              jobject
239  [NONE]              listener
239  [FUNC_DEF]          )
239  [FUNC_DEF]          {
239  [NONE]              
240  [NONE]              TCH_ELOG
240  [NONE]              ;
240  [NONE]              
242  [NONE]              C_JNIEnv
242  [NONE]              *
242  [NONE]              cenv
242  [NONE]              =
242  [NONE]              NULL
242  [NONE]              ;
242  [NONE]              
243  [PP_IF]             #
243  [NONE]              if
243  [NONE]              defined
243  [NONE]              (
243  [NONE]              __cplusplus
243  [NONE]              )
243  [NONE]              
244  [NONE]              cenv
244  [NONE]              =
244  [C_CAST]            (
244  [C_CAST]            C_JNIEnv
244  [C_CAST]            *
244  [C_CAST]            )
244  [NONE]              env
244  [NONE]              ;
244  [NONE]              
245  [PP_ELSE]           #
245  [NONE]              else
245  [NONE]              
246  [NONE]              cenv
246  [NONE]              =
246  [NONE]              env
246  [NONE]              ;
246  [NONE]              
247  [PP_ENDIF]          #
247  [NONE]              endif
247  [NONE]              
249  [NONE]              if
249  [IF]                (
249  [NONE]              TCH_vm
249  [NONE]              ==
249  [NONE]              NULL
249  [IF]                )
249  [IF]                {
249  [NONE]              
250  [NONE]              int
250  [NONE]              status
250  [NONE]              =
250  [NONE]              (
250  [NONE]              *
250  [NONE]              cenv
250  [NONE]              )
250  [NONE]              ->
250  [NONE]              GetJavaVM
250  [FUNC_CALL]         (
250  [C_CAST]            (
250  [C_CAST]            JNIEnv
250  [C_CAST]            *
250  [C_CAST]            )
250  [NONE]              cenv
250  [NONE]              ,
250  [NONE]              &
250  [NONE]              TCH_vm
250  [FUNC_CALL]         )
250  [NONE]              ;
250  [NONE]              
251  [NONE]              if
251  [IF]                (
251  [NONE]              status
251  [NONE]              !=
251  [NONE]              0
251  [IF]                )
251  [IF]                {
251  [NONE]              
252  [NONE]              TCH_LOGE
252  [FUNC_CALL]         (
252  [NONE]              "GetJavaVM failed"
252  [FUNC_CALL]         )
252  [NONE]              ;
252  [NONE]              
253  [NONE]              return
253  [NONE]              ;
253  [NONE]              
254  [IF]                }
254  [NONE]              
255  [IF]                }
255  [NONE]              
257  [NONE]              TCH_CLASS
257  [FUNC_CALL]         (
257  [NONE]              testclassClass
257  [FUNC_CALL]         )
257  [NONE]              =
257  [NONE]              TCH_loadClass
257  [FUNC_CALL]         (
257  [NONE]              cenv
257  [NONE]              ,
257  [NONE]              activity
257  [NONE]              ,
257  [NONE]              kTCHTestClassLoader
257  [FUNC_CALL]         )
257  [NONE]              ;
257  [NONE]              
258  [NONE]              TCH_CLASS
258  [FUNC_CALL]         (
258  [NONE]              testclassNativeListenerClass
258  [FUNC_CALL]         )
258  [NONE]              =
258  [NONE]              TCH_loadClass
258  [FUNC_CALL]         (
258  [NONE]              cenv
258  [NONE]              ,
258  [NONE]              activity
258  [NONE]              ,
258  [NONE]              kTCHTestClassNativeListenerLoader
258  [FUNC_CALL]         )
258  [NONE]              ;
258  [NONE]              
259  [NONE]              TCH_preload
259  [FUNC_CALL]         (
259  [NONE]              cenv
259  [FUNC_CALL]         )
259  [NONE]              ;
259  [NONE]              
261  [NONE]              jobject
261  [NONE]              listenerRef
261  [NONE]              =
261  [NONE]              listener
261  [NONE]              ;
261  [NONE]              
262  [NONE]              if
262  [IF]                (
262  [NONE]              listenerRef
262  [NONE]              ==
262  [NONE]              NULL
262  [IF]                )
262  [IF]                {
262  [NONE]              
263  [NONE]              TCH_LOGV
263  [FUNC_CALL]         (
263  [NONE]              "Using built-in listener"
263  [FUNC_CALL]         )
263  [NONE]              ;
263  [NONE]              
264  [NONE]              listenerRef
264  [NONE]              =
264  [NONE]              TCH_testclassNativeListenerInstance
264  [NONE]              ;
264  [NONE]              
265  [IF]                }
265  [NONE]              
267  [NONE]              TCH_CALL_STATIC_METHOD_ARGS
267  [FUNC_CALL]         (
267  [NONE]              cenv
267  [NONE]              ,
267  [NONE]              testclassClass
267  [NONE]              ,
267  [NONE]              initTestClass
267  [NONE]              ,
267  [NONE]              listenerRef
267  [NONE]              ,
267  [NONE]              activity
267  [FUNC_CALL]         )
267  [NONE]              ;
267  [NONE]              
268  [FUNC_DEF]          }
268  [NONE]              
270  [PP_ELSE]           #
270  [NONE]              elif
270  [NONE]              defined
270  [NONE]              (
270  [NONE]              __APPLE__
270  [NONE]              )
270  [NONE]              
272  [FUNC_DEF]          void
272  [NONE]              TCH_initTestClass
272  [FUNC_DEF]          (
272  [NONE]              UIViewController
272  [NONE]              *
272  [NONE]              viewController
272  [NONE]              ,
272  [NONE]              id
272  [TEMPLATE]          <
272  [NONE]              TestClassDelegate
272  [TEMPLATE]          >
272  [NONE]              testclassDelegate
272  [FUNC_DEF]          )
272  [FUNC_DEF]          {
272  [NONE]              
273  [NONE]              TCH_ELOG
273  [NONE]              ;
273  [NONE]              
275  [NONE]              id
275  [TEMPLATE]          <
275  [NONE]              TestClassDelegate
275  [TEMPLATE]          >
275  [NONE]              testclassDelegateRef
275  [NONE]              =
275  [NONE]              testclassDelegate
275  [NONE]              ;
275  [NONE]              
276  [NONE]              if
276  [IF]                (
276  [NONE]              testclassDelegateRef
276  [NONE]              ==
276  [NONE]              nil
276  [IF]                )
276  [IF]                {
276  [NONE]              
277  [NONE]              TCH_builtInHandler
277  [NONE]              =
277  [OC_MSG]            [
277  [OC_MSG]            [
277  [NONE]              TCH_delegateHandler
277  [NONE]              alloc
277  [OC_MSG]            ]
277  [NONE]              init
277  [OC_MSG]            ]
277  [OC_MSG]            ;
277  [NONE]              
278  [NONE]              testclassDelegateRef
278  [NONE]              =
278  [NONE]              TCH_builtInHandler
278  [NONE]              ;
278  [NONE]              
279  [IF]                }
279  [NONE]              
281  [OC_MSG]            [
281  [NONE]              TCH_NS
281  [FUNC_CALL]         (
281  [NONE]              TestClass
281  [FUNC_CALL]         )
281  [NONE]              initWithDelegate
281  [NONE]              :
281  [NONE]              testclassDelegateRef
281  [NONE]              andParentViewController
281  [OC_MSG_NAME]       :
281  [NONE]              viewController
281  [OC_MSG]            ]
281  [OC_MSG]            ;
281  [NONE]              
282  [FUNC_DEF]          }
282  [NONE]              
284  [PP_ENDIF]          #
284  [NONE]              endif
284  [COMMENT_END]       /* if defined(__ANDROID__) */
284  [NONE]              
286  [FUNC_DEF]          bool
286  [NONE]              TCH_isSupported
286  [FUNC_DEF]          (
286  [NONE]              void
286  [FUNC_DEF]          )
286  [FUNC_DEF]          {
286  [NONE]              
287  [NONE]              TCH_ELOG
287  [NONE]              ;
287  [NONE]              
288  [NONE]              bool
288  [NONE]              ret
288  [NONE]              =
288  [NONE]              false
288  [NONE]              ;
288  [NONE]              
290  [PP_IF]             #
290  [NONE]              if
290  [NONE]              defined
290  [NONE]              (
290  [NONE]              __ANDROID__
290  [NONE]              )
290  [NONE]              
291  [NONE]              C_JNIEnv
291  [NONE]              *
291  [NONE]              env
291  [NONE]              =
291  [NONE]              TCH_getEnv
291  [FUNC_CALL]         (
291  [FUNC_CALL]         )
291  [NONE]              ;
291  [NONE]              
292  [NONE]              if
292  [IF]                (
292  [NONE]              env
292  [NONE]              &&
292  [NONE]              TCH_CLASS
292  [FUNC_CALL]         (
292  [NONE]              testclassClass
292  [FUNC_CALL]         )
292  [IF]                )
292  [IF]                {
292  [NONE]              
293  [NONE]              ret
293  [NONE]              =
293  [C_CAST]            (
293  [C_CAST]            bool
293  [C_CAST]            )
293  [NONE]              TCH_CALL_STATIC_METHOD_BOOL
293  [FUNC_CALL]         (
293  [NONE]              env
293  [NONE]              ,
293  [NONE]              testclassClass
293  [NONE]              ,
293  [NONE]              isSupported
293  [FUNC_CALL]         )
293  [NONE]              ;
293  [NONE]              
294  [IF]                }
294  [NONE]              
295  [PP_ELSE]           #
295  [NONE]              elif
295  [NONE]              defined
295  [NONE]              (
295  [NONE]              __APPLE__
295  [NONE]              )
295  [NONE]              
296  [NONE]              ret
296  [NONE]              =
296  [C_CAST]            (
296  [C_CAST]            bool
296  [C_CAST]            )
296  [OC_MSG]            [
296  [NONE]              TCH_NS
296  [FUNC_CALL]         (
296  [NONE]              TestClass
296  [FUNC_CALL]         )
296  [NONE]              isSupported
296  [OC_MSG]            ]
296  [OC_MSG]            ;
296  [NONE]              
297  [PP_ENDIF]          #
297  [NONE]              endif
297  [NONE]              
299  [NONE]              return
299  [NONE]              ret
299  [NONE]              ;
299  [NONE]              
300  [FUNC_DEF]          }
300  [NONE]              