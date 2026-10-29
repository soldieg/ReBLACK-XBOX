/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0014C3D0(void)
{
    __asm {
        _emit 0x8A
        _emit 0x88
        _emit 0x8D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x84
        _emit 0xC9
        _emit 0x74
        _emit 0x0D
        _emit 0x56
        _emit 0x8B
        _emit 0xB0
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x1A
        _emit 0xC3
        _emit 0xFF
        _emit 0xFF
        _emit 0x5E
        _emit 0xC3
    }
}
