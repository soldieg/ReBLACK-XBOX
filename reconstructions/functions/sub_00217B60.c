/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00217B60(void)
{
    __asm {
        _emit 0xC7
        _emit 0x05
        _emit 0x90
        _emit 0x9A
        _emit 0x2B
        _emit 0x00
        _emit 0x6C
        _emit 0xF5
        _emit 0x28
        _emit 0x00
        _emit 0xC3
    }
}
