/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00181C30(void)
{
    __asm {
        _emit 0x8B
        _emit 0x81
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8D
        _emit 0x04
        _emit 0x40
        _emit 0xC1
        _emit 0xE0
        _emit 0x05
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x44
        _emit 0x08
        _emit 0x14
        _emit 0xC3
    }
}
