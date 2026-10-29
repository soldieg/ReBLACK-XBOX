/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000A4584(void)
{
    __asm {
        _emit 0x8B
        _emit 0x65
        _emit 0xE8
        _emit 0xEB
        _emit 0xCB
        _emit 0xE8
        _emit 0x9D
        _emit 0x46
        _emit 0x00
        _emit 0x00
        _emit 0xCC
    }
}
