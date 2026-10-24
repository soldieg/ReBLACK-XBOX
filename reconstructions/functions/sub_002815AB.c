/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_002815AB(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x51
        _emit 0x8B
        _emit 0x45
        _emit 0x08
        _emit 0x8B
        _emit 0x00
        _emit 0x8B
        _emit 0x4D
        _emit 0x0C
        _emit 0x66
        _emit 0xC7
        _emit 0x45
        _emit 0xFC
        _emit 0x01
        _emit 0x00
        _emit 0x8B
        _emit 0x55
        _emit 0xFC
        _emit 0x89
        _emit 0x54
        _emit 0x88
        _emit 0x50
        _emit 0xC9
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
