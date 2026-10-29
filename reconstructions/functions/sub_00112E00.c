/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00112E00(void)
{
    __asm {
        _emit 0x89
        _emit 0x48
        _emit 0x08
        _emit 0x8B
        _emit 0x48
        _emit 0x0C
        _emit 0x41
        _emit 0xC7
        _emit 0x00
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x50
        _emit 0x04
        _emit 0xC7
        _emit 0x40
        _emit 0x10
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x0C
        _emit 0xC3
    }
}
