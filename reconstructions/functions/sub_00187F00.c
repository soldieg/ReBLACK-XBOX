/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00187F00(void)
{
    __asm {
        _emit 0x89
        _emit 0x48
        _emit 0x30
        _emit 0x8B
        _emit 0x50
        _emit 0x04
        _emit 0x8B
        _emit 0x4A
        _emit 0x14
        _emit 0x89
        _emit 0x48
        _emit 0x28
        _emit 0x32
        _emit 0xC9
        _emit 0xC6
        _emit 0x40
        _emit 0x35
        _emit 0x01
        _emit 0x88
        _emit 0x48
        _emit 0x36
        _emit 0x88
        _emit 0x48
        _emit 0x37
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
