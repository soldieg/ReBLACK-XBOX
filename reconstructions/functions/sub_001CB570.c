/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001CB570(void)
{
    __asm {
        _emit 0x66
        _emit 0x8B
        _emit 0x81
        _emit 0xE8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x91
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xE9
        _emit 0x5E
        _emit 0x12
        _emit 0xF1
        _emit 0xFF
    }
}
