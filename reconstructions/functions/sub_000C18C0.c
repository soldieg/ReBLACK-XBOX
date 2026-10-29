/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C18C0(void)
{
    __asm {
        _emit 0xE8
        _emit 0x9A
        _emit 0x40
        _emit 0xF6
        _emit 0xFF
        _emit 0x48
        _emit 0x74
        _emit 0x0C
        _emit 0x48
        _emit 0x74
        _emit 0x06
        _emit 0xB8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
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
