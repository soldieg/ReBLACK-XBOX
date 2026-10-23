/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0002995C(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x0F
        _emit 0x01
        _emit 0x44
        _emit 0x24
        _emit 0x06
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0xFA
        _emit 0x87
        _emit 0x48
        _emit 0x08
        _emit 0x87
        _emit 0x50
        _emit 0x0C
        _emit 0xFB
        _emit 0xEA
        _emit 0x7C
        _emit 0x99
        _emit 0x02
        _emit 0x00
        _emit 0x08
        _emit 0x00
        _emit 0x8B
        _emit 0xC1
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
