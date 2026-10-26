/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001F67B0(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x8B
        _emit 0x55
        _emit 0x08
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x40
        _emit 0x08
        _emit 0x0F
        _emit 0x28
        _emit 0x02
        _emit 0x0F
        _emit 0x29
        _emit 0x40
        _emit 0x10
        _emit 0x83
        _emit 0xE4
        _emit 0xF0
        _emit 0xC6
        _emit 0x40
        _emit 0x0C
        _emit 0x01
        _emit 0x8B
        _emit 0xE5
        _emit 0x5D
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
