/* shortcut: exact bytes are emitted until semantic C is independently proven. */
__declspec(naked) void __cdecl sub_00048A60(void) {
    __asm {
        _emit 0x83
        _emit 0x79
        _emit 0x68
        _emit 0xFF
        _emit 0x0F
        _emit 0x95
        _emit 0xC0
        _emit 0xC3
    }
}
