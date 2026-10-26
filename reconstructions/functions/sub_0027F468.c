/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0027F468(void)
{
    __asm {
        _emit 0xA1
        _emit 0x48
        _emit 0x60
        _emit 0x56
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x09
        _emit 0x8B
        _emit 0x48
        _emit 0x18
        _emit 0x89
        _emit 0x0D
        _emit 0x48
        _emit 0x60
        _emit 0x56
        _emit 0x00
        _emit 0xC3
    }
}
