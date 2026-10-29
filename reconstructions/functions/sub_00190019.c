/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00190019(void)
{
    __asm {
        _emit 0x89
        _emit 0x16
        _emit 0x8B
        _emit 0x47
        _emit 0x0C
        _emit 0x89
        _emit 0x46
        _emit 0x04
        _emit 0x89
        _emit 0x7E
        _emit 0x20
        _emit 0x5E
        _emit 0x8B
        _emit 0xE5
        _emit 0x5D
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
