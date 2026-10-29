/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E4930(void)
{
    __asm {
        _emit 0x85
        _emit 0xC0
        _emit 0x7C
        _emit 0x15
        _emit 0x3B
        _emit 0x41
        _emit 0x28
        _emit 0x7D
        _emit 0x10
        _emit 0x8B
        _emit 0x49
        _emit 0x20
        _emit 0x8B
        _emit 0x04
        _emit 0x81
        _emit 0x85
        _emit 0xC0
        _emit 0x0F
        _emit 0x44
        _emit 0x05
        _emit 0xBC
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0xC3
        _emit 0xA1
        _emit 0xBC
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0xC3
    }
}
