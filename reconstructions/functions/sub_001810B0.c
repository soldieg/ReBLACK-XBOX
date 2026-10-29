/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001810B0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x04
        _emit 0x0F
        _emit 0xBE
        _emit 0x40
        _emit 0x29
        _emit 0x8B
        _emit 0x49
        _emit 0x08
        _emit 0x2B
        _emit 0x81
        _emit 0x04
        _emit 0x1F
        _emit 0x00
        _emit 0x00
        _emit 0xF7
        _emit 0xD8
        _emit 0x1B
        _emit 0xC0
        _emit 0x40
        _emit 0xC3
    }
}
