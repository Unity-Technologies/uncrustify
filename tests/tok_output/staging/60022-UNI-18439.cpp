Line [Token]             Text
1    [TYPE]              floatNx3
1    [WORD]              randomRotationMatrices
1    [SQUARE_OPEN]       [
1    [NUMBER]            3
1    [SQUARE_CLOSE]      ]
1    [SEMICOLON]         ;
1    [NEWLINE]           
2    [IF]                if
2    [SPAREN_OPEN]       (
2    [WORD]              rotationRandomnessX
2    [COMPARE]           >
2    [FUNC_CALL]         epsilon
2    [FPAREN_OPEN]       (
2    [FPAREN_CLOSE]      )
2    [BOOL]              ||
2    [WORD]              rotationRandomnessY
2    [COMPARE]           >
2    [FUNC_CALL]         epsilon
2    [FPAREN_OPEN]       (
2    [FPAREN_CLOSE]      )
2    [SPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [COMMENT_CPP]       // Parameters are being double indented.
4    [NEWLINE]           
5    [TYPE]              floatNx3
5    [WORD]              rotationEuler
5    [ASSIGN]            =
5    [FUNC_CALL]         floatNx3
5    [FPAREN_OPEN]       (
5    [NEWLINE]           
6    [PAREN_OPEN]        (
6    [FUNC_CALL]         GenerateRandom
6    [FPAREN_OPEN]       (
6    [WORD]              randomSeed
6    [ARITH]             +
6    [FUNC_CALL]         intN
6    [FPAREN_OPEN]       (
6    [WORD]              kParticleSystemExternalForcesRotationRandomnessXId
6    [FPAREN_CLOSE]      )
6    [FPAREN_CLOSE]      )
6    [ARITH]             *
6    [NUMBER]            2
6    [ARITH]             -
6    [NUMBER]            1
6    [PAREN_CLOSE]       )
6    [ARITH]             *
6    [WORD]              rotationRandomnessX
6    [COMMA]             ,
6    [NEWLINE]           
7    [PAREN_OPEN]        (
7    [FUNC_CALL]         GenerateRandom
7    [FPAREN_OPEN]       (
7    [WORD]              randomSeed
7    [ARITH]             +
7    [FUNC_CALL]         intN
7    [FPAREN_OPEN]       (
7    [WORD]              kParticleSystemExternalForcesRotationRandomnessYId
7    [FPAREN_CLOSE]      )
7    [FPAREN_CLOSE]      )
7    [ARITH]             *
7    [NUMBER]            2
7    [ARITH]             -
7    [NUMBER]            1
7    [PAREN_CLOSE]       )
7    [ARITH]             *
7    [WORD]              rotationRandomnessY
7    [COMMA]             ,
7    [NEWLINE]           
8    [FUNC_CALL]         floatN
8    [FPAREN_OPEN]       (
8    [WORD]              ZERO
8    [FPAREN_CLOSE]      )
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [FUNC_CALL]         eulerToMatrix
9    [FPAREN_OPEN]       (
9    [WORD]              rotationEuler
9    [COMMA]             ,
9    [WORD]              randomRotationMatrices
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
11   [WORD]              toForce
11   [ASSIGN]            =
11   [FUNC_CALL]         mul
11   [FPAREN_OPEN]       (
11   [WORD]              randomRotationMatrices
11   [COMMA]             ,
11   [WORD]              toForce
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [NEWLINE]           