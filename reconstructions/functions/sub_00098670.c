/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00098670(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x50
        _emit 0x10
        _emit 0x85
        _emit 0xD2
        _emit 0x8B
        _emit 0x48
        _emit 0x08
        _emit 0x74
        _emit 0x0C
        _emit 0xD9
        _emit 0x41
        _emit 0x04
        _emit 0xD8
        _emit 0x21
        _emit 0xD8
        _emit 0x05
        _emit 0x74
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0xC3
        _emit 0xD9
        _emit 0x05
        _emit 0x74
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0xC3
    }
}
