Line [Token]             Text
1    [COMMENT_CPP]       // C/C++/Obj-C/Obj-C++ wrapper that exports C functions
1    [NEWLINE]           
2    [COMMENT_CPP]       //
2    [NEWLINE]           
3    [COMMENT_CPP]       // As an example, distributed with .c suffix,
3    [NEWLINE]           
4    [COMMENT_CPP]       // but depending on extension needs, can be
4    [NEWLINE]           
5    [COMMENT_CPP]       // compiled as C, C++, Obj-C or Obj-C++
5    [NEWLINE]           
7    [PREPROC]           #
7    [PP_INCLUDE]        include
7    [PREPROC_BODY]      <stdio.h>
7    [NEWLINE]           
8    [PREPROC]           #
8    [PP_INCLUDE]        include
8    [PREPROC_BODY]      <unistd.h>
8    [NEWLINE]           
9    [PREPROC]           #
9    [PP_INCLUDE]        include
9    [PREPROC_BODY]      "TestClassNativeHelper.h"
9    [NEWLINE]           
11   [PREPROC]           #
11   [PP_UNDEF]          undef
11   [WORD]              NDEBUG
11   [NEWLINE]           
13   [PREPROC]           #
13   [PP_IF]             if
13   [PP_DEFINED]        defined
13   [PAREN_OPEN]        (
13   [WORD]              __ANDROID__
13   [PAREN_CLOSE]       )
13   [NEWLINE]           
15   [PREPROC]           #
15   [PP_DEFINE]         define
15   [MACRO_FUNC]        TCH_LOGI
15   [FPAREN_OPEN]       (
15   [ELLIPSIS]          ...
15   [FPAREN_CLOSE]      )
15   [FUNC_CALL]         __android_log_print
15   [FPAREN_OPEN]       (
15   [WORD]              ANDROID_LOG_INFO
15   [COMMA]             ,
15   [STRING]            "TestClassNativeHelper"
15   [COMMA]             ,
15   [WORD]              __VA_ARGS__
15   [FPAREN_CLOSE]      )
15   [NEWLINE]           
16   [PREPROC]           #
16   [PP_DEFINE]         define
16   [MACRO_FUNC]        TCH_LOGE
16   [FPAREN_OPEN]       (
16   [ELLIPSIS]          ...
16   [FPAREN_CLOSE]      )
16   [FUNC_CALL]         __android_log_print
16   [FPAREN_OPEN]       (
16   [WORD]              ANDROID_LOG_ERROR
16   [COMMA]             ,
16   [STRING]            "TestClassNativeHelper"
16   [COMMA]             ,
16   [WORD]              __VA_ARGS__
16   [FPAREN_CLOSE]      )
16   [NEWLINE]           
18   [PREPROC]           #
18   [PP_IF]             ifndef
18   [WORD]              NDEBUG
18   [NEWLINE]           
19   [PREPROC]           #
19   [PP_DEFINE]         define
19   [MACRO_FUNC]        TCH_LOGV
19   [FPAREN_OPEN]       (
19   [ELLIPSIS]          ...
19   [FPAREN_CLOSE]      )
19   [FUNC_CALL]         __android_log_print
19   [FPAREN_OPEN]       (
19   [WORD]              ANDROID_LOG_VERBOSE
19   [COMMA]             ,
19   [STRING]            "TestClassNativeHelper"
19   [COMMA]             ,
19   [WORD]              __VA_ARGS__
19   [FPAREN_CLOSE]      )
19   [NEWLINE]           
20   [PREPROC]           #
20   [PP_ELSE]           else
20   [NEWLINE]           
21   [PREPROC]           #
21   [PP_DEFINE]         define
21   [MACRO_FUNC]        TCH_LOGV
21   [FPAREN_OPEN]       (
21   [ELLIPSIS]          ...
21   [FPAREN_CLOSE]      )
21   [NEWLINE]           
22   [PREPROC]           #
22   [PP_ENDIF]          endif
22   [NEWLINE]           
24   [PREPROC]           #
24   [PP_DEFINE]         define
24   [MACRO]             TCH_ELOG
24   [FUNC_CALL]         TCH_LOGV
24   [FPAREN_OPEN]       (
24   [STRING]            "%s"
24   [COMMA]             ,
24   [WORD]              __FUNCTION__
24   [FPAREN_CLOSE]      )
24   [NEWLINE]           
26   [TYPE]              void
26   [FUNC_DEF]          TCH_onTestClassUploadDidProgress
26   [FPAREN_OPEN]       (
26   [TYPE]              C_JNIEnv
26   [PTR_TYPE]          *
26   [WORD]              env
26   [COMMA]             ,
26   [TYPE]              jobject
26   [WORD]              thiz
26   [COMMA]             ,
26   [TYPE]              jint
26   [WORD]              videoId
26   [COMMA]             ,
26   [TYPE]              jdouble
26   [WORD]              progress
26   [FPAREN_CLOSE]      )
26   [BRACE_OPEN]        {
26   [NEWLINE]           
27   [WORD]              TCH_ELOG
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [BRACE_CLOSE]       }
28   [NEWLINE]           
30   [PREPROC]           #
30   [PP_IF]             ifndef
30   [WORD]              TCH_NELEM
30   [NEWLINE]           
31   [PREPROC]           #
31   [PP_DEFINE]         define
31   [MACRO_FUNC]        TCH_NELEM
31   [FPAREN_OPEN]       (
31   [WORD]              x
31   [FPAREN_CLOSE]      )
31   [PAREN_OPEN]        (
31   [PAREN_OPEN]        (
31   [TYPE]              int
31   [PAREN_CLOSE]       )
31   [PAREN_OPEN]        (
31   [SIZEOF]            sizeof
31   [PAREN_OPEN]        (
31   [WORD]              x
31   [PAREN_CLOSE]       )
31   [ARITH]             /
31   [SIZEOF]            sizeof
31   [PAREN_OPEN]        (
31   [PAREN_OPEN]        (
31   [TYPE]              x
31   [PAREN_CLOSE]       )
31   [SQUARE_OPEN]       [
31   [NUMBER]            0
31   [SQUARE_CLOSE]      ]
31   [PAREN_CLOSE]       )
31   [PAREN_CLOSE]       )
31   [PAREN_CLOSE]       )
31   [NEWLINE]           
32   [PREPROC]           #
32   [PP_ENDIF]          endif
32   [NEWLINE]           
34   [QUALIFIER]         static
34   [QUALIFIER]         const
34   [TYPE]              char
34   [PTR_TYPE]          *
34   [WORD]              kTCHTestClassClass
34   [ASSIGN]            =
34   [STRING]            "com/testclass/TestClass/TestClass"
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [QUALIFIER]         static
35   [QUALIFIER]         const
35   [TYPE]              char
35   [PTR_TYPE]          *
35   [WORD]              kTCHTestClassLoader
35   [ASSIGN]            =
35   [STRING]            "com.testclass.TestClass.TestClass"
35   [SEMICOLON]         ;
35   [NEWLINE]           
37   [QUALIFIER]         static
37   [QUALIFIER]         const
37   [TYPE]              char
37   [PTR_TYPE]          *
37   [WORD]              kTCHTestClassNativeListenerClass
37   [ASSIGN]            =
37   [STRING]            "com/testclass/TestClass/communication/TestClassNativeListener"
37   [SEMICOLON]         ;
37   [NEWLINE]           
38   [QUALIFIER]         static
38   [QUALIFIER]         const
38   [TYPE]              char
38   [PTR_TYPE]          *
38   [WORD]              kTCHTestClassNativeListenerLoader
38   [ASSIGN]            =
38   [STRING]            "com.testclass.TestClass.communication.TestClassNativeListener"
38   [SEMICOLON]         ;
38   [NEWLINE]           
40   [QUALIFIER]         static
40   [TYPE]              JavaVM
40   [PTR_TYPE]          *
40   [WORD]              TCH_vm
40   [ASSIGN]            =
40   [WORD]              NULL
40   [SEMICOLON]         ;
40   [NEWLINE]           
42   [QUALIFIER]         static
42   [TYPE]              JNINativeMethod
42   [WORD]              TCH_listenerMethods
42   [TSQUARE]           []
42   [ASSIGN]            =
42   [BRACE_OPEN]        {
42   [NEWLINE]           
43   [BRACE_OPEN]        {
43   [STRING]            "onTestClassUploadDidProgress"
43   [COMMA]             ,
43   [STRING]            "(ID)V"
43   [COMMA]             ,
43   [PAREN_OPEN]        (
43   [TYPE]              void
43   [PTR_TYPE]          *
43   [PAREN_CLOSE]       )
43   [WORD]              TCH_onTestClassUploadDidProgress
43   [BRACE_CLOSE]       }
43   [COMMA]             ,
43   [NEWLINE]           
44   [BRACE_CLOSE]       }
44   [SEMICOLON]         ;
44   [NEWLINE]           
46   [QUALIFIER]         static
46   [TYPE]              C_JNIEnv
46   [PTR_TYPE]          *
46   [FUNC_DEF]          TCH_getEnv
46   [FPAREN_OPEN]       (
46   [FPAREN_CLOSE]      )
46   [BRACE_OPEN]        {
46   [NEWLINE]           
47   [TYPE]              C_JNIEnv
47   [PTR_TYPE]          *
47   [WORD]              ret
47   [ASSIGN]            =
47   [WORD]              NULL
47   [SEMICOLON]         ;
47   [NEWLINE]           
49   [IF]                if
49   [SPAREN_OPEN]       (
49   [WORD]              TCH_vm
49   [COMPARE]           ==
49   [WORD]              NULL
49   [SPAREN_CLOSE]      )
49   [BRACE_OPEN]        {
49   [NEWLINE]           
50   [FUNC_CALL]         TCH_LOGE
50   [FPAREN_OPEN]       (
50   [STRING]            "TCH_getEnv failed, no JVM"
50   [FPAREN_CLOSE]      )
50   [SEMICOLON]         ;
50   [NEWLINE]           
51   [RETURN]            return
51   [WORD]              NULL
51   [SEMICOLON]         ;
51   [NEWLINE]           
52   [BRACE_CLOSE]       }
52   [NEWLINE]           
54   [PREPROC]           #
54   [PP_IF]             if
54   [PP_DEFINED]        defined
54   [PAREN_OPEN]        (
54   [WORD]              __cplusplus
54   [PAREN_CLOSE]       )
54   [NEWLINE]           
55   [TYPE]              JNIEnv
55   [PTR_TYPE]          *
55   [WORD]              env
55   [ASSIGN]            =
55   [WORD]              NULL
55   [SEMICOLON]         ;
55   [NEWLINE]           
57   [IF]                if
57   [SPAREN_OPEN]       (
57   [WORD]              TCH_vm
57   [MEMBER]            ->
57   [FUNC_CALL]         GetEnv
57   [FPAREN_OPEN]       (
57   [PAREN_OPEN]        (
57   [TYPE]              void
57   [PTR_TYPE]          *
57   [PTR_TYPE]          *
57   [PAREN_CLOSE]       )
57   [ADDR]              &
57   [WORD]              env
57   [COMMA]             ,
57   [WORD]              JNI_VERSION_1_6
57   [FPAREN_CLOSE]      )
57   [COMPARE]           !=
57   [WORD]              JNI_OK
57   [SPAREN_CLOSE]      )
57   [BRACE_OPEN]        {
57   [NEWLINE]           
58   [TYPE]              JavaVMAttachArgs
58   [WORD]              args
58   [SEMICOLON]         ;
58   [NEWLINE]           
59   [TYPE]              args
59   [MEMBER]            .
59   [WORD]              version
59   [ASSIGN]            =
59   [WORD]              JNI_VERSION_1_6
59   [SEMICOLON]         ;
59   [NEWLINE]           
60   [TYPE]              args
60   [MEMBER]            .
60   [WORD]              name
60   [ASSIGN]            =
60   [WORD]              NULL
60   [SEMICOLON]         ;
60   [NEWLINE]           
61   [TYPE]              args
61   [MEMBER]            .
61   [WORD]              group
61   [ASSIGN]            =
61   [WORD]              NULL
61   [SEMICOLON]         ;
61   [NEWLINE]           
63   [TYPE]              int
63   [WORD]              attachStatus
63   [SEMICOLON]         ;
63   [NEWLINE]           
64   [IF]                if
64   [SPAREN_OPEN]       (
64   [PAREN_OPEN]        (
64   [WORD]              attachStatus
64   [ASSIGN]            =
64   [WORD]              TCH_vm
64   [MEMBER]            ->
64   [FUNC_CALL]         AttachCurrentThread
64   [FPAREN_OPEN]       (
64   [ADDR]              &
64   [WORD]              env
64   [COMMA]             ,
64   [ADDR]              &
64   [WORD]              args
64   [FPAREN_CLOSE]      )
64   [PAREN_CLOSE]       )
64   [COMPARE]           <
64   [NUMBER]            0
64   [SPAREN_CLOSE]      )
64   [BRACE_OPEN]        {
64   [NEWLINE]           
65   [FUNC_CALL]         TCH_LOGE
65   [FPAREN_OPEN]       (
65   [STRING]            "TCH_getEnv failed"
65   [FPAREN_CLOSE]      )
65   [SEMICOLON]         ;
65   [NEWLINE]           
66   [BRACE_CLOSE]       }
66   [NEWLINE]           
67   [BRACE_CLOSE]       }
67   [NEWLINE]           
68   [WORD]              ret
68   [ASSIGN]            =
68   [PAREN_OPEN]        (
68   [TYPE]              C_JNIEnv
68   [PTR_TYPE]          *
68   [PAREN_CLOSE]       )
68   [WORD]              env
68   [SEMICOLON]         ;
68   [NEWLINE]           
69   [PREPROC]           #
69   [PP_ELSE]           else
69   [NEWLINE]           
70   [TYPE]              JNIEnv
70   [PTR_TYPE]          *
70   [WORD]              env
70   [ASSIGN]            =
70   [WORD]              NULL
70   [SEMICOLON]         ;
70   [NEWLINE]           
72   [IF]                if
72   [SPAREN_OPEN]       (
72   [PAREN_OPEN]        (
72   [DEREF]             *
72   [WORD]              TCH_vm
72   [PAREN_CLOSE]       )
72   [MEMBER]            ->
72   [FUNC_CALL]         GetEnv
72   [FPAREN_OPEN]       (
72   [WORD]              TCH_vm
72   [COMMA]             ,
72   [PAREN_OPEN]        (
72   [TYPE]              void
72   [PTR_TYPE]          *
72   [PTR_TYPE]          *
72   [PAREN_CLOSE]       )
72   [ADDR]              &
72   [WORD]              env
72   [COMMA]             ,
72   [WORD]              JNI_VERSION_1_6
72   [FPAREN_CLOSE]      )
72   [COMPARE]           !=
72   [WORD]              JNI_OK
72   [SPAREN_CLOSE]      )
72   [BRACE_OPEN]        {
72   [NEWLINE]           
73   [TYPE]              JavaVMAttachArgs
73   [WORD]              args
73   [SEMICOLON]         ;
73   [NEWLINE]           
74   [TYPE]              args
74   [MEMBER]            .
74   [WORD]              version
74   [ASSIGN]            =
74   [WORD]              JNI_VERSION_1_6
74   [SEMICOLON]         ;
74   [NEWLINE]           
75   [TYPE]              args
75   [MEMBER]            .
75   [WORD]              name
75   [ASSIGN]            =
75   [WORD]              NULL
75   [SEMICOLON]         ;
75   [NEWLINE]           
76   [TYPE]              args
76   [MEMBER]            .
76   [WORD]              group
76   [ASSIGN]            =
76   [WORD]              NULL
76   [SEMICOLON]         ;
76   [NEWLINE]           
78   [TYPE]              int
78   [WORD]              attachStatus
78   [SEMICOLON]         ;
78   [NEWLINE]           
79   [IF]                if
79   [SPAREN_OPEN]       (
79   [PAREN_OPEN]        (
79   [WORD]              attachStatus
79   [ASSIGN]            =
79   [PAREN_OPEN]        (
79   [DEREF]             *
79   [WORD]              TCH_vm
79   [PAREN_CLOSE]       )
79   [MEMBER]            ->
79   [FUNC_CALL]         AttachCurrentThread
79   [FPAREN_OPEN]       (
79   [WORD]              TCH_vm
79   [COMMA]             ,
79   [ADDR]              &
79   [WORD]              env
79   [COMMA]             ,
79   [ADDR]              &
79   [WORD]              args
79   [FPAREN_CLOSE]      )
79   [PAREN_CLOSE]       )
79   [COMPARE]           <
79   [NUMBER]            0
79   [SPAREN_CLOSE]      )
79   [BRACE_OPEN]        {
79   [NEWLINE]           
80   [FUNC_CALL]         TCH_LOGE
80   [FPAREN_OPEN]       (
80   [STRING]            "TCH_getEnv failed"
80   [FPAREN_CLOSE]      )
80   [SEMICOLON]         ;
80   [NEWLINE]           
81   [BRACE_CLOSE]       }
81   [NEWLINE]           
82   [BRACE_CLOSE]       }
82   [NEWLINE]           
83   [WORD]              ret
83   [ASSIGN]            =
83   [WORD]              env
83   [SEMICOLON]         ;
83   [NEWLINE]           
84   [PREPROC]           #
84   [PP_ENDIF]          endif
84   [COMMENT]           /* if defined(__cplusplus) */
84   [NEWLINE]           
85   [RETURN]            return
85   [WORD]              ret
85   [SEMICOLON]         ;
85   [NEWLINE]           
86   [BRACE_CLOSE]       }
86   [NEWLINE]           
88   [QUALIFIER]         static
88   [TYPE]              jclass
88   [FUNC_DEF]          TCH_loadClass
88   [FPAREN_OPEN]       (
88   [TYPE]              C_JNIEnv
88   [PTR_TYPE]          *
88   [WORD]              env
88   [COMMA]             ,
88   [TYPE]              jobject
88   [WORD]              activity
88   [COMMA]             ,
88   [QUALIFIER]         const
88   [TYPE]              char
88   [PTR_TYPE]          *
88   [WORD]              className
88   [FPAREN_CLOSE]      )
88   [BRACE_OPEN]        {
88   [NEWLINE]           
89   [TYPE]              jclass
89   [WORD]              cls_Activity
89   [ASSIGN]            =
89   [PAREN_OPEN]        (
89   [DEREF]             *
89   [WORD]              env
89   [PAREN_CLOSE]       )
89   [MEMBER]            ->
89   [FUNC_CALL]         GetObjectClass
89   [FPAREN_OPEN]       (
89   [PAREN_OPEN]        (
89   [TYPE]              JNIEnv
89   [PTR_TYPE]          *
89   [PAREN_CLOSE]       )
89   [WORD]              env
89   [COMMA]             ,
89   [WORD]              activity
89   [FPAREN_CLOSE]      )
89   [SEMICOLON]         ;
89   [NEWLINE]           
90   [TYPE]              jmethodID
90   [WORD]              mid_getClassLoader
90   [ASSIGN]            =
90   [PAREN_OPEN]        (
90   [DEREF]             *
90   [WORD]              env
90   [PAREN_CLOSE]       )
90   [MEMBER]            ->
90   [FUNC_CALL]         GetMethodID
90   [FPAREN_OPEN]       (
90   [PAREN_OPEN]        (
90   [TYPE]              JNIEnv
90   [PTR_TYPE]          *
90   [PAREN_CLOSE]       )
90   [WORD]              env
90   [COMMA]             ,
90   [WORD]              cls_Activity
90   [COMMA]             ,
90   [STRING]            "getClassLoader"
90   [COMMA]             ,
90   [STRING]            "()Ljava/lang/ClassLoader;"
90   [FPAREN_CLOSE]      )
90   [SEMICOLON]         ;
90   [NEWLINE]           
91   [TYPE]              jobject
91   [WORD]              obj_classLoader
91   [ASSIGN]            =
91   [PAREN_OPEN]        (
91   [DEREF]             *
91   [WORD]              env
91   [PAREN_CLOSE]       )
91   [MEMBER]            ->
91   [FUNC_CALL]         CallObjectMethod
91   [FPAREN_OPEN]       (
91   [PAREN_OPEN]        (
91   [TYPE]              JNIEnv
91   [PTR_TYPE]          *
91   [PAREN_CLOSE]       )
91   [WORD]              env
91   [COMMA]             ,
91   [WORD]              activity
91   [COMMA]             ,
91   [WORD]              mid_getClassLoader
91   [FPAREN_CLOSE]      )
91   [SEMICOLON]         ;
91   [NEWLINE]           
93   [TYPE]              jclass
93   [WORD]              cls_classLoader
93   [ASSIGN]            =
93   [PAREN_OPEN]        (
93   [DEREF]             *
93   [WORD]              env
93   [PAREN_CLOSE]       )
93   [MEMBER]            ->
93   [FUNC_CALL]         GetObjectClass
93   [FPAREN_OPEN]       (
93   [PAREN_OPEN]        (
93   [TYPE]              JNIEnv
93   [PTR_TYPE]          *
93   [PAREN_CLOSE]       )
93   [WORD]              env
93   [COMMA]             ,
93   [WORD]              obj_classLoader
93   [FPAREN_CLOSE]      )
93   [SEMICOLON]         ;
93   [NEWLINE]           
94   [TYPE]              jmethodID
94   [WORD]              mid_loadClass
94   [ASSIGN]            =
94   [PAREN_OPEN]        (
94   [DEREF]             *
94   [WORD]              env
94   [PAREN_CLOSE]       )
94   [MEMBER]            ->
94   [FUNC_CALL]         GetMethodID
94   [FPAREN_OPEN]       (
94   [PAREN_OPEN]        (
94   [TYPE]              JNIEnv
94   [PTR_TYPE]          *
94   [PAREN_CLOSE]       )
94   [WORD]              env
94   [COMMA]             ,
94   [WORD]              cls_classLoader
94   [COMMA]             ,
94   [STRING]            "loadClass"
94   [COMMA]             ,
94   [STRING]            "(Ljava/lang/String;)Ljava/lang/Class;"
94   [FPAREN_CLOSE]      )
94   [SEMICOLON]         ;
94   [NEWLINE]           
96   [TYPE]              jstring
96   [WORD]              _className
96   [ASSIGN]            =
96   [PAREN_OPEN]        (
96   [DEREF]             *
96   [WORD]              env
96   [PAREN_CLOSE]       )
96   [MEMBER]            ->
96   [FUNC_CALL]         NewStringUTF
96   [FPAREN_OPEN]       (
96   [PAREN_OPEN]        (
96   [TYPE]              JNIEnv
96   [PTR_TYPE]          *
96   [PAREN_CLOSE]       )
96   [WORD]              env
96   [COMMA]             ,
96   [WORD]              className
96   [FPAREN_CLOSE]      )
96   [SEMICOLON]         ;
96   [NEWLINE]           
97   [TYPE]              jclass
97   [WORD]              cls
97   [ASSIGN]            =
97   [PAREN_OPEN]        (
97   [TYPE]              jclass
97   [PAREN_CLOSE]       )
97   [PAREN_OPEN]        (
97   [DEREF]             *
97   [WORD]              env
97   [PAREN_CLOSE]       )
97   [MEMBER]            ->
97   [FUNC_CALL]         CallObjectMethod
97   [FPAREN_OPEN]       (
97   [PAREN_OPEN]        (
97   [TYPE]              JNIEnv
97   [PTR_TYPE]          *
97   [PAREN_CLOSE]       )
97   [WORD]              env
97   [COMMA]             ,
97   [WORD]              obj_classLoader
97   [COMMA]             ,
97   [WORD]              mid_loadClass
97   [COMMA]             ,
97   [WORD]              _className
97   [FPAREN_CLOSE]      )
97   [SEMICOLON]         ;
97   [NEWLINE]           
99   [PAREN_OPEN]        (
99   [DEREF]             *
99   [WORD]              env
99   [PAREN_CLOSE]       )
99   [MEMBER]            ->
99   [FUNC_CALL]         DeleteLocalRef
99   [FPAREN_OPEN]       (
99   [PAREN_OPEN]        (
99   [TYPE]              JNIEnv
99   [PTR_TYPE]          *
99   [PAREN_CLOSE]       )
99   [WORD]              env
99   [COMMA]             ,
99   [WORD]              _className
99   [FPAREN_CLOSE]      )
99   [SEMICOLON]         ;
99   [NEWLINE]           
101  [IF]                if
101  [SPAREN_OPEN]       (
101  [NOT]               !
101  [WORD]              cls
101  [SPAREN_CLOSE]      )
101  [BRACE_OPEN]        {
101  [NEWLINE]           
102  [FUNC_CALL]         TCH_LOGE
102  [FPAREN_OPEN]       (
102  [STRING]            "Couldn't find class %s"
102  [COMMA]             ,
102  [WORD]              className
102  [FPAREN_CLOSE]      )
102  [SEMICOLON]         ;
102  [NEWLINE]           
103  [BRACE_CLOSE]       }
103  [NEWLINE]           
105  [RETURN]            return
105  [WORD]              cls
105  [SEMICOLON]         ;
105  [NEWLINE]           
106  [BRACE_CLOSE]       }
106  [NEWLINE]           
108  [PREPROC]           #
108  [PP_DEFINE]         define
108  [MACRO_FUNC]        TCH_str2
108  [FPAREN_OPEN]       (
108  [WORD]              x
108  [FPAREN_CLOSE]      )
108  [POUND]             #
108  [WORD]              x
108  [NEWLINE]           
109  [PREPROC]           #
109  [PP_DEFINE]         define
109  [MACRO_FUNC]        TCH_str
109  [FPAREN_OPEN]       (
109  [WORD]              x
109  [FPAREN_CLOSE]      )
109  [FUNC_CALL]         TCH_str2
109  [FPAREN_OPEN]       (
109  [WORD]              x
109  [FPAREN_CLOSE]      )
109  [NEWLINE]           
111  [PREPROC]           #
111  [PP_DEFINE]         define
111  [MACRO_FUNC]        TCH_CLASS
111  [FPAREN_OPEN]       (
111  [WORD]              _class
111  [FPAREN_CLOSE]      )
111  [WORD]              tchClass_
111  [PP]                ##
111  [WORD]              _class
111  [NEWLINE]           
113  [PREPROC]           #
113  [PP_DEFINE]         define
113  [MACRO_FUNC]        TCH_LOCAL_CLASS
113  [FPAREN_OPEN]       (
113  [WORD]              _class
113  [FPAREN_CLOSE]      )
113  [WORD]              local_tchClass_
113  [PP]                ##
113  [WORD]              _class
113  [NEWLINE]           
115  [PREPROC]           #
115  [PP_DEFINE]         define
115  [MACRO_FUNC]        TCH_REGISTER_CLASS
115  [FPAREN_OPEN]       (
115  [WORD]              _class
115  [FPAREN_CLOSE]      )
115  [NL_CONT]           \
116  [TYPE]              jclass
116  [FUNC_CALL]         TCH_CLASS
116  [FPAREN_OPEN]       (
116  [WORD]              _class
116  [FPAREN_CLOSE]      )
116  [ASSIGN]            =
116  [WORD]              NULL
116  [SEMICOLON]         ;
116  [NEWLINE]           
118  [PREPROC]           #
118  [PP_DEFINE]         define
118  [MACRO_FUNC]        TCH_EXTERN_CLASS
118  [FPAREN_OPEN]       (
118  [WORD]              _class
118  [FPAREN_CLOSE]      )
118  [NL_CONT]           \
119  [TYPE]              jclass
119  [FUNC_CALL]         TCH_CLASS
119  [FPAREN_OPEN]       (
119  [WORD]              _class
119  [FPAREN_CLOSE]      )
119  [SEMICOLON]         ;
119  [NEWLINE]           
121  [PREPROC]           #
121  [PP_DEFINE]         define
121  [MACRO_FUNC]        TCH_METHOD
121  [FPAREN_OPEN]       (
121  [WORD]              _method
121  [FPAREN_CLOSE]      )
121  [WORD]              tchMethod_
121  [PP]                ##
121  [WORD]              _method
121  [NEWLINE]           
123  [PREPROC]           #
123  [PP_DEFINE]         define
123  [MACRO_FUNC]        TCH_REGISTER_METHOD
123  [FPAREN_OPEN]       (
123  [WORD]              _method
123  [FPAREN_CLOSE]      )
123  [NL_CONT]           \
124  [TYPE]              jmethodID
124  [FUNC_CALL]         TCH_METHOD
124  [FPAREN_OPEN]       (
124  [WORD]              _method
124  [FPAREN_CLOSE]      )
124  [ASSIGN]            =
124  [WORD]              NULL
124  [SEMICOLON]         ;
124  [NEWLINE]           
126  [PREPROC]           #
126  [PP_DEFINE]         define
126  [MACRO_FUNC]        TCH_EXTERN_METHOD
126  [FPAREN_OPEN]       (
126  [WORD]              _method
126  [FPAREN_CLOSE]      )
126  [NL_CONT]           \
127  [TYPE]              jmethodID
127  [FUNC_CALL]         TCH_METHOD
127  [FPAREN_OPEN]       (
127  [WORD]              _method
127  [FPAREN_CLOSE]      )
127  [SEMICOLON]         ;
127  [NEWLINE]           
129  [PREPROC]           #
129  [PP_DEFINE]         define
129  [MACRO_FUNC]        TCH_REGISTER_NATIVES
129  [FPAREN_OPEN]       (
129  [WORD]              _env
129  [COMMA]             ,
129  [WORD]              _class
129  [COMMA]             ,
129  [WORD]              methods
129  [FPAREN_CLOSE]      )
129  [NL_CONT]           \
130  [IF]                if
130  [SPAREN_OPEN]       (
130  [PAREN_OPEN]        (
130  [DEREF]             *
130  [WORD]              _env
130  [PAREN_CLOSE]       )
130  [MEMBER]            ->
130  [FUNC_CALL]         RegisterNatives
130  [FPAREN_OPEN]       (
130  [PAREN_OPEN]        (
130  [TYPE]              JNIEnv
130  [PTR_TYPE]          *
130  [PAREN_CLOSE]       )
130  [WORD]              _env
130  [COMMA]             ,
130  [FUNC_CALL]         TCH_CLASS
130  [FPAREN_OPEN]       (
130  [WORD]              _class
130  [FPAREN_CLOSE]      )
130  [COMMA]             ,
130  [WORD]              methods
130  [COMMA]             ,
130  [FUNC_CALL]         TCH_NELEM
130  [FPAREN_OPEN]       (
130  [WORD]              methods
130  [FPAREN_CLOSE]      )
130  [FPAREN_CLOSE]      )
130  [COMPARE]           <
130  [NUMBER]            0
130  [SPAREN_CLOSE]      )
130  [BRACE_OPEN]        {
130  [NL_CONT]           \
131  [FUNC_CALL]         TCH_LOGE
131  [FPAREN_OPEN]       (
131  [STRING]            "RegisterNatives failed for %s\n"
131  [COMMA]             ,
131  [FUNC_CALL]         TCH_str
131  [FPAREN_OPEN]       (
131  [WORD]              _class
131  [FPAREN_CLOSE]      )
131  [FPAREN_CLOSE]      )
131  [SEMICOLON]         ;
131  [NL_CONT]           \
132  [BRACE_CLOSE]       }
132  [NEWLINE]           
134  [PREPROC]           #
134  [PP_DEFINE]         define
134  [MACRO_FUNC]        TCH_FIND_CLASS
134  [FPAREN_OPEN]       (
134  [WORD]              _env
134  [COMMA]             ,
134  [WORD]              _class
134  [COMMA]             ,
134  [WORD]              _className
134  [FPAREN_CLOSE]      )
134  [NL_CONT]           \
135  [TYPE]              jclass
135  [FUNC_CALL]         TCH_LOCAL_CLASS
135  [FPAREN_OPEN]       (
135  [WORD]              _class
135  [FPAREN_CLOSE]      )
135  [ASSIGN]            =
135  [PAREN_OPEN]        (
135  [DEREF]             *
135  [WORD]              _env
135  [PAREN_CLOSE]       )
135  [MEMBER]            ->
135  [FUNC_CALL]         FindClass
135  [FPAREN_OPEN]       (
135  [PAREN_OPEN]        (
135  [TYPE]              JNIEnv
135  [PTR_TYPE]          *
135  [PAREN_CLOSE]       )
135  [WORD]              _env
135  [COMMA]             ,
135  [WORD]              _className
135  [FPAREN_CLOSE]      )
135  [SEMICOLON]         ;
135  [NL_CONT]           \
136  [IF]                if
136  [SPAREN_OPEN]       (
136  [FUNC_CALL]         TCH_LOCAL_CLASS
136  [FPAREN_OPEN]       (
136  [WORD]              _class
136  [FPAREN_CLOSE]      )
136  [COMPARE]           ==
136  [WORD]              NULL
136  [SPAREN_CLOSE]      )
136  [BRACE_OPEN]        {
136  [NL_CONT]           \
137  [FUNC_CALL]         TCH_LOGE
137  [FPAREN_OPEN]       (
137  [STRING]            "Unable to find class %s\n"
137  [COMMA]             ,
137  [WORD]              _className
137  [FPAREN_CLOSE]      )
137  [SEMICOLON]         ;
137  [NL_CONT]           \
138  [BRACE_CLOSE]       }
138  [ELSE]              else
138  [BRACE_OPEN]        {
138  [NL_CONT]           \
139  [FUNC_CALL]         TCH_CLASS
139  [FPAREN_OPEN]       (
139  [WORD]              _class
139  [FPAREN_CLOSE]      )
139  [ASSIGN]            =
139  [PAREN_OPEN]        (
139  [TYPE]              jclass
139  [PAREN_CLOSE]       )
139  [PAREN_OPEN]        (
139  [DEREF]             *
139  [WORD]              _env
139  [PAREN_CLOSE]       )
139  [MEMBER]            ->
139  [FUNC_CALL]         NewGlobalRef
139  [FPAREN_OPEN]       (
139  [PAREN_OPEN]        (
139  [TYPE]              JNIEnv
139  [PTR_TYPE]          *
139  [PAREN_CLOSE]       )
139  [WORD]              _env
139  [COMMA]             ,
139  [FUNC_CALL]         TCH_LOCAL_CLASS
139  [FPAREN_OPEN]       (
139  [WORD]              _class
139  [FPAREN_CLOSE]      )
139  [FPAREN_CLOSE]      )
139  [SEMICOLON]         ;
139  [NL_CONT]           \
140  [BRACE_CLOSE]       }
140  [NEWLINE]           
142  [PREPROC]           #
142  [PP_DEFINE]         define
142  [MACRO_FUNC]        TCH_FIND_STATIC_METHOD
142  [FPAREN_OPEN]       (
142  [WORD]              _env
142  [COMMA]             ,
142  [WORD]              _class
142  [COMMA]             ,
142  [WORD]              _method
142  [COMMA]             ,
142  [WORD]              _prototype
142  [FPAREN_CLOSE]      )
142  [NL_CONT]           \
143  [FUNC_CALL]         TCH_METHOD
143  [FPAREN_OPEN]       (
143  [WORD]              _method
143  [FPAREN_CLOSE]      )
143  [ASSIGN]            =
143  [PAREN_OPEN]        (
143  [DEREF]             *
143  [WORD]              _env
143  [PAREN_CLOSE]       )
143  [MEMBER]            ->
143  [FUNC_CALL]         GetStaticMethodID
143  [FPAREN_OPEN]       (
143  [PAREN_OPEN]        (
143  [TYPE]              JNIEnv
143  [PTR_TYPE]          *
143  [PAREN_CLOSE]       )
143  [WORD]              _env
143  [COMMA]             ,
143  [FUNC_CALL]         TCH_CLASS
143  [FPAREN_OPEN]       (
143  [WORD]              _class
143  [FPAREN_CLOSE]      )
143  [COMMA]             ,
143  [FUNC_CALL]         TCH_str
143  [FPAREN_OPEN]       (
143  [WORD]              _method
143  [FPAREN_CLOSE]      )
143  [COMMA]             ,
143  [WORD]              _prototype
143  [FPAREN_CLOSE]      )
143  [SEMICOLON]         ;
143  [NL_CONT]           \
144  [IF]                if
144  [SPAREN_OPEN]       (
144  [FUNC_CALL]         TCH_METHOD
144  [FPAREN_OPEN]       (
144  [WORD]              _method
144  [FPAREN_CLOSE]      )
144  [COMPARE]           ==
144  [WORD]              NULL
144  [SPAREN_CLOSE]      )
144  [BRACE_OPEN]        {
144  [NL_CONT]           \
145  [FUNC_CALL]         TCH_LOGE
145  [FPAREN_OPEN]       (
145  [STRING]            "Unable to find method %s"
145  [COMMA]             ,
145  [FUNC_CALL]         TCH_str
145  [FPAREN_OPEN]       (
145  [WORD]              _method
145  [FPAREN_CLOSE]      )
145  [FPAREN_CLOSE]      )
145  [SEMICOLON]         ;
145  [NL_CONT]           \
146  [BRACE_CLOSE]       }
146  [NEWLINE]           
148  [PREPROC]           #
148  [PP_DEFINE]         define
148  [MACRO_FUNC]        TCH_FIND_STATIC_METHOD2
148  [FPAREN_OPEN]       (
148  [WORD]              _env
148  [COMMA]             ,
148  [WORD]              _class
148  [COMMA]             ,
148  [WORD]              _method
148  [COMMA]             ,
148  [WORD]              _symbol
148  [COMMA]             ,
148  [WORD]              _prototype
148  [FPAREN_CLOSE]      )
148  [NL_CONT]           \
149  [FUNC_CALL]         TCH_METHOD
149  [FPAREN_OPEN]       (
149  [WORD]              _method
149  [FPAREN_CLOSE]      )
149  [ASSIGN]            =
149  [PAREN_OPEN]        (
149  [DEREF]             *
149  [WORD]              _env
149  [PAREN_CLOSE]       )
149  [MEMBER]            ->
149  [FUNC_CALL]         GetStaticMethodID
149  [FPAREN_OPEN]       (
149  [PAREN_OPEN]        (
149  [TYPE]              JNIEnv
149  [PTR_TYPE]          *
149  [PAREN_CLOSE]       )
149  [WORD]              _env
149  [COMMA]             ,
149  [FUNC_CALL]         TCH_CLASS
149  [FPAREN_OPEN]       (
149  [WORD]              _class
149  [FPAREN_CLOSE]      )
149  [COMMA]             ,
149  [FUNC_CALL]         TCH_str
149  [FPAREN_OPEN]       (
149  [WORD]              _symbol
149  [FPAREN_CLOSE]      )
149  [COMMA]             ,
149  [WORD]              _prototype
149  [FPAREN_CLOSE]      )
149  [SEMICOLON]         ;
149  [NL_CONT]           \
150  [IF]                if
150  [SPAREN_OPEN]       (
150  [FUNC_CALL]         TCH_METHOD
150  [FPAREN_OPEN]       (
150  [WORD]              _method
150  [FPAREN_CLOSE]      )
150  [COMPARE]           ==
150  [WORD]              NULL
150  [SPAREN_CLOSE]      )
150  [BRACE_OPEN]        {
150  [NL_CONT]           \
151  [FUNC_CALL]         TCH_LOGE
151  [FPAREN_OPEN]       (
151  [STRING]            "Unable to find method %s"
151  [COMMA]             ,
151  [FUNC_CALL]         TCH_str
151  [FPAREN_OPEN]       (
151  [WORD]              _method
151  [FPAREN_CLOSE]      )
151  [FPAREN_CLOSE]      )
151  [SEMICOLON]         ;
151  [NL_CONT]           \
152  [BRACE_CLOSE]       }
152  [NEWLINE]           
154  [PREPROC]           #
154  [PP_DEFINE]         define
154  [MACRO_FUNC]        TCH_CALL_STATIC_METHOD_ARGS
154  [FPAREN_OPEN]       (
154  [WORD]              _env
154  [COMMA]             ,
154  [WORD]              _class
154  [COMMA]             ,
154  [WORD]              _method
154  [COMMA]             ,
154  [ELLIPSIS]          ...
154  [FPAREN_CLOSE]      )
154  [NL_CONT]           \
155  [PAREN_OPEN]        (
155  [DEREF]             *
155  [WORD]              _env
155  [PAREN_CLOSE]       )
155  [MEMBER]            ->
155  [FUNC_CALL]         CallStaticVoidMethod
155  [FPAREN_OPEN]       (
155  [PAREN_OPEN]        (
155  [TYPE]              JNIEnv
155  [PTR_TYPE]          *
155  [PAREN_CLOSE]       )
155  [WORD]              _env
155  [COMMA]             ,
155  [FUNC_CALL]         TCH_CLASS
155  [FPAREN_OPEN]       (
155  [WORD]              _class
155  [FPAREN_CLOSE]      )
155  [COMMA]             ,
155  [FUNC_CALL]         TCH_METHOD
155  [FPAREN_OPEN]       (
155  [WORD]              _method
155  [FPAREN_CLOSE]      )
155  [COMMA]             ,
155  [WORD]              __VA_ARGS__
155  [FPAREN_CLOSE]      )
155  [SEMICOLON]         ;
155  [NEWLINE]           
157  [PREPROC]           #
157  [PP_DEFINE]         define
157  [MACRO_FUNC]        TCH_CALL_STATIC_METHOD_BOOL
157  [FPAREN_OPEN]       (
157  [WORD]              _env
157  [COMMA]             ,
157  [WORD]              _class
157  [COMMA]             ,
157  [WORD]              _method
157  [FPAREN_CLOSE]      )
157  [NL_CONT]           \
158  [PAREN_OPEN]        (
158  [DEREF]             *
158  [WORD]              _env
158  [PAREN_CLOSE]       )
158  [MEMBER]            ->
158  [FUNC_CALL]         CallStaticBooleanMethod
158  [FPAREN_OPEN]       (
158  [PAREN_OPEN]        (
158  [TYPE]              JNIEnv
158  [PTR_TYPE]          *
158  [PAREN_CLOSE]       )
158  [WORD]              _env
158  [COMMA]             ,
158  [FUNC_CALL]         TCH_CLASS
158  [FPAREN_OPEN]       (
158  [WORD]              _class
158  [FPAREN_CLOSE]      )
158  [COMMA]             ,
158  [FUNC_CALL]         TCH_METHOD
158  [FPAREN_OPEN]       (
158  [WORD]              _method
158  [FPAREN_CLOSE]      )
158  [FPAREN_CLOSE]      )
158  [SEMICOLON]         ;
158  [NEWLINE]           
160  [FUNC_CALL]         TCH_REGISTER_CLASS
160  [FPAREN_OPEN]       (
160  [WORD]              testclassClass
160  [FPAREN_CLOSE]      )
160  [SEMICOLON]         ;
160  [NEWLINE]           
161  [FUNC_CALL]         TCH_REGISTER_METHOD
161  [FPAREN_OPEN]       (
161  [WORD]              testclassConstructor
161  [FPAREN_CLOSE]      )
161  [SEMICOLON]         ;
161  [NEWLINE]           
162  [QUALIFIER]         static
162  [TYPE]              jobject
162  [WORD]              TCH_testclassInstance
162  [ASSIGN]            =
162  [WORD]              NULL
162  [SEMICOLON]         ;
162  [NEWLINE]           
164  [FUNC_CALL]         TCH_REGISTER_CLASS
164  [FPAREN_OPEN]       (
164  [WORD]              testclassNativeListenerClass
164  [FPAREN_CLOSE]      )
164  [SEMICOLON]         ;
164  [NEWLINE]           
165  [FUNC_CALL]         TCH_REGISTER_METHOD
165  [FPAREN_OPEN]       (
165  [WORD]              testclassNativeListenerConstructor
165  [FPAREN_CLOSE]      )
165  [SEMICOLON]         ;
165  [NEWLINE]           
166  [QUALIFIER]         static
166  [TYPE]              jobject
166  [WORD]              TCH_testclassNativeListenerInstance
166  [ASSIGN]            =
166  [WORD]              NULL
166  [SEMICOLON]         ;
166  [NEWLINE]           
168  [FUNC_CALL]         TCH_REGISTER_METHOD
168  [FPAREN_OPEN]       (
168  [WORD]              isSupported
168  [FPAREN_CLOSE]      )
168  [SEMICOLON]         ;
168  [NEWLINE]           
169  [FUNC_CALL]         TCH_REGISTER_METHOD
169  [FPAREN_OPEN]       (
169  [WORD]              initTestClass
169  [FPAREN_CLOSE]      )
169  [SEMICOLON]         ;
169  [NEWLINE]           
171  [QUALIFIER]         static
171  [TYPE]              void
171  [FUNC_DEF]          TCH_preload
171  [FPAREN_OPEN]       (
171  [TYPE]              C_JNIEnv
171  [PTR_TYPE]          *
171  [WORD]              env
171  [FPAREN_CLOSE]      )
171  [BRACE_OPEN]        {
171  [NEWLINE]           
172  [WORD]              TCH_ELOG
172  [SEMICOLON]         ;
172  [NEWLINE]           
174  [IF]                if
174  [SPAREN_OPEN]       (
174  [FUNC_CALL]         TCH_CLASS
174  [FPAREN_OPEN]       (
174  [WORD]              testclassClass
174  [FPAREN_CLOSE]      )
174  [COMPARE]           ==
174  [WORD]              NULL
174  [SPAREN_CLOSE]      )
174  [BRACE_OPEN]        {
174  [NEWLINE]           
175  [FUNC_CALL]         TCH_FIND_CLASS
175  [FPAREN_OPEN]       (
175  [WORD]              env
175  [COMMA]             ,
175  [WORD]              testclassClass
175  [COMMA]             ,
175  [WORD]              kTCHTestClassClass
175  [FPAREN_CLOSE]      )
175  [SEMICOLON]         ;
175  [NEWLINE]           
176  [BRACE_CLOSE]       }
176  [NEWLINE]           
178  [COMMENT_CPP]       // Class really not found or not loaded, bail
178  [NEWLINE]           
179  [IF]                if
179  [SPAREN_OPEN]       (
179  [FUNC_CALL]         TCH_CLASS
179  [FPAREN_OPEN]       (
179  [WORD]              testclassClass
179  [FPAREN_CLOSE]      )
179  [COMPARE]           ==
179  [WORD]              NULL
179  [SPAREN_CLOSE]      )
179  [BRACE_OPEN]        {
179  [NEWLINE]           
180  [RETURN]            return
180  [SEMICOLON]         ;
180  [NEWLINE]           
181  [BRACE_CLOSE]       }
181  [NEWLINE]           
183  [IF]                if
183  [SPAREN_OPEN]       (
183  [FUNC_CALL]         TCH_CLASS
183  [FPAREN_OPEN]       (
183  [WORD]              testclassClass
183  [FPAREN_CLOSE]      )
183  [COMPARE]           !=
183  [WORD]              NULL
183  [BOOL]              &&
183  [FUNC_CALL]         TCH_METHOD
183  [FPAREN_OPEN]       (
183  [WORD]              isSupported
183  [FPAREN_CLOSE]      )
183  [COMPARE]           ==
183  [WORD]              NULL
183  [SPAREN_CLOSE]      )
183  [BRACE_OPEN]        {
183  [NEWLINE]           
184  [FUNC_CALL]         TCH_FIND_STATIC_METHOD
184  [FPAREN_OPEN]       (
184  [WORD]              env
184  [COMMA]             ,
184  [WORD]              testclassClass
184  [COMMA]             ,
184  [WORD]              isSupported
184  [COMMA]             ,
184  [STRING]            "()Z"
184  [FPAREN_CLOSE]      )
184  [SEMICOLON]         ;
184  [NEWLINE]           
185  [FUNC_CALL]         TCH_FIND_STATIC_METHOD
185  [FPAREN_OPEN]       (
185  [WORD]              env
185  [COMMA]             ,
185  [WORD]              testclassClass
185  [COMMA]             ,
185  [WORD]              initTestClass
185  [COMMA]             ,
185  [STRING]            "(Lcom/testclass/TestClass/ITestClassListener;Landroid/app/Activity;)Z"
185  [FPAREN_CLOSE]      )
185  [SEMICOLON]         ;
185  [NEWLINE]           
187  [IF]                if
187  [SPAREN_OPEN]       (
187  [FUNC_CALL]         TCH_CLASS
187  [FPAREN_OPEN]       (
187  [WORD]              testclassClass
187  [FPAREN_CLOSE]      )
187  [COMPARE]           !=
187  [WORD]              NULL
187  [SPAREN_CLOSE]      )
187  [BRACE_OPEN]        {
187  [NEWLINE]           
188  [FUNC_CALL]         TCH_METHOD
188  [FPAREN_OPEN]       (
188  [WORD]              testclassConstructor
188  [FPAREN_CLOSE]      )
188  [ASSIGN]            =
188  [PAREN_OPEN]        (
188  [DEREF]             *
188  [WORD]              env
188  [PAREN_CLOSE]       )
188  [MEMBER]            ->
188  [FUNC_CALL]         GetMethodID
188  [FPAREN_OPEN]       (
188  [PAREN_OPEN]        (
188  [TYPE]              JNIEnv
188  [PTR_TYPE]          *
188  [PAREN_CLOSE]       )
188  [WORD]              env
188  [COMMA]             ,
188  [FUNC_CALL]         TCH_CLASS
188  [FPAREN_OPEN]       (
188  [WORD]              testclassClass
188  [FPAREN_CLOSE]      )
188  [COMMA]             ,
188  [STRING]            "<init>"
188  [COMMA]             ,
188  [STRING]            "()V"
188  [FPAREN_CLOSE]      )
188  [SEMICOLON]         ;
188  [NEWLINE]           
189  [TYPE]              jobject
189  [WORD]              constructor
189  [ASSIGN]            =
189  [PAREN_OPEN]        (
189  [DEREF]             *
189  [WORD]              env
189  [PAREN_CLOSE]       )
189  [MEMBER]            ->
189  [FUNC_CALL]         NewObject
189  [FPAREN_OPEN]       (
189  [PAREN_OPEN]        (
189  [TYPE]              JNIEnv
189  [PTR_TYPE]          *
189  [PAREN_CLOSE]       )
189  [WORD]              env
189  [COMMA]             ,
189  [FUNC_CALL]         TCH_CLASS
189  [FPAREN_OPEN]       (
189  [WORD]              testclassClass
189  [FPAREN_CLOSE]      )
189  [COMMA]             ,
189  [FUNC_CALL]         TCH_METHOD
189  [FPAREN_OPEN]       (
189  [WORD]              testclassConstructor
189  [FPAREN_CLOSE]      )
189  [FPAREN_CLOSE]      )
189  [SEMICOLON]         ;
189  [NEWLINE]           
190  [WORD]              TCH_testclassInstance
190  [ASSIGN]            =
190  [PAREN_OPEN]        (
190  [DEREF]             *
190  [WORD]              env
190  [PAREN_CLOSE]       )
190  [MEMBER]            ->
190  [FUNC_CALL]         NewGlobalRef
190  [FPAREN_OPEN]       (
190  [PAREN_OPEN]        (
190  [TYPE]              JNIEnv
190  [PTR_TYPE]          *
190  [PAREN_CLOSE]       )
190  [WORD]              env
190  [COMMA]             ,
190  [WORD]              constructor
190  [FPAREN_CLOSE]      )
190  [SEMICOLON]         ;
190  [NEWLINE]           
191  [BRACE_CLOSE]       }
191  [NEWLINE]           
193  [IF]                if
193  [SPAREN_OPEN]       (
193  [FUNC_CALL]         TCH_CLASS
193  [FPAREN_OPEN]       (
193  [WORD]              testclassNativeListenerClass
193  [FPAREN_CLOSE]      )
193  [COMPARE]           ==
193  [WORD]              NULL
193  [SPAREN_CLOSE]      )
193  [BRACE_OPEN]        {
193  [NEWLINE]           
194  [FUNC_CALL]         TCH_FIND_CLASS
194  [FPAREN_OPEN]       (
194  [WORD]              env
194  [COMMA]             ,
194  [WORD]              testclassNativeListenerClass
194  [COMMA]             ,
194  [WORD]              kTCHTestClassNativeListenerClass
194  [FPAREN_CLOSE]      )
194  [SEMICOLON]         ;
194  [NEWLINE]           
195  [BRACE_CLOSE]       }
195  [NEWLINE]           
197  [IF]                if
197  [SPAREN_OPEN]       (
197  [FUNC_CALL]         TCH_CLASS
197  [FPAREN_OPEN]       (
197  [WORD]              testclassNativeListenerClass
197  [FPAREN_CLOSE]      )
197  [COMPARE]           !=
197  [WORD]              NULL
197  [SPAREN_CLOSE]      )
197  [BRACE_OPEN]        {
197  [NEWLINE]           
198  [FUNC_CALL]         TCH_METHOD
198  [FPAREN_OPEN]       (
198  [WORD]              testclassNativeListenerConstructor
198  [FPAREN_CLOSE]      )
198  [ASSIGN]            =
198  [PAREN_OPEN]        (
198  [DEREF]             *
198  [WORD]              env
198  [PAREN_CLOSE]       )
198  [MEMBER]            ->
198  [FUNC_CALL]         GetMethodID
198  [FPAREN_OPEN]       (
198  [PAREN_OPEN]        (
198  [TYPE]              JNIEnv
198  [PTR_TYPE]          *
198  [PAREN_CLOSE]       )
198  [WORD]              env
198  [COMMA]             ,
198  [FUNC_CALL]         TCH_CLASS
198  [FPAREN_OPEN]       (
198  [WORD]              testclassNativeListenerClass
198  [FPAREN_CLOSE]      )
198  [COMMA]             ,
198  [STRING]            "<init>"
198  [COMMA]             ,
198  [STRING]            "()V"
198  [FPAREN_CLOSE]      )
198  [SEMICOLON]         ;
198  [NEWLINE]           
199  [TYPE]              jobject
199  [WORD]              listener
199  [ASSIGN]            =
199  [PAREN_OPEN]        (
199  [DEREF]             *
199  [WORD]              env
199  [PAREN_CLOSE]       )
199  [MEMBER]            ->
199  [FUNC_CALL]         NewObject
199  [FPAREN_OPEN]       (
199  [PAREN_OPEN]        (
199  [TYPE]              JNIEnv
199  [PTR_TYPE]          *
199  [PAREN_CLOSE]       )
199  [WORD]              env
199  [COMMA]             ,
199  [FUNC_CALL]         TCH_CLASS
199  [FPAREN_OPEN]       (
199  [WORD]              testclassNativeListenerClass
199  [FPAREN_CLOSE]      )
199  [COMMA]             ,
199  [FUNC_CALL]         TCH_METHOD
199  [FPAREN_OPEN]       (
199  [WORD]              testclassNativeListenerConstructor
199  [FPAREN_CLOSE]      )
199  [FPAREN_CLOSE]      )
199  [SEMICOLON]         ;
199  [NEWLINE]           
200  [WORD]              TCH_testclassNativeListenerInstance
200  [ASSIGN]            =
200  [PAREN_OPEN]        (
200  [DEREF]             *
200  [WORD]              env
200  [PAREN_CLOSE]       )
200  [MEMBER]            ->
200  [FUNC_CALL]         NewGlobalRef
200  [FPAREN_OPEN]       (
200  [PAREN_OPEN]        (
200  [TYPE]              JNIEnv
200  [PTR_TYPE]          *
200  [PAREN_CLOSE]       )
200  [WORD]              env
200  [COMMA]             ,
200  [WORD]              listener
200  [FPAREN_CLOSE]      )
200  [SEMICOLON]         ;
200  [NEWLINE]           
201  [FUNC_CALL]         TCH_REGISTER_NATIVES
201  [FPAREN_OPEN]       (
201  [WORD]              env
201  [COMMA]             ,
201  [WORD]              testclassNativeListenerClass
201  [COMMA]             ,
201  [WORD]              TCH_listenerMethods
201  [FPAREN_CLOSE]      )
201  [SEMICOLON]         ;
201  [NEWLINE]           
202  [FUNC_CALL]         TCH_LOGV
202  [FPAREN_OPEN]       (
202  [STRING]            "Initializing built-in listener"
202  [FPAREN_CLOSE]      )
202  [SEMICOLON]         ;
202  [NEWLINE]           
203  [BRACE_CLOSE]       }
203  [NEWLINE]           
204  [BRACE_CLOSE]       }
204  [NEWLINE]           
205  [BRACE_CLOSE]       }
205  [NEWLINE]           
207  [PREPROC]           #
207  [PP_ELSE]           elif
207  [PP_DEFINED]        defined
207  [PAREN_OPEN]        (
207  [WORD]              __APPLE__
207  [PAREN_CLOSE]       )
207  [NEWLINE]           
209  [PREPROC]           #
209  [PP_IF]             ifndef
209  [WORD]              NDEBUG
209  [NEWLINE]           
210  [PREPROC]           #
210  [PP_DEFINE]         define
210  [MACRO_FUNC]        TCH_LOGV
210  [FPAREN_OPEN]       (
210  [ELLIPSIS]          ...
210  [FPAREN_CLOSE]      )
210  [FUNC_CALL]         NSLog
210  [FPAREN_OPEN]       (
210  [WORD]              __VA_ARGS__
210  [FPAREN_CLOSE]      )
210  [NEWLINE]           
211  [PREPROC]           #
211  [PP_ELSE]           else
211  [NEWLINE]           
212  [PREPROC]           #
212  [PP_DEFINE]         define
212  [MACRO_FUNC]        TCH_LOGV
212  [FPAREN_OPEN]       (
212  [ELLIPSIS]          ...
212  [FPAREN_CLOSE]      )
212  [NEWLINE]           
213  [PREPROC]           #
213  [PP_ENDIF]          endif
213  [NEWLINE]           
215  [PREPROC]           #
215  [PP_DEFINE]         define
215  [MACRO]             TCH_ELOG
215  [FUNC_CALL]         TCH_LOGV
215  [FPAREN_OPEN]       (
215  [STRING]            @"%s"
215  [COMMA]             ,
215  [WORD]              __FUNCTION__
215  [FPAREN_CLOSE]      )
215  [NEWLINE]           
217  [PREPROC]           #
217  [PP_IF]             if
217  [PP_DEFINED]        defined
217  [PAREN_OPEN]        (
217  [WORD]              __cplusplus
217  [PAREN_CLOSE]       )
217  [NEWLINE]           
218  [PREPROC]           #
218  [PP_DEFINE]         define
218  [MACRO_FUNC]        TCH_NS
218  [FPAREN_OPEN]       (
218  [WORD]              _class
218  [FPAREN_CLOSE]      )
218  [DC_MEMBER]         ::
218  [WORD]              _class
218  [NEWLINE]           
219  [PREPROC]           #
219  [PP_ELSE]           else
219  [NEWLINE]           
220  [PREPROC]           #
220  [PP_DEFINE]         define
220  [MACRO_FUNC]        TCH_NS
220  [FPAREN_OPEN]       (
220  [WORD]              _class
220  [FPAREN_CLOSE]      )
220  [WORD]              _class
220  [NEWLINE]           
221  [PREPROC]           #
221  [PP_ENDIF]          endif
221  [NEWLINE]           
223  [OC_INTF]           @interface
223  [OC_CLASS]          TCH_delegateHandler
223  [CLASS_COLON]       :
223  [WORD]              NSObject
223  [ANGLE_OPEN]        <
223  [TYPE]              TestClassDelegate
223  [ANGLE_CLOSE]       >
223  [NEWLINE]           
224  [OC_END]            @end
224  [NEWLINE]           
226  [OC_IMPL]           @implementation
226  [OC_CLASS]          TCH_delegateHandler
226  [NEWLINE]           
227  [OC_SCOPE]          -
227  [PAREN_OPEN]        (
227  [TYPE]              void
227  [PAREN_CLOSE]       )
227  [OC_MSG_DECL]       testclassUploadDidProgress
227  [OC_COLON]          :
227  [PAREN_OPEN]        (
227  [TYPE]              NSNumber
227  [PTR_TYPE]          *
227  [PAREN_CLOSE]       )
227  [TYPE]              videoId
227  [WORD]              progress
227  [OC_COLON]          :
227  [PAREN_OPEN]        (
227  [TYPE]              NSNumber
227  [PTR_TYPE]          *
227  [PAREN_CLOSE]       )
227  [WORD]              progress
227  [BRACE_OPEN]        {
227  [NEWLINE]           
228  [WORD]              TCH_ELOG
228  [SEMICOLON]         ;
228  [NEWLINE]           
229  [BRACE_CLOSE]       }
229  [NEWLINE]           
231  [OC_END]            @end
231  [NEWLINE]           
233  [QUALIFIER]         static
233  [TYPE]              TCH_delegateHandler
233  [PTR_TYPE]          *
233  [WORD]              TCH_builtInHandler
233  [ASSIGN]            =
233  [WORD]              nil
233  [SEMICOLON]         ;
233  [NEWLINE]           
235  [PREPROC]           #
235  [PP_ENDIF]          endif
235  [COMMENT]           /* if defined(__ANDROID__) */
235  [NEWLINE]           
237  [PREPROC]           #
237  [PP_IF]             if
237  [PP_DEFINED]        defined
237  [PAREN_OPEN]        (
237  [WORD]              __ANDROID__
237  [PAREN_CLOSE]       )
237  [NEWLINE]           
239  [TYPE]              void
239  [FUNC_DEF]          TCH_initTestClass
239  [FPAREN_OPEN]       (
239  [TYPE]              JNIEnv
239  [PTR_TYPE]          *
239  [WORD]              env
239  [COMMA]             ,
239  [TYPE]              jobject
239  [WORD]              activity
239  [COMMA]             ,
239  [TYPE]              jobject
239  [WORD]              listener
239  [FPAREN_CLOSE]      )
239  [BRACE_OPEN]        {
239  [NEWLINE]           
240  [WORD]              TCH_ELOG
240  [SEMICOLON]         ;
240  [NEWLINE]           
242  [TYPE]              C_JNIEnv
242  [PTR_TYPE]          *
242  [WORD]              cenv
242  [ASSIGN]            =
242  [WORD]              NULL
242  [SEMICOLON]         ;
242  [NEWLINE]           
243  [PREPROC]           #
243  [PP_IF]             if
243  [PP_DEFINED]        defined
243  [PAREN_OPEN]        (
243  [WORD]              __cplusplus
243  [PAREN_CLOSE]       )
243  [NEWLINE]           
244  [WORD]              cenv
244  [ASSIGN]            =
244  [PAREN_OPEN]        (
244  [TYPE]              C_JNIEnv
244  [PTR_TYPE]          *
244  [PAREN_CLOSE]       )
244  [WORD]              env
244  [SEMICOLON]         ;
244  [NEWLINE]           
245  [PREPROC]           #
245  [PP_ELSE]           else
245  [NEWLINE]           
246  [WORD]              cenv
246  [ASSIGN]            =
246  [WORD]              env
246  [SEMICOLON]         ;
246  [NEWLINE]           
247  [PREPROC]           #
247  [PP_ENDIF]          endif
247  [NEWLINE]           
249  [IF]                if
249  [SPAREN_OPEN]       (
249  [WORD]              TCH_vm
249  [COMPARE]           ==
249  [WORD]              NULL
249  [SPAREN_CLOSE]      )
249  [BRACE_OPEN]        {
249  [NEWLINE]           
250  [TYPE]              int
250  [WORD]              status
250  [ASSIGN]            =
250  [PAREN_OPEN]        (
250  [DEREF]             *
250  [WORD]              cenv
250  [PAREN_CLOSE]       )
250  [MEMBER]            ->
250  [FUNC_CALL]         GetJavaVM
250  [FPAREN_OPEN]       (
250  [PAREN_OPEN]        (
250  [TYPE]              JNIEnv
250  [PTR_TYPE]          *
250  [PAREN_CLOSE]       )
250  [WORD]              cenv
250  [COMMA]             ,
250  [ADDR]              &
250  [WORD]              TCH_vm
250  [FPAREN_CLOSE]      )
250  [SEMICOLON]         ;
250  [NEWLINE]           
251  [IF]                if
251  [SPAREN_OPEN]       (
251  [WORD]              status
251  [COMPARE]           !=
251  [NUMBER]            0
251  [SPAREN_CLOSE]      )
251  [BRACE_OPEN]        {
251  [NEWLINE]           
252  [FUNC_CALL]         TCH_LOGE
252  [FPAREN_OPEN]       (
252  [STRING]            "GetJavaVM failed"
252  [FPAREN_CLOSE]      )
252  [SEMICOLON]         ;
252  [NEWLINE]           
253  [RETURN]            return
253  [SEMICOLON]         ;
253  [NEWLINE]           
254  [BRACE_CLOSE]       }
254  [NEWLINE]           
255  [BRACE_CLOSE]       }
255  [NEWLINE]           
257  [FUNC_CALL]         TCH_CLASS
257  [FPAREN_OPEN]       (
257  [WORD]              testclassClass
257  [FPAREN_CLOSE]      )
257  [ASSIGN]            =
257  [FUNC_CALL]         TCH_loadClass
257  [FPAREN_OPEN]       (
257  [WORD]              cenv
257  [COMMA]             ,
257  [WORD]              activity
257  [COMMA]             ,
257  [WORD]              kTCHTestClassLoader
257  [FPAREN_CLOSE]      )
257  [SEMICOLON]         ;
257  [NEWLINE]           
258  [FUNC_CALL]         TCH_CLASS
258  [FPAREN_OPEN]       (
258  [WORD]              testclassNativeListenerClass
258  [FPAREN_CLOSE]      )
258  [ASSIGN]            =
258  [FUNC_CALL]         TCH_loadClass
258  [FPAREN_OPEN]       (
258  [WORD]              cenv
258  [COMMA]             ,
258  [WORD]              activity
258  [COMMA]             ,
258  [WORD]              kTCHTestClassNativeListenerLoader
258  [FPAREN_CLOSE]      )
258  [SEMICOLON]         ;
258  [NEWLINE]           
259  [FUNC_CALL]         TCH_preload
259  [FPAREN_OPEN]       (
259  [WORD]              cenv
259  [FPAREN_CLOSE]      )
259  [SEMICOLON]         ;
259  [NEWLINE]           
261  [TYPE]              jobject
261  [WORD]              listenerRef
261  [ASSIGN]            =
261  [WORD]              listener
261  [SEMICOLON]         ;
261  [NEWLINE]           
262  [IF]                if
262  [SPAREN_OPEN]       (
262  [WORD]              listenerRef
262  [COMPARE]           ==
262  [WORD]              NULL
262  [SPAREN_CLOSE]      )
262  [BRACE_OPEN]        {
262  [NEWLINE]           
263  [FUNC_CALL]         TCH_LOGV
263  [FPAREN_OPEN]       (
263  [STRING]            "Using built-in listener"
263  [FPAREN_CLOSE]      )
263  [SEMICOLON]         ;
263  [NEWLINE]           
264  [WORD]              listenerRef
264  [ASSIGN]            =
264  [WORD]              TCH_testclassNativeListenerInstance
264  [SEMICOLON]         ;
264  [NEWLINE]           
265  [BRACE_CLOSE]       }
265  [NEWLINE]           
267  [FUNC_CALL]         TCH_CALL_STATIC_METHOD_ARGS
267  [FPAREN_OPEN]       (
267  [WORD]              cenv
267  [COMMA]             ,
267  [WORD]              testclassClass
267  [COMMA]             ,
267  [WORD]              initTestClass
267  [COMMA]             ,
267  [WORD]              listenerRef
267  [COMMA]             ,
267  [WORD]              activity
267  [FPAREN_CLOSE]      )
267  [SEMICOLON]         ;
267  [NEWLINE]           
268  [BRACE_CLOSE]       }
268  [NEWLINE]           
270  [PREPROC]           #
270  [PP_ELSE]           elif
270  [PP_DEFINED]        defined
270  [PAREN_OPEN]        (
270  [WORD]              __APPLE__
270  [PAREN_CLOSE]       )
270  [NEWLINE]           
272  [TYPE]              void
272  [FUNC_DEF]          TCH_initTestClass
272  [FPAREN_OPEN]       (
272  [TYPE]              UIViewController
272  [PTR_TYPE]          *
272  [WORD]              viewController
272  [COMMA]             ,
272  [TYPE]              id
272  [ANGLE_OPEN]        <
272  [TYPE]              TestClassDelegate
272  [ANGLE_CLOSE]       >
272  [WORD]              testclassDelegate
272  [FPAREN_CLOSE]      )
272  [BRACE_OPEN]        {
272  [NEWLINE]           
273  [WORD]              TCH_ELOG
273  [SEMICOLON]         ;
273  [NEWLINE]           
275  [TYPE]              id
275  [ANGLE_OPEN]        <
275  [TYPE]              TestClassDelegate
275  [ANGLE_CLOSE]       >
275  [WORD]              testclassDelegateRef
275  [ASSIGN]            =
275  [WORD]              testclassDelegate
275  [SEMICOLON]         ;
275  [NEWLINE]           
276  [IF]                if
276  [SPAREN_OPEN]       (
276  [WORD]              testclassDelegateRef
276  [COMPARE]           ==
276  [WORD]              nil
276  [SPAREN_CLOSE]      )
276  [BRACE_OPEN]        {
276  [NEWLINE]           
277  [WORD]              TCH_builtInHandler
277  [ASSIGN]            =
277  [SQUARE_OPEN]       [
277  [SQUARE_OPEN]       [
277  [OC_MSG_CLASS]      TCH_delegateHandler
277  [OC_MSG_FUNC]       alloc
277  [SQUARE_CLOSE]      ]
277  [OC_MSG_FUNC]       init
277  [SQUARE_CLOSE]      ]
277  [SEMICOLON]         ;
277  [NEWLINE]           
278  [WORD]              testclassDelegateRef
278  [ASSIGN]            =
278  [WORD]              TCH_builtInHandler
278  [SEMICOLON]         ;
278  [NEWLINE]           
279  [BRACE_CLOSE]       }
279  [NEWLINE]           
281  [SQUARE_OPEN]       [
281  [FUNC_CALL]         TCH_NS
281  [FPAREN_OPEN]       (
281  [WORD]              TestClass
281  [FPAREN_CLOSE]      )
281  [OC_MSG_FUNC]       initWithDelegate
281  [OC_COLON]          :
281  [TYPE]              testclassDelegateRef
281  [OC_MSG_NAME]       andParentViewController
281  [OC_COLON]          :
281  [WORD]              viewController
281  [SQUARE_CLOSE]      ]
281  [SEMICOLON]         ;
281  [NEWLINE]           
282  [BRACE_CLOSE]       }
282  [NEWLINE]           
284  [PREPROC]           #
284  [PP_ENDIF]          endif
284  [COMMENT]           /* if defined(__ANDROID__) */
284  [NEWLINE]           
286  [TYPE]              bool
286  [FUNC_DEF]          TCH_isSupported
286  [FPAREN_OPEN]       (
286  [TYPE]              void
286  [FPAREN_CLOSE]      )
286  [BRACE_OPEN]        {
286  [NEWLINE]           
287  [WORD]              TCH_ELOG
287  [SEMICOLON]         ;
287  [NEWLINE]           
288  [TYPE]              bool
288  [WORD]              ret
288  [ASSIGN]            =
288  [WORD]              false
288  [SEMICOLON]         ;
288  [NEWLINE]           
290  [PREPROC]           #
290  [PP_IF]             if
290  [PP_DEFINED]        defined
290  [PAREN_OPEN]        (
290  [WORD]              __ANDROID__
290  [PAREN_CLOSE]       )
290  [NEWLINE]           
291  [TYPE]              C_JNIEnv
291  [PTR_TYPE]          *
291  [WORD]              env
291  [ASSIGN]            =
291  [FUNC_CALL]         TCH_getEnv
291  [FPAREN_OPEN]       (
291  [FPAREN_CLOSE]      )
291  [SEMICOLON]         ;
291  [NEWLINE]           
292  [IF]                if
292  [SPAREN_OPEN]       (
292  [WORD]              env
292  [BOOL]              &&
292  [FUNC_CALL]         TCH_CLASS
292  [FPAREN_OPEN]       (
292  [WORD]              testclassClass
292  [FPAREN_CLOSE]      )
292  [SPAREN_CLOSE]      )
292  [BRACE_OPEN]        {
292  [NEWLINE]           
293  [WORD]              ret
293  [ASSIGN]            =
293  [PAREN_OPEN]        (
293  [TYPE]              bool
293  [PAREN_CLOSE]       )
293  [FUNC_CALL]         TCH_CALL_STATIC_METHOD_BOOL
293  [FPAREN_OPEN]       (
293  [WORD]              env
293  [COMMA]             ,
293  [WORD]              testclassClass
293  [COMMA]             ,
293  [WORD]              isSupported
293  [FPAREN_CLOSE]      )
293  [SEMICOLON]         ;
293  [NEWLINE]           
294  [BRACE_CLOSE]       }
294  [NEWLINE]           
295  [PREPROC]           #
295  [PP_ELSE]           elif
295  [PP_DEFINED]        defined
295  [PAREN_OPEN]        (
295  [WORD]              __APPLE__
295  [PAREN_CLOSE]       )
295  [NEWLINE]           
296  [WORD]              ret
296  [ASSIGN]            =
296  [PAREN_OPEN]        (
296  [TYPE]              bool
296  [PAREN_CLOSE]       )
296  [SQUARE_OPEN]       [
296  [FUNC_CALL]         TCH_NS
296  [FPAREN_OPEN]       (
296  [WORD]              TestClass
296  [FPAREN_CLOSE]      )
296  [OC_MSG_FUNC]       isSupported
296  [SQUARE_CLOSE]      ]
296  [SEMICOLON]         ;
296  [NEWLINE]           
297  [PREPROC]           #
297  [PP_ENDIF]          endif
297  [NEWLINE]           
299  [RETURN]            return
299  [WORD]              ret
299  [SEMICOLON]         ;
299  [NEWLINE]           
300  [BRACE_CLOSE]       }
300  [NEWLINE]           