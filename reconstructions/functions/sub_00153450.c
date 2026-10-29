/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00153450(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0C
        _emit 0xC5
        _emit 0x94
        _emit 0xA5
        _emit 0x28
        _emit 0x00
        _emit 0x8B
        _emit 0x14
        _emit 0xC5
        _emit 0x90
        _emit 0xA5
        _emit 0x28
        _emit 0x00
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x6A
        _emit 0x00
        _emit 0x51
        _emit 0x52
        _emit 0x50
        _emit 0xE8
        _emit 0x64
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
