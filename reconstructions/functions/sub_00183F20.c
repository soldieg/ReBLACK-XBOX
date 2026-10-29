/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00183F20(void)
{
    __asm {
        _emit 0x8B
        _emit 0x40
        _emit 0x18
        _emit 0x8B
        _emit 0x48
        _emit 0x14
        _emit 0x8B
        _emit 0x0C
        _emit 0xD1
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x0F
        _emit 0xB7
        _emit 0x0C
        _emit 0x51
        _emit 0x8B
        _emit 0x50
        _emit 0x18
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x04
        _emit 0x8A
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
