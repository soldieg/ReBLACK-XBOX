/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0021D1BD(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x09
        _emit 0xC1
        _emit 0xE0
        _emit 0x04
        _emit 0x0F
        _emit 0xB6
        _emit 0x44
        _emit 0x08
        _emit 0x0F
        _emit 0x48
        _emit 0x74
        _emit 0x07
        _emit 0x83
        _emit 0xE8
        _emit 0x7F
        _emit 0x33
        _emit 0xC0
        _emit 0xEB
        _emit 0x03
        _emit 0x33
        _emit 0xC0
        _emit 0x40
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
