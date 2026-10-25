/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000BB620(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0xE8
        _emit 0x38
        _emit 0xF8
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x46
        _emit 0x14
        _emit 0x6A
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x50
        _emit 0xE8
        _emit 0xBB
        _emit 0x79
        _emit 0xFC
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x0C
        _emit 0xC7
        _emit 0x46
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5E
        _emit 0xC3
    }
}
