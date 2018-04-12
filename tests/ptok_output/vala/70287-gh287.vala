Line [Parent]            Text
1    [FUNC_DEF]          int
1    [NONE]              main
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
1    [FUNC_DEF]          {
1    [NONE]              
2    [NONE]              key_press_event
2    [NONE]              .
2    [NONE]              connect
2    [FUNC_CALL]         (
2    [NONE]              (
2    [NONE]              e
2    [NONE]              )
2    [NONE]              =>
2    [NONE]              {
2    [NONE]              
3    [NONE]              switch
3    [SWITCH]            (
3    [NONE]              e
3    [NONE]              .
3    [NONE]              keyval
3    [SWITCH]            )
3    [NONE]              
3    [SWITCH]            {
3    [NONE]              
4    [NONE]              case
4    [NONE]              Gdk
4    [NONE]              .
4    [NONE]              Key
4    [NONE]              .
4    [NONE]              @0
4    [NONE]              :
4    [NONE]              
5    [NONE]              if
5    [IF]                (
5    [NONE]              (
5    [NONE]              e
5    [NONE]              .
5    [NONE]              state
5    [NONE]              &
5    [NONE]              Gdk
5    [NONE]              .
5    [NONE]              ModifierType
5    [NONE]              .
5    [NONE]              CONTROL_MASK
5    [NONE]              )
5    [NONE]              !=
5    [NONE]              0
5    [IF]                )
5    [NONE]              
5    [IF]                {
5    [NONE]              
6    [NONE]              action_zoom_default_font
6    [FUNC_CALL]         (
6    [FUNC_CALL]         )
6    [NONE]              ;
6    [NONE]              
7    [CASE]              return
7    [RETURN]            (
7    [NONE]              true
7    [RETURN]            )
7    [NONE]              ;
7    [NONE]              
8    [IF]                }
8    [NONE]              
10   [NONE]              break
10   [NONE]              ;
10   [NONE]              
11   [NONE]              case
11   [NONE]              Gdk
11   [NONE]              .
11   [NONE]              Key
11   [NONE]              .
11   [NONE]              @1
11   [NONE]              :
11   [COMMENT_END]       //alt+[1-8]
11   [NONE]              
12   [NONE]              case
12   [NONE]              Gdk
12   [NONE]              .
12   [NONE]              Key
12   [NONE]              .
12   [NONE]              @7
12   [NONE]              :
12   [NONE]              
13   [NONE]              case
13   [NONE]              Gdk
13   [NONE]              .
13   [NONE]              Key
13   [NONE]              .
13   [NONE]              @8
13   [NONE]              :
13   [NONE]              
14   [NONE]              if
14   [IF]                (
14   [NONE]              (
14   [NONE]              (
14   [NONE]              e
14   [NONE]              .
14   [NONE]              state
14   [NONE]              &
14   [NONE]              Gdk
14   [NONE]              .
14   [NONE]              ModifierType
14   [NONE]              .
14   [NONE]              MOD1_MASK
14   [NONE]              )
14   [NONE]              !=
14   [NONE]              0
14   [NONE]              )
14   [NONE]              &&
14   [NONE]              settings
14   [NONE]              .
14   [NONE]              alt_changes_tab
14   [IF]                )
14   [NONE]              
14   [IF]                {
14   [NONE]              
15   [NONE]              var
15   [NONE]              i
15   [NONE]              =
15   [NONE]              e
15   [NONE]              .
15   [NONE]              keyval
15   [NONE]              -
15   [NONE]              49
15   [NONE]              ;
15   [NONE]              
16   [NONE]              if
16   [IF]                (
16   [NONE]              i
16   [NONE]              >
16   [NONE]              notebook
16   [NONE]              .
16   [NONE]              n_tabs
16   [NONE]              -
16   [NONE]              1
16   [IF]                )
16   [NONE]              
16   [IF]                {
16   [NONE]              
17   [CASE]              return
17   [RETURN]            (
17   [NONE]              false
17   [RETURN]            )
17   [NONE]              ;
17   [NONE]              
17   [IF]                }
17   [NONE]              
19   [NONE]              notebook
19   [NONE]              .
19   [NONE]              current
19   [NONE]              =
19   [NONE]              notebook
19   [NONE]              .
19   [NONE]              get_tab_by_index
19   [FUNC_CALL]         (
19   [C_CAST]            (
19   [C_CAST]            int
19   [C_CAST]            )
19   [NONE]              i
19   [FUNC_CALL]         )
19   [NONE]              ;
19   [NONE]              
20   [CASE]              return
20   [RETURN]            (
20   [NONE]              true
20   [RETURN]            )
20   [NONE]              ;
20   [NONE]              
21   [IF]                }
21   [NONE]              
23   [NONE]              break
23   [NONE]              ;
23   [NONE]              
24   [NONE]              default
24   [NONE]              :
24   [NONE]              
25   [NONE]              assert_not_reached
25   [FUNC_CALL]         (
25   [FUNC_CALL]         )
25   [NONE]              ;
25   [NONE]              
26   [SWITCH]            }
26   [NONE]              
28   [NONE]              return
28   [RETURN]            (
28   [NONE]              false
28   [RETURN]            )
28   [NONE]              ;
28   [NONE]              
29   [NONE]              }
29   [FUNC_CALL]         )
29   [NONE]              ;
29   [NONE]              
31   [NONE]              return
31   [RETURN]            (
31   [NONE]              0
31   [RETURN]            )
31   [NONE]              ;
31   [NONE]              
32   [FUNC_DEF]          }
32   [NONE]              