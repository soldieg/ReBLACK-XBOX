/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BEA80(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x04
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x18
        _emit 0x8B
        _emit 0x49
        _emit 0x08
        _emit 0x8B
        _emit 0x10
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0x56
        _emit 0x51
        _emit 0x6A
        _emit 0x05
        _emit 0x8B
        _emit 0xC8
        _emit 0xFF
        _emit 0x12
        _emit 0x5E
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
