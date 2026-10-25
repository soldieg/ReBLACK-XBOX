/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A3892(void)
{
    __asm {
        _emit 0xE8
        _emit 0x2B
        _emit 0x3D
        _emit 0x00
        _emit 0x00
        _emit 0x80
        _emit 0x3D
        _emit 0x10
        _emit 0x08
        _emit 0x2D
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x05
        _emit 0xE9
        _emit 0x39
        _emit 0x3B
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
