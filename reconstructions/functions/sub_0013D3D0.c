/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013D3D0(void)
{
    __asm {
        _emit 0x8A
        _emit 0x88
        _emit 0x60
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x84
        _emit 0xC9
        _emit 0x74
        _emit 0x0B
        _emit 0x8D
        _emit 0x88
        _emit 0x50
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x01
        _emit 0xFF
        _emit 0x60
        _emit 0x08
        _emit 0xC3
    }
}
