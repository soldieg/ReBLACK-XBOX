/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00181150(void)
{
    __asm {
        _emit 0xB8
        _emit 0x44
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
