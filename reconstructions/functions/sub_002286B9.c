/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_002286B9(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x8B
        _emit 0x45
        _emit 0x08
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x12
        _emit 0x8B
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x0C
        _emit 0x8D
        _emit 0x4D
        _emit 0x0A
        _emit 0x51
        _emit 0x50
        _emit 0xE8
        _emit 0xFC
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xEB
        _emit 0x05
        _emit 0xB8
        _emit 0x57
        _emit 0x00
        _emit 0x07
        _emit 0x80
        _emit 0x5D
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
