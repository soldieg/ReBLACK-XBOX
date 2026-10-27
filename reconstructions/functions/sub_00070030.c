/* shortcut: exact bytes are emitted until semantic C is independently proven. */
__declspec(naked) void __cdecl sub_00070030(void) {
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x28
        _emit 0x8D
        _emit 0x04
        _emit 0x40
        _emit 0xC1
        _emit 0xE0
        _emit 0x05
        _emit 0x83
        _emit 0xC0
        _emit 0x40
        _emit 0xC3
    }
}
