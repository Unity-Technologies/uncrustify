Line [Parent]            Text
1    [NONE]              public
1    [NONE]              class
1    [CLASS]             JavaClass
1    [CLASS]             {
1    [NONE]              
2    [FUNC_DEF]          private
2    [FUNC_DEF]          boolean
2    [NONE]              isButtonHit
2    [FUNC_DEF]          (
2    [NONE]              ImageView
2    [NONE]              imageView
2    [NONE]              ,
2    [NONE]              int
2    [NONE]              x
2    [NONE]              ,
2    [NONE]              int
2    [NONE]              y
2    [FUNC_DEF]          )
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              if
3    [IF]                (
3    [NONE]              imageView
3    [NONE]              !=
3    [NONE]              null
3    [IF]                )
3    [IF]                {
3    [NONE]              
4    [NONE]              RelativeLayout
4    [NONE]              .
4    [NONE]              LayoutParams
4    [NONE]              layoutParams
4    [NONE]              =
4    [C_CAST]            (
4    [C_CAST]            RelativeLayout
4    [C_CAST]            .
4    [C_CAST]            LayoutParams
4    [C_CAST]            )
4    [NONE]              imageView
4    [NONE]              .
4    [NONE]              getLayoutParams
4    [FUNC_CALL]         (
4    [FUNC_CALL]         )
4    [NONE]              ;
4    [NONE]              
5    [NONE]              Rect
5    [NONE]              buttonRect
5    [NONE]              =
5    [NONE]              new
5    [NONE]              Rect
5    [FUNC_CALL]         (
5    [C_CAST]            (
5    [C_CAST]            int
5    [C_CAST]            )
5    [NONE]              (
5    [NONE]              layoutParams
5    [NONE]              .
5    [NONE]              leftMargin
5    [NONE]              -
5    [NONE]              buttonExtraMargin
5    [NONE]              )
5    [NONE]              ,
5    [NONE]              
6    [C_CAST]            (
6    [C_CAST]            int
6    [C_CAST]            )
6    [NONE]              (
6    [NONE]              layoutParams
6    [NONE]              .
6    [NONE]              topMargin
6    [NONE]              -
6    [NONE]              buttonExtraMargin
6    [NONE]              )
6    [NONE]              ,
6    [NONE]              
7    [C_CAST]            (
7    [C_CAST]            int
7    [C_CAST]            )
7    [NONE]              (
7    [NONE]              layoutParams
7    [NONE]              .
7    [NONE]              leftMargin
7    [NONE]              +
7    [NONE]              imageView
7    [NONE]              .
7    [NONE]              getWidth
7    [FUNC_CALL]         (
7    [FUNC_CALL]         )
7    [NONE]              +
7    [NONE]              buttonExtraMargin
7    [NONE]              )
7    [NONE]              ,
7    [NONE]              
8    [C_CAST]            (
8    [C_CAST]            int
8    [C_CAST]            )
8    [NONE]              (
8    [NONE]              layoutParams
8    [NONE]              .
8    [NONE]              topMargin
8    [NONE]              +
8    [NONE]              imageView
8    [NONE]              .
8    [NONE]              getHeight
8    [FUNC_CALL]         (
8    [FUNC_CALL]         )
8    [NONE]              +
8    [NONE]              buttonExtraMargin
8    [NONE]              )
8    [FUNC_CALL]         )
8    [NONE]              ;
8    [NONE]              
10   [NONE]              if
10   [IF]                (
10   [NONE]              buttonRect
10   [NONE]              .
10   [NONE]              contains
10   [FUNC_CALL]         (
10   [NONE]              x
10   [NONE]              ,
10   [NONE]              y
10   [FUNC_CALL]         )
10   [IF]                )
10   [IF]                {
10   [NONE]              
11   [NONE]              return
11   [NONE]              true
11   [NONE]              ;
11   [NONE]              
12   [IF]                }
12   [NONE]              
13   [IF]                }
13   [NONE]              
15   [NONE]              Map
15   [TEMPLATE]          <
15   [NONE]              ?
15   [NONE]              ,
15   [NONE]              ?
15   [TEMPLATE]          >
15   [NONE]              map
15   [NONE]              =
15   [C_CAST]            (
15   [C_CAST]            Map
15   [C_CAST]            <
15   [C_CAST]            ?
15   [C_CAST]            ,
15   [C_CAST]            ?
15   [C_CAST]            >
15   [C_CAST]            )
15   [NONE]              object
15   [NONE]              ;
15   [NONE]              
17   [NONE]              return
17   [NONE]              false
17   [NONE]              ;
17   [NONE]              
18   [FUNC_DEF]          }
18   [NONE]              
20   [NONE]              @SuppressWarnings
20   [FUNC_DEF]          (
20   [FUNC_DEF]          "unchecked"
20   [FUNC_DEF]          )
20   [NONE]              
21   [FUNC_DEF]          public
21   [FUNC_DEF]          static
21   [FUNC_DEF]          List
21   [TEMPLATE]          <
21   [NONE]              Object
21   [TEMPLATE]          >
21   [NONE]              fromJSON
21   [FUNC_DEF]          (
21   [NONE]              JSONArray
21   [NONE]              obj
21   [FUNC_DEF]          )
21   [FUNC_DEF]          {
21   [NONE]              
22   [NONE]              return
22   [C_CAST]            (
22   [C_CAST]            List
22   [C_CAST]            <
22   [C_CAST]            Object
22   [C_CAST]            >
22   [C_CAST]            )
22   [NONE]              fromJSON
22   [FUNC_CALL]         (
22   [C_CAST]            (
22   [C_CAST]            Object
22   [C_CAST]            )
22   [NONE]              obj
22   [FUNC_CALL]         )
22   [NONE]              ;
22   [NONE]              
23   [FUNC_DEF]          }
23   [NONE]              
24   [CLASS]             }
24   [NONE]              