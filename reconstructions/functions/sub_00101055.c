/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00101055(void)
{
    __asm {
        _emit 0x5D
        _emit 0xB0
        _emit 0x01
        _emit 0x5B
        _emit 0x59
        _emit 0xC2
        _emit 0x14
        _emit 0x00
    }
}
