/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00213E60(void)
{
    __asm {
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x05
        _emit 0xA0
        _emit 0x81
        _emit 0x28
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x05
        _emit 0x60
        _emit 0x29
        _emit 0x56
        _emit 0x00
        _emit 0xC3
    }
}
