/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00183120(void)
{
    __asm {
        _emit 0x8B
        _emit 0x51
        _emit 0x50
        _emit 0x8B
        _emit 0x4A
        _emit 0x14
        _emit 0x8D
        _emit 0x04
        _emit 0x40
        _emit 0x8D
        _emit 0x04
        _emit 0x81
        _emit 0xC3
    }
}
