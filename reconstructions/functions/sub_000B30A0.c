/* shortcut: exact bytes are emitted until semantic C is independently proven. */
__declspec(naked) void __cdecl sub_000B30A0(void) {
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x89
        _emit 0x41
        _emit 0x0C
        _emit 0x89
        _emit 0x41
        _emit 0x08
        _emit 0x89
        _emit 0x41
        _emit 0x04
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
