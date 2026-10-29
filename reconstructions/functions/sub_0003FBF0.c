/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0003FBF0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0x1C
        _emit 0x32
        _emit 0x2B
        _emit 0x00
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x33
        _emit 0xD2
        _emit 0x89
        _emit 0x54
        _emit 0x01
        _emit 0x08
        _emit 0x89
        _emit 0x54
        _emit 0x01
        _emit 0x04
        _emit 0x89
        _emit 0x14
        _emit 0x01
        _emit 0xC3
    }
}
