Line [Parent]            Text
1    [COMMENT_WHOLE]     // Fix doxygen support to include member groups
1    [NONE]              
3    [COMMENT_WHOLE]     // See http://www.stack.nl/~dimitri/doxygen/manual/grouping.html#memgroup
3    [NONE]              
5    [COMMENT_WHOLE]     // Note that the spec says three slashes, but their example has only two slashes.
5    [NONE]              
7    [COMMENT_WHOLE]     // Once this is done, we can try turning on sp_cmt_cpp_start in Uncrustify.Common-CStyle.cfg.
7    [NONE]              
9    [COMMENT_WHOLE]     /// Bucket allocator is used for allocations up to 64 bytes of memory.
9    [NONE]              
10   [COMMENT_WHOLE]     /// It is represented by 4 blocks of a fixed-size "buckets" (for allocations of 16/32/48/64 bytes of memory).
10   [NONE]              
11   [COMMENT_WHOLE]     /// Allocation is lockless, blocks are only growable.
11   [NONE]              
12   [NONE]              class
12   [CLASS]             Class
12   [NONE]              
13   [CLASS]             {
13   [NONE]              
14   [NONE]              public
14   [NONE]              :
14   [NONE]              
15   [COMMENT_WHOLE]     ///@{ Doxygen group 1
15   [NONE]              
16   [FUNC_PROTO]        virtual
16   [FUNC_PROTO]        void
16   [FUNC_PROTO]        *
16   [NONE]              Foo
16   [FUNC_PROTO]        (
16   [FUNC_PROTO]        )
16   [FUNC_PROTO]        ;
16   [NONE]              
17   [FUNC_PROTO]        virtual
17   [FUNC_PROTO]        void
17   [FUNC_PROTO]        *
17   [NONE]              Bar
17   [FUNC_PROTO]        (
17   [FUNC_PROTO]        )
17   [FUNC_PROTO]        ;
17   [NONE]              
18   [COMMENT_WHOLE]     ///@}
18   [NONE]              
20   [COMMENT_WHOLE]     //@{ Doxygen group 2
20   [NONE]              
21   [FUNC_PROTO]        virtual
21   [FUNC_PROTO]        void
21   [FUNC_PROTO]        *
21   [NONE]              Foo
21   [FUNC_PROTO]        (
21   [FUNC_PROTO]        )
21   [FUNC_PROTO]        ;
21   [NONE]              
22   [FUNC_PROTO]        virtual
22   [FUNC_PROTO]        void
22   [FUNC_PROTO]        *
22   [NONE]              Bar
22   [FUNC_PROTO]        (
22   [FUNC_PROTO]        )
22   [FUNC_PROTO]        ;
22   [NONE]              
23   [COMMENT_WHOLE]     //@}
23   [NONE]              
24   [CLASS]             }
24   [NONE]              