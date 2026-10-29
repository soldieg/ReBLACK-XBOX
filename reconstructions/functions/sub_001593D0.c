/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001593D0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x41
        _emit 0x14
        _emit 0xC3
    }
}
