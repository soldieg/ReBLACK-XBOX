/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00184730(void)
{
    __asm {
        _emit 0xA0
        _emit 0x5C
        _emit 0x68
        _emit 0x2D
        _emit 0x00
        _emit 0xC3
    }
}
