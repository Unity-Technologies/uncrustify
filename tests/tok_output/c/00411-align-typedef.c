Line [Token]             Text
1    [NEWLINE]           
2    [TYPEDEF]           typedef
2    [TYPE]              int
2    [TYPE]              MY_INT
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [TYPEDEF]           typedef
3    [TYPE]              int
3    [PTR_TYPE]          *
3    [TYPE]              MY_INTP
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [TYPEDEF]           typedef
4    [TYPE]              int
4    [TPAREN_OPEN]       (
4    [PTR_TYPE]          *
4    [TYPE]              foo_t
4    [TPAREN_CLOSE]      )
4    [FPAREN_OPEN]       (
4    [TYPE]              void
4    [PTR_TYPE]          *
4    [WORD]              bar
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [TYPEDEF]           typedef
5    [TYPE]              int
5    [TPAREN_OPEN]       (
5    [PTR_TYPE]          *
5    [TYPE]              somefunc_t
5    [TPAREN_CLOSE]      )
5    [FPAREN_OPEN]       (
5    [TYPE]              void
5    [PTR_TYPE]          *
5    [WORD]              barstool
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [TYPEDEF]           typedef
6    [TYPE]              int
6    [TYPE]              int8_t
6    [ATTRIBUTE]         __attribute__
6    [FPAREN_OPEN]       (
6    [PAREN_OPEN]        (
6    [FUNC_CALL]         __mode__
6    [FPAREN_OPEN]       (
6    [QI]                __QI__
6    [FPAREN_CLOSE]      )
6    [PAREN_CLOSE]       )
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [TYPEDEF]           typedef
7    [TYPE]              int
7    [TYPE]              uint8_t
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [TYPEDEF]           typedef
8    [STRUCT]            struct
8    [TYPE]              _IDirectFBSurface
8    [TYPE]              IDirectFBSurface
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [TYPEDEF]           typedef
9    [STRUCT]            struct
9    [TYPE]              _IDirectFBPalette
9    [TYPE]              IDirectFBPalette
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [TYPEDEF]           typedef
10   [STRUCT]            struct
10   [TYPE]              timezone
10   [PTR_TYPE]          *
10   [QUALIFIER]         __restrict
10   [TYPE]              __timezone_ptr_t
10   [SEMICOLON]         ;
10   [NEWLINE]           