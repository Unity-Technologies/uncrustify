Line [Token]             Text
1    [COMMENT_CPP]       // Pointer mark should be formatted (WINAPI* SetXX)
1    [NEWLINE]           
2    [TYPEDEF]           typedef
2    [TYPE]              DWORD
2    [PAREN_OPEN]        (
2    [WORD]              WINAPI
2    [PTR_TYPE]          *
2    [WORD]              SetDllDirectory
2    [PAREN_CLOSE]       )
2    [FPAREN_OPEN]       (
2    [TYPE]              LPCSTR
2    [FPAREN_CLOSE]      )
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [COMMENT_CPP]       // Pointer mark should be formatted (EXCEPTION_POINTERS* pExt)
3    [NEWLINE]           
4    [QUALIFIER]         static
4    [TYPE]              LONG
4    [TYPE]              WINAPI
4    [FUNC_DEF]          CustomUnhandledExceptionFilter
4    [FPAREN_OPEN]       (
4    [TYPE]              EXCEPTION_POINTERS
4    [PTR_TYPE]          *
4    [WORD]              pExInfo
4    [FPAREN_CLOSE]      )
4    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [IF]                if
6    [SPAREN_OPEN]       (
6    [WORD]              EXCEPTION_BREAKPOINT
6    [COMPARE]           ==
6    [WORD]              pExInfo
6    [MEMBER]            ->
6    [WORD]              ExceptionRecord
6    [MEMBER]            ->
6    [WORD]              ExceptionCode
6    [SPAREN_CLOSE]      )
6    [VBRACE_OPEN]       
6    [COMMENT_CPP]       // Breakpoint. Don't treat this as a normal crash.
6    [NEWLINE]           
7    [RETURN]            return
7    [WORD]              EXCEPTION_CONTINUE_SEARCH
7    [SEMICOLON]         ;
7    [VBRACE_CLOSE]      
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           