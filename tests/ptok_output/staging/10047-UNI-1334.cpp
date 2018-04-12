Line [Parent]            Text
1    [COMMENT_WHOLE]     // This should not be screwing with the trailing backslash and indentation of contents!
1    [NONE]              
2    [COMMENT_WHOLE]     // unless it's on the first line where it's controlled by sp_before_nl_cont which we have set on add.
2    [NONE]              
3    [COMMENT_WHOLE]     // Devs should expect misalignment of the nl_cont tokens because we're not messing with the nl_cont from the define body.
3    [NONE]              
5    [PP_DEFINE]         #
5    [NONE]              define
5    [NONE]              MY_DEFINE
5    [MACRO_FUNC]        (
5    [NONE]              param1
5    [NONE]              ,
5    [NONE]              param2
5    [MACRO_FUNC]        )
5    [NONE]              \
6    [NONE]              my_long_foo_function(param1);
6    [NONE]              \
7    [NONE]              bar(param2);
7    [NONE]              