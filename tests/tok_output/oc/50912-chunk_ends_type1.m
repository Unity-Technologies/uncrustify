Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        import
1    [PREPROC_BODY]      <Foundation/Foundation.h>
1    [NEWLINE]           
3    [OC_INTF]           @interface
3    [OC_CLASS]          TestClass
3    [CLASS_COLON]       :
3    [WORD]              NSObject
3    [NEWLINE]           
4    [OC_END]            @end
4    [NEWLINE]           
6    [OC_IMPL]           @implementation
6    [OC_CLASS]          TestClass
6    [NEWLINE]           
8    [OC_SCOPE]          -
8    [PAREN_OPEN]        (
8    [TYPE]              void
8    [PAREN_CLOSE]       )
8    [OC_MSG_DECL]       uploadWithClientData
8    [OC_COLON]          :
8    [PAREN_OPEN]        (
8    [TYPE]              NSMutableDictionary
8    [PTR_TYPE]          *
8    [PAREN_CLOSE]       )
8    [TYPE]              data
8    [WORD]              withCallback
8    [OC_COLON]          :
8    [PAREN_OPEN]        (
8    [TYPE]              TestClassCallback
8    [PAREN_CLOSE]       )
8    [WORD]              callback
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [TYPE]              TestClassSessionInstance
9    [PTR_TYPE]          *
9    [WORD]              session
9    [ASSIGN]            =
9    [SQUARE_OPEN]       [
9    [SQUARE_OPEN]       [
9    [OC_MSG_CLASS]      TestClassSession
9    [OC_MSG_FUNC]       sharedInstance
9    [SQUARE_CLOSE]      ]
9    [OC_MSG_FUNC]       currentOrLastSession
9    [SQUARE_CLOSE]      ]
9    [SEMICOLON]         ;
9    [NEWLINE]           
11   [IF]                if
11   [SPAREN_OPEN]       (
11   [WORD]              session
11   [COMPARE]           ==
11   [WORD]              nil
11   [BOOL]              ||
11   [WORD]              data
11   [COMPARE]           ==
11   [WORD]              nil
11   [SPAREN_CLOSE]      )
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [IF]                if
12   [SPAREN_OPEN]       (
12   [WORD]              callback
12   [COMPARE]           !=
12   [WORD]              nil
12   [SPAREN_CLOSE]      )
12   [VBRACE_OPEN]       
12   [NEWLINE]           
13   [RETURN]            return
13   [FUNC_CALL]         callback
13   [FPAREN_OPEN]       (
13   [WORD]              nil
13   [COMMA]             ,
13   [WORD]              nil
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [VBRACE_CLOSE]      
13   [NEWLINE]           
14   [RETURN]            return
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
16   [SQUARE_OPEN]       [
16   [OC_MSG_CLASS]      session
16   [OC_MSG_FUNC]       mergeCommonMovieItems
16   [OC_COLON]          :
16   [OC_BLOCK_CARET]    ^
16   [FPAREN_OPEN]       (
16   [TYPE]              NSURL
16   [PTR_TYPE]          *
16   [WORD]              exportURL
16   [COMMA]             ,
16   [TYPE]              NSError
16   [PTR_TYPE]          *
16   [WORD]              exportError
16   [FPAREN_CLOSE]      )
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [IF]                if
17   [SPAREN_OPEN]       (
17   [WORD]              exportError
17   [COMPARE]           !=
17   [WORD]              nil
17   [SPAREN_CLOSE]      )
17   [VBRACE_OPEN]       
17   [NEWLINE]           
18   [RETURN]            return
18   [FUNC_CALL]         callback
18   [FPAREN_OPEN]       (
18   [WORD]              exportError
18   [COMMA]             ,
18   [WORD]              nil
18   [FPAREN_CLOSE]      )
18   [SEMICOLON]         ;
18   [VBRACE_CLOSE]      
18   [NEWLINE]           
19   [WORD]              NSDictionary
19   [PTR_TYPE]          *
19   [WORD]              settings
19   [ASSIGN]            =
19   [SQUARE_OPEN]       [
19   [OC_MSG_CLASS]      self
19   [OC_MSG_FUNC]       getSettings
19   [SQUARE_CLOSE]      ]
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [SQUARE_CLOSE]      ]
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [NEWLINE]           
23   [OC_END]            @end
23   [NEWLINE]           