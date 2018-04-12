Line [Parent]            Text
1    [COMMENT_WHOLE]     /**␤ * Reverse the bytes in 32-bit chunks.␤ */
3    [NONE]              
4    [FUNC_DEF]          void
4    [FUNC_DEF]          MD5
4    [FUNC_DEF]          ::
4    [NONE]              reverse_u32
4    [FUNC_DEF]          (
4    [NONE]              UINT8
4    [NONE]              *
4    [NONE]              buf
4    [NONE]              ,
4    [NONE]              int
4    [NONE]              n_u32
4    [FUNC_DEF]          )
4    [NONE]              
5    [FUNC_DEF]          {
5    [NONE]              
6    [NONE]              UINT8
6    [NONE]              tmp
6    [NONE]              ;
6    [NONE]              
7    [FUNC_DEF]          }
7    [NONE]              
9    [NONE]              MD5
9    [NONE]              ::
9    [NONE]              MD5
9    [FUNC_CLASS_DEF]    (
9    [FUNC_CLASS_DEF]    )
9    [NONE]              
10   [FUNC_CLASS_DEF]    {
10   [NONE]              
11   [NONE]              m_buf
11   [NONE]              [
11   [NONE]              0
11   [NONE]              ]
11   [NONE]              =
11   [NONE]              0x01020304
11   [NONE]              ;
11   [NONE]              
12   [FUNC_CLASS_DEF]    }
12   [NONE]              
14   [NONE]              class
14   [CLASS]             AlignStack
14   [NONE]              
15   [CLASS]             {
15   [NONE]              
16   [NONE]              public
16   [NONE]              :
16   [NONE]              
17   [NONE]              bool
17   [NONE]              m_skip_first
17   [NONE]              ;
17   [NONE]              
18   [NONE]              AlignStack
18   [FUNC_CLASS_DEF]    (
18   [FUNC_CLASS_DEF]    )
18   [NONE]              
19   [FUNC_CLASS_DEF]    {
19   [NONE]              
20   [FUNC_CLASS_DEF]    }
20   [NONE]              
21   [NONE]              ~
21   [DESTRUCTOR]        AlignStack
21   [FUNC_CLASS_DEF]    (
21   [FUNC_CLASS_DEF]    )
21   [NONE]              
22   [FUNC_CLASS_DEF]    {
22   [NONE]              
23   [FUNC_CLASS_DEF]    }
23   [NONE]              
24   [FUNC_DEF]          void
24   [NONE]              End
24   [FUNC_DEF]          (
24   [FUNC_DEF]          )
24   [NONE]              
25   [FUNC_DEF]          {
25   [NONE]              
26   [FUNC_DEF]          }
26   [NONE]              
27   [CLASS]             }
27   [CLASS]             ;
27   [NONE]              