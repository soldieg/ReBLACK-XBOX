/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013C780(void)
{
    __asm {
        _emit 0x8B
        _emit 0x88
        _emit 0x10
        _emit 0x1E
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x01
        _emit 0x8B
        _emit 0x51
        _emit 0x04
        _emit 0xC3
    }
}
