Line [Parent]            Text
1    [COMMENT_WHOLE]     // Why are we getting doubling indentation on multiline new[] initializer?
1    [NONE]              
3    [COMMENT_WHOLE]     // See GetAdditionalReferences
3    [NONE]              
5    [COMMENT_WHOLE]     // Note that in C++ it seems to work ok
5    [NONE]              
7    [NONE]              namespace
7    [NAMESPACE]         Namespace
7    [NONE]              
8    [NAMESPACE]         {
8    [NONE]              
9    [NONE]              public
9    [NONE]              class
9    [CLASS]             Class
9    [NONE]              
10   [CLASS]             {
10   [NONE]              
11   [NONE]              private
11   [NONE]              string
11   [FUNC_DEF]          []
11   [NONE]              GetAdditionalReferences
11   [FUNC_DEF]          (
11   [FUNC_DEF]          )
11   [NONE]              
12   [FUNC_DEF]          {
12   [NONE]              
13   [NONE]              return
13   [NONE]              new
13   [NEW]               []
13   [NONE]              
14   [NEW]               {
14   [NONE]              
15   [NONE]              "System.dll"
15   [NONE]              ,
15   [NONE]              
16   [NEW]               }
16   [NONE]              ;
16   [NONE]              
17   [FUNC_DEF]          }
17   [NONE]              
18   [CLASS]             }
18   [NONE]              
19   [NAMESPACE]         }
19   [NONE]              