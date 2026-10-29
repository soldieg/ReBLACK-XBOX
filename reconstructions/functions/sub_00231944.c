/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00231944(void)
{
    __asm {
        _emit 0xBB
        _emit 0x04
        _emit 0xAD
        _emit 0x04
        _emit 0x7E
        _emit 0xCB
    }
}
