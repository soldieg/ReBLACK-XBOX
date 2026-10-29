/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0002B3D8(void)
{
    __asm {
        _emit 0xB8
        _emit 0x00
        _emit 0x0A
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
