Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              import
1    [NONE]              <Foundation/Foundation.h>
1    [NONE]              
3    [PP_IF]             #
3    [NONE]              if
3    [NONE]              TARGET_OS_MAC
3    [NONE]              &&
3    [NONE]              !
3    [NONE]              TARGET_OS_IPHONE
3    [NONE]              
4    [PP_INCLUDE]        #
4    [NONE]              import
4    [NONE]              <AppKit/AppKit.h>
4    [NONE]              
5    [PP_ENDIF]          #
5    [NONE]              endif
5    [NONE]              