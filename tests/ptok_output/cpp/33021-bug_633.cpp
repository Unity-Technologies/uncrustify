Line [Parent]            Text
1    [NONE]              typedef
1    [FUNC_TYPE]         void
1    [FUNC_TYPE]         (
1    [NONE]              *
1    [TYPEDEF]           func
1    [FUNC_TYPE]         )
1    [FUNC_PROTO]        (
1    [FUNC_PROTO]        )
1    [TYPEDEF]           ;
1    [NONE]              
2    [NONE]              typedef
2    [NONE]              void
2    [NONE]              (
2    [NONE]              __stdcall
2    [NONE]              *
2    [TYPEDEF]           func
2    [NONE]              )
2    [FUNC_CALL]         (
2    [FUNC_CALL]         )
2    [TYPEDEF]           ;
2    [NONE]              
4    [NONE]              class
4    [CLASS]             CDataObject
4    [NONE]              :
4    [NONE]              public
4    [NONE]              IDataObject
4    [NONE]              
5    [CLASS]             {
5    [NONE]              
6    [NONE]              public
6    [NONE]              :
6    [NONE]              
7    [COMMENT_WHOLE]     // IUnknown members
7    [NONE]              
8    [FUNC_PROTO]        HRESULT
8    [FUNC_PROTO]        __stdcall
8    [NONE]              QueryInterface
8    [FUNC_PROTO]        (
8    [NONE]              REFIID
8    [NONE]              iid
8    [NONE]              ,
8    [NONE]              void
8    [NONE]              *
8    [NONE]              *
8    [NONE]              ppvObject
8    [FUNC_PROTO]        )
8    [FUNC_PROTO]        ;
8    [NONE]              
9    [FUNC_PROTO]        ULONG
9    [FUNC_PROTO]        __stdcall
9    [NONE]              AddRef
9    [FUNC_PROTO]        (
9    [NONE]              void
9    [FUNC_PROTO]        )
9    [FUNC_PROTO]        ;
9    [NONE]              
10   [FUNC_PROTO]        ULONG
10   [FUNC_PROTO]        __stdcall
10   [NONE]              Release
10   [FUNC_PROTO]        (
10   [NONE]              void
10   [FUNC_PROTO]        )
10   [FUNC_PROTO]        ;
10   [NONE]              
12   [COMMENT_WHOLE]     // IDataObject members
12   [NONE]              
13   [FUNC_PROTO]        HRESULT
13   [FUNC_PROTO]        __stdcall
13   [NONE]              GetData
13   [FUNC_PROTO]        (
13   [NONE]              FORMATETC
13   [NONE]              *
13   [NONE]              pFormatEtc
13   [NONE]              ,
13   [NONE]              STGMEDIUM
13   [NONE]              *
13   [NONE]              pmedium
13   [FUNC_PROTO]        )
13   [FUNC_PROTO]        ;
13   [NONE]              
14   [FUNC_PROTO]        HRESULT
14   [FUNC_PROTO]        __stdcall
14   [NONE]              GetDataHere
14   [FUNC_PROTO]        (
14   [NONE]              FORMATETC
14   [NONE]              *
14   [NONE]              pFormatEtc
14   [NONE]              ,
14   [NONE]              STGMEDIUM
14   [NONE]              *
14   [NONE]              pmedium
14   [FUNC_PROTO]        )
14   [FUNC_PROTO]        ;
14   [NONE]              
15   [FUNC_PROTO]        HRESULT
15   [FUNC_PROTO]        __stdcall
15   [NONE]              QueryGetData
15   [FUNC_PROTO]        (
15   [NONE]              FORMATETC
15   [NONE]              *
15   [NONE]              pFormatEtc
15   [FUNC_PROTO]        )
15   [FUNC_PROTO]        ;
15   [NONE]              
16   [FUNC_PROTO]        HRESULT
16   [FUNC_PROTO]        __stdcall
16   [NONE]              GetCanonicalFormatEtc
16   [FUNC_PROTO]        (
16   [NONE]              FORMATETC
16   [NONE]              *
16   [NONE]              pFormatEct
16   [NONE]              ,
16   [NONE]              FORMATETC
16   [NONE]              *
16   [NONE]              pFormatEtcOut
16   [FUNC_PROTO]        )
16   [FUNC_PROTO]        ;
16   [NONE]              
17   [FUNC_PROTO]        HRESULT
17   [FUNC_PROTO]        __stdcall
17   [NONE]              SetData
17   [FUNC_PROTO]        (
17   [NONE]              FORMATETC
17   [NONE]              *
17   [NONE]              pFormatEtc
17   [NONE]              ,
17   [NONE]              STGMEDIUM
17   [NONE]              *
17   [NONE]              pMedium
17   [NONE]              ,
17   [NONE]              BOOL
17   [NONE]              fRelease
17   [FUNC_PROTO]        )
17   [FUNC_PROTO]        ;
17   [NONE]              
18   [FUNC_PROTO]        HRESULT
18   [FUNC_PROTO]        __stdcall
18   [NONE]              EnumFormatEtc
18   [FUNC_PROTO]        (
18   [NONE]              DWORD
18   [NONE]              dwDirection
18   [NONE]              ,
18   [NONE]              IEnumFORMATETC
18   [NONE]              *
18   [NONE]              *
18   [NONE]              ppEnumFormatEtc
18   [FUNC_PROTO]        )
18   [FUNC_PROTO]        ;
18   [NONE]              
19   [FUNC_PROTO]        HRESULT
19   [FUNC_PROTO]        __stdcall
19   [NONE]              DAdvise
19   [FUNC_PROTO]        (
19   [NONE]              FORMATETC
19   [NONE]              *
19   [NONE]              pFormatEtc
19   [NONE]              ,
19   [NONE]              DWORD
19   [NONE]              advf
19   [NONE]              ,
19   [NONE]              IAdviseSink
19   [NONE]              *
19   [NONE]              ,
19   [NONE]              DWORD
19   [NONE]              *
19   [FUNC_PROTO]        )
19   [FUNC_PROTO]        ;
19   [NONE]              
20   [FUNC_PROTO]        HRESULT
20   [FUNC_PROTO]        __stdcall
20   [NONE]              DUnadvise
20   [FUNC_PROTO]        (
20   [NONE]              DWORD
20   [NONE]              dwConnection
20   [FUNC_PROTO]        )
20   [FUNC_PROTO]        ;
20   [NONE]              
21   [FUNC_PROTO]        HRESULT
21   [FUNC_PROTO]        __stdcall
21   [NONE]              EnumDAdvise
21   [FUNC_PROTO]        (
21   [NONE]              IEnumSTATDATA
21   [NONE]              *
21   [NONE]              *
21   [NONE]              ppEnumAdvise
21   [FUNC_PROTO]        )
21   [FUNC_PROTO]        ;
21   [NONE]              
23   [COMMENT_WHOLE]     // exercise others
23   [NONE]              
24   [FUNC_PROTO]        HRESULT
24   [FUNC_PROTO]        __cdecl
24   [NONE]              GetData
24   [FUNC_PROTO]        (
24   [NONE]              FORMATETC
24   [NONE]              *
24   [NONE]              pFormatEtc
24   [NONE]              ,
24   [NONE]              STGMEDIUM
24   [NONE]              *
24   [NONE]              pmedium
24   [FUNC_PROTO]        )
24   [FUNC_PROTO]        ;
24   [NONE]              
25   [FUNC_PROTO]        HRESULT
25   [FUNC_PROTO]        __clrcall
25   [NONE]              GetData
25   [FUNC_PROTO]        (
25   [NONE]              FORMATETC
25   [NONE]              *
25   [NONE]              pFormatEtc
25   [NONE]              ,
25   [NONE]              STGMEDIUM
25   [NONE]              *
25   [NONE]              pmedium
25   [FUNC_PROTO]        )
25   [FUNC_PROTO]        ;
25   [NONE]              
26   [FUNC_PROTO]        HRESULT
26   [FUNC_PROTO]        __fastcall
26   [NONE]              GetData
26   [FUNC_PROTO]        (
26   [NONE]              FORMATETC
26   [NONE]              *
26   [NONE]              pFormatEtc
26   [NONE]              ,
26   [NONE]              STGMEDIUM
26   [NONE]              *
26   [NONE]              pmedium
26   [FUNC_PROTO]        )
26   [FUNC_PROTO]        ;
26   [NONE]              
27   [FUNC_PROTO]        HRESULT
27   [FUNC_PROTO]        __thiscall
27   [NONE]              GetData
27   [FUNC_PROTO]        (
27   [NONE]              FORMATETC
27   [NONE]              *
27   [NONE]              pFormatEtc
27   [NONE]              ,
27   [NONE]              STGMEDIUM
27   [NONE]              *
27   [NONE]              pmedium
27   [FUNC_PROTO]        )
27   [FUNC_PROTO]        ;
27   [NONE]              
28   [FUNC_PROTO]        HRESULT
28   [FUNC_PROTO]        __vectorcall
28   [NONE]              GetData
28   [FUNC_PROTO]        (
28   [NONE]              FORMATETC
28   [NONE]              *
28   [NONE]              pFormatEtc
28   [NONE]              ,
28   [NONE]              STGMEDIUM
28   [NONE]              *
28   [NONE]              pmedium
28   [FUNC_PROTO]        )
28   [FUNC_PROTO]        ;
28   [NONE]              
29   [CLASS]             }
29   [NONE]              