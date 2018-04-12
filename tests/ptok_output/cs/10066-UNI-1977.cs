Line [Parent]            Text
1    [COMMENT_WHOLE]     // We specifically avoid our own tab-space in GenericFormat because of the @"" issue.
1    [NONE]              
2    [COMMENT_WHOLE]     // So we must rely on Uncrustify getting it right, and it nearly does - except for the
2    [NONE]              
3    [COMMENT_WHOLE]     // "Layout has changed, bail out now" where it does not replace the tab preceding the comment.
3    [NONE]              
5    [NONE]              namespace
5    [NAMESPACE]         Namespace
5    [NONE]              
6    [NAMESPACE]         {
6    [NONE]              
7    [NONE]              class
7    [CLASS]             Class
7    [NONE]              
8    [CLASS]             {
8    [NONE]              
9    [FUNC_DEF]          public
9    [FUNC_DEF]          void
9    [NONE]              Foo
9    [FUNC_DEF]          (
9    [FUNC_DEF]          )
9    [NONE]              
10   [FUNC_DEF]          {
10   [NONE]              
11   [NONE]              if
11   [IF]                (
11   [NONE]              bar
11   [IF]                )
11   [NONE]              
12   [IF]                {
12   [NONE]              
13   [COMMENT_WHOLE]     //	Layout has changed, bail out now.
13   [NONE]              
14   [NONE]              bar
14   [NONE]              =
14   [NONE]              false
14   [NONE]              ;
14   [NONE]              
15   [IF]                }
15   [NONE]              
16   [FUNC_DEF]          }
16   [NONE]              
17   [CLASS]             }
17   [NONE]              
18   [NAMESPACE]         }
18   [NONE]              