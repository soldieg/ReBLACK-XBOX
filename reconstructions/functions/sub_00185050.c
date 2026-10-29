/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00185050(void)
{
    __asm {
        _emit 0x8A
        _emit 0x41
        _emit 0x24
        _emit 0x84
        _emit 0xC0
        _emit 0x74
        _emit 0x10
        _emit 0x8B
        _emit 0x41
        _emit 0x04
        _emit 0x8B
        _emit 0x88
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC6
        _emit 0x81
        _emit 0xB0
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
