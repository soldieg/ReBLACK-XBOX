/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00189B00(void)
{
    __asm {
        _emit 0x8B
        _emit 0x40
        _emit 0x70
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x04
        _emit 0x8B
        _emit 0x04
        _emit 0x88
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
