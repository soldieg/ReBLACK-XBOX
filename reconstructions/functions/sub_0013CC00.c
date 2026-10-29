/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013CC00(void)
{
    __asm {
        _emit 0x8B
        _emit 0x01
        _emit 0x48
        _emit 0x74
        _emit 0x06
        _emit 0x48
        _emit 0x74
        _emit 0x09
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
        _emit 0xC7
        _emit 0x01
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
