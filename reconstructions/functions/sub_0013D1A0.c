/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013D1A0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x04
        _emit 0x85
        _emit 0xD4
        _emit 0xB3
        _emit 0x2A
        _emit 0x00
        _emit 0xC3
    }
}
