/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001C2B60(void)
{
    __asm {
        _emit 0x57
        _emit 0x0F
        _emit 0xBE
        _emit 0xF8
        _emit 0x88
        _emit 0x46
        _emit 0x18
        _emit 0xB8
        _emit 0xE8
        _emit 0x12
        _emit 0x2D
        _emit 0x00
        _emit 0xE8
        _emit 0x4F
        _emit 0x14
        _emit 0x03
        _emit 0x00
        _emit 0x89
        _emit 0x46
        _emit 0x14
        _emit 0x5F
        _emit 0xC3
    }
}
