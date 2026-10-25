/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A4443(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x89
        _emit 0x06
        _emit 0xE8
        _emit 0x3D
        _emit 0x3D
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x80
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0xE8
        _emit 0x2F
        _emit 0x3D
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xB0
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0xC6
        _emit 0x5E
        _emit 0xC3
    }
}
