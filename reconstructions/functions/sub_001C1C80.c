/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001C1C80(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x20
        _emit 0x8B
        _emit 0x0D
        _emit 0x88
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0x0F
        _emit 0x28
        _emit 0x40
        _emit 0x10
        _emit 0x0F
        _emit 0x29
        _emit 0x81
        _emit 0x40
        _emit 0x2B
        _emit 0x02
        _emit 0x00
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
