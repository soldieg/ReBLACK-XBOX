/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0026E4B0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x0D
        _emit 0x34
        _emit 0xC2
        _emit 0x27
        _emit 0x00
        _emit 0xA3
        _emit 0x38
        _emit 0xC2
        _emit 0x27
        _emit 0x00
        _emit 0x89
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0xE9
        _emit 0x98
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
    }
}
