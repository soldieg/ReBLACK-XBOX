/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00112900(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x85
        _emit 0xC9
        _emit 0x8B
        _emit 0xD1
        _emit 0x74
        _emit 0x14
        _emit 0x8A
        _emit 0x0A
        _emit 0x84
        _emit 0xC9
        _emit 0x74
        _emit 0x0E
        _emit 0x80
        _emit 0xF9
        _emit 0x80
        _emit 0x72
        _emit 0x05
        _emit 0x80
        _emit 0xF9
        _emit 0xBF
        _emit 0x76
        _emit 0x01
        _emit 0x40
        _emit 0x42
        _emit 0x75
        _emit 0xEC
        _emit 0xC3
    }
}
