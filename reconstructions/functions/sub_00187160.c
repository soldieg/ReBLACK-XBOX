/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00187160(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x40
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x0A
        _emit 0x8B
        _emit 0x44
        _emit 0x81
        _emit 0x44
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x40
        _emit 0x4C
        _emit 0xC3
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x05
        _emit 0xC4
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0xC3
    }
}
