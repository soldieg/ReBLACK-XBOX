/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0018DB90(void)
{
    __asm {
        _emit 0x8B
        _emit 0x91
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x0F
        _emit 0x28
        _emit 0x02
        _emit 0x0F
        _emit 0x29
        _emit 0x00
        _emit 0xC3
    }
}
