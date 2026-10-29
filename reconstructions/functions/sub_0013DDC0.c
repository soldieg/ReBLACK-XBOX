/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013DDC0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0xC1
        _emit 0x04
        _emit 0x2B
        _emit 0x41
        _emit 0x24
        _emit 0xF7
        _emit 0xD8
        _emit 0x1B
        _emit 0xC0
        _emit 0x40
        _emit 0xC3
    }
}
