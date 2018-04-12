Line [Parent]            Text
1    [NONE]              
2    [FUNC_DEF]          static
2    [FUNC_DEF]          inline
2    [FUNC_DEF]          long
2    [NONE]              
3    [NONE]              get_tv32
3    [FUNC_DEF]          (
3    [NONE]              struct
3    [STRUCT]            timeval
3    [STRUCT]            *
3    [NONE]              o
3    [NONE]              ,
3    [NONE]              struct
3    [NONE]              timeval32
3    [STRUCT]            __user
3    [NONE]              *
3    [NONE]              i
3    [FUNC_DEF]          )
3    [NONE]              
4    [FUNC_DEF]          {
4    [NONE]              
5    [NONE]              return
5    [RETURN]            (
5    [NONE]              !
5    [NONE]              access_ok
5    [FUNC_CALL]         (
5    [NONE]              VERIFY_READ
5    [NONE]              ,
5    [NONE]              i
5    [NONE]              ,
5    [NONE]              sizeof
5    [TYPE_CAST]         (
5    [NONE]              *
5    [NONE]              i
5    [TYPE_CAST]         )
5    [FUNC_CALL]         )
5    [NONE]              ||
5    [NONE]              
6    [NONE]              (
6    [NONE]              __get_user
6    [FUNC_CALL]         (
6    [NONE]              o
6    [NONE]              ->
6    [NONE]              tv_sec
6    [NONE]              ,
6    [NONE]              &
6    [NONE]              i
6    [NONE]              ->
6    [NONE]              tv_sec
6    [FUNC_CALL]         )
6    [NONE]              |
6    [NONE]              
7    [NONE]              __get_user
7    [FUNC_CALL]         (
7    [NONE]              o
7    [NONE]              ->
7    [NONE]              tv_usec
7    [NONE]              ,
7    [NONE]              &
7    [NONE]              i
7    [NONE]              ->
7    [NONE]              tv_usec
7    [FUNC_CALL]         )
7    [NONE]              )
7    [RETURN]            )
7    [NONE]              ;
7    [NONE]              
8    [FUNC_DEF]          }
8    [NONE]              
10   [FUNC_DEF]          static
10   [FUNC_DEF]          inline
10   [FUNC_DEF]          long
10   [NONE]              
11   [NONE]              get_tv32
11   [FUNC_DEF]          (
11   [NONE]              struct
11   [STRUCT]            timeval
11   [STRUCT]            *
11   [NONE]              o
11   [NONE]              ,
11   [NONE]              struct
11   [NONE]              timeval32
11   [STRUCT]            __user
11   [NONE]              *
11   [NONE]              i
11   [FUNC_DEF]          )
11   [NONE]              
12   [FUNC_DEF]          {
12   [NONE]              
13   [NONE]              return
13   [RETURN]            (
13   [NONE]              !
13   [NONE]              access_ok
13   [FUNC_CALL]         (
13   [NONE]              VERIFY_READ
13   [NONE]              ,
13   [NONE]              i
13   [NONE]              ,
13   [NONE]              sizeof
13   [TYPE_CAST]         (
13   [NONE]              *
13   [NONE]              i
13   [TYPE_CAST]         )
13   [FUNC_CALL]         )
13   [NONE]              ||
13   [NONE]              
14   [NONE]              (
14   [NONE]              __get_user
14   [FUNC_CALL]         (
14   [NONE]              o
14   [NONE]              ->
14   [NONE]              tv_sec
14   [NONE]              ,
14   [NONE]              &
14   [NONE]              i
14   [NONE]              ->
14   [NONE]              tv_sec
14   [FUNC_CALL]         )
14   [NONE]              |
14   [NONE]              
15   [NONE]              __get_user
15   [FUNC_CALL]         (
15   [NONE]              o
15   [NONE]              ->
15   [NONE]              tv_usec
15   [NONE]              ,
15   [NONE]              &
15   [NONE]              i
15   [NONE]              ->
15   [NONE]              tv_usec
15   [FUNC_CALL]         )
15   [NONE]              )
15   [RETURN]            )
15   [NONE]              ;
15   [NONE]              
16   [FUNC_DEF]          }
16   [NONE]              
18   [FUNC_DEF]          const
18   [FUNC_DEF]          char
18   [FUNC_DEF]          *
18   [NONE]              
19   [NONE]              dcrp_license_feature
19   [FUNC_DEF]          (
19   [NONE]              int32_t
19   [NONE]              idx
19   [FUNC_DEF]          )
19   [NONE]              
20   [FUNC_DEF]          {
20   [NONE]              
21   [PP_DEFINE]         #
21   [NONE]              define
21   [NONE]              FEATURESTR
21   [MACRO_FUNC]        (
21   [NONE]              f
21   [MACRO_FUNC]        )
21   [NONE]              \
22   [NONE]              case
22   [NONE]              DCRMIB_LICENSE_
22   [NONE]              ##
22   [NONE]              f
22   [NONE]              :
22   [NONE]              \
23   [NONE]              return
23   [NONE]              DCRP_LICENSE_FEATURE_
23   [NONE]              ##
23   [NONE]              f
23   [NONE]              ##
23   [NONE]              _STR
23   [NONE]              
25   [NONE]              switch
25   [SWITCH]            (
25   [NONE]              idx
25   [SWITCH]            )
25   [NONE]              
25   [SWITCH]            {
25   [NONE]              
26   [NONE]              DCRP_LICENSE_FOREACH_FEATURES
26   [FUNC_CALL]         (
26   [NONE]              FEATURESTR
26   [FUNC_CALL]         )
26   [NONE]              ;
26   [NONE]              
27   [SWITCH]            }
27   [NONE]              
29   [NONE]              return
29   [RETURN]            (
29   [NONE]              ""
29   [RETURN]            )
29   [NONE]              ;
29   [NONE]              
31   [FUNC_DEF]          }
31   [NONE]              
34   [FUNC_DEF]          static
34   [FUNC_DEF]          int
34   [NONE]              
35   [NONE]              isValidLicenseType
35   [FUNC_DEF]          (
35   [NONE]              int32_t
35   [NONE]              idx
35   [FUNC_DEF]          )
35   [NONE]              
36   [FUNC_DEF]          {
36   [NONE]              
37   [PP_DEFINE]         #
37   [NONE]              define
37   [NONE]              CHECKFEATURE
37   [MACRO_FUNC]        (
37   [NONE]              f
37   [MACRO_FUNC]        )
37   [NONE]              \
38   [NONE]              case
38   [NONE]              DCRMIB_LICENSE_
38   [NONE]              ##
38   [NONE]              f
38   [NONE]              :
38   [NONE]              \
39   [NONE]              return
39   [NONE]              1
39   [NONE]              
41   [NONE]              switch
41   [SWITCH]            (
41   [NONE]              idx
41   [SWITCH]            )
41   [NONE]              
41   [SWITCH]            {
41   [NONE]              
42   [NONE]              DCRP_LICENSE_FOREACH_FEATURES
42   [FUNC_CALL]         (
42   [NONE]              CHECKFEATURE
42   [FUNC_CALL]         )
42   [NONE]              ;
42   [NONE]              
43   [SWITCH]            }
43   [NONE]              
45   [NONE]              return
45   [RETURN]            (
45   [NONE]              n
45   [NONE]              *
45   [NONE]              foo
45   [FUNC_CALL]         (
45   [NONE]              5
45   [FUNC_CALL]         )
45   [RETURN]            )
45   [NONE]              ;
45   [NONE]              
46   [FUNC_DEF]          }
46   [NONE]              