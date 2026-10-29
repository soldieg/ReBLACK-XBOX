/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0015A350(void)
{
    __asm {
        _emit 0x0F
        _emit 0xBE
        _emit 0x08
        _emit 0x8B
        _emit 0x8C
        _emit 0x8A
        _emit 0x10
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x11
        _emit 0x50
        _emit 0xFF
        _emit 0x52
        _emit 0x0C
        _emit 0xC3
    }
}
