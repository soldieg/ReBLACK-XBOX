/* Exact x86 byte emitter; see paired evidence for REA boundary, call graph and limitations. */
__declspec(naked) void sub_000E29C0(void)
{
    __asm {
        __emit 0x8b
        __emit 0x48
        __emit 0x4c
        __emit 0x33
        __emit 0xd2
        __emit 0x3b
        __emit 0xca
        __emit 0x56
        __emit 0x74
        __emit 0x06
        __emit 0x8b
        __emit 0x70
        __emit 0x50
        __emit 0x89
        __emit 0x71
        __emit 0x50
        __emit 0x8b
        __emit 0x48
        __emit 0x50
        __emit 0x3b
        __emit 0xca
        __emit 0x74
        __emit 0x06
        __emit 0x8b
        __emit 0x70
        __emit 0x4c
        __emit 0x89
        __emit 0x71
        __emit 0x4c
        __emit 0x89
        __emit 0x50
        __emit 0x4c
        __emit 0x89
        __emit 0x50
        __emit 0x50
        __emit 0x5e
        __emit 0xc3
    }
}
