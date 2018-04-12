Line [Parent]            Text
1    [COMMENT_WHOLE]     /**␤ * trailing comments are added at 8 newlines in this test.␤ *␤ *␤ */
5    [NONE]              
6    [FUNC_DEF]          void
6    [NONE]              short_function
6    [FUNC_DEF]          (
6    [NONE]              void
6    [FUNC_DEF]          )
6    [NONE]              
7    [FUNC_DEF]          {
7    [NONE]              
8    [COMMENT_WHOLE]     /* this is a 'short' function, so no added comment */
8    [NONE]              
9    [FUNC_DEF]          }
9    [NONE]              
11   [FUNC_DEF]          void
11   [NONE]              long_function
11   [FUNC_DEF]          (
11   [NONE]              void
11   [FUNC_DEF]          )
11   [NONE]              
12   [FUNC_DEF]          {
12   [NONE]              
13   [COMMENT_WHOLE]     /* this is a 'long' function, so a comment is added */
13   [NONE]              
14   [NONE]              switch
14   [SWITCH]            (
14   [NONE]              some_int_value
14   [FUNC_CALL]         (
14   [FUNC_CALL]         )
14   [SWITCH]            )
14   [NONE]              
15   [SWITCH]            {
15   [NONE]              
16   [NONE]              case
16   [NONE]              0
16   [NONE]              :
16   [NONE]              
17   [NONE]              handle_zero
17   [FUNC_CALL]         (
17   [FUNC_CALL]         )
17   [NONE]              ;
17   [NONE]              
18   [NONE]              break
18   [NONE]              ;
18   [NONE]              
20   [NONE]              case
20   [NONE]              50
20   [NONE]              :
20   [NONE]              
21   [NONE]              handle_fifty
21   [FUNC_CALL]         (
21   [FUNC_CALL]         )
21   [NONE]              ;
21   [NONE]              
22   [NONE]              break
22   [NONE]              ;
22   [NONE]              
24   [NONE]              case
24   [NONE]              127
24   [NONE]              :
24   [NONE]              
25   [NONE]              handle_another_value
25   [FUNC_CALL]         (
25   [FUNC_CALL]         )
25   [NONE]              ;
25   [NONE]              
26   [NONE]              break
26   [NONE]              ;
26   [NONE]              
28   [NONE]              default
28   [NONE]              :
28   [NONE]              
29   [NONE]              boy_do_i_lack_imagination
29   [FUNC_CALL]         (
29   [FUNC_CALL]         )
29   [NONE]              ;
29   [NONE]              
30   [NONE]              break
30   [NONE]              ;
30   [NONE]              
31   [SWITCH]            }
31   [SWITCH]            /* switch */
31   [NONE]              
33   [COMMENT_WHOLE]     /* call one last function... */
33   [NONE]              
34   [NONE]              one_last_func_call
34   [FUNC_CALL]         (
34   [FUNC_CALL]         )
34   [NONE]              ;
34   [NONE]              
35   [FUNC_DEF]          }
35   [FUNC_DEF]          /* long_function */
35   [NONE]              