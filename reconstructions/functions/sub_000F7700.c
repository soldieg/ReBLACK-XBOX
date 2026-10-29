/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000F7700(void)
{
    __asm {
        _emit 0x56
        _emit 0x57
        _emit 0xE8
        _emit 0x49
        _emit 0xCF
        _emit 0xFF
        _emit 0xFF
        _emit 0x56
        _emit 0x57
        _emit 0xE8
        _emit 0x02
        _emit 0xCE
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
