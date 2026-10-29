/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013C1D0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xFF
        _emit 0x40
        _emit 0x38
        _emit 0xC2
        _emit 0x0C
        _emit 0x00
    }
}
