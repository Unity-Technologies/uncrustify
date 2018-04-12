Line [Parent]            Text
1    [NONE]              
2    [NONE]              typedef
2    [NONE]              enum
2    [NONE]              stuff
2    [NONE]              
3    [ENUM]              {
3    [NONE]              
4    [NONE]              Value1
4    [NONE]              =
4    [NONE]              0x00000400
4    [NONE]              ,
4    [COMMENT_END]       // Just a comment for the value
4    [NONE]              
5    [NONE]              Value2
5    [NONE]              =
5    [NONE]              0x00000800
5    [NONE]              ,
5    [COMMENT_END]       // A much longer comment that needs to be truncated to fit within a set character width. In this case, its 80 characters so two truncates are required.
5    [NONE]              
6    [ENUM]              }
6    [NONE]              JustAnEnum
6    [TYPEDEF]           ;
6    [NONE]              
8    [COMMENT_WHOLE]     // this is another comment that is meant to exceed the code width so that it can be wrapped
8    [NONE]              
9    [COMMENT_WHOLE]     // and combined to see how that works.
9    [NONE]              
11   [COMMENT_WHOLE]     /* this is another comment that is meant to exceed the code width so that it can be wrapped␤ * and combined to see how that works. */
12   [NONE]              
14   [COMMENT_WHOLE]     /* Line A */
14   [NONE]              
16   [COMMENT_WHOLE]     /* Line 1 */
16   [NONE]              
17   [COMMENT_WHOLE]     /* line 2 */
17   [NONE]              
18   [COMMENT_WHOLE]     /* line 3 */
18   [NONE]              
19   [COMMENT_WHOLE]     /* line 4 */
19   [NONE]              
21   [NONE]              int
21   [NONE]              cnt
21   [NONE]              ;
21   [COMMENT_END]       /* This is a counter variable with a long comment. this should cause the comment to be wrapped. */
21   [NONE]              
23   [COMMENT_WHOLE]     /**␤ * Multi-line comment␤ */
25   [NONE]              
26   [FUNC_DEF]          void
26   [NONE]              foo
26   [FUNC_DEF]          (
26   [NONE]              void
26   [FUNC_DEF]          )
26   [NONE]              
27   [FUNC_DEF]          {
27   [NONE]              
28   [COMMENT_WHOLE]     /**␤ * Multi-line comment␤ */
30   [NONE]              
31   [NONE]              int
31   [NONE]              idx
31   [NONE]              ;
31   [NONE]              
32   [COMMENT_WHOLE]     /**␤    * Multi-line comment␤    */
34   [NONE]              
35   [FUNC_DEF]          }
35   [NONE]              
37   [COMMENT_WHOLE]     /* Start Change #95 */
37   [NONE]              
38   [COMMENT_WHOLE]     /*INITIALIZE Variable(contExtnElgInd); /# Change #61 #/ */
38   [NONE]              
39   [COMMENT_WHOLE]     /*/# Start Change #35 #/ */
39   [NONE]              
41   [COMMENT_WHOLE]     /**␤ * OneBigWordThatCannotBeSplitYetExceedsTheCommentWidthSettingSoThatWrappingShouldBeAttempted.␤ */
43   [NONE]              