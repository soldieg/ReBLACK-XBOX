/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00157AB0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x40
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x41
        _emit 0x08
        _emit 0x0F
        _emit 0x2F
        _emit 0x05
        _emit 0x14
        _emit 0x5D
        _emit 0x29
        _emit 0x00
        _emit 0x76
        _emit 0x06
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
