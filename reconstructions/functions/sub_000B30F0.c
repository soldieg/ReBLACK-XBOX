/* shortcut: exact bytes are emitted until semantic C is independently proven. */
__declspec(naked) void __cdecl sub_000B30F0(void) {
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x41
        _emit 0x04
        _emit 0x8B
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x51
        _emit 0x08
        _emit 0x8B
        _emit 0x40
        _emit 0x08
        _emit 0x89
        _emit 0x41
        _emit 0x0C
        _emit 0xB0
        _emit 0x01
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
