Line [Token]             Text
1    [TYPEDEF]           typedef
1    [TYPE]              void
1    [TPAREN_OPEN]       (
1    [PTR_TYPE]          *
1    [TYPE]              func
1    [TPAREN_CLOSE]      )
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [SEMICOLON]         ;
1    [NEWLINE]           
2    [TYPEDEF]           typedef
2    [TYPE]              void
2    [PAREN_OPEN]        (
2    [WORD]              __stdcall
2    [PTR_TYPE]          *
2    [WORD]              func
2    [PAREN_CLOSE]       )
2    [FPAREN_OPEN]       (
2    [FPAREN_CLOSE]      )
2    [SEMICOLON]         ;
2    [NEWLINE]           
4    [CLASS]             class
4    [TYPE]              CDataObject
4    [CLASS_COLON]       :
4    [QUALIFIER]         public
4    [WORD]              IDataObject
4    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [PRIVATE]           public
6    [PRIVATE_COLON]     :
6    [NEWLINE]           
7    [COMMENT_CPP]       // IUnknown members
7    [NEWLINE]           
8    [TYPE]              HRESULT
8    [TYPE]              __stdcall
8    [FUNC_PROTO]        QueryInterface
8    [FPAREN_OPEN]       (
8    [TYPE]              REFIID
8    [WORD]              iid
8    [COMMA]             ,
8    [TYPE]              void
8    [PTR_TYPE]          *
8    [PTR_TYPE]          *
8    [WORD]              ppvObject
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [TYPE]              ULONG
9    [TYPE]              __stdcall
9    [FUNC_PROTO]        AddRef
9    [FPAREN_OPEN]       (
9    [TYPE]              void
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [TYPE]              ULONG
10   [TYPE]              __stdcall
10   [FUNC_PROTO]        Release
10   [FPAREN_OPEN]       (
10   [TYPE]              void
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
12   [COMMENT_CPP]       // IDataObject members
12   [NEWLINE]           
13   [TYPE]              HRESULT
13   [TYPE]              __stdcall
13   [FUNC_PROTO]        GetData
13   [FPAREN_OPEN]       (
13   [TYPE]              FORMATETC
13   [PTR_TYPE]          *
13   [WORD]              pFormatEtc
13   [COMMA]             ,
13   [TYPE]              STGMEDIUM
13   [PTR_TYPE]          *
13   [WORD]              pmedium
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [TYPE]              HRESULT
14   [TYPE]              __stdcall
14   [FUNC_PROTO]        GetDataHere
14   [FPAREN_OPEN]       (
14   [TYPE]              FORMATETC
14   [PTR_TYPE]          *
14   [WORD]              pFormatEtc
14   [COMMA]             ,
14   [TYPE]              STGMEDIUM
14   [PTR_TYPE]          *
14   [WORD]              pmedium
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [TYPE]              HRESULT
15   [TYPE]              __stdcall
15   [FUNC_PROTO]        QueryGetData
15   [FPAREN_OPEN]       (
15   [TYPE]              FORMATETC
15   [PTR_TYPE]          *
15   [WORD]              pFormatEtc
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [TYPE]              HRESULT
16   [TYPE]              __stdcall
16   [FUNC_PROTO]        GetCanonicalFormatEtc
16   [FPAREN_OPEN]       (
16   [TYPE]              FORMATETC
16   [PTR_TYPE]          *
16   [WORD]              pFormatEct
16   [COMMA]             ,
16   [TYPE]              FORMATETC
16   [PTR_TYPE]          *
16   [WORD]              pFormatEtcOut
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [TYPE]              HRESULT
17   [TYPE]              __stdcall
17   [FUNC_PROTO]        SetData
17   [FPAREN_OPEN]       (
17   [TYPE]              FORMATETC
17   [PTR_TYPE]          *
17   [WORD]              pFormatEtc
17   [COMMA]             ,
17   [TYPE]              STGMEDIUM
17   [PTR_TYPE]          *
17   [WORD]              pMedium
17   [COMMA]             ,
17   [TYPE]              BOOL
17   [WORD]              fRelease
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [TYPE]              HRESULT
18   [TYPE]              __stdcall
18   [FUNC_PROTO]        EnumFormatEtc
18   [FPAREN_OPEN]       (
18   [TYPE]              DWORD
18   [WORD]              dwDirection
18   [COMMA]             ,
18   [TYPE]              IEnumFORMATETC
18   [PTR_TYPE]          *
18   [PTR_TYPE]          *
18   [WORD]              ppEnumFormatEtc
18   [FPAREN_CLOSE]      )
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [TYPE]              HRESULT
19   [TYPE]              __stdcall
19   [FUNC_PROTO]        DAdvise
19   [FPAREN_OPEN]       (
19   [TYPE]              FORMATETC
19   [PTR_TYPE]          *
19   [WORD]              pFormatEtc
19   [COMMA]             ,
19   [TYPE]              DWORD
19   [WORD]              advf
19   [COMMA]             ,
19   [TYPE]              IAdviseSink
19   [PTR_TYPE]          *
19   [COMMA]             ,
19   [TYPE]              DWORD
19   [PTR_TYPE]          *
19   [FPAREN_CLOSE]      )
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [TYPE]              HRESULT
20   [TYPE]              __stdcall
20   [FUNC_PROTO]        DUnadvise
20   [FPAREN_OPEN]       (
20   [TYPE]              DWORD
20   [WORD]              dwConnection
20   [FPAREN_CLOSE]      )
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [TYPE]              HRESULT
21   [TYPE]              __stdcall
21   [FUNC_PROTO]        EnumDAdvise
21   [FPAREN_OPEN]       (
21   [TYPE]              IEnumSTATDATA
21   [PTR_TYPE]          *
21   [PTR_TYPE]          *
21   [WORD]              ppEnumAdvise
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [NEWLINE]           
23   [COMMENT_CPP]       // exercise others
23   [NEWLINE]           
24   [TYPE]              HRESULT
24   [TYPE]              __cdecl
24   [FUNC_PROTO]        GetData
24   [FPAREN_OPEN]       (
24   [TYPE]              FORMATETC
24   [PTR_TYPE]          *
24   [WORD]              pFormatEtc
24   [COMMA]             ,
24   [TYPE]              STGMEDIUM
24   [PTR_TYPE]          *
24   [WORD]              pmedium
24   [FPAREN_CLOSE]      )
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [TYPE]              HRESULT
25   [TYPE]              __clrcall
25   [FUNC_PROTO]        GetData
25   [FPAREN_OPEN]       (
25   [TYPE]              FORMATETC
25   [PTR_TYPE]          *
25   [WORD]              pFormatEtc
25   [COMMA]             ,
25   [TYPE]              STGMEDIUM
25   [PTR_TYPE]          *
25   [WORD]              pmedium
25   [FPAREN_CLOSE]      )
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [TYPE]              HRESULT
26   [TYPE]              __fastcall
26   [FUNC_PROTO]        GetData
26   [FPAREN_OPEN]       (
26   [TYPE]              FORMATETC
26   [PTR_TYPE]          *
26   [WORD]              pFormatEtc
26   [COMMA]             ,
26   [TYPE]              STGMEDIUM
26   [PTR_TYPE]          *
26   [WORD]              pmedium
26   [FPAREN_CLOSE]      )
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [TYPE]              HRESULT
27   [TYPE]              __thiscall
27   [FUNC_PROTO]        GetData
27   [FPAREN_OPEN]       (
27   [TYPE]              FORMATETC
27   [PTR_TYPE]          *
27   [WORD]              pFormatEtc
27   [COMMA]             ,
27   [TYPE]              STGMEDIUM
27   [PTR_TYPE]          *
27   [WORD]              pmedium
27   [FPAREN_CLOSE]      )
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [TYPE]              HRESULT
28   [TYPE]              __vectorcall
28   [FUNC_PROTO]        GetData
28   [FPAREN_OPEN]       (
28   [TYPE]              FORMATETC
28   [PTR_TYPE]          *
28   [WORD]              pFormatEtc
28   [COMMA]             ,
28   [TYPE]              STGMEDIUM
28   [PTR_TYPE]          *
28   [WORD]              pmedium
28   [FPAREN_CLOSE]      )
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [BRACE_CLOSE]       }
29   [NEWLINE]           