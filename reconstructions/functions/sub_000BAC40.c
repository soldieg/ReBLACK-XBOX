/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BAC40(void)
{
    __asm {
        _emit 0x8B
        _emit 0x06
        _emit 0x8B
        _emit 0xCE
        _emit 0xFF
        _emit 0x50
        _emit 0x0C
        _emit 0x8D
        _emit 0x86
        _emit 0x08
        _emit 0xB3
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x9E
        _emit 0xFA
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x16
        _emit 0x8B
        _emit 0xCE
        _emit 0xFF
        _emit 0x62
        _emit 0x10
    }
}
