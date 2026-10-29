/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E47A0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x48
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x0D
        _emit 0x3D
        _emit 0x0D
        _emit 0xF0
        _emit 0xAD
        _emit 0xBA
        _emit 0x74
        _emit 0x06
        _emit 0x8B
        _emit 0xC8
        _emit 0x8B
        _emit 0x01
        _emit 0xFF
        _emit 0x20
        _emit 0xC3
    }
}
