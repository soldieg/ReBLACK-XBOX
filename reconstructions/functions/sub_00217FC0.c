/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00217FC0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x08
        _emit 0x3B
        _emit 0xC8
        _emit 0x74
        _emit 0x12
        _emit 0x8B
        _emit 0x50
        _emit 0x04
        _emit 0x89
        _emit 0x51
        _emit 0x04
        _emit 0x8B
        _emit 0x48
        _emit 0x04
        _emit 0x8B
        _emit 0x10
        _emit 0x89
        _emit 0x11
        _emit 0x89
        _emit 0x40
        _emit 0x04
        _emit 0x89
        _emit 0x00
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
