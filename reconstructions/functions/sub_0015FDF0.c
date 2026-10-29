/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0015FDF0(void)
{
    __asm {
        _emit 0x0F
        _emit 0x28
        _emit 0x00
        _emit 0x0F
        _emit 0x29
        _emit 0x01
        _emit 0x0F
        _emit 0x28
        _emit 0x40
        _emit 0x10
        _emit 0x0F
        _emit 0x29
        _emit 0x41
        _emit 0x10
        _emit 0x0F
        _emit 0x28
        _emit 0x40
        _emit 0x20
        _emit 0x0F
        _emit 0x29
        _emit 0x41
        _emit 0x20
        _emit 0x0F
        _emit 0x28
        _emit 0x40
        _emit 0x30
        _emit 0x0F
        _emit 0x29
        _emit 0x41
        _emit 0x30
        _emit 0xC3
    }
}
