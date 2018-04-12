Line [Parent]            Text
1    [COMMENT_WHOLE]     // Need to...
1    [NONE]              
3    [COMMENT_WHOLE]     // * Deal with the newline-after-opening and brace arrangement thing (eat_blanks_after_open_brace etc - see note in Uncrustify.Cpp.cfg)
3    [NONE]              
4    [COMMENT_WHOLE]     // * Terminate with //namespace if greater than x lines (like with #ifdef)
4    [NONE]              
6    [NONE]              namespace
6    [NAMESPACE]         Unity
6    [NONE]              
7    [NAMESPACE]         {
7    [NONE]              
8    [FUNC_DEF]          public
8    [FUNC_DEF]          static
8    [FUNC_DEF]          void
8    [NONE]              foo1
8    [FUNC_DEF]          (
8    [FUNC_DEF]          )
8    [NONE]              
9    [FUNC_DEF]          {
9    [NONE]              
11   [FUNC_DEF]          }
11   [NONE]              
13   [FUNC_DEF]          public
13   [FUNC_DEF]          static
13   [FUNC_DEF]          void
13   [NONE]              foo2
13   [FUNC_DEF]          (
13   [FUNC_DEF]          )
13   [NONE]              
14   [FUNC_DEF]          {
14   [NONE]              
16   [FUNC_DEF]          }
16   [NONE]              
18   [FUNC_DEF]          public
18   [FUNC_DEF]          static
18   [FUNC_DEF]          void
18   [NONE]              foo3
18   [FUNC_DEF]          (
18   [FUNC_DEF]          )
18   [NONE]              
19   [FUNC_DEF]          {
19   [NONE]              
21   [FUNC_DEF]          }
21   [NONE]              
22   [NAMESPACE]         }
22   [NAMESPACE]         // namespace Unity
22   [NONE]              