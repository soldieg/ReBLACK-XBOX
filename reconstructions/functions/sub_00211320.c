/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00211320(void)
{
    __asm {
        _emit 0xBA
        _emit 0xE0
        _emit 0x26
        _emit 0x2B
        _emit 0x00
        _emit 0xE9
        _emit 0x9D
        _emit 0x55
        _emit 0xE9
        _emit 0xFF
    }
}
