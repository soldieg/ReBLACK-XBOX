/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00183F80(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x18
        _emit 0x8B
        _emit 0x51
        _emit 0x14
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8D
        _emit 0x04
        _emit 0xC2
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
