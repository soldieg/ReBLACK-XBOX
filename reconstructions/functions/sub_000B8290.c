/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B8290(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x14
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x40
        _emit 0x68
        _emit 0x8B
        _emit 0x49
        _emit 0x14
        _emit 0x83
        _emit 0x49
        _emit 0x70
        _emit 0x20
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
