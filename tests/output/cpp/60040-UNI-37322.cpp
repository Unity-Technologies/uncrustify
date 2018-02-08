#ifdef __cplusplus
namespace a
{
namespace b
{
#endif

void c();
{
    if (a > b)
    {
        a++;
    }
}

#ifdef __cplusplus
}
}
#endif

//Try with nested ifdefs
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

//try with extern
#ifdef __cplusplus
namespace aaa
{
    extern  "C"
    {
#endif

void ccc();

#ifdef __cplusplus
}
}
#endif
