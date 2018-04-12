Line [Parent]            Text
1    [NONE]              
2    [FUNC_DEF]          int
2    [NONE]              main
2    [FUNC_DEF]          (
2    [NONE]              int
2    [NONE]              argc
2    [NONE]              ,
2    [NONE]              const
2    [NONE]              char
2    [NONE]              *
2    [NONE]              argv
2    [NONE]              []
2    [FUNC_DEF]          )
2    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              @try
3    [NONE]              
3    [TRY]               {
3    [NONE]              
4    [OC_MSG]            [
4    [NONE]              NSException
4    [NONE]              raise
4    [NONE]              :
4    [NONE]              NSInternalInconsistency
4    [NONE]              
5    [NONE]              format
5    [OC_MSG_NAME]       :
5    [NONE]              @"An internal inconsistency was raised"
5    [OC_MSG]            ]
5    [OC_MSG]            ;
5    [NONE]              
6    [TRY]               }
6    [NONE]              
7    [NONE]              @catch
7    [SPAREN_OPEN]       (
7    [NONE]              NSException
7    [NONE]              *
7    [NONE]              e
7    [SPAREN_OPEN]       )
7    [NONE]              
7    [SPAREN_OPEN]       {
7    [NONE]              
8    [NONE]              NSLog
8    [FUNC_CALL]         (
8    [NONE]              @"Catch"
8    [FUNC_CALL]         )
8    [NONE]              ;
8    [NONE]              
9    [SPAREN_OPEN]       }
9    [NONE]              
10   [NONE]              @finally
10   [NONE]              
10   [FINALLY]           {
10   [NONE]              
11   [NONE]              NSLog
11   [FUNC_CALL]         (
11   [NONE]              @"Finally"
11   [FUNC_CALL]         )
11   [NONE]              ;
11   [NONE]              
12   [FINALLY]           }
12   [NONE]              
14   [NONE]              @throw
14   [OC_MSG]            [
14   [NONE]              NSException
14   [NONE]              exceptionWithName
14   [NONE]              :
14   [NONE]              @"foo"
14   [NONE]              reason
14   [OC_MSG_NAME]       :
14   [NONE]              @"bar"
14   [NONE]              userInfo
14   [OC_MSG_NAME]       :
14   [NONE]              nil
14   [OC_MSG]            ]
14   [OC_MSG]            ;
14   [NONE]              
16   [NONE]              NSException
16   [NONE]              *
16   [NONE]              exception
16   [NONE]              =
16   [OC_MSG]            [
16   [NONE]              NSException
16   [NONE]              exceptionWithName
16   [NONE]              :
16   [NONE]              @"HotTeaException"
16   [NONE]              
17   [NONE]              reason
17   [OC_MSG_NAME]       :
17   [NONE]              @"The tea is too hot"
17   [NONE]              
18   [NONE]              userInfo
18   [OC_MSG_NAME]       :
18   [NONE]              nil
18   [OC_MSG]            ]
18   [OC_MSG]            ;
18   [NONE]              
20   [NONE]              @throw
20   [NONE]              exception
20   [NONE]              ;
20   [NONE]              
22   [NONE]              return
22   [NONE]              0
22   [NONE]              ;
22   [NONE]              
23   [FUNC_DEF]          }
23   [NONE]              