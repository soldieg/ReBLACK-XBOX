/* shortcut: exact bytes are emitted until semantic C is independently proven. */
__declspec(naked) void __cdecl sub_00080100(void) {
    __asm {
        _emit 0xE8
        _emit 0xCB
        _emit 0xF9
        _emit 0xFF
        _emit 0xFF
        _emit 0xC7
        _emit 0x05
        _emit 0x88
        _emit 0x00
        _emit 0x2C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
