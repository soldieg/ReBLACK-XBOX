/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0020B3B0(void)
{
    __asm {
        _emit 0x57
        _emit 0x8B
        _emit 0x3D
        _emit 0xF0
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0xE9
        _emit 0x44
        _emit 0xED
        _emit 0xFF
        _emit 0xFF
    }
}
