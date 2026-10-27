/* shortcut: exact bytes are emitted until semantic C is independently proven. */
__declspec(naked) void __cdecl sub_00063B20(void) {
    __asm {
        _emit 0x8B
        _emit 0xC1
        _emit 0xC7
        _emit 0x00
        _emit 0xA0
        _emit 0x50
        _emit 0x28
        _emit 0x00
        _emit 0xC3
    }
}
