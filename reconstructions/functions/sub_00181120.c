/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00181120(void)
{
    __asm {
        _emit 0x8A
        _emit 0x41
        _emit 0x40
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
