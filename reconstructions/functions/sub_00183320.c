/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00183320(void)
{
    __asm {
        _emit 0x8D
        _emit 0x04
        _emit 0x40
        _emit 0x8D
        _emit 0x44
        _emit 0x81
        _emit 0x04
        _emit 0xC3
    }
}
