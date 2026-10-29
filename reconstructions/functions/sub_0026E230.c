/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0026E230(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xA3
        _emit 0x98
        _emit 0xC2
        _emit 0x27
        _emit 0x00
        _emit 0xE8
        _emit 0x62
        _emit 0x0B
        _emit 0x00
        _emit 0x00
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
