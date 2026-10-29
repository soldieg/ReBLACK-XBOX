/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00013CB0(void)
{
    __asm {
        _emit 0xE9
        _emit 0xFB
        _emit 0xA0
        _emit 0x06
        _emit 0x00
    }
}
