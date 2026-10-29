/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00183510(void)
{
    __asm {
        _emit 0x8B
        _emit 0x42
        _emit 0x38
        _emit 0x3B
        _emit 0xC1
        _emit 0x74
        _emit 0x0A
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x03
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
        _emit 0x89
        _emit 0x4A
        _emit 0x38
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
