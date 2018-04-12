Line [Parent]            Text
1    [COMMENT_WHOLE]     // First: scan more FAKE_FUNCTION diffs and see how common this problem is.
1    [NONE]              
3    [COMMENT_WHOLE]     // The & should be attached to RefType because it's in a function prototype. Most likely being detected as ARITH.
3    [NONE]              
5    [COMMENT_WHOLE]     // We need to figure out how to support this with some setting in our cpp cfg for uncrustify.
5    [NONE]              
7    [NONE]              FAKE_FUNCTION
7    [FUNC_PROTO]        (
7    [NONE]              Boo
7    [NONE]              ,
7    [PROTO_WRAP]        RefType
7    [NONE]              &
7    [NONE]              (
7    [NONE]              void
7    [NONE]              )
7    [FUNC_PROTO]        )
7    [FUNC_PROTO]        ;
7    [NONE]              
8    [NONE]              FAKE_FUNCTION
8    [FUNC_PROTO]        (
8    [NONE]              Foo
8    [NONE]              ,
8    [PROTO_WRAP]        (
8    [NONE]              MyAwesomeType
8    [NONE]              *
8    [NONE]              (
8    [NONE]              void
8    [NONE]              )
8    [PROTO_WRAP]        )
8    [FUNC_PROTO]        )
8    [FUNC_PROTO]        ;
8    [NONE]              