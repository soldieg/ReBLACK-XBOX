/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00184CD0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x04
        _emit 0x8B
        _emit 0x88
        _emit 0xA4
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0xC6
        _emit 0x41
        _emit 0x4B
        _emit 0x01
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
