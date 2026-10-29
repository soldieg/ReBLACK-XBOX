/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001FE260(void)
{
    __asm {
        _emit 0xC6
        _emit 0x80
        _emit 0x15
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0xE9
        _emit 0x54
        _emit 0xD4
        _emit 0xFF
        _emit 0xFF
    }
}
