Line [Parent]            Text
1    [COMMENT_WHOLE]     // Pointer mark should be formatted (WINAPI* SetXX)
1    [NONE]              
2    [NONE]              typedef
2    [NONE]              DWORD
2    [NONE]              (
2    [NONE]              WINAPI
2    [NONE]              *
2    [TYPEDEF]           SetDllDirectory
2    [NONE]              )
2    [FUNC_CALL]         (
2    [NONE]              LPCSTR
2    [FUNC_CALL]         )
2    [TYPEDEF]           ;
2    [NONE]              
3    [COMMENT_WHOLE]     // Pointer mark should be formatted (EXCEPTION_POINTERS* pExt)
3    [NONE]              
4    [FUNC_DEF]          static
4    [FUNC_DEF]          LONG
4    [FUNC_DEF]          WINAPI
4    [NONE]              CustomUnhandledExceptionFilter
4    [FUNC_DEF]          (
4    [NONE]              EXCEPTION_POINTERS
4    [NONE]              *
4    [NONE]              pExInfo
4    [FUNC_DEF]          )
4    [NONE]              
5    [FUNC_DEF]          {
5    [NONE]              
6    [NONE]              if
6    [IF]                (
6    [NONE]              EXCEPTION_BREAKPOINT
6    [NONE]              ==
6    [NONE]              pExInfo
6    [NONE]              ->
6    [NONE]              ExceptionRecord
6    [NONE]              ->
6    [NONE]              ExceptionCode
6    [IF]                )
6    [IF]                
6    [COMMENT_END]       // Breakpoint. Don't treat this as a normal crash.
6    [NONE]              
7    [NONE]              return
7    [NONE]              EXCEPTION_CONTINUE_SEARCH
7    [NONE]              ;
7    [IF]                
7    [NONE]              
8    [FUNC_DEF]          }
8    [NONE]              