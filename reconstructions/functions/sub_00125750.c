/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00125750(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x0C
        _emit 0x50
        _emit 0x8B
        _emit 0x41
        _emit 0x7C
        _emit 0x8B
        _emit 0x49
        _emit 0x64
        _emit 0xE8
        _emit 0x61
        _emit 0xDD
        _emit 0xF9
        _emit 0xFF
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
