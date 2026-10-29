/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00187980(void)
{
    __asm {
        _emit 0x8B
        _emit 0x50
        _emit 0x0C
        _emit 0x33
        _emit 0xC9
        _emit 0x3B
        _emit 0xD1
        _emit 0x74
        _emit 0x03
        _emit 0x89
        _emit 0x48
        _emit 0x0C
        _emit 0x88
        _emit 0x88
        _emit 0x38
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0xC3
    }
}
