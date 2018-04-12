Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              import
1    [NONE]              <Foundation/Foundation.h>
1    [NONE]              
3    [NONE]              @interface
3    [OC_INTF]           TestClass
3    [OC_CLASS]          :
3    [NONE]              NSObject
3    [NONE]              
4    [OC_INTF]           @end
4    [NONE]              
6    [NONE]              @implementation
6    [OC_IMPL]           TestClass
6    [NONE]              
8    [OC_MSG_DECL]       -
8    [OC_MSG_DECL]       (
8    [NONE]              void
8    [OC_MSG_DECL]       )
8    [OC_MSG_DECL]       uploadWithClientData
8    [OC_MSG_DECL]       :
8    [OC_MSG_DECL]       (
8    [NONE]              NSMutableDictionary
8    [NONE]              *
8    [OC_MSG_DECL]       )
8    [NONE]              data
8    [OC_MSG_DECL]       withCallback
8    [OC_MSG_DECL]       :
8    [OC_MSG_DECL]       (
8    [NONE]              TestClassCallback
8    [OC_MSG_DECL]       )
8    [NONE]              callback
8    [OC_MSG_DECL]       {
8    [NONE]              
9    [NONE]              TestClassSessionInstance
9    [NONE]              *
9    [NONE]              session
9    [NONE]              =
9    [OC_MSG]            [
9    [OC_MSG]            [
9    [NONE]              TestClassSession
9    [NONE]              sharedInstance
9    [OC_MSG]            ]
9    [NONE]              currentOrLastSession
9    [OC_MSG]            ]
9    [OC_MSG]            ;
9    [NONE]              
11   [NONE]              if
11   [IF]                (
11   [NONE]              session
11   [NONE]              ==
11   [NONE]              nil
11   [NONE]              ||
11   [NONE]              data
11   [NONE]              ==
11   [NONE]              nil
11   [IF]                )
11   [IF]                {
11   [NONE]              
12   [NONE]              if
12   [IF]                (
12   [NONE]              callback
12   [NONE]              !=
12   [NONE]              nil
12   [IF]                )
12   [IF]                
12   [NONE]              
13   [NONE]              return
13   [NONE]              callback
13   [FUNC_CALL]         (
13   [NONE]              nil
13   [NONE]              ,
13   [NONE]              nil
13   [FUNC_CALL]         )
13   [NONE]              ;
13   [IF]                
13   [NONE]              
14   [NONE]              return
14   [NONE]              ;
14   [NONE]              
15   [IF]                }
15   [NONE]              
16   [OC_MSG]            [
16   [NONE]              session
16   [NONE]              mergeCommonMovieItems
16   [NONE]              :
16   [OC_BLOCK_EXPR]     ^
16   [OC_BLOCK_EXPR]     (
16   [OC_BLOCK_EXPR]     NSURL
16   [OC_BLOCK_EXPR]     *
16   [OC_BLOCK_EXPR]     exportURL
16   [OC_BLOCK_EXPR]     ,
16   [OC_BLOCK_EXPR]     NSError
16   [OC_BLOCK_EXPR]     *
16   [OC_BLOCK_EXPR]     exportError
16   [OC_BLOCK_EXPR]     )
16   [OC_BLOCK_EXPR]     {
16   [NONE]              
17   [NONE]              if
17   [IF]                (
17   [NONE]              exportError
17   [NONE]              !=
17   [NONE]              nil
17   [IF]                )
17   [IF]                
17   [NONE]              
18   [NONE]              return
18   [NONE]              callback
18   [FUNC_CALL]         (
18   [NONE]              exportError
18   [NONE]              ,
18   [NONE]              nil
18   [FUNC_CALL]         )
18   [NONE]              ;
18   [IF]                
18   [NONE]              
19   [NONE]              NSDictionary
19   [NONE]              *
19   [NONE]              settings
19   [NONE]              =
19   [OC_MSG]            [
19   [NONE]              self
19   [NONE]              getSettings
19   [OC_MSG]            ]
19   [OC_MSG]            ;
19   [NONE]              
20   [OC_BLOCK_EXPR]     }
20   [OC_MSG]            ]
20   [OC_MSG]            ;
20   [NONE]              
21   [OC_MSG_DECL]       }
21   [NONE]              
23   [OC_IMPL]           @end
23   [NONE]              