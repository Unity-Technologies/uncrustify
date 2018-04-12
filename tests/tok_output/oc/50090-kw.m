Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        include
1    [PREPROC_BODY]      <stdio.h>
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_INCLUDE]        include
2    [PREPROC_BODY]      <objc/Object.h>
2    [NEWLINE]           
4    [OC_PROTOCOL]       @protocol
4    [OC_CLASS]          Job
4    [NEWLINE]           
5    [OC_SCOPE]          -
5    [WORD]              do
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [OC_END]            @end
6    [NEWLINE]           
8    [OC_INTF]           @interface
8    [OC_CLASS]          MyJob
8    [CLASS_COLON]       :
8    [WORD]              Object
8    [ANGLE_OPEN]        <
8    [TYPE]              Job
8    [ANGLE_CLOSE]       >
8    [NEWLINE]           
9    [OC_SCOPE]          -
9    [WORD]              do
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [OC_END]            @end
10   [NEWLINE]           
11   [OC_IMPL]           @implementation
11   [OC_CLASS]          MyJob
11   [NEWLINE]           
12   [OC_SCOPE]          -
12   [WORD]              do
12   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
14   [FUNC_CALL]         printf
14   [FPAREN_OPEN]       (
14   [STRING]            "Doing Job\n"
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [RETURN]            return
15   [THIS]              self
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
17   [OC_END]            @end
17   [NEWLINE]           
19   [OC_INTF]           @interface
19   [OC_CLASS]          JobExecutor
19   [CLASS_COLON]       :
19   [WORD]              Object
19   [NEWLINE]           
20   [OC_SCOPE]          -
20   [WORD]              doWith
20   [OC_COLON]          :
20   [PAREN_OPEN]        (
20   [TYPE]              id
20   [ANGLE_OPEN]        <
20   [TYPE]              Job
20   [ANGLE_CLOSE]       >
20   [PAREN_CLOSE]       )
20   [TYPE]              job
20   [WORD]              for
20   [OC_COLON]          :
20   [PAREN_OPEN]        (
20   [TYPE]              int
20   [PAREN_CLOSE]       )
20   [WORD]              count
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [OC_END]            @end
21   [NEWLINE]           
23   [OC_IMPL]           @implementation
23   [OC_CLASS]          JobExecutor
23   [NEWLINE]           
24   [OC_SCOPE]          -
24   [WORD]              doWith
24   [OC_COLON]          :
24   [PAREN_OPEN]        (
24   [TYPE]              id
24   [ANGLE_OPEN]        <
24   [TYPE]              Job
24   [ANGLE_CLOSE]       >
24   [PAREN_CLOSE]       )
24   [WORD]              job
24   [WORD]              for
24   [OC_COLON]          :
24   [PAREN_OPEN]        (
24   [TYPE]              int
24   [PAREN_CLOSE]       )
24   [WORD]              count
24   [NEWLINE]           
25   [BRACE_OPEN]        {
25   [NEWLINE]           
26   [FOR]               for
26   [SPAREN_OPEN]       (
26   [TYPE]              int
26   [WORD]              i
26   [ASSIGN]            =
26   [NUMBER]            0
26   [SEMICOLON]         ;
26   [WORD]              i
26   [COMPARE]           <
26   [WORD]              count
26   [SEMICOLON]         ;
26   [INCDEC_BEFORE]     ++
26   [WORD]              i
26   [SPAREN_CLOSE]      )
26   [NEWLINE]           
26   [BRACE_OPEN]        {
26   [NEWLINE]           
27   [SQUARE_OPEN]       [
27   [OC_MSG_CLASS]      job
27   [OC_MSG_FUNC]       do
27   [SQUARE_CLOSE]      ]
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [BRACE_CLOSE]       }
28   [NEWLINE]           
29   [RETURN]            return
29   [THIS]              self
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           
31   [OC_END]            @end
31   [NEWLINE]           