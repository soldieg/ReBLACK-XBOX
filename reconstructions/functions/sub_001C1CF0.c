/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001C1CF0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x20
        _emit 0x56
        _emit 0x0F
        _emit 0xBE
        _emit 0x30
        _emit 0x6A
        _emit 0x01
        _emit 0x6A
        _emit 0x00
        _emit 0xE8
        _emit 0x50
        _emit 0xD9
        _emit 0xF6
        _emit 0xFF
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
    }
}
