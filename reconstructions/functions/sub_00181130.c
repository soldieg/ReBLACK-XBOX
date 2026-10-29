/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00181130(void)
{
    __asm {
        _emit 0x8A
        _emit 0x41
        _emit 0x14
        _emit 0x84
        _emit 0xC0
        _emit 0x75
        _emit 0x0A
        _emit 0x8A
        _emit 0x41
        _emit 0x15
        _emit 0x84
        _emit 0xC0
        _emit 0x75
        _emit 0x03
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
