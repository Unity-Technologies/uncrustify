Line [Parent]            Text
1    [NONE]              public
1    [NONE]              class
1    [CLASS]             Class
1    [NONE]              
2    [CLASS]             {
2    [NONE]              
3    [FUNC_DEF]          public
3    [FUNC_DEF]          void
3    [NONE]              foo
3    [FUNC_DEF]          (
3    [FUNC_DEF]          )
3    [NONE]              
4    [FUNC_DEF]          {
4    [NONE]              
5    [NONE]              data
5    [NONE]              .
5    [NONE]              Sort
5    [FUNC_CALL]         (
5    [NONE]              
6    [NONE]              delegate
6    [DELEGATE]          (
6    [NONE]              InputData
6    [NONE]              lhs
6    [NONE]              ,
6    [NONE]              InputData
6    [NONE]              rhs
6    [DELEGATE]          )
6    [NONE]              
7    [DELEGATE]          {
7    [NONE]              
8    [NONE]              return
8    [NONE]              lhs
8    [NONE]              .
8    [NONE]              m_Name
8    [NONE]              .
8    [NONE]              CompareTo
8    [FUNC_CALL]         (
8    [NONE]              rhs
8    [NONE]              .
8    [NONE]              m_Name
8    [FUNC_CALL]         )
8    [NONE]              ;
8    [NONE]              
9    [NONE]              }
9    [FUNC_CALL]         )
9    [NONE]              ;
9    [NONE]              
10   [FUNC_DEF]          }
10   [NONE]              
11   [CLASS]             }
11   [NONE]              
13   [COMMENT_WHOLE]     // Want the braces aligning with the delegate keyword.
13   [NONE]              
15   [COMMENT_WHOLE]     // Probably also an issue with lambda style delegates.
15   [NONE]              