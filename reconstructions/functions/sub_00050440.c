/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00050440(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0x50
        _emit 0x51
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x0C
        _emit 0xE8
        _emit 0xDD
        _emit 0x2E
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
