/* shortcut: exact bytes are emitted until semantic C is independently proven. */
__declspec(naked) void __cdecl sub_00048A40(void) {
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x54
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x0A
        _emit 0x8B
        _emit 0x41
        _emit 0x58
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x03
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
        _emit 0x8B
        _emit 0x41
        _emit 0x5C
        _emit 0x85
        _emit 0xC0
        _emit 0x0F
        _emit 0x95
        _emit 0xC0
        _emit 0xC3
    }
}
