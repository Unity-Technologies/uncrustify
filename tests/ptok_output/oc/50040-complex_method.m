Line [Parent]            Text
1    [COMMENT_WHOLE]     // Turn the document contents into a single savable lump of data
1    [NONE]              
2    [OC_MSG_DECL]       -
2    [OC_MSG_DECL]       (
2    [NONE]              NSData
2    [NONE]              *
2    [OC_MSG_DECL]       )
2    [OC_MSG_DECL]       dataOfType
2    [OC_MSG_DECL]       :
2    [OC_MSG_DECL]       (
2    [NONE]              NSString
2    [NONE]              *
2    [OC_MSG_DECL]       )
2    [NONE]              typeName
2    [OC_MSG_DECL]       error
2    [OC_MSG_DECL]       :
2    [OC_MSG_DECL]       (
2    [NONE]              NSError
2    [NONE]              *
2    [NONE]              *
2    [OC_MSG_DECL]       )
2    [NONE]              outError
2    [OC_MSG_DECL]       {
2    [NONE]              
3    [PP_PRAGMA]         #
3    [NONE]              pragma
3    [NONE]              unused(typeName)
3    [NONE]              
5    [COMMENT_WHOLE]     // Produce the data lump:
5    [NONE]              
6    [NONE]              NSData
6    [NONE]              *
6    [NONE]              retval
6    [NONE]              =
6    [OC_MSG]            [
6    [NONE]              NSKeyedArchiver
6    [NONE]              archivedDataWithRootObject
6    [NONE]              :
6    [NONE]              model
6    [OC_MSG]            ]
6    [OC_MSG]            ;
6    [NONE]              
8    [COMMENT_WHOLE]     // If the lump is nil something went wrong
8    [NONE]              
9    [COMMENT_WHOLE]     // fill out the error object to explain what wrent wrong
9    [NONE]              
10   [NONE]              if
10   [IF]                (
10   [NONE]              outError
10   [NONE]              !=
10   [NONE]              NULL
10   [IF]                )
10   [IF]                {
10   [NONE]              
11   [COMMENT_WHOLE]     // The sender wanted an error reported. If there
11   [NONE]              
12   [COMMENT_WHOLE]     // was a problem, fill in an NSError object
12   [NONE]              
13   [NONE]              if
13   [IF]                (
13   [NONE]              retval
13   [NONE]              ==
13   [NONE]              nil
13   [IF]                )
13   [IF]                {
13   [NONE]              
14   [COMMENT_WHOLE]     // The error object should include an (unhelpful)
14   [NONE]              
15   [COMMENT_WHOLE]     // explanation of what happened
15   [NONE]              
16   [NONE]              NSDictionary
16   [NONE]              *
16   [NONE]              userInfoDict
16   [NONE]              =
16   [OC_MSG]            [
16   [NONE]              NSDictionary
16   [NONE]              dictionaryWithObjectsAndKeys
16   [NONE]              :
16   [NONE]              
17   [NONE]              @"Internal error formatting data"
17   [NONE]              ,
17   [NONE]              NSLocalizedDescriptionKey
17   [NONE]              ,
17   [NONE]              
18   [NONE]              @"Archiving of data failed. Probably a bug."
18   [NONE]              ,
18   [NONE]              NSLocalizedFailureReasonErrorKey
18   [NONE]              ,
18   [NONE]              
19   [NONE]              @"There's nothing you can do."
19   [NONE]              ,
19   [NONE]              NSLocalizedRecoverySuggestionErrorKey
19   [NONE]              ,
19   [NONE]              nil
19   [OC_MSG]            ]
19   [OC_MSG]            ;
19   [NONE]              
21   [NONE]              *
21   [NONE]              outError
21   [NONE]              =
21   [OC_MSG]            [
21   [NONE]              NSError
21   [NONE]              errorWithDomain
21   [NONE]              :
21   [NONE]              LinearInternalErrorDomain
21   [NONE]              
22   [NONE]              code
22   [OC_MSG_NAME]       :
22   [NONE]              linErrCantFormatDocumentData
22   [NONE]              
23   [NONE]              userInfo
23   [OC_MSG_NAME]       :
23   [NONE]              userInfoDict
23   [OC_MSG]            ]
23   [OC_MSG]            ;
23   [NONE]              
24   [IF]                }
24   [NONE]              else
24   [ELSE]              {
24   [NONE]              
25   [COMMENT_WHOLE]     // No problem. Don't supply an error object.
25   [NONE]              
26   [NONE]              *
26   [NONE]              outError
26   [NONE]              =
26   [NONE]              nil
26   [NONE]              ;
26   [NONE]              
27   [ELSE]              }
27   [NONE]              
28   [IF]                }
28   [NONE]              
29   [NONE]              return
29   [NONE]              retval
29   [NONE]              ;
29   [NONE]              
30   [OC_MSG_DECL]       }
30   [NONE]              