/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F2530(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0x8B
        _emit 0x46
        _emit 0x04
        _emit 0x8D
        _emit 0x4E
        _emit 0x04
        _emit 0xFF
        _emit 0x50
        _emit 0x04
        _emit 0x8B
        _emit 0x56
        _emit 0x20
        _emit 0x8D
        _emit 0x4E
        _emit 0x20
        _emit 0xFF
        _emit 0x52
        _emit 0x04
        _emit 0x8B
        _emit 0x46
        _emit 0x60
        _emit 0x8D
        _emit 0x4E
        _emit 0x60
        _emit 0x5E
        _emit 0xFF
        _emit 0x60
        _emit 0x04
    }
}
