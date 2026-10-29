/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0026E3E0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x57
        _emit 0x8B
        _emit 0x3D
        _emit 0xF8
        _emit 0xBF
        _emit 0x27
        _emit 0x00
        _emit 0xA3
        _emit 0x80
        _emit 0xC2
        _emit 0x27
        _emit 0x00
        _emit 0xE8
        _emit 0x5B
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x5F
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
