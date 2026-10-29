/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00160300(void)
{
    __asm {
        _emit 0x8B
        _emit 0x88
        _emit 0x90
        _emit 0xD5
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0xE8
        _emit 0xA4
        _emit 0xCD
        _emit 0xF6
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
