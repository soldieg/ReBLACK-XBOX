/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000D9970(void)
{
    __asm {
        _emit 0x8B
        _emit 0x46
        _emit 0x14
        _emit 0x50
        _emit 0xE8
        _emit 0x37
        _emit 0x2B
        _emit 0x19
        _emit 0x00
        _emit 0xC7
        _emit 0x46
        _emit 0x14
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
