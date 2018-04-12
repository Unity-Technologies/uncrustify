Line [Token]             Text
1    [NEWLINE]           
2    [WORD]              myNewValue
2    [ASSIGN]            =
2    [WORD]              something
2    [SQUARE_OPEN]       [
2    [WORD]              arrayNumber
2    [SQUARE_CLOSE]      ]
2    [ARITH]             *
2    [WORD]              someOtherValue
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [WORD]              myNewValue
3    [ASSIGN]            =
3    [WORD]              multidimentional
3    [SQUARE_OPEN]       [
3    [WORD]              arrayNumber
3    [SQUARE_CLOSE]      ]
3    [SQUARE_OPEN]       [
3    [WORD]              anotherNumber
3    [SQUARE_CLOSE]      ]
3    [ARITH]             *
3    [WORD]              someOtherValue
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [WORD]              myNewValue
4    [ASSIGN]            =
4    [WORD]              noArrayVariableWorksFine
4    [ARITH]             *
4    [WORD]              someOtherValue
4    [SEMICOLON]         ;
4    [NEWLINE]           
7    [TYPE]              int
7    [FUNC_PROTO]        func
7    [FPAREN_OPEN]       (
7    [TYPE]              int
7    [PTR_TYPE]          *
7    [WORD]              thingy
7    [COMMA]             ,
7    [NEWLINE]           
8    [QUALIFIER]         volatile
8    [TYPE]              int
8    [PTR_TYPE]          *
8    [WORD]              arrayThingy
8    [SQUARE_OPEN]       [
8    [WORD]              NUMBER
8    [SQUARE_CLOSE]      ]
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
10   [TYPE]              int
10   [FUNC_PROTO]        func
10   [FPAREN_OPEN]       (
10   [TYPE]              int
10   [PTR_TYPE]          *
10   [WORD]              thingy
10   [COMMA]             ,
10   [NEWLINE]           
11   [QUALIFIER]         volatile
11   [TYPE]              int
11   [PTR_TYPE]          *
11   [WORD]              arrayThingy
11   [SQUARE_OPEN]       [
11   [WORD]              NUMBER
11   [SQUARE_CLOSE]      ]
11   [SQUARE_OPEN]       [
11   [WORD]              anotherNumber
11   [SQUARE_CLOSE]      ]
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
13   [TYPE]              int
13   [FUNC_PROTO]        func
13   [FPAREN_OPEN]       (
13   [TYPE]              int
13   [PTR_TYPE]          *
13   [WORD]              thingy
13   [COMMA]             ,
13   [NEWLINE]           
14   [QUALIFIER]         volatile
14   [TYPE]              int
14   [PTR_TYPE]          *
14   [WORD]              noArrayThingyWorksFine
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [NEWLINE]           