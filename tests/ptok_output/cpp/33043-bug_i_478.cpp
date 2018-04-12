Line [Parent]            Text
1    [NONE]              {
1    [NONE]              
2    [NONE]              QString
2    [NONE]              fileName
2    [NONE]              =
2    [NONE]              QFileDialog
2    [NONE]              ::
2    [NONE]              getOpenFileName
2    [FUNC_CALL]         (
2    [NONE]              this
2    [NONE]              ,
2    [NONE]              
3    [NONE]              tr
3    [FUNC_CALL]         (
3    [NONE]              "Choose Configuration File"
3    [FUNC_CALL]         )
3    [NONE]              ,
3    [NONE]              ui
3    [NONE]              ->
3    [NONE]              leStrategyFile
3    [NONE]              ->
3    [NONE]              text
3    [FUNC_CALL]         (
3    [FUNC_CALL]         )
3    [NONE]              ,
3    [NONE]              
4    [NONE]              tr
4    [FUNC_CALL]         (
4    [NONE]              "Configuration Files (*.cfg);; All Files (*.*)"
4    [FUNC_CALL]         )
4    [NONE]              ,
4    [NONE]              0
4    [FUNC_CALL]         )
4    [NONE]              ;
4    [NONE]              
6    [NONE]              pSettings
6    [NONE]              =
6    [NONE]              new
6    [NONE]              QSettings
6    [FUNC_CALL]         (
6    [NONE]              QCoreApplication
6    [NONE]              ::
6    [NONE]              applicationDirPath
6    [FUNC_CALL]         (
6    [FUNC_CALL]         )
6    [NONE]              +
6    [NONE]              "/"
6    [NONE]              +
6    [NONE]              
7    [NONE]              QCoreApplication
7    [NONE]              ::
7    [NONE]              applicationName
7    [FUNC_CALL]         (
7    [FUNC_CALL]         )
7    [NONE]              +
7    [NONE]              ".ini"
7    [NONE]              ,
7    [NONE]              
8    [NONE]              QSettings
8    [NONE]              ::
8    [NONE]              IniFormat
8    [FUNC_CALL]         )
8    [NONE]              ;
8    [NONE]              
9    [NONE]              }
9    [NONE]              
10   [FUNC_DEF]          int
10   [NONE]              a
10   [FUNC_DEF]          (
10   [FUNC_DEF]          )
10   [NONE]              
11   [FUNC_DEF]          {
11   [NONE]              
12   [NONE]              double
12   [NONE]              a_very_long_variable
12   [NONE]              =
12   [NONE]              test
12   [FUNC_CALL]         (
12   [NONE]              foobar1
12   [NONE]              ,
12   [NONE]              
13   [NONE]              foobar5
13   [FUNC_CALL]         )
13   [NONE]              ;
13   [NONE]              
15   [NONE]              double
15   [NONE]              a_other_very_long
15   [NONE]              =
15   [NONE]              asdfasdfasdfasdfasdf
15   [NONE]              +
15   [NONE]              asdfasfafasdfa
15   [NONE]              +
15   [NONE]              
16   [NONE]              asdfasdfasdf
16   [NONE]              -
16   [NONE]              asdfasdf
16   [NONE]              +
16   [NONE]              56598
16   [NONE]              ;
16   [NONE]              
18   [NONE]              a_other_very_long
18   [NONE]              =
18   [NONE]              asdfasdfasdfasdfasdf
18   [NONE]              +
18   [NONE]              asdfasfafasdfa
18   [NONE]              +
18   [NONE]              
19   [NONE]              asdfasdfasdf
19   [NONE]              -
19   [NONE]              asdfasdf
19   [NONE]              +
19   [NONE]              56598
19   [NONE]              ;
19   [NONE]              
21   [NONE]              testadsfa
21   [FUNC_CALL]         (
21   [NONE]              dfasdf
21   [NONE]              ,
21   [NONE]              
22   [NONE]              aaafsdfa
22   [FUNC_CALL]         )
22   [NONE]              ;
22   [NONE]              
23   [NONE]              return
23   [NONE]              0
23   [NONE]              ;
23   [NONE]              
24   [FUNC_DEF]          }
24   [NONE]              