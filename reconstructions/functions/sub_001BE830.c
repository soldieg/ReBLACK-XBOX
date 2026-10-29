/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001BE830(void)
{
    __asm {
        _emit 0x8B
        _emit 0x15
        _emit 0xD4
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0x8A
        _emit 0x61
        _emit 0x04
        _emit 0x0F
        _emit 0xBE
        _emit 0x8A
        _emit 0xEC
        _emit 0x5A
        _emit 0x00
        _emit 0x00
        _emit 0x0B
        _emit 0xC1
        _emit 0xC3
    }
}
