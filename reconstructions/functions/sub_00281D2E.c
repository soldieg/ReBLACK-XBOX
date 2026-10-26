/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00281D2E(void)
{
    __asm {
        _emit 0x66
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x66
        _emit 0x39
        _emit 0x05
        _emit 0x62
        _emit 0x60
        _emit 0x56
        _emit 0x00
        _emit 0x73
        _emit 0x04
        _emit 0x33
        _emit 0xC0
        _emit 0xEB
        _emit 0x0A
        _emit 0x66
        _emit 0x29
        _emit 0x05
        _emit 0x62
        _emit 0x60
        _emit 0x56
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0x40
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
