Line [Parent]            Text
1    [COMMENT_WHOLE]     // Hi,
1    [NONE]              
2    [COMMENT_WHOLE]     // When using "space only" and "indent continue", I notice a wrong indentation in C language (at least)
2    [NONE]              
3    [COMMENT_WHOLE]     // function call when the retrun value is assigned to a variable and the call is split in two or more line.
3    [NONE]              
4    [COMMENT_WHOLE]     // In that case the indent is twice the indent set in "indent_continue"
4    [NONE]              
5    [COMMENT_WHOLE]     // This only appears when "indent_with_tabs" is set to 0 "space only" and 1
5    [NONE]              
6    [COMMENT_WHOLE]     // "indent with tabs to brace level, align with spaces"
6    [NONE]              
7    [COMMENT_WHOLE]     // Version tested:
7    [NONE]              
8    [COMMENT_WHOLE]     // 0.59: good indentation
8    [NONE]              
9    [COMMENT_WHOLE]     // 0.60: wrong indentation
9    [NONE]              
10   [COMMENT_WHOLE]     // master (sha1 fc5228e): wrong indentation
10   [NONE]              
11   [COMMENT_WHOLE]     // Here are some details about thats issue:
11   [NONE]              
12   [COMMENT_WHOLE]     // orignal code
12   [NONE]              
13   [COMMENT_WHOLE]     // The long line are manually split and not indented to test uncrustify indent
13   [NONE]              
15   [FUNC_DEF]          int
15   [NONE]              main
15   [FUNC_DEF]          (
15   [NONE]              int
15   [NONE]              argc
15   [NONE]              ,
15   [NONE]              char
15   [NONE]              *
15   [NONE]              argv
15   [NONE]              []
15   [FUNC_DEF]          )
15   [NONE]              
16   [FUNC_DEF]          {
16   [NONE]              
17   [NONE]              double
17   [NONE]              a_very_long_variable
17   [NONE]              =
17   [NONE]              test
17   [FUNC_CALL]         (
17   [NONE]              foobar1
17   [NONE]              ,
17   [NONE]              foobar2
17   [NONE]              ,
17   [NONE]              foobar3
17   [NONE]              ,
17   [NONE]              foobar4
17   [NONE]              ,
17   [NONE]              
18   [NONE]              foobar5
18   [NONE]              ,
18   [NONE]              foobar6
18   [FUNC_CALL]         )
18   [NONE]              ;
18   [NONE]              
20   [NONE]              double
20   [NONE]              a_other_very_long
20   [NONE]              =
20   [NONE]              asdfasdfasdfasdfasdf
20   [NONE]              +
20   [NONE]              asdfasfafasdfa
20   [NONE]              +
20   [NONE]              
21   [NONE]              asdfasdfasdf
21   [NONE]              -
21   [NONE]              asdfasdf
21   [NONE]              +
21   [NONE]              56598
21   [NONE]              ;
21   [NONE]              
23   [NONE]              testadsfa
23   [FUNC_CALL]         (
23   [NONE]              dfasdf
23   [NONE]              ,
23   [NONE]              fdssaf
23   [NONE]              ,
23   [NONE]              dsfasdf
23   [NONE]              ,
23   [NONE]              sadfa
23   [NONE]              ,
23   [NONE]              sadfas
23   [NONE]              ,
23   [NONE]              fsadfa
23   [NONE]              ,
23   [NONE]              
24   [NONE]              aaafsdfa
24   [NONE]              ,
24   [NONE]              afsd
24   [NONE]              ,
24   [NONE]              asfdas
24   [NONE]              ,
24   [NONE]              asdfa
24   [NONE]              ,
24   [NONE]              asfasdfa
24   [NONE]              ,
24   [NONE]              afsda
24   [NONE]              ,
24   [NONE]              asfdasfds
24   [NONE]              ,
24   [NONE]              asdfasf
24   [FUNC_CALL]         )
24   [NONE]              ;
24   [NONE]              
26   [NONE]              return
26   [NONE]              0
26   [NONE]              ;
26   [NONE]              
27   [FUNC_DEF]          }
27   [NONE]              