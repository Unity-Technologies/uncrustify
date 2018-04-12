Line [Parent]            Text
1    [NONE]              
2    [NONE]              namespace
2    [NAMESPACE]         a
2    [NAMESPACE]         ::
2    [NAMESPACE]         b
2    [NONE]              
3    [NAMESPACE]         {
3    [NONE]              
4    [FUNC_DEF]          void
4    [FUNC_DEF]          foo
4    [FUNC_DEF]          ::
4    [NONE]              bar
4    [FUNC_DEF]          (
4    [NONE]              int
4    [NONE]              xx
4    [FUNC_DEF]          )
4    [NONE]              
5    [FUNC_DEF]          {
5    [NONE]              
6    [NONE]              switch
6    [SWITCH]            (
6    [NONE]              xx
6    [SWITCH]            )
6    [NONE]              
7    [SWITCH]            {
7    [NONE]              
9    [NONE]              case
9    [NONE]              1
9    [NONE]              :
9    [NONE]              
10   [COMMENT_WHOLE]     // filler
10   [NONE]              
11   [NONE]              while
11   [WHILE]             (
11   [NONE]              true
11   [WHILE]             )
11   [NONE]              
12   [WHILE]             {
12   [NONE]              
13   [NONE]              if
13   [IF]                (
13   [NONE]              something
13   [IF]                )
13   [NONE]              
14   [IF]                {
14   [NONE]              
15   [NONE]              do_something
15   [FUNC_CALL]         (
15   [FUNC_CALL]         )
15   [NONE]              ;
15   [NONE]              
19   [IF]                }
19   [NONE]              
20   [NONE]              else
20   [NONE]              if
20   [ELSEIF]            (
20   [NONE]              something_else
20   [ELSEIF]            )
20   [NONE]              
21   [ELSEIF]            {
21   [NONE]              
22   [NONE]              do_something_else
22   [FUNC_CALL]         (
22   [FUNC_CALL]         )
22   [NONE]              ;
22   [NONE]              
23   [ELSEIF]            }
23   [NONE]              
24   [NONE]              else
24   [NONE]              
25   [ELSE]              {
25   [NONE]              
26   [NONE]              dont_do_anything
26   [FUNC_CALL]         (
26   [FUNC_CALL]         )
26   [NONE]              ;
26   [NONE]              
27   [NONE]              break
27   [NONE]              ;
27   [NONE]              
28   [ELSE]              }
28   [NONE]              
30   [WHILE]             }
30   [NONE]              
31   [NONE]              break
31   [NONE]              ;
31   [NONE]              
33   [NONE]              case
33   [NONE]              2
33   [NONE]              :
33   [NONE]              
34   [NONE]              handle_two
34   [FUNC_CALL]         (
34   [FUNC_CALL]         )
34   [NONE]              ;
34   [NONE]              
36   [NONE]              default
36   [NONE]              :
36   [NONE]              
37   [NONE]              handle_the_rest
37   [FUNC_CALL]         (
37   [FUNC_CALL]         )
37   [NONE]              ;
37   [NONE]              
38   [NONE]              break
38   [NONE]              ;
38   [NONE]              
39   [SWITCH]            }
39   [SWITCH]            // switch
39   [NONE]              
40   [FUNC_DEF]          }
40   [FUNC_DEF]          // foo::bar
40   [NONE]              
42   [NONE]              class
42   [CLASS]             long_class
42   [NONE]              
43   [CLASS]             {
43   [NONE]              
44   [NONE]              private
44   [NONE]              :
44   [NONE]              
46   [NONE]              int
46   [NONE]              m_a
46   [NONE]              ;
46   [NONE]              
47   [NONE]              int
47   [NONE]              m_name
47   [NONE]              ;
47   [NONE]              
49   [NONE]              public
49   [NONE]              :
49   [NONE]              
50   [NONE]              long_class
50   [FUNC_CLASS_DEF]    (
50   [NONE]              int
50   [NONE]              a
50   [FUNC_CLASS_DEF]    )
50   [FUNC_CLASS_DEF]    {
50   [FUNC_CLASS_DEF]    }
50   [NONE]              
52   [FUNC_DEF]          void
52   [NONE]              f1
52   [FUNC_DEF]          (
52   [FUNC_DEF]          )
52   [FUNC_DEF]          {
52   [FUNC_DEF]          }
52   [NONE]              
54   [FUNC_DEF]          void
54   [NONE]              f2
54   [FUNC_DEF]          (
54   [FUNC_DEF]          )
54   [FUNC_DEF]          {
54   [FUNC_DEF]          }
54   [NONE]              
56   [FUNC_DEF]          void
56   [NONE]              f3
56   [FUNC_DEF]          (
56   [FUNC_DEF]          )
56   [FUNC_DEF]          {
56   [FUNC_DEF]          }
56   [NONE]              
58   [CLASS]             }
58   [CLASS]             ;
58   [CLASS]             // class long_class
58   [NONE]              
59   [NAMESPACE]         }
59   [NAMESPACE]         // namespace a::b
59   [NONE]              