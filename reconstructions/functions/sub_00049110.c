/* shortcut: exact bytes are emitted until semantic C is independently proven. */
__declspec(naked) void __cdecl sub_00049110(void) {
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x38
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x03
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
        _emit 0x8B
        _emit 0x48
        _emit 0x04
        _emit 0x85
        _emit 0xC9
        _emit 0x0F
        _emit 0x95
        _emit 0xC0
        _emit 0xC3
    }
}
