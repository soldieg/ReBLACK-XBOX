/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002258AC(void)
{
    __asm {
        _emit 0xB8
        _emit 0x01
        _emit 0x40
        _emit 0x00
        _emit 0x80
        _emit 0xC2
        _emit 0x0C
        _emit 0x00
    }
}
