/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B3CF0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x08
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x05
        _emit 0x03
        _emit 0xC8
        _emit 0x89
        _emit 0x48
        _emit 0x08
        _emit 0x8B
        _emit 0x48
        _emit 0x04
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x05
        _emit 0x03
        _emit 0xC8
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0x8B
        _emit 0x48
        _emit 0x10
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x05
        _emit 0x03
        _emit 0xC8
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0x8B
        _emit 0x40
        _emit 0x04
        _emit 0xE9
        _emit 0x04
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
    }
}
