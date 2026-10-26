/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00243107(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0xE8
        _emit 0xC8
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x0C
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0xE8
        _emit 0xBB
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x40
        _emit 0xEB
        _emit 0x02
        _emit 0x33
        _emit 0xC0
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
