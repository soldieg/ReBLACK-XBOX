/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0010FFF0(void)
{
    __asm {
        _emit 0x51
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x66
        _emit 0xFF
        _emit 0x05
        _emit 0xEC
        _emit 0xC7
        _emit 0x2A
        _emit 0x00
        _emit 0x53
        _emit 0x56
        _emit 0x57
        _emit 0x50
    }
}
