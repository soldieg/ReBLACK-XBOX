/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013D4A0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x58
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x81
        _emit 0xA0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
