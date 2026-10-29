/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BD9A7(void)
{
    __asm {
        _emit 0xB0
        _emit 0x01
        _emit 0xC2
        _emit 0x18
        _emit 0x00
    }
}
