Line [Token]             Text
1    [COMMENT_CPP]       // MIDL_INTERFACE includes 'class' in its definition but is not tokenised as such
1    [NEWLINE]           
2    [COMMENT_CPP]       // A pretty common pattern would be nice to have proper formatting.
2    [NEWLINE]           
4    [TYPE]              EXTERN_C
4    [QUALIFIER]         const
4    [TYPE]              IID
4    [WORD]              IID_IFileDialogEvents
4    [SEMICOLON]         ;
4    [NEWLINE]           
6    [FUNC_CALL]         MIDL_INTERFACE
6    [FPAREN_OPEN]       (
6    [STRING]            "973510db-7d7f-452b-8975-74a85828d354"
6    [FPAREN_CLOSE]      )
6    [NEWLINE]           
7    [WORD]              IFileDialogEvents
7    [COLON]             :
7    [QUALIFIER]         public
7    [WORD]              IUnknown
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [PRIVATE]           public
9    [PRIVATE_COLON]     :
9    [NEWLINE]           
10   [QUALIFIER]         virtual
10   [TYPE]              HRESULT
10   [TYPE]              STDMETHODCALLTYPE
10   [FUNC_CTOR_VAR]     OnStuff
10   [FPAREN_OPEN]       (
10   [NEWLINE]           
11   [COMMENT]           /* [in] */
11   [TYPE]              __RPC__in_opt
11   [WORD]              IFileDialog
11   [PTR_TYPE]          *
11   [WORD]              pfd
11   [COMMA]             ,
11   [NEWLINE]           
12   [COMMENT]           /* [in] */
12   [TYPE]              __RPC__in_opt
12   [WORD]              IShellItem
12   [PTR_TYPE]          *
12   [WORD]              psi
12   [COMMA]             ,
12   [NEWLINE]           
13   [COMMENT]           /* [out] */
13   [TYPE]              __RPC__out
13   [WORD]              FDE_SHAREVIOLATION_RESPONSE
13   [PTR_TYPE]          *
13   [WORD]              pGoodResponse
13   [COMMA]             ,
13   [NEWLINE]           
14   [COMMENT]           /* [out] */
14   [TYPE]              __RPC__out
14   [WORD]              FDE_OVERWRITE_RESPONSE
14   [PTR_TYPE]          *
14   [WORD]              pBadResponse
14   [FPAREN_CLOSE]      )
14   [ASSIGN]            =
14   [NUMBER]            0
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [SEMICOLON]         ;
15   [NEWLINE]           