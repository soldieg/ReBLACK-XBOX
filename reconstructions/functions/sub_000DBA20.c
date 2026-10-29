/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000DBA20(void)
{
    __asm {
        _emit 0x0F
        _emit 0x28
        _emit 0x00
        _emit 0x8B
        _emit 0x51
        _emit 0x34
        _emit 0x8B
        _emit 0x42
        _emit 0x0C
        _emit 0x8B
        _emit 0x40
        _emit 0x58
        _emit 0x0F
        _emit 0x28
        _emit 0x48
        _emit 0x20
        _emit 0x0F
        _emit 0x15
        _emit 0xC8
        _emit 0x0F
        _emit 0xC6
        _emit 0xC1
        _emit 0x94
        _emit 0x0F
        _emit 0x29
        _emit 0x40
        _emit 0x20
        _emit 0xC3
    }
}
