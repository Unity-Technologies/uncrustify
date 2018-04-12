Line [Parent]            Text
1    [COMMENT_WHOLE]     // MIDL_INTERFACE includes 'class' in its definition but is not tokenised as such
1    [NONE]              
2    [COMMENT_WHOLE]     // A pretty common pattern would be nice to have proper formatting.
2    [NONE]              
4    [NONE]              EXTERN_C
4    [NONE]              const
4    [NONE]              IID
4    [NONE]              IID_IFileDialogEvents
4    [NONE]              ;
4    [NONE]              
6    [NONE]              MIDL_INTERFACE
6    [FUNC_CALL]         (
6    [NONE]              "973510db-7d7f-452b-8975-74a85828d354"
6    [FUNC_CALL]         )
6    [NONE]              
7    [NONE]              IFileDialogEvents
7    [NONE]              :
7    [NONE]              public
7    [NONE]              IUnknown
7    [NONE]              
8    [BRACED_INIT_LIST]    {
8    [NONE]              
9    [NONE]              public
9    [NONE]              :
9    [NONE]              
10   [NONE]              virtual
10   [NONE]              HRESULT
10   [NONE]              STDMETHODCALLTYPE
10   [NONE]              OnStuff
10   [FUNC_CTOR_VAR]     (
10   [NONE]              
11   [COMMENT_START]     /* [in] */
11   [NONE]              __RPC__in_opt
11   [NONE]              IFileDialog
11   [NONE]              *
11   [NONE]              pfd
11   [NONE]              ,
11   [NONE]              
12   [COMMENT_START]     /* [in] */
12   [NONE]              __RPC__in_opt
12   [NONE]              IShellItem
12   [NONE]              *
12   [NONE]              psi
12   [NONE]              ,
12   [NONE]              
13   [COMMENT_START]     /* [out] */
13   [NONE]              __RPC__out
13   [NONE]              FDE_SHAREVIOLATION_RESPONSE
13   [NONE]              *
13   [NONE]              pGoodResponse
13   [NONE]              ,
13   [NONE]              
14   [COMMENT_START]     /* [out] */
14   [NONE]              __RPC__out
14   [NONE]              FDE_OVERWRITE_RESPONSE
14   [NONE]              *
14   [NONE]              pBadResponse
14   [FUNC_CTOR_VAR]     )
14   [NONE]              =
14   [NONE]              0
14   [FUNC_CTOR_VAR]     ;
14   [NONE]              
15   [BRACED_INIT_LIST]    }
15   [NONE]              ;
15   [NONE]              