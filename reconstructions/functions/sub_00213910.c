/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00213910(void)
{
    __asm {
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x05
        _emit 0x98
        _emit 0xDF
        _emit 0x2A
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x5C
        _emit 0x05
        _emit 0x90
        _emit 0xDF
        _emit 0x2A
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x59
        _emit 0x05
        _emit 0x30
        _emit 0x27
        _emit 0x56
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x05
        _emit 0x24
        _emit 0x27
        _emit 0x56
        _emit 0x00
        _emit 0xC3
    }
}
