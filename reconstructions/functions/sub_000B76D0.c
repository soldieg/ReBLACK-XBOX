/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B76D0(void)
{
    __asm {
        _emit 0x51
        _emit 0x8B
        _emit 0x41
        _emit 0x18
        _emit 0x8B
        _emit 0x48
        _emit 0x10
        _emit 0xDB
        _emit 0x40
        _emit 0x10
        _emit 0x85
        _emit 0xC9
        _emit 0x7D
        _emit 0x06
        _emit 0xD8
        _emit 0x05
        _emit 0x90
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0x59
        _emit 0xC3
    }
}
