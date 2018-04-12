Line [Parent]            Text
1    [FUNC_DEF]          void
1    [NONE]              foo
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              obj
3    [NONE]              .
3    [NONE]              cb
3    [NONE]              +=
3    [NONE]              (
3    [NONE]              )
3    [NONE]              =>
3    [LAMBDA]            {
3    [LAMBDA]            }
3    [NONE]              ;
3    [NONE]              
5    [NONE]              funcwithverylongname
5    [FUNC_CALL]         (
5    [NONE]              (
5    [NONE]              )
5    [NONE]              =>
5    [NONE]              
6    [LAMBDA]            {
6    [NONE]              
7    [NONE]              func
7    [FUNC_CALL]         (
7    [FUNC_CALL]         )
7    [NONE]              ;
7    [NONE]              
8    [LAMBDA]            }
8    [FUNC_CALL]         )
8    [NONE]              ;
8    [NONE]              
9    [FUNC_DEF]          }
9    [NONE]              
11   [NONE]              Func
11   [FUNC_CALL]         (
11   [NONE]              
12   [NONE]              "stuff"
12   [NONE]              ,
12   [NONE]              
13   [NONE]              foo
13   [NONE]              =>
13   [NONE]              
14   [LAMBDA]            {
14   [NONE]              
15   [NONE]              bar
15   [FUNC_CALL]         (
15   [FUNC_CALL]         )
15   [NONE]              ;
15   [NONE]              
16   [LAMBDA]            }
16   [FUNC_CALL]         )
16   [NONE]              ;
16   [NONE]              
18   [NONE]              Func
18   [FUNC_CALL]         (
18   [NONE]              
19   [NONE]              "stuff"
19   [NONE]              ,
19   [NONE]              
20   [NONE]              foo
20   [NONE]              =>
20   [NONE]              
21   [LAMBDA]            {
21   [NONE]              
22   [NONE]              bar
22   [FUNC_CALL]         (
22   [FUNC_CALL]         )
22   [NONE]              ;
22   [NONE]              
23   [LAMBDA]            }
23   [FUNC_CALL]         )
23   [NONE]              ;
23   [NONE]              
25   [NONE]              data
25   [NONE]              .
25   [NONE]              Sort
25   [FUNC_CALL]         (
25   [NONE]              
26   [NONE]              delegate
26   [DELEGATE]          (
26   [NONE]              InputData
26   [NONE]              lhs
26   [NONE]              ,
26   [NONE]              InputData
26   [NONE]              rhs
26   [DELEGATE]          )
26   [NONE]              
27   [DELEGATE]          {
27   [NONE]              
28   [NONE]              return
28   [NONE]              lhs
28   [NONE]              .
28   [NONE]              m_Name
28   [NONE]              .
28   [NONE]              CompareTo
28   [FUNC_CALL]         (
28   [NONE]              rhs
28   [NONE]              .
28   [NONE]              m_Name
28   [FUNC_CALL]         )
28   [NONE]              ;
28   [NONE]              
29   [NONE]              }
29   [FUNC_CALL]         )
29   [NONE]              ;
29   [NONE]              