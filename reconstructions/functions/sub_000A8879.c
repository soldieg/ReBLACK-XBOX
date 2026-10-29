/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000A8879(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x40
        _emit 0xC3
        _emit 0x8B
        _emit 0x65
        _emit 0xE8
        _emit 0xE9
        _emit 0xA6
        _emit 0x03
        _emit 0x00
        _emit 0x00
    }
}
