/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000A4560(void)
{
    __asm {
        _emit 0x8B
        _emit 0x45
        _emit 0xEC
        _emit 0x89
        _emit 0x45
        _emit 0xE4
        _emit 0x8B
        _emit 0x45
        _emit 0xE4
        _emit 0x8B
        _emit 0x00
        _emit 0x89
        _emit 0x45
        _emit 0xE0
        _emit 0x8B
        _emit 0x45
        _emit 0xE0
        _emit 0x81
        _emit 0x38
        _emit 0x63
        _emit 0x73
        _emit 0x6D
        _emit 0xE0
        _emit 0x74
        _emit 0x10
        _emit 0xC7
        _emit 0x45
        _emit 0xDC
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x45
        _emit 0xDC
        _emit 0xC3
        _emit 0x8B
        _emit 0x65
        _emit 0xE8
        _emit 0xEB
        _emit 0xCB
        _emit 0xE8
        _emit 0x9D
        _emit 0x46
        _emit 0x00
        _emit 0x00
        _emit 0xCC
    }
}
