/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00183CF0(void)
{
    __asm {
        _emit 0x0F
        _emit 0xBE
        _emit 0x41
        _emit 0x29
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x39
        _emit 0x82
        _emit 0x04
        _emit 0x1F
        _emit 0x00
        _emit 0x00
        _emit 0x75
        _emit 0x04
        _emit 0xC6
        _emit 0x41
        _emit 0x29
        _emit 0xFF
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
