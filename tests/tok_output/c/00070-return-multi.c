Line [Token]             Text
1    [NEWLINE]           
2    [QUALIFIER]         static
2    [QUALIFIER]         inline
2    [TYPE]              long
2    [NEWLINE]           
3    [FUNC_DEF]          get_tv32
3    [FPAREN_OPEN]       (
3    [STRUCT]            struct
3    [TYPE]              timeval
3    [PTR_TYPE]          *
3    [WORD]              o
3    [COMMA]             ,
3    [STRUCT]            struct
3    [TYPE]              timeval32
3    [TYPE]              __user
3    [PTR_TYPE]          *
3    [WORD]              i
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [RETURN]            return
5    [PAREN_OPEN]        (
5    [NOT]               !
5    [FUNC_CALL]         access_ok
5    [FPAREN_OPEN]       (
5    [WORD]              VERIFY_READ
5    [COMMA]             ,
5    [WORD]              i
5    [COMMA]             ,
5    [SIZEOF]            sizeof
5    [PAREN_OPEN]        (
5    [DEREF]             *
5    [WORD]              i
5    [PAREN_CLOSE]       )
5    [FPAREN_CLOSE]      )
5    [BOOL]              ||
5    [NEWLINE]           
6    [PAREN_OPEN]        (
6    [FUNC_CALL]         __get_user
6    [FPAREN_OPEN]       (
6    [WORD]              o
6    [MEMBER]            ->
6    [WORD]              tv_sec
6    [COMMA]             ,
6    [ADDR]              &
6    [WORD]              i
6    [MEMBER]            ->
6    [WORD]              tv_sec
6    [FPAREN_CLOSE]      )
6    [ARITH]             |
6    [NEWLINE]           
7    [FUNC_CALL]         __get_user
7    [FPAREN_OPEN]       (
7    [WORD]              o
7    [MEMBER]            ->
7    [WORD]              tv_usec
7    [COMMA]             ,
7    [ADDR]              &
7    [WORD]              i
7    [MEMBER]            ->
7    [WORD]              tv_usec
7    [FPAREN_CLOSE]      )
7    [PAREN_CLOSE]       )
7    [PAREN_CLOSE]       )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
10   [QUALIFIER]         static
10   [QUALIFIER]         inline
10   [TYPE]              long
10   [NEWLINE]           
11   [FUNC_DEF]          get_tv32
11   [FPAREN_OPEN]       (
11   [STRUCT]            struct
11   [TYPE]              timeval
11   [PTR_TYPE]          *
11   [WORD]              o
11   [COMMA]             ,
11   [STRUCT]            struct
11   [TYPE]              timeval32
11   [TYPE]              __user
11   [PTR_TYPE]          *
11   [WORD]              i
11   [FPAREN_CLOSE]      )
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [RETURN]            return
13   [PAREN_OPEN]        (
13   [NOT]               !
13   [FUNC_CALL]         access_ok
13   [FPAREN_OPEN]       (
13   [WORD]              VERIFY_READ
13   [COMMA]             ,
13   [WORD]              i
13   [COMMA]             ,
13   [SIZEOF]            sizeof
13   [PAREN_OPEN]        (
13   [DEREF]             *
13   [WORD]              i
13   [PAREN_CLOSE]       )
13   [FPAREN_CLOSE]      )
13   [BOOL]              ||
13   [NEWLINE]           
14   [PAREN_OPEN]        (
14   [FUNC_CALL]         __get_user
14   [FPAREN_OPEN]       (
14   [WORD]              o
14   [MEMBER]            ->
14   [WORD]              tv_sec
14   [COMMA]             ,
14   [ADDR]              &
14   [WORD]              i
14   [MEMBER]            ->
14   [WORD]              tv_sec
14   [FPAREN_CLOSE]      )
14   [ARITH]             |
14   [NEWLINE]           
15   [FUNC_CALL]         __get_user
15   [FPAREN_OPEN]       (
15   [WORD]              o
15   [MEMBER]            ->
15   [WORD]              tv_usec
15   [COMMA]             ,
15   [ADDR]              &
15   [WORD]              i
15   [MEMBER]            ->
15   [WORD]              tv_usec
15   [FPAREN_CLOSE]      )
15   [PAREN_CLOSE]       )
15   [PAREN_CLOSE]       )
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
18   [QUALIFIER]         const
18   [TYPE]              char
18   [PTR_TYPE]          *
18   [NEWLINE]           
19   [FUNC_DEF]          dcrp_license_feature
19   [FPAREN_OPEN]       (
19   [TYPE]              int32_t
19   [WORD]              idx
19   [FPAREN_CLOSE]      )
19   [NEWLINE]           
20   [BRACE_OPEN]        {
20   [NEWLINE]           
21   [PREPROC]           #
21   [PP_DEFINE]         define
21   [MACRO_FUNC]        FEATURESTR
21   [FPAREN_OPEN]       (
21   [WORD]              f
21   [FPAREN_CLOSE]      )
21   [NL_CONT]           \
22   [CASE]              case
22   [WORD]              DCRMIB_LICENSE_
22   [PP]                ##
22   [WORD]              f
22   [CASE_COLON]        :
22   [NL_CONT]           \
23   [RETURN]            return
23   [WORD]              DCRP_LICENSE_FEATURE_
23   [PP]                ##
23   [WORD]              f
23   [PP]                ##
23   [WORD]              _STR
23   [NEWLINE]           
25   [SWITCH]            switch
25   [SPAREN_OPEN]       (
25   [WORD]              idx
25   [SPAREN_CLOSE]      )
25   [NEWLINE]           
25   [BRACE_OPEN]        {
25   [NEWLINE]           
26   [FUNC_CALL]         DCRP_LICENSE_FOREACH_FEATURES
26   [FPAREN_OPEN]       (
26   [WORD]              FEATURESTR
26   [FPAREN_CLOSE]      )
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
29   [RETURN]            return
29   [PAREN_OPEN]        (
29   [STRING]            ""
29   [PAREN_CLOSE]       )
29   [SEMICOLON]         ;
29   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [NEWLINE]           
34   [QUALIFIER]         static
34   [TYPE]              int
34   [NEWLINE]           
35   [FUNC_DEF]          isValidLicenseType
35   [FPAREN_OPEN]       (
35   [TYPE]              int32_t
35   [WORD]              idx
35   [FPAREN_CLOSE]      )
35   [NEWLINE]           
36   [BRACE_OPEN]        {
36   [NEWLINE]           
37   [PREPROC]           #
37   [PP_DEFINE]         define
37   [MACRO_FUNC]        CHECKFEATURE
37   [FPAREN_OPEN]       (
37   [WORD]              f
37   [FPAREN_CLOSE]      )
37   [NL_CONT]           \
38   [CASE]              case
38   [WORD]              DCRMIB_LICENSE_
38   [PP]                ##
38   [WORD]              f
38   [CASE_COLON]        :
38   [NL_CONT]           \
39   [RETURN]            return
39   [NUMBER]            1
39   [NEWLINE]           
41   [SWITCH]            switch
41   [SPAREN_OPEN]       (
41   [WORD]              idx
41   [SPAREN_CLOSE]      )
41   [NEWLINE]           
41   [BRACE_OPEN]        {
41   [NEWLINE]           
42   [FUNC_CALL]         DCRP_LICENSE_FOREACH_FEATURES
42   [FPAREN_OPEN]       (
42   [WORD]              CHECKFEATURE
42   [FPAREN_CLOSE]      )
42   [SEMICOLON]         ;
42   [NEWLINE]           
43   [BRACE_CLOSE]       }
43   [NEWLINE]           
45   [RETURN]            return
45   [PAREN_OPEN]        (
45   [WORD]              n
45   [ARITH]             *
45   [FUNC_CALL]         foo
45   [FPAREN_OPEN]       (
45   [NUMBER]            5
45   [FPAREN_CLOSE]      )
45   [PAREN_CLOSE]       )
45   [SEMICOLON]         ;
45   [NEWLINE]           
46   [BRACE_CLOSE]       }
46   [NEWLINE]           