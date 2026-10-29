/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0009E344(void)
{
    __asm {
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x04
        _emit 0xE8
        _emit 0xD5
        _emit 0x41
        _emit 0xF8
        _emit 0xFF
        _emit 0xCC
        _emit 0xC3
    }
}
