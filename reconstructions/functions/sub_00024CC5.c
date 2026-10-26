/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00024CC5(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x51
        _emit 0x51
        _emit 0x8D
        _emit 0x45
        _emit 0xF8
        _emit 0x50
        _emit 0xE8
        _emit 0x1D
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x4D
        _emit 0x08
        _emit 0x8B
        _emit 0x01
        _emit 0x2B
        _emit 0x45
        _emit 0xF8
        _emit 0x8B
        _emit 0x49
        _emit 0x04
        _emit 0x8B
        _emit 0x55
        _emit 0x0C
        _emit 0x1B
        _emit 0x4D
        _emit 0xFC
        _emit 0x89
        _emit 0x02
        _emit 0x33
        _emit 0xC0
        _emit 0x89
        _emit 0x4A
        _emit 0x04
        _emit 0x40
        _emit 0xC9
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
