/* Exact x86 byte emitter; see paired evidence for REA boundary, call graph and limitations. */
__declspec(naked) void sub_000E2560(void)
{
    __asm {
        __emit 0x83
        __emit 0xc8
        __emit 0x01
        __emit 0xc7
        __emit 0x05
        __emit 0xe8
        __emit 0xc7
        __emit 0x2a
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xa3
        __emit 0x00
        __emit 0xca
        __emit 0x2e
        __emit 0x00
        __emit 0xb9
        __emit 0x04
        __emit 0xca
        __emit 0x2e
        __emit 0x00
        __emit 0xba
        __emit 0x6f
        __emit 0x02
        __emit 0x00
        __emit 0x00
        __emit 0x8d
        __emit 0x64
        __emit 0x24
        __emit 0x00
        __emit 0x69
        __emit 0xc0
        __emit 0xcd
        __emit 0x0d
        __emit 0x01
        __emit 0x00
        __emit 0x89
        __emit 0x01
        __emit 0x83
        __emit 0xc1
        __emit 0x04
        __emit 0x4a
        __emit 0x75
        __emit 0xf2
        __emit 0xc3
    }
}
