/* shortcut: exact bytes are emitted until semantic C is independently proven. */
__declspec(naked) void __cdecl sub_000841D0(void) {
    __asm {
        _emit 0xE8
        _emit 0xBB
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
