/* Fixed-layout x86 byte emitter from REA/Ghidra's 77-byte body read.
 * Independently cross-checked with XBEParser raw bytes, XboxRecomp target
 * object, and split. This is exact machine-code evidence, not semantic C;
 * the adjacent semantic C draft and its SEH limitation remain separate.
 */
__declspec(naked) void __cdecl sub_000A3791(void)
{
    __asm {        _emit 0x6a
        _emit 0x0c
        _emit 0x68
        _emit 0x60
        _emit 0x72
        _emit 0x28
        _emit 0x00
        _emit 0xe8
        _emit 0x07
        _emit 0xf6
        _emit 0xff
        _emit 0xff
        _emit 0x33
        _emit 0xf6
        _emit 0x39
        _emit 0x75
        _emit 0x08
        _emit 0x74
        _emit 0x34
        _emit 0x83
        _emit 0x3d
        _emit 0x80
        _emit 0xca
        _emit 0x57
        _emit 0x00
        _emit 0x03
        _emit 0x75
        _emit 0x1c
        _emit 0x6a
        _emit 0x04
        _emit 0xe8
        _emit 0x97
        _emit 0x3b
        _emit 0x00
        _emit 0x00
        _emit 0x59
        _emit 0x89
        _emit 0x75
        _emit 0xfc
        _emit 0x89
        _emit 0x75
        _emit 0xe4
        _emit 0x83
        _emit 0x4d
        _emit 0xfc
        _emit 0xff
        _emit 0xe8
        _emit 0x1c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x39
        _emit 0x75
        _emit 0xe4
        _emit 0x75
        _emit 0x0f
        _emit 0xff
        _emit 0x75
        _emit 0x08
        _emit 0x56
        _emit 0xe8
        _emit 0x17
        _emit 0x38
        _emit 0xf8
        _emit 0xff
        _emit 0x50
        _emit 0xe8
        _emit 0xfa
        _emit 0x37
        _emit 0xf8
        _emit 0xff
        _emit 0xe8
        _emit 0x02
        _emit 0xf6
        _emit 0xff
        _emit 0xff
        _emit 0xc3
    }
}
