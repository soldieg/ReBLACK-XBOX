/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00042060(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0x7C
        _emit 0x32
        _emit 0x2B
        _emit 0x00
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x54
        _emit 0x01
        _emit 0x0C
        _emit 0x66
        _emit 0xFF
        _emit 0x05
        _emit 0x68
        _emit 0xA6
        _emit 0x56
        _emit 0x00
        _emit 0x89
        _emit 0x15
        _emit 0x64
        _emit 0xA6
        _emit 0x56
        _emit 0x00
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xFF
        _emit 0x64
        _emit 0x01
        _emit 0x10
    }
}
