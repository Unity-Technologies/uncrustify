#ifdef __cplusplus
namespace a
{
namespace b
{
#endif

void c();

#ifdef __cplusplus
}
}
#endif

#ifdef FOO2
namespace aa
{
    #ifdef FOO
namespace bb
{
    #endif
#endif

void cc();

#ifdef __cplusplus
}
}
#endif

#ifdef __cplusplus
namespace a
{
extern  "C"
{
#endif

void c();

#ifdef __cplusplus
}
}
#endif



