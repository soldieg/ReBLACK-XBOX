/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BF650(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xC6
        _emit 0x40
        _emit 0x1E
        _emit 0x00
        _emit 0xFF
        _emit 0x49
        _emit 0x08
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
