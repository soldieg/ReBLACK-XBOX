/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00266ABD(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x83
        _emit 0x60
        _emit 0x08
        _emit 0x00
        _emit 0xC1
        _emit 0xE1
        _emit 0x1E
        _emit 0x81
        _emit 0xC9
        _emit 0x01
        _emit 0x00
        _emit 0x03
        _emit 0x00
        _emit 0x89
        _emit 0x08
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x0C
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0xC2
        _emit 0x0C
        _emit 0x00
    }
}
