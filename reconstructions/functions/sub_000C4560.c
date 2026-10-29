/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C4560(void)
{
    __asm {
        _emit 0x8B
        _emit 0x46
        _emit 0x4C
        _emit 0x50
        _emit 0xE8
        _emit 0x28
        _emit 0xAD
        _emit 0x17
        _emit 0x00
        _emit 0xC6
        _emit 0x46
        _emit 0x61
        _emit 0x01
        _emit 0xC3
    }
}
