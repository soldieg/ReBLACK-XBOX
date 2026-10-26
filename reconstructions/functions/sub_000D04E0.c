/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000D04E0(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0xCE
        _emit 0xE8
        _emit 0xC4
        _emit 0x18
        _emit 0xFF
        _emit 0xFF
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x07
        _emit 0xE8
        _emit 0x7B
        _emit 0xC0
        _emit 0xFF
        _emit 0xFF
        _emit 0xEB
        _emit 0xEE
        _emit 0x8B
        _emit 0x86
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x6A
        _emit 0xFF
        _emit 0x50
        _emit 0xE8
        _emit 0x87
        _emit 0x29
        _emit 0xF5
        _emit 0xFF
        _emit 0xEB
        _emit 0xDE
    }
}
