/* Address-pinned byte emitter; not semantic C or formal ABI recovery. */
__declspec(naked) void sub_00018910(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF0
        _emit 0x85
        _emit 0xF6
        _emit 0x74
        _emit 0x1E
        _emit 0xEB
        _emit 0x07
        _emit 0x8D
        _emit 0xA4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8D
        _emit 0x4E
        _emit 0x08
        _emit 0x8B
        _emit 0xC7
        _emit 0xE8
        _emit 0xE6
        _emit 0xE4
        _emit 0x0C
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x09
        _emit 0x8B
        _emit 0x76
        _emit 0x1C
        _emit 0x85
        _emit 0xF6
        _emit 0x75
        _emit 0xEB
        _emit 0x33
        _emit 0xC0
        _emit 0x5E
        _emit 0xC3
    }
}
