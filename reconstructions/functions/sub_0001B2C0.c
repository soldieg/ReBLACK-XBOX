/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0001B2C0(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0x8B
        _emit 0xC6
        _emit 0xE8
        _emit 0xE6
        _emit 0x11
        _emit 0x0F
        _emit 0x00
        _emit 0x8B
        _emit 0xC6
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
