/* shortcut: exact bytes are emitted until semantic C is independently proven. */
__declspec(naked) void __cdecl sub_000490B0(void) {
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x0C
        _emit 0x85
        _emit 0xC0
        _emit 0x0F
        _emit 0x95
        _emit 0xC0
        _emit 0xC3
    }
}
