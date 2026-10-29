/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0015A590(void)
{
    __asm {
        _emit 0x8D
        _emit 0x04
        _emit 0x40
        _emit 0x8B
        _emit 0x84
        _emit 0xC1
        _emit 0x64
        _emit 0xCA
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
