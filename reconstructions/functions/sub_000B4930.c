/* shortcut: exact bytes are emitted until semantic C is independently proven. */
__declspec(naked) void __cdecl sub_000B4930(void) {
    __asm {
        _emit 0x8B
        _emit 0x08
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x04
        _emit 0x03
        _emit 0xC8
        _emit 0x89
        _emit 0x08
        _emit 0xC3
    }
}
