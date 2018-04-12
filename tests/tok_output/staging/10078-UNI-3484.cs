Line [Token]             Text
1    [COMMENT_CPP]       // various combos from unity
1    [NEWLINE]           
3    [TYPE]              contents
3    [MEMBER]            .
3    [FUNC_CALL]         Append
3    [FPAREN_OPEN]       (
3    [STRING]            "#include \"{file.GetBoundPath ()}\""
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [TYPE]              contents
4    [MEMBER]            .
4    [FUNC_CALL]         Append
4    [FPAREN_OPEN]       (
4    [STRING]            $"#include \"{file.GetBoundPath ()}\""
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [TYPE]              contents
5    [MEMBER]            .
5    [FUNC_CALL]         Append
5    [FPAREN_OPEN]       (
5    [STRING]            $"#include \"{file.GetBoundPath ("abc def")}\""
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
7    [TYPE]              contents
7    [MEMBER]            .
7    [FUNC_CALL]         Append
7    [FPAREN_OPEN]       (
7    [NEWLINE]           
8    [STRING]            $"#include \"{file.GetBoundPath()}\""
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
10   [TYPE]              contents
10   [MEMBER]            .
10   [FUNC_CALL]         Append
10   [FPAREN_OPEN]       (
10   [STRING_MULTI]      $@"#include␍␤""{file.GetBoundPath($@"abc ␍␤ def")}"""
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
14   [TYPE]              contents
14   [MEMBER]            .
14   [FUNC_CALL]         Append
14   [FPAREN_OPEN]       (
14   [NEWLINE]           
15   [STRING_MULTI]      $@"#include␍␤""{file.GetBoundPath(@"abc␍␤   def ghi")}"""
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           
19   [TYPE]              contents
19   [MEMBER]            .
19   [FUNC_CALL]         Append
19   [FPAREN_OPEN]       (
19   [STRING_MULTI]      @"#include␍␤""{file.GetBoundPath ()}"""
20   [FPAREN_CLOSE]      )
20   [SEMICOLON]         ;
20   [NEWLINE]           
22   [COMMENT_CPP]       // fun with nesting
22   [NEWLINE]           
24   [STRING_MULTI]      $@"{$"\\\"abc{$@" \""def\"" {"{ghi}"} {jkl} {{mno}}"}\\\""␍␤}"
25   [MEMBER]            .
25   [FUNC_CALL]         Dump
25   [FPAREN_OPEN]       (
25   [FPAREN_CLOSE]      )
25   [SEMICOLON]         ;
25   [NEWLINE]           
27   [STRING_MULTI]      $@"{$@"\""abc{$@" def {"{ghi}"}␍␤    {jkl} {{mno}}\"""}"␍␤}"
29   [MEMBER]            .
29   [FUNC_CALL]         Dump
29   [FPAREN_OPEN]       (
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [NEWLINE]           
31   [COMMENT_CPP]       // ensure we didn't break @for etc
31   [NEWLINE]           
33   [TYPE]              var
33   [WORD]              @for
33   [ASSIGN]            =
33   [WORD]              @base
33   [ARITH]             +
33   [WORD]              @this
33   [ARITH]             -
33   [STRING]            $@"{@while}"
33   [SEMICOLON]         ;
33   [NEWLINE]           
35   [COMMENT_CPP]       // from roslyn's InterpolationTests.cs
35   [NEWLINE]           
37   [TYPE]              Console
37   [MEMBER]            .
37   [FUNC_CALL]         WriteLine
37   [FPAREN_OPEN]       (
37   [STRING]            $"{number}"
37   [FPAREN_CLOSE]      )
37   [SEMICOLON]         ;
37   [NEWLINE]           
39   [TYPE]              Console
39   [MEMBER]            .
39   [FUNC_CALL]         WriteLine
39   [FPAREN_OPEN]       (
39   [STRING]            $"{number}{number}"
39   [FPAREN_CLOSE]      )
39   [SEMICOLON]         ;
39   [NEWLINE]           
40   [TYPE]              Console
40   [MEMBER]            .
40   [FUNC_CALL]         WriteLine
40   [FPAREN_OPEN]       (
40   [STRING]            $"Jenny don\'t change your number { number :###-####} { number :###-####}."
40   [FPAREN_CLOSE]      )
40   [SEMICOLON]         ;
40   [NEWLINE]           
41   [TYPE]              Console
41   [MEMBER]            .
41   [FUNC_CALL]         WriteLine
41   [FPAREN_OPEN]       (
41   [STRING]            $"jenny { ((Func<int>)(() => { return number; })).Invoke() :(408) ###-####}"
41   [FPAREN_CLOSE]      )
41   [SEMICOLON]         ;
41   [NEWLINE]           
42   [TYPE]              Console
42   [MEMBER]            .
42   [FUNC_CALL]         WriteLine
42   [FPAREN_OPEN]       (
42   [STRING]            $"{hello}, { world }."
42   [FPAREN_CLOSE]      )
42   [SEMICOLON]         ;
42   [NEWLINE]           
44   [TYPE]              Console
44   [MEMBER]            .
44   [FUNC_CALL]         WriteLine
44   [FPAREN_OPEN]       (
44   [STRING_MULTI]      $@"{␍␤                            hello␍␤                    },␍␤{␍␤                    world }."
48   [FPAREN_CLOSE]      )
48   [SEMICOLON]         ;
48   [NEWLINE]           
50   [TYPE]              System
50   [MEMBER]            .
50   [TYPE]              Console
50   [MEMBER]            .
50   [FUNC_CALL]         Write
50   [FPAREN_OPEN]       (
50   [STRING]            $"{{ x }}"
50   [FPAREN_CLOSE]      )
50   [SEMICOLON]         ;
50   [NEWLINE]           
51   [TYPE]              var
51   [WORD]              s
51   [ASSIGN]            =
51   [STRING]            $@"{$@""{1}""}"
51   [SEMICOLON]         ;
51   [NEWLINE]           
53   [TYPE]              Console
53   [MEMBER]            .
53   [FUNC_CALL]         WriteLine
53   [FPAREN_OPEN]       (
53   [STRING]            $"{ await hello }, { await world }!"
53   [FPAREN_CLOSE]      )
53   [SEMICOLON]         ;
53   [NEWLINE]           
55   [TYPE]              Console
55   [MEMBER]            .
55   [FUNC_CALL]         WriteLine
55   [FPAREN_OPEN]       (
55   [STRING]            $"X = { 123 , -(3+4) }."
55   [FPAREN_CLOSE]      )
55   [SEMICOLON]         ;
55   [NEWLINE]           
57   [TYPE]              var
57   [WORD]              s1
57   [ASSIGN]            =
57   [STRING]            $"X = { 1 } "
57   [SEMICOLON]         ;
57   [NEWLINE]           