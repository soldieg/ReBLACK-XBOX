/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E5200(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x08
        _emit 0x8B
        _emit 0x50
        _emit 0x08
        _emit 0x8D
        _emit 0x14
        _emit 0x8A
        _emit 0x8B
        _emit 0x4A
        _emit 0xFC
        _emit 0x89
        _emit 0x0A
        _emit 0xFF
        _emit 0x00
        _emit 0x8B
        _emit 0x01
        _emit 0xFF
        _emit 0x20
    }
}
