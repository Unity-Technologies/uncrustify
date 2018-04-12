Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              import
1    [NONE]              <Cocoa/Cocoa.h>
1    [NONE]              
3    [NONE]              @implementation
3    [OC_IMPL]           MyDocument
3    [NONE]              
4    [OC_MSG_DECL]       -
4    [OC_MSG_DECL]       (
4    [NONE]              void
4    [OC_MSG_DECL]       )
4    [OC_MSG_DECL]       locationManager
4    [OC_MSG_DECL]       :
4    [OC_MSG_DECL]       (
4    [NONE]              CLLocationManager
4    [NONE]              *
4    [OC_MSG_DECL]       )
4    [NONE]              manager
4    [OC_MSG_DECL]       didFailWithError
4    [OC_MSG_DECL]       :
4    [OC_MSG_DECL]       (
4    [NONE]              NSError
4    [NONE]              *
4    [OC_MSG_DECL]       )
4    [NONE]              error
4    [OC_MSG_DECL]       {
4    [NONE]              
6    [OC_MSG]            [
6    [NONE]              UIAlertView
6    [NONE]              showError
6    [NONE]              :
6    [NONE]              error
6    [NONE]              
7    [NONE]              withTitle
7    [OC_MSG_NAME]       :
7    [NONE]              NSLocalizedString
7    [FUNC_CALL]         (
7    [NONE]              @"Your location cannot be determined"
7    [NONE]              ,
7    [NONE]              
8    [NONE]              @"The location of the user cannot be guessed"
8    [FUNC_CALL]         )
8    [NONE]              
9    [NONE]              message
9    [OC_MSG_NAME]       :
9    [NONE]              NSLocalizedString
9    [FUNC_CALL]         (
9    [NONE]              @"You can try again by pressing the refresh button"
9    [NONE]              ,
9    [NONE]              
10   [NONE]              @"Recovery suggestion when the location cannot be found"
10   [FUNC_CALL]         )
10   [OC_MSG]            ]
10   [OC_MSG]            ;
10   [NONE]              
11   [OC_MSG_DECL]       }
11   [NONE]              
13   [OC_IMPL]           @end
13   [NONE]              