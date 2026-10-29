/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F4690(void)
{
    __asm {
        _emit 0x8B
        _emit 0x91
        _emit 0x90
        _emit 0x10
        _emit 0x02
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0x83
        _emit 0xFA
        _emit 0x01
        _emit 0x0F
        _emit 0x94
        _emit 0xC0
        _emit 0xC3
    }
}
