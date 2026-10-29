/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00191CE0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x49
        _emit 0x04
        _emit 0x8B
        _emit 0x81
        _emit 0x80
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8D
        _emit 0x04
        _emit 0x40
        _emit 0xC1
        _emit 0xE0
        _emit 0x05
        _emit 0x6A
        _emit 0x00
        _emit 0x8D
        _emit 0x84
        _emit 0x08
        _emit 0x90
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x6A
        _emit 0x00
        _emit 0x81
        _emit 0xC1
        _emit 0x20
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xAB
        _emit 0xB7
        _emit 0xFF
        _emit 0xFF
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
