Line [Parent]            Text
1    [NONE]              floatNx3
1    [NONE]              randomRotationMatrices
1    [NONE]              [
1    [NONE]              3
1    [NONE]              ]
1    [NONE]              ;
1    [NONE]              
2    [NONE]              if
2    [IF]                (
2    [NONE]              rotationRandomnessX
2    [NONE]              >
2    [NONE]              epsilon
2    [FUNC_CALL]         (
2    [FUNC_CALL]         )
2    [NONE]              ||
2    [NONE]              rotationRandomnessY
2    [NONE]              >
2    [NONE]              epsilon
2    [FUNC_CALL]         (
2    [FUNC_CALL]         )
2    [IF]                )
2    [NONE]              
3    [IF]                {
3    [NONE]              
4    [COMMENT_WHOLE]     // Parameters are being double indented.
4    [NONE]              
5    [NONE]              floatNx3
5    [NONE]              rotationEuler
5    [NONE]              =
5    [NONE]              floatNx3
5    [FUNC_CALL]         (
5    [NONE]              
6    [NONE]              (
6    [NONE]              GenerateRandom
6    [FUNC_CALL]         (
6    [NONE]              randomSeed
6    [NONE]              +
6    [NONE]              intN
6    [FUNC_CALL]         (
6    [NONE]              kParticleSystemExternalForcesRotationRandomnessXId
6    [FUNC_CALL]         )
6    [FUNC_CALL]         )
6    [NONE]              *
6    [NONE]              2
6    [NONE]              -
6    [NONE]              1
6    [NONE]              )
6    [NONE]              *
6    [NONE]              rotationRandomnessX
6    [NONE]              ,
6    [NONE]              
7    [NONE]              (
7    [NONE]              GenerateRandom
7    [FUNC_CALL]         (
7    [NONE]              randomSeed
7    [NONE]              +
7    [NONE]              intN
7    [FUNC_CALL]         (
7    [NONE]              kParticleSystemExternalForcesRotationRandomnessYId
7    [FUNC_CALL]         )
7    [FUNC_CALL]         )
7    [NONE]              *
7    [NONE]              2
7    [NONE]              -
7    [NONE]              1
7    [NONE]              )
7    [NONE]              *
7    [NONE]              rotationRandomnessY
7    [NONE]              ,
7    [NONE]              
8    [NONE]              floatN
8    [FUNC_CALL]         (
8    [NONE]              ZERO
8    [FUNC_CALL]         )
8    [FUNC_CALL]         )
8    [NONE]              ;
8    [NONE]              
9    [NONE]              eulerToMatrix
9    [FUNC_CALL]         (
9    [NONE]              rotationEuler
9    [NONE]              ,
9    [NONE]              randomRotationMatrices
9    [FUNC_CALL]         )
9    [NONE]              ;
9    [NONE]              
11   [NONE]              toForce
11   [NONE]              =
11   [NONE]              mul
11   [FUNC_CALL]         (
11   [NONE]              randomRotationMatrices
11   [NONE]              ,
11   [NONE]              toForce
11   [FUNC_CALL]         )
11   [NONE]              ;
11   [NONE]              
12   [IF]                }
12   [NONE]              