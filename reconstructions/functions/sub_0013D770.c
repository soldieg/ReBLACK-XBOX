/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0013D770(void)
{
    __asm {
        _emit 0x8B
        _emit 0x46
        _emit 0x58
        _emit 0x8D
        _emit 0x4E
        _emit 0x58
        _emit 0xFF
        _emit 0x50
        _emit 0x08
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x05
        _emit 0xC4
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        _emit 0xF3
        _emit 0x0F
        _emit 0x11
        _emit 0x46
        _emit 0x68
        _emit 0xC3
    }
}
