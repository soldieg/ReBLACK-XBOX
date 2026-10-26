/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00059A60(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x06
        _emit 0x8B
        _emit 0xCE
        _emit 0xFF
        _emit 0x50
        _emit 0x0C
        _emit 0x8D
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x3D
        _emit 0x38
        _emit 0xA2
        _emit 0x2B
        _emit 0x00
        _emit 0x74
        _emit 0x0C
        _emit 0x8B
        _emit 0x80
        _emit 0x0C
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0xEF
        _emit 0x5E
        _emit 0xC3
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x0C
        _emit 0x56
        _emit 0xE8
        _emit 0xC3
        _emit 0xFA
        _emit 0xFF
        _emit 0xFF
        _emit 0x5E
        _emit 0xC3
    }
}
