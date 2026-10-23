/* Exact x86 byte emitter; see paired evidence for REA boundary, call graph and limitations. */
__declspec(naked) void sub_000DD3B0(void)
{
    __asm {
        __emit 0x55
        __emit 0x8b
        __emit 0xec
        __emit 0x83
        __emit 0xe4
        __emit 0xf8
        __emit 0x83
        __emit 0xec
        __emit 0x08
        __emit 0x8d
        __emit 0x04
        __emit 0x24
        __emit 0xe8
        __emit 0xaf
        __emit 0xf0
        __emit 0xff
        __emit 0xff
        __emit 0xf3
        __emit 0x0f
        __emit 0x10
        __emit 0x04
        __emit 0x24
        __emit 0xf3
        __emit 0x0f
        __emit 0x11
        __emit 0x06
        __emit 0x0f
        __emit 0x57
        __emit 0xc0
        __emit 0xf3
        __emit 0x0f
        __emit 0x11
        __emit 0x46
        __emit 0x04
        __emit 0xf3
        __emit 0x0f
        __emit 0x10
        __emit 0x44
        __emit 0x24
        __emit 0x04
        __emit 0xf3
        __emit 0x0f
        __emit 0x11
        __emit 0x46
        __emit 0x08
        __emit 0x8b
        __emit 0xc6
        __emit 0x8b
        __emit 0xe5
        __emit 0x5d
        __emit 0xc3
    }
}
