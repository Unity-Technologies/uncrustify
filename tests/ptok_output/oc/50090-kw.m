Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              include
1    [NONE]              <stdio.h>
1    [NONE]              
2    [PP_INCLUDE]        #
2    [NONE]              include
2    [NONE]              <objc/Object.h>
2    [NONE]              
4    [NONE]              @protocol
4    [OC_PROTOCOL]       Job
4    [NONE]              
5    [NONE]              -
5    [NONE]              do
5    [NONE]              ;
5    [NONE]              
6    [OC_PROTOCOL]       @end
6    [NONE]              
8    [NONE]              @interface
8    [OC_INTF]           MyJob
8    [OC_CLASS]          :
8    [NONE]              Object
8    [OC_PROTO_LIST]     <
8    [OC_PROTO_LIST]     Job
8    [OC_PROTO_LIST]     >
8    [NONE]              
9    [NONE]              -
9    [NONE]              do
9    [NONE]              ;
9    [NONE]              
10   [OC_INTF]           @end
10   [NONE]              
11   [NONE]              @implementation
11   [OC_IMPL]           MyJob
11   [NONE]              
12   [NONE]              -
12   [NONE]              do
12   [NONE]              
13   [OC_CLASS]          {
13   [NONE]              
14   [NONE]              printf
14   [FUNC_CALL]         (
14   [NONE]              "Doing Job\n"
14   [FUNC_CALL]         )
14   [NONE]              ;
14   [NONE]              
15   [NONE]              return
15   [NONE]              self
15   [NONE]              ;
15   [NONE]              
16   [OC_CLASS]          }
16   [NONE]              
17   [OC_IMPL]           @end
17   [NONE]              
19   [NONE]              @interface
19   [OC_INTF]           JobExecutor
19   [OC_CLASS]          :
19   [NONE]              Object
19   [NONE]              
20   [NONE]              -
20   [NONE]              doWith
20   [NONE]              :
20   [C_CAST]            (
20   [C_CAST]            id
20   [C_CAST]            <
20   [C_CAST]            Job
20   [C_CAST]            >
20   [C_CAST]            )
20   [NONE]              job
20   [NONE]              for
20   [NONE]              :
20   [C_CAST]            (
20   [C_CAST]            int
20   [C_CAST]            )
20   [NONE]              count
20   [NONE]              ;
20   [NONE]              
21   [OC_INTF]           @end
21   [NONE]              
23   [NONE]              @implementation
23   [OC_IMPL]           JobExecutor
23   [NONE]              
24   [NONE]              -
24   [NONE]              doWith
24   [NONE]              :
24   [C_CAST]            (
24   [C_CAST]            id
24   [C_CAST]            <
24   [C_CAST]            Job
24   [C_CAST]            >
24   [C_CAST]            )
24   [NONE]              job
24   [NONE]              for
24   [NONE]              :
24   [C_CAST]            (
24   [C_CAST]            int
24   [C_CAST]            )
24   [NONE]              count
24   [NONE]              
25   [OC_CLASS]          {
25   [NONE]              
26   [NONE]              for
26   [FOR]               (
26   [NONE]              int
26   [NONE]              i
26   [NONE]              =
26   [NONE]              0
26   [FOR]               ;
26   [NONE]              i
26   [NONE]              <
26   [NONE]              count
26   [FOR]               ;
26   [NONE]              ++
26   [NONE]              i
26   [FOR]               )
26   [NONE]              
26   [FOR]               {
26   [NONE]              
27   [OC_MSG]            [
27   [NONE]              job
27   [NONE]              do
27   [OC_MSG]            ]
27   [OC_MSG]            ;
27   [NONE]              
28   [FOR]               }
28   [NONE]              
29   [NONE]              return
29   [NONE]              self
29   [NONE]              ;
29   [NONE]              
30   [OC_CLASS]          }
30   [NONE]              
31   [OC_IMPL]           @end
31   [NONE]              