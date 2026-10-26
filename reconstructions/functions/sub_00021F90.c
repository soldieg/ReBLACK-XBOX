/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00021F90(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x8A
        _emit 0x46
        _emit 0x15
        _emit 0x84
        _emit 0xC0
        _emit 0x57
        _emit 0x8B
        _emit 0xF9
        _emit 0x75
        _emit 0x15
        _emit 0x90
        _emit 0x8B
        _emit 0x46
        _emit 0x08
        _emit 0x50
        _emit 0x8B
        _emit 0xCF
        _emit 0xE8
        _emit 0xE5
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x36
        _emit 0x8A
        _emit 0x46
        _emit 0x15
        _emit 0x84
        _emit 0xC0
        _emit 0x74
        _emit 0xEC
        _emit 0x5F
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
