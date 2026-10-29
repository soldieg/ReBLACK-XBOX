/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013DDD0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0xD0
        _emit 0x04
        _emit 0x3B
        _emit 0x48
        _emit 0x24
        _emit 0x7D
        _emit 0x05
        _emit 0x41
        _emit 0x89
        _emit 0x4C
        _emit 0xD0
        _emit 0x04
        _emit 0xC3
    }
}
