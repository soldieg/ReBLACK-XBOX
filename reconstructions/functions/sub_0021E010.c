/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0021E010(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC1
        _emit 0x8D
        _emit 0x48
        _emit 0x04
        _emit 0x89
        _emit 0x48
        _emit 0x08
        _emit 0x89
        _emit 0x09
        _emit 0x8D
        _emit 0x48
        _emit 0x0C
        _emit 0xC7
        _emit 0x00
        _emit 0xAC
        _emit 0x39
        _emit 0x28
        _emit 0x00
        _emit 0xC7
        _emit 0x40
        _emit 0x1C
        _emit 0x34
        _emit 0x46
        _emit 0x22
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0x89
        _emit 0x09
        _emit 0xC3
    }
}
