/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001816E0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x20
        _emit 0x8B
        _emit 0x4C
        _emit 0x88
        _emit 0x24
        _emit 0x8B
        _emit 0x11
        _emit 0x56
        _emit 0xFF
        _emit 0x52
        _emit 0x28
        _emit 0x8B
        _emit 0xC6
        _emit 0xC3
    }
}
