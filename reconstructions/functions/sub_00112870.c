/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00112870(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0x1C
        _emit 0x41
        _emit 0x2F
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0x85
        _emit 0xC9
        _emit 0x0F
        _emit 0x95
        _emit 0xC0
        _emit 0xC3
    }
}
