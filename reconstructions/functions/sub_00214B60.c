/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00214B60(void)
{
    __asm {
        _emit 0xA1
        _emit 0x68
        _emit 0xC3
        _emit 0x2A
        _emit 0x00
        _emit 0xA3
        _emit 0xAC
        _emit 0x29
        _emit 0x56
        _emit 0x00
        _emit 0xC3
    }
}
