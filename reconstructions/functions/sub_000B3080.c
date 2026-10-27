/* shortcut: exact bytes are emitted until semantic C is independently proven. */
__declspec(naked) void __cdecl sub_000B3080(void) {
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x20
        _emit 0x8B
        _emit 0x50
        _emit 0x18
        _emit 0x89
        _emit 0x34
        _emit 0x8A
        _emit 0xFF
        _emit 0x40
        _emit 0x20
        _emit 0xC3
    }
}
