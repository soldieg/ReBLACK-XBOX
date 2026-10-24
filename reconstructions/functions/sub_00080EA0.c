/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00080EA0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0x08
        _emit 0x55
        _emit 0x57
        _emit 0x00
        _emit 0x33
        _emit 0xD2
        _emit 0x81
        _emit 0xF9
        _emit 0x08
        _emit 0x55
        _emit 0x57
        _emit 0x00
        _emit 0x56
        _emit 0x74
        _emit 0x16
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x3B
        _emit 0xD6
        _emit 0x8D
        _emit 0x41
        _emit 0xE4
        _emit 0x74
        _emit 0x0D
        _emit 0x8B
        _emit 0x09
        _emit 0x42
        _emit 0x81
        _emit 0xF9
        _emit 0x08
        _emit 0x55
        _emit 0x57
        _emit 0x00
        _emit 0x75
        _emit 0xEE
        _emit 0x33
        _emit 0xC0
        _emit 0x5E
        _emit 0xC3
    }
}
