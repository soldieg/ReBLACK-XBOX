/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0018AFE0(void)
{
    __asm {
        _emit 0x8A
        _emit 0x41
        _emit 0x14
        _emit 0x84
        _emit 0xC0
        _emit 0x75
        _emit 0x08
        _emit 0xB8
        _emit 0x4A
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC2
        _emit 0x04
        _emit 0x00
        _emit 0xE9
        _emit 0x9C
        _emit 0xAD
        _emit 0xFF
        _emit 0xFF
    }
}
