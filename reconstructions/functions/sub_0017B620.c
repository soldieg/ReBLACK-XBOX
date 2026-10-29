/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0017B620(void)
{
    __asm {
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x68
        _emit 0x54
        _emit 0xFB
        _emit 0x28
        _emit 0x00
        _emit 0x8D
        _emit 0x41
        _emit 0x60
        _emit 0x50
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x10
        _emit 0x52
        _emit 0x51
        _emit 0x8B
        _emit 0x0D
        _emit 0x28
        _emit 0x81
        _emit 0x2A
        _emit 0x00
        _emit 0xE8
        _emit 0x62
        _emit 0xF1
        _emit 0xFF
        _emit 0xFF
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
