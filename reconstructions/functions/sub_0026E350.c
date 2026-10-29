/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0026E350(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0xA1
        _emit 0xF8
        _emit 0xBF
        _emit 0x27
        _emit 0x00
        _emit 0x89
        _emit 0x0D
        _emit 0x74
        _emit 0xC2
        _emit 0x27
        _emit 0x00
        _emit 0x8B
        _emit 0x90
        _emit 0x04
        _emit 0x1A
        _emit 0x00
        _emit 0x00
        _emit 0x3B
        _emit 0x90
        _emit 0x14
        _emit 0x1A
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x0D
        _emit 0xC7
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE9
        _emit 0x06
        _emit 0x0B
        _emit 0x00
        _emit 0x00
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
