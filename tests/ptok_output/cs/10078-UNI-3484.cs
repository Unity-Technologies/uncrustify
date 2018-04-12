Line [Parent]            Text
1    [COMMENT_WHOLE]     // various combos from unity
1    [NONE]              
3    [NONE]              contents
3    [NONE]              .
3    [NONE]              Append
3    [FUNC_CALL]         (
3    [NONE]              "#include \"{file.GetBoundPath ()}\""
3    [FUNC_CALL]         )
3    [NONE]              ;
3    [NONE]              
4    [NONE]              contents
4    [NONE]              .
4    [NONE]              Append
4    [FUNC_CALL]         (
4    [NONE]              $"#include \"{file.GetBoundPath ()}\""
4    [FUNC_CALL]         )
4    [NONE]              ;
4    [NONE]              
5    [NONE]              contents
5    [NONE]              .
5    [NONE]              Append
5    [FUNC_CALL]         (
5    [NONE]              $"#include \"{file.GetBoundPath ("abc def")}\""
5    [FUNC_CALL]         )
5    [NONE]              ;
5    [NONE]              
7    [NONE]              contents
7    [NONE]              .
7    [NONE]              Append
7    [FUNC_CALL]         (
7    [NONE]              
8    [NONE]              $"#include \"{file.GetBoundPath()}\""
8    [FUNC_CALL]         )
8    [NONE]              ;
8    [NONE]              
10   [NONE]              contents
10   [NONE]              .
10   [NONE]              Append
10   [FUNC_CALL]         (
10   [NONE]              $@"#include␍␤""{file.GetBoundPath($@"abc ␍␤ def")}"""
12   [FUNC_CALL]         )
12   [NONE]              ;
12   [NONE]              
14   [NONE]              contents
14   [NONE]              .
14   [NONE]              Append
14   [FUNC_CALL]         (
14   [NONE]              
15   [NONE]              $@"#include␍␤""{file.GetBoundPath(@"abc␍␤   def ghi")}"""
17   [FUNC_CALL]         )
17   [NONE]              ;
17   [NONE]              
19   [NONE]              contents
19   [NONE]              .
19   [NONE]              Append
19   [FUNC_CALL]         (
19   [NONE]              @"#include␍␤""{file.GetBoundPath ()}"""
20   [FUNC_CALL]         )
20   [NONE]              ;
20   [NONE]              
22   [COMMENT_WHOLE]     // fun with nesting
22   [NONE]              
24   [NONE]              $@"{$"\\\"abc{$@" \""def\"" {"{ghi}"} {jkl} {{mno}}"}\\\""␍␤}"
25   [NONE]              .
25   [NONE]              Dump
25   [FUNC_CALL]         (
25   [FUNC_CALL]         )
25   [NONE]              ;
25   [NONE]              
27   [NONE]              $@"{$@"\""abc{$@" def {"{ghi}"}␍␤    {jkl} {{mno}}\"""}"␍␤}"
29   [NONE]              .
29   [NONE]              Dump
29   [FUNC_CALL]         (
29   [FUNC_CALL]         )
29   [NONE]              ;
29   [NONE]              
31   [COMMENT_WHOLE]     // ensure we didn't break @for etc
31   [NONE]              
33   [NONE]              var
33   [NONE]              @for
33   [NONE]              =
33   [NONE]              @base
33   [NONE]              +
33   [NONE]              @this
33   [NONE]              -
33   [NONE]              $@"{@while}"
33   [NONE]              ;
33   [NONE]              
35   [COMMENT_WHOLE]     // from roslyn's InterpolationTests.cs
35   [NONE]              
37   [NONE]              Console
37   [NONE]              .
37   [NONE]              WriteLine
37   [FUNC_CALL]         (
37   [NONE]              $"{number}"
37   [FUNC_CALL]         )
37   [NONE]              ;
37   [NONE]              
39   [NONE]              Console
39   [NONE]              .
39   [NONE]              WriteLine
39   [FUNC_CALL]         (
39   [NONE]              $"{number}{number}"
39   [FUNC_CALL]         )
39   [NONE]              ;
39   [NONE]              
40   [NONE]              Console
40   [NONE]              .
40   [NONE]              WriteLine
40   [FUNC_CALL]         (
40   [NONE]              $"Jenny don\'t change your number { number :###-####} { number :###-####}."
40   [FUNC_CALL]         )
40   [NONE]              ;
40   [NONE]              
41   [NONE]              Console
41   [NONE]              .
41   [NONE]              WriteLine
41   [FUNC_CALL]         (
41   [NONE]              $"jenny { ((Func<int>)(() => { return number; })).Invoke() :(408) ###-####}"
41   [FUNC_CALL]         )
41   [NONE]              ;
41   [NONE]              
42   [NONE]              Console
42   [NONE]              .
42   [NONE]              WriteLine
42   [FUNC_CALL]         (
42   [NONE]              $"{hello}, { world }."
42   [FUNC_CALL]         )
42   [NONE]              ;
42   [NONE]              
44   [NONE]              Console
44   [NONE]              .
44   [NONE]              WriteLine
44   [FUNC_CALL]         (
44   [NONE]              $@"{␍␤                            hello␍␤                    },␍␤{␍␤                    world }."
48   [FUNC_CALL]         )
48   [NONE]              ;
48   [NONE]              
50   [NONE]              System
50   [NONE]              .
50   [NONE]              Console
50   [NONE]              .
50   [NONE]              Write
50   [FUNC_CALL]         (
50   [NONE]              $"{{ x }}"
50   [FUNC_CALL]         )
50   [NONE]              ;
50   [NONE]              
51   [NONE]              var
51   [NONE]              s
51   [NONE]              =
51   [NONE]              $@"{$@""{1}""}"
51   [NONE]              ;
51   [NONE]              
53   [NONE]              Console
53   [NONE]              .
53   [NONE]              WriteLine
53   [FUNC_CALL]         (
53   [NONE]              $"{ await hello }, { await world }!"
53   [FUNC_CALL]         )
53   [NONE]              ;
53   [NONE]              
55   [NONE]              Console
55   [NONE]              .
55   [NONE]              WriteLine
55   [FUNC_CALL]         (
55   [NONE]              $"X = { 123 , -(3+4) }."
55   [FUNC_CALL]         )
55   [NONE]              ;
55   [NONE]              
57   [NONE]              var
57   [NONE]              s1
57   [NONE]              =
57   [NONE]              $"X = { 1 } "
57   [NONE]              ;
57   [NONE]              