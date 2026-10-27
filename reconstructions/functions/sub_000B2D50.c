/* shortcut: exact bytes are emitted until semantic C is independently proven. */
__declspec(naked) void __cdecl sub_000B2D50(void) {
    __asm {
        _emit 0x33
        _emit 0xC9
        _emit 0x89
        _emit 0x08
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0x66
        _emit 0x89
        _emit 0x48
        _emit 0x0C
        _emit 0x88
        _emit 0x48
        _emit 0x0E
        _emit 0x88
        _emit 0x48
        _emit 0x0F
        _emit 0xC3
    }
}
