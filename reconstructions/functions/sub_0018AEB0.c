/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0018AEB0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x04
        _emit 0x0F
        _emit 0xBE
        _emit 0x50
        _emit 0x29
        _emit 0x8B
        _emit 0x41
        _emit 0x08
        _emit 0x3B
        _emit 0x90
        _emit 0x04
        _emit 0x1F
        _emit 0x00
        _emit 0x00
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
        _emit 0xC1
        _emit 0xAE
        _emit 0xFF
        _emit 0xFF
    }
}
