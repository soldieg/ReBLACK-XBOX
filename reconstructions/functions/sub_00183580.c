/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00183580(void)
{
    __asm {
        _emit 0x8B
        _emit 0x91
        _emit 0x68
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0x85
        _emit 0xD2
        _emit 0x0F
        _emit 0x94
        _emit 0xC0
        _emit 0xC3
    }
}
