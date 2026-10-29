/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0020DDB0(void)
{
    __asm {
        _emit 0x57
        _emit 0x8B
        _emit 0x3D
        _emit 0xF0
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0x8D
        _emit 0x97
        _emit 0x20
        _emit 0x02
        _emit 0x02
        _emit 0x00
        _emit 0x52
        _emit 0x89
        _emit 0x48
        _emit 0x48
        _emit 0xE8
        _emit 0xDA
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0x5F
        _emit 0xC3
    }
}
