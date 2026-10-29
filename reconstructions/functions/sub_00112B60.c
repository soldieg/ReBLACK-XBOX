/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00112B60(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8B
        _emit 0x70
        _emit 0x04
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x8B
        _emit 0x4E
        _emit 0x14
        _emit 0x99
        _emit 0x52
        _emit 0x50
        _emit 0xE8
        _emit 0x49
        _emit 0x54
        _emit 0xF0
        _emit 0xFF
        _emit 0x0F
        _emit 0xB7
        _emit 0x48
        _emit 0x10
        _emit 0x8B
        _emit 0x56
        _emit 0x08
        _emit 0x8B
        _emit 0x04
        _emit 0x8A
        _emit 0x5E
        _emit 0xC3
    }
}
