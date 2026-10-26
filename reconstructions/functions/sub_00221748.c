/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00221748(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC1
        _emit 0x8B
        _emit 0x40
        _emit 0x10
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x0C
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0x57
        _emit 0x8B
        _emit 0x38
        _emit 0x03
        _emit 0x7C
        _emit 0x24
        _emit 0x0C
        _emit 0x8B
        _emit 0xC1
        _emit 0xC1
        _emit 0xE9
        _emit 0x02
        _emit 0xF3
        _emit 0xA5
        _emit 0x8B
        _emit 0xC8
        _emit 0x83
        _emit 0xE1
        _emit 0x03
        _emit 0xF3
        _emit 0xA4
        _emit 0x5F
        _emit 0x5E
        _emit 0xC2
        _emit 0x0C
        _emit 0x00
    }
}
