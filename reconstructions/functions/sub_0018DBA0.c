/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0018DBA0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x80
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x0F
        _emit 0x28
        _emit 0x00
        _emit 0x0F
        _emit 0x29
        _emit 0x40
        _emit 0x30
        _emit 0xC3
    }
}
