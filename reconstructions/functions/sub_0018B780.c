/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0018B780(void)
{
    __asm {
        _emit 0x8B
        _emit 0x10
        _emit 0x8B
        _emit 0x40
        _emit 0x04
        _emit 0x53
        _emit 0x8B
        _emit 0x5C
        _emit 0x24
        _emit 0x08
        _emit 0xE8
        _emit 0xA1
        _emit 0xD9
        _emit 0x02
        _emit 0x00
        _emit 0x8B
        _emit 0xC3
        _emit 0x5B
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
