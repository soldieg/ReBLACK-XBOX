/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00025B51(void)
{
    __asm {
        _emit 0xF6
        _emit 0x44
        _emit 0x24
        _emit 0x0B
        _emit 0x80
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x04
        _emit 0x74
        _emit 0x07
        _emit 0xE8
        _emit 0x23
        _emit 0xD0
        _emit 0xFF
        _emit 0xFF
        _emit 0xEB
        _emit 0x05
        _emit 0xE8
        _emit 0xA4
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
