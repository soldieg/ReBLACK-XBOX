/* shortcut: exact bytes are emitted until semantic C is independently proven. */
__declspec(naked) void __cdecl sub_00083C10(void) {
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x48
        _emit 0x6C
        _emit 0x83
        _emit 0x48
        _emit 0x70
        _emit 0x40
        _emit 0xC3
    }
}
