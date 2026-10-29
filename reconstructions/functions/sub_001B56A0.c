/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B56A0(void)
{
    __asm {
        _emit 0x66
        _emit 0x8B
        _emit 0x14
        _emit 0x41
        _emit 0x66
        _emit 0x2B
        _emit 0x14
        _emit 0x45
        _emit 0x04
        _emit 0x8D
        _emit 0x28
        _emit 0x00
        _emit 0x66
        _emit 0xF7
        _emit 0xDA
        _emit 0x1B
        _emit 0xD2
        _emit 0x42
        _emit 0x8A
        _emit 0xC2
        _emit 0xC3
    }
}
