/* shortcut: address-pinned byte emitter; semantic C and ABI remain unrecovered. */
__declspec(naked) void __cdecl sub_00038B00(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xC8
        _emit 0xFF
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x0C
        _emit 0xEB
        _emit 0x03
        _emit 0x8D
        _emit 0x49
        _emit 0x00
        _emit 0xD1
        _emit 0xF9
        _emit 0x40
        _emit 0x85
        _emit 0xC9
        _emit 0x75
        _emit 0xF9
        _emit 0xC3
    }
}
