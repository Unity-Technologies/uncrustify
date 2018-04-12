Line [Token]             Text
1    [COMMENT_CPP]       // Fix doxygen support to include member groups
1    [NEWLINE]           
3    [COMMENT_CPP]       // See http://www.stack.nl/~dimitri/doxygen/manual/grouping.html#memgroup
3    [NEWLINE]           
5    [COMMENT_CPP]       // Note that the spec says three slashes, but their example has only two slashes.
5    [NEWLINE]           
7    [COMMENT_CPP]       // Once this is done, we can try turning on sp_cmt_cpp_start in Uncrustify.Common-CStyle.cfg.
7    [NEWLINE]           
9    [COMMENT_CPP]       /// Bucket allocator is used for allocations up to 64 bytes of memory.
9    [NEWLINE]           
10   [COMMENT_CPP]       /// It is represented by 4 blocks of a fixed-size "buckets" (for allocations of 16/32/48/64 bytes of memory).
10   [NEWLINE]           
11   [COMMENT_CPP]       /// Allocation is lockless, blocks are only growable.
11   [NEWLINE]           
12   [CLASS]             class
12   [TYPE]              Class
12   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
14   [PRIVATE]           public
14   [PRIVATE_COLON]     :
14   [NEWLINE]           
15   [COMMENT_CPP]       ///@{ Doxygen group 1
15   [NEWLINE]           
16   [QUALIFIER]         virtual
16   [TYPE]              void
16   [PTR_TYPE]          *
16   [FUNC_PROTO]        Foo
16   [FPAREN_OPEN]       (
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [QUALIFIER]         virtual
17   [TYPE]              void
17   [PTR_TYPE]          *
17   [FUNC_PROTO]        Bar
17   [FPAREN_OPEN]       (
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [COMMENT_CPP]       ///@}
18   [NEWLINE]           
20   [COMMENT_CPP]       //@{ Doxygen group 2
20   [NEWLINE]           
21   [QUALIFIER]         virtual
21   [TYPE]              void
21   [PTR_TYPE]          *
21   [FUNC_PROTO]        Foo
21   [FPAREN_OPEN]       (
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [QUALIFIER]         virtual
22   [TYPE]              void
22   [PTR_TYPE]          *
22   [FUNC_PROTO]        Bar
22   [FPAREN_OPEN]       (
22   [FPAREN_CLOSE]      )
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [COMMENT_CPP]       //@}
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [NEWLINE]           