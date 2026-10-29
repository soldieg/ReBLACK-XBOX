/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0009A2E0(void)
{
    __asm {
        _emit 0x51
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x80
        _emit 0x78
        _emit 0x01
        _emit 0x02
        _emit 0x7D
        _emit 0x04
        _emit 0x33
        _emit 0xC0
        _emit 0x59
        _emit 0xC3
    }
}
