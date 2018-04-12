Line [Parent]            Text
1    [OC_MSG]            [
1    [OC_MSG]            [
1    [NONE]              HRNewsService
1    [NONE]              sharedInstance
1    [OC_MSG]            ]
1    [NONE]              unregisterPushToken
1    [NONE]              :
1    [NONE]              data
1    [NONE]              
2    [NONE]              success
2    [OC_MSG_NAME]       :
2    [OC_BLOCK_EXPR]     ^
2    [OC_BLOCK_EXPR]     {
2    [NONE]              
3    [NONE]              self
3    [NONE]              .
3    [NONE]              notificationsEnabled
3    [NONE]              =
3    [NONE]              NO
3    [NONE]              ;
3    [NONE]              
4    [NONE]              if
4    [IF]                (
4    [NONE]              data
4    [NONE]              .
4    [NONE]              param
4    [IF]                )
4    [NONE]              
4    [IF]                {
4    [NONE]              
5    [NONE]              self
5    [NONE]              .
5    [NONE]              loudNotifications
5    [NONE]              =
5    [NONE]              YES
5    [NONE]              ;
5    [NONE]              
6    [IF]                }
6    [NONE]              
7    [OC_BLOCK_EXPR]     }
7    [NONE]              
8    [NONE]              fail
8    [OC_MSG_NAME]       :
8    [OC_BLOCK_EXPR]     ^
8    [OC_BLOCK_EXPR]     {
8    [NONE]              
9    [NONE]              self
9    [NONE]              .
9    [NONE]              notificationsEnabled
9    [NONE]              =
9    [NONE]              NO
9    [NONE]              ;
9    [NONE]              
10   [NONE]              if
10   [IF]                (
10   [NONE]              data
10   [NONE]              .
10   [NONE]              param
10   [IF]                )
10   [NONE]              
10   [IF]                {
10   [NONE]              
11   [NONE]              self
11   [NONE]              .
11   [NONE]              loudNotifications
11   [NONE]              =
11   [NONE]              YES
11   [NONE]              ;
11   [NONE]              
12   [IF]                }
12   [NONE]              
13   [OC_BLOCK_EXPR]     }
13   [NONE]              
14   [OC_MSG]            ]
14   [OC_MSG]            ;
14   [NONE]              