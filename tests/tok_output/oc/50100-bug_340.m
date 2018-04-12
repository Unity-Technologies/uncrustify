Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        import
1    [PREPROC_BODY]      <Cocoa/Cocoa.h>
1    [NEWLINE]           
3    [OC_IMPL]           @implementation
3    [OC_CLASS]          MyDocument
3    [NEWLINE]           
4    [OC_SCOPE]          -
4    [PAREN_OPEN]        (
4    [TYPE]              void
4    [PAREN_CLOSE]       )
4    [OC_MSG_DECL]       locationManager
4    [OC_COLON]          :
4    [PAREN_OPEN]        (
4    [TYPE]              CLLocationManager
4    [PTR_TYPE]          *
4    [PAREN_CLOSE]       )
4    [TYPE]              manager
4    [WORD]              didFailWithError
4    [OC_COLON]          :
4    [PAREN_OPEN]        (
4    [TYPE]              NSError
4    [PTR_TYPE]          *
4    [PAREN_CLOSE]       )
4    [WORD]              error
4    [BRACE_OPEN]        {
4    [NEWLINE]           
6    [SQUARE_OPEN]       [
6    [OC_MSG_CLASS]      UIAlertView
6    [OC_MSG_FUNC]       showError
6    [OC_COLON]          :
6    [TYPE]              error
6    [NEWLINE]           
7    [OC_MSG_NAME]       withTitle
7    [OC_COLON]          :
7    [FUNC_CALL]         NSLocalizedString
7    [FPAREN_OPEN]       (
7    [STRING]            @"Your location cannot be determined"
7    [COMMA]             ,
7    [NEWLINE]           
8    [STRING]            @"The location of the user cannot be guessed"
8    [FPAREN_CLOSE]      )
8    [NEWLINE]           
9    [OC_MSG_NAME]       message
9    [OC_COLON]          :
9    [FUNC_CALL]         NSLocalizedString
9    [FPAREN_OPEN]       (
9    [STRING]            @"You can try again by pressing the refresh button"
9    [COMMA]             ,
9    [NEWLINE]           
10   [STRING]            @"Recovery suggestion when the location cannot be found"
10   [FPAREN_CLOSE]      )
10   [SQUARE_CLOSE]      ]
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
13   [OC_END]            @end
13   [NEWLINE]           