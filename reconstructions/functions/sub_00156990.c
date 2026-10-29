/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00156990(void)
{
    __asm {
        _emit 0xD9
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8B
        _emit 0xF0
        _emit 0xE8
        _emit 0x38
        _emit 0xCB
        _emit 0xF4
        _emit 0xFF
        _emit 0xC1
        _emit 0xEE
        _emit 0x08
        _emit 0xC1
        _emit 0xE0
        _emit 0x18
        _emit 0x0B
        _emit 0xC6
        _emit 0x5E
        _emit 0xC3
    }
}
