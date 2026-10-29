/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E7530(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x04
        _emit 0x8B
        _emit 0xD0
        _emit 0x81
        _emit 0xE2
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xFE
        _emit 0x81
        _emit 0xFA
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x26
        _emit 0x75
        _emit 0x09
        _emit 0xC1
        _emit 0xE8
        _emit 0x04
        _emit 0xF6
        _emit 0xD0
        _emit 0xA8
        _emit 0x01
        _emit 0x74
        _emit 0x12
        _emit 0x8B
        _emit 0x41
        _emit 0x48
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x0B
        _emit 0x3D
        _emit 0x0D
        _emit 0xF0
        _emit 0xAD
        _emit 0xBA
        _emit 0x74
        _emit 0x04
        _emit 0x8B
        _emit 0x40
        _emit 0x10
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
