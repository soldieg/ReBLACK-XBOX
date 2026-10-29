/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00040000(void)
{
    __asm {
        _emit 0x3B
        _emit 0xF7
        _emit 0x8B
        _emit 0xC6
        _emit 0x75
        _emit 0xEA
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x5F
        _emit 0x5E
        _emit 0x5D
        _emit 0x5B
        _emit 0xC3
    }
}
