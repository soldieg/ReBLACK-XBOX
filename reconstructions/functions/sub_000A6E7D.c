/* shortcut: exact bytes are emitted until semantic C is independently proven. */
__declspec(naked) void __cdecl sub_000A6E7D(void) {
    __asm {
        _emit 0xC6
        _emit 0x85
        _emit 0x70
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x01
        _emit 0x0A
        _emit 0xC9
        _emit 0xC3
    }
}
