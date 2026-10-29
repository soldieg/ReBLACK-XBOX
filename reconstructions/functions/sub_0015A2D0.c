/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0015A2D0(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF0
        _emit 0xE8
        _emit 0xB8
        _emit 0x8F
        _emit 0xF6
        _emit 0xFF
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x05
        _emit 0x74
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x86
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5E
        _emit 0xC3
    }
}
