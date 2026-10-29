/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B004E(void)
{
    __asm {
        _emit 0x8D
        _emit 0x80
        _emit 0x80
        _emit 0xF4
        _emit 0x56
        _emit 0x00
        _emit 0xC3
    }
}
