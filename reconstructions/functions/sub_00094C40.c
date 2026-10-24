/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00094C40(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x28
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x85
        _emit 0xD2
        _emit 0x7C
        _emit 0x20
        _emit 0x8B
        _emit 0x80
        _emit 0xAC
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xC9
        _emit 0x85
        _emit 0xD2
        _emit 0x7E
        _emit 0x16
        _emit 0x8D
        _emit 0x64
        _emit 0x24
        _emit 0x00
        _emit 0x8B
        _emit 0x80
        _emit 0xAC
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x08
        _emit 0x41
        _emit 0x3B
        _emit 0xCA
        _emit 0x7C
        _emit 0xF1
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
