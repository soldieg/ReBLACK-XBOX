/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F4740(void)
{
    __asm {
        _emit 0x8B
        _emit 0x8E
        _emit 0x70
        _emit 0x10
        _emit 0x02
        _emit 0x00
        _emit 0x8B
        _emit 0x01
        _emit 0xFF
        _emit 0x50
        _emit 0x0C
        _emit 0x84
        _emit 0xC0
        _emit 0x75
        _emit 0x01
        _emit 0xC3
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x86
        _emit 0x84
        _emit 0x10
        _emit 0x02
        _emit 0x00
        _emit 0xC3
    }
}
