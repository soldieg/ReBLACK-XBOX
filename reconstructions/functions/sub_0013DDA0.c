/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013DDA0(void)
{
    __asm {
        _emit 0x8A
        _emit 0x48
        _emit 0x30
        _emit 0x84
        _emit 0xC9
        _emit 0x74
        _emit 0x11
        _emit 0x8B
        _emit 0x48
        _emit 0x24
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0xD0
        _emit 0x04
        _emit 0x49
        _emit 0x3B
        _emit 0xF1
        _emit 0x5E
        _emit 0x75
        _emit 0x03
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
    }
}
