Line [Token]             Text
1    [COMMENT_CPP]       // Create oneliners
1    [NEWLINE]           
3    [EXTERN]            extern
3    [STRING]            "C"
3    [TYPE]              NSBundle
3    [PTR_TYPE]          *
3    [FUNC_DEF]          UnityGetMetalBundle
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [BRACE_OPEN]        {
4    [RETURN]            return
4    [WORD]              _MetalBundle
4    [SEMICOLON]         ;
5    [BRACE_CLOSE]       }
5    [NEWLINE]           
6    [EXTERN]            extern
6    [STRING]            "C"
6    [TYPE]              MTLDeviceRef
6    [FUNC_DEF]          UnityGetMetalDevice
6    [FPAREN_OPEN]       (
6    [FPAREN_CLOSE]      )
6    [BRACE_OPEN]        {
6    [RETURN]            return
6    [WORD]              _MetalDevice
6    [SEMICOLON]         ;
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
7    [EXTERN]            extern
7    [STRING]            "C"
7    [TYPE]              MTLCommandQueueRef
7    [FUNC_DEF]          UnityGetMetalCommandQueue
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [BRACE_OPEN]        {
7    [RETURN]            return
7    [PAREN_OPEN]        (
7    [PAREN_OPEN]        (
7    [TYPE]              UnityDisplaySurfaceMTL
7    [PTR_TYPE]          *
7    [PAREN_CLOSE]       )
7    [FUNC_CALL]         GetMainDisplaySurface
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [PAREN_CLOSE]       )
7    [MEMBER]            ->
7    [WORD]              commandQueue
7    [SEMICOLON]         ;
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
9    [EXTERN]            extern
9    [STRING]            "C"
9    [TYPE]              EAGLContext
9    [PTR_TYPE]          *
9    [FUNC_DEF]          UnityGetDataContextEAGL
9    [FPAREN_OPEN]       (
9    [FPAREN_CLOSE]      )
9    [BRACE_OPEN]        {
10   [RETURN]            return
10   [WORD]              _GlesContext
10   [SEMICOLON]         ;
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
13   [COMMENT_CPP]       // Keep oneliners
13   [NEWLINE]           
15   [EXTERN]            extern
15   [STRING]            "C"
15   [TYPE]              NSBundle
15   [PTR_TYPE]          *
15   [FUNC_DEF]          UnityGetMetalBundle
15   [FPAREN_OPEN]       (
15   [FPAREN_CLOSE]      )
15   [BRACE_OPEN]        {
15   [RETURN]            return
15   [WORD]              _MetalBundle
15   [SEMICOLON]         ;
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
16   [EXTERN]            extern
16   [STRING]            "C"
16   [TYPE]              MTLDeviceRef
16   [FUNC_DEF]          UnityGetMetalDevice
16   [FPAREN_OPEN]       (
16   [FPAREN_CLOSE]      )
16   [BRACE_OPEN]        {
16   [RETURN]            return
16   [WORD]              _MetalDevice
16   [SEMICOLON]         ;
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
17   [EXTERN]            extern
17   [STRING]            "C"
17   [TYPE]              MTLCommandQueueRef
17   [FUNC_DEF]          UnityGetMetalCommandQueue
17   [FPAREN_OPEN]       (
17   [FPAREN_CLOSE]      )
17   [BRACE_OPEN]        {
17   [RETURN]            return
17   [PAREN_OPEN]        (
17   [PAREN_OPEN]        (
17   [TYPE]              UnityDisplaySurfaceMTL
17   [PTR_TYPE]          *
17   [PAREN_CLOSE]       )
17   [FUNC_CALL]         GetMainDisplaySurface
17   [FPAREN_OPEN]       (
17   [FPAREN_CLOSE]      )
17   [PAREN_CLOSE]       )
17   [MEMBER]            ->
17   [WORD]              commandQueue
17   [SEMICOLON]         ;
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
19   [EXTERN]            extern
19   [STRING]            "C"
19   [TYPE]              EAGLContext
19   [PTR_TYPE]          *
19   [FUNC_DEF]          UnityGetDataContextEAGL
19   [FPAREN_OPEN]       (
19   [FPAREN_CLOSE]      )
19   [BRACE_OPEN]        {
19   [RETURN]            return
19   [WORD]              _GlesContext
19   [SEMICOLON]         ;
19   [BRACE_CLOSE]       }
19   [NEWLINE]           