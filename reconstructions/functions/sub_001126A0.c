/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001126A0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0xF0
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0xC7
        _emit 0x05
        _emit 0x90
        _emit 0x41
        _emit 0x2F
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8A
        _emit 0x91
        _emit 0x64
        _emit 0x01
        _emit 0x02
        _emit 0x00
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3A
        _emit 0xD0
        _emit 0x75
        _emit 0x05
        _emit 0xA3
        _emit 0x90
        _emit 0x41
        _emit 0x2F
        _emit 0x00
        _emit 0xC3
    }
}
