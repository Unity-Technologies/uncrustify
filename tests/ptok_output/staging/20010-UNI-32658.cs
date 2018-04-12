Line [Parent]            Text
1    [COMMENT_WHOLE]     //TestCase-001
1    [NONE]              
2    [NONE]              internal
2    [NONE]              struct
2    [STRUCT]            MyStruct
2    [STRUCT]            <
2    [NONE]              T
2    [TEMPLATE]          >
2    [NONE]              
3    [STRUCT]            where
3    [NONE]              T
3    [NONE]              :
3    [NONE]              struct
3    [NONE]              ,
3    [NONE]              IPrepareFrameJob
3    [NONE]              
4    [STRUCT]            {
4    [NONE]              
5    [STRUCT]            }
5    [NONE]              
7    [COMMENT_WHOLE]     //TestCase-002
7    [NONE]              
8    [NONE]              class
8    [CLASS]             MyClass
8    [TEMPLATE]          <
8    [NONE]              T
8    [NONE]              ,
8    [NONE]              U
8    [TEMPLATE]          >
8    [NONE]              
9    [CLASS]             where
9    [NONE]              T
9    [NONE]              :
9    [NONE]              class
9    [NONE]              
10   [CLASS]             where
10   [NONE]              U
10   [NONE]              :
10   [NONE]              struct
10   [NONE]              
11   [CLASS]             {
11   [NONE]              
12   [CLASS]             }
12   [NONE]              
14   [COMMENT_WHOLE]     //TestCase-003
14   [NONE]              
15   [NONE]              interface
15   [CLASS]             IMyInterface
15   [NONE]              
16   [CLASS]             {
16   [NONE]              
17   [CLASS]             }
17   [NONE]              
19   [NONE]              class
19   [CLASS]             Dictionary
19   [TEMPLATE]          <
19   [NONE]              TKey
19   [NONE]              ,
19   [NONE]              TVal
19   [TEMPLATE]          >
19   [NONE]              
20   [CLASS]             where
20   [NONE]              TKey
20   [NONE]              :
20   [NONE]              IComparable
20   [NONE]              ,
20   [NONE]              IEnumerable
20   [NONE]              
21   [CLASS]             where
21   [NONE]              TVal
21   [NONE]              :
21   [NONE]              IMyInterface
21   [NONE]              
22   [CLASS]             {
22   [NONE]              
23   [FUNC_DEF]          public
23   [FUNC_DEF]          void
23   [NONE]              Add
23   [FUNC_DEF]          (
23   [NONE]              TKey
23   [NONE]              key
23   [NONE]              ,
23   [NONE]              TVal
23   [NONE]              val
23   [FUNC_DEF]          )
23   [FUNC_DEF]          {
23   [FUNC_DEF]          }
23   [NONE]              
24   [CLASS]             }
24   [NONE]              
26   [FUNC_PROTO]        long
26   [NONE]              DeviceCommand
26   [TEMPLATE]          <
26   [NONE]              TCommand
26   [TEMPLATE]          >
26   [FUNC_PROTO]        (
26   [NONE]              int
26   [NONE]              deviceId
26   [NONE]              ,
26   [NONE]              ref
26   [NONE]              TCommand
26   [NONE]              command
26   [FUNC_PROTO]        )
26   [NONE]              
27   [FUNC_PROTO]        where
27   [NONE]              TCommand
27   [NONE]              :
27   [NONE]              struct
27   [NONE]              ,
27   [NONE]              IInputDeviceCommandInfo
27   [FUNC_PROTO]        ;
27   [NONE]              
29   [FUNC_PROTO]        public
29   [FUNC_PROTO]        virtual
29   [FUNC_PROTO]        long
29   [NONE]              OnDeviceCommand
29   [TEMPLATE]          <
29   [NONE]              TCommand
29   [TEMPLATE]          >
29   [FUNC_PROTO]        (
29   [NONE]              ref
29   [NONE]              TCommand
29   [NONE]              command
29   [FUNC_PROTO]        )
29   [NONE]              
30   [FUNC_PROTO]        where
30   [NONE]              TCommand
30   [NONE]              :
30   [NONE]              struct
30   [NONE]              ,
30   [NONE]              IInputDeviceCommandInfo
30   [FUNC_PROTO]        ;
30   [NONE]              
32   [FUNC_DEF]          long
32   [NONE]              DeviceCommand
32   [TEMPLATE]          <
32   [NONE]              TCommand
32   [TEMPLATE]          >
32   [FUNC_DEF]          (
32   [NONE]              int
32   [NONE]              deviceId
32   [NONE]              ,
32   [NONE]              ref
32   [NONE]              TCommand
32   [NONE]              command
32   [FUNC_DEF]          )
32   [NONE]              
33   [FUNC_DEF]          where
33   [FUNC_DEF]          TCommand
33   [FUNC_DEF]          :
33   [FUNC_DEF]          struct
33   [FUNC_DEF]          ,
33   [FUNC_DEF]          IInputDeviceCommandInfo
33   [NONE]              
35   [FUNC_DEF]          public
35   [FUNC_DEF]          virtual
35   [FUNC_DEF]          long
35   [FUNC_DEF]          OnDeviceCommand
35   [FUNC_DEF]          <
35   [FUNC_DEF]          TCommand
35   [FUNC_DEF]          >
35   [FUNC_DEF]          (
35   [FUNC_DEF]          ref
35   [FUNC_DEF]          TCommand
35   [FUNC_DEF]          command
35   [FUNC_DEF]          )
35   [NONE]              
36   [FUNC_DEF]          where
36   [FUNC_DEF]          TCommand
36   [FUNC_DEF]          :
36   [FUNC_DEF]          struct
36   [FUNC_DEF]          ,
36   [FUNC_DEF]          IInputDeviceCommandInfo
36   [NONE]              