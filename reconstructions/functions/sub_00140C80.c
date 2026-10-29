/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00140C80(void)
{
    __asm {
        _emit 0x8B
        _emit 0x01
        _emit 0x8B
        _emit 0x80
        _emit 0xE0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x0F
        _emit 0xAF
        _emit 0x41
        _emit 0x24
        _emit 0xC3
    }
}
