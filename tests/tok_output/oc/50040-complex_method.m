Line [Token]             Text
1    [COMMENT_CPP]       // Turn the document contents into a single savable lump of data
1    [NEWLINE]           
2    [OC_SCOPE]          -
2    [PAREN_OPEN]        (
2    [TYPE]              NSData
2    [PTR_TYPE]          *
2    [PAREN_CLOSE]       )
2    [OC_MSG_DECL]       dataOfType
2    [OC_COLON]          :
2    [PAREN_OPEN]        (
2    [TYPE]              NSString
2    [PTR_TYPE]          *
2    [PAREN_CLOSE]       )
2    [TYPE]              typeName
2    [WORD]              error
2    [OC_COLON]          :
2    [PAREN_OPEN]        (
2    [TYPE]              NSError
2    [PTR_TYPE]          *
2    [PTR_TYPE]          *
2    [PAREN_CLOSE]       )
2    [WORD]              outError
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [PREPROC]           #
3    [PP_PRAGMA]         pragma
3    [PREPROC_BODY]      unused(typeName)
3    [NEWLINE]           
5    [COMMENT_CPP]       // Produce the data lump:
5    [NEWLINE]           
6    [TYPE]              NSData
6    [PTR_TYPE]          *
6    [WORD]              retval
6    [ASSIGN]            =
6    [SQUARE_OPEN]       [
6    [OC_MSG_CLASS]      NSKeyedArchiver
6    [OC_MSG_FUNC]       archivedDataWithRootObject
6    [OC_COLON]          :
6    [WORD]              model
6    [SQUARE_CLOSE]      ]
6    [SEMICOLON]         ;
6    [NEWLINE]           
8    [COMMENT_CPP]       // If the lump is nil something went wrong
8    [NEWLINE]           
9    [COMMENT_CPP]       // fill out the error object to explain what wrent wrong
9    [NEWLINE]           
10   [IF]                if
10   [SPAREN_OPEN]       (
10   [WORD]              outError
10   [COMPARE]           !=
10   [WORD]              NULL
10   [SPAREN_CLOSE]      )
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [COMMENT_CPP]       // The sender wanted an error reported. If there
11   [NEWLINE]           
12   [COMMENT_CPP]       // was a problem, fill in an NSError object
12   [NEWLINE]           
13   [IF]                if
13   [SPAREN_OPEN]       (
13   [WORD]              retval
13   [COMPARE]           ==
13   [WORD]              nil
13   [SPAREN_CLOSE]      )
13   [BRACE_OPEN]        {
13   [NEWLINE]           
14   [COMMENT_CPP]       // The error object should include an (unhelpful)
14   [NEWLINE]           
15   [COMMENT_CPP]       // explanation of what happened
15   [NEWLINE]           
16   [TYPE]              NSDictionary
16   [PTR_TYPE]          *
16   [WORD]              userInfoDict
16   [ASSIGN]            =
16   [SQUARE_OPEN]       [
16   [OC_MSG_CLASS]      NSDictionary
16   [OC_MSG_FUNC]       dictionaryWithObjectsAndKeys
16   [OC_COLON]          :
16   [NEWLINE]           
17   [STRING]            @"Internal error formatting data"
17   [COMMA]             ,
17   [WORD]              NSLocalizedDescriptionKey
17   [COMMA]             ,
17   [NEWLINE]           
18   [STRING]            @"Archiving of data failed. Probably a bug."
18   [COMMA]             ,
18   [WORD]              NSLocalizedFailureReasonErrorKey
18   [COMMA]             ,
18   [NEWLINE]           
19   [STRING]            @"There's nothing you can do."
19   [COMMA]             ,
19   [WORD]              NSLocalizedRecoverySuggestionErrorKey
19   [COMMA]             ,
19   [WORD]              nil
19   [SQUARE_CLOSE]      ]
19   [SEMICOLON]         ;
19   [NEWLINE]           
21   [DEREF]             *
21   [WORD]              outError
21   [ASSIGN]            =
21   [SQUARE_OPEN]       [
21   [OC_MSG_CLASS]      NSError
21   [OC_MSG_FUNC]       errorWithDomain
21   [OC_COLON]          :
21   [TYPE]              LinearInternalErrorDomain
21   [NEWLINE]           
22   [OC_MSG_NAME]       code
22   [OC_COLON]          :
22   [TYPE]              linErrCantFormatDocumentData
22   [NEWLINE]           
23   [OC_MSG_NAME]       userInfo
23   [OC_COLON]          :
23   [WORD]              userInfoDict
23   [SQUARE_CLOSE]      ]
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [ELSE]              else
24   [BRACE_OPEN]        {
24   [NEWLINE]           
25   [COMMENT_CPP]       // No problem. Don't supply an error object.
25   [NEWLINE]           
26   [DEREF]             *
26   [WORD]              outError
26   [ASSIGN]            =
26   [WORD]              nil
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
28   [BRACE_CLOSE]       }
28   [NEWLINE]           
29   [RETURN]            return
29   [WORD]              retval
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           