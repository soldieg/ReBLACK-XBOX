/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00090570(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x48
        _emit 0x20
        _emit 0x8B
        _emit 0x81
        _emit 0xE8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xE0
        _emit 0x01
        _emit 0xC3
    }
}
