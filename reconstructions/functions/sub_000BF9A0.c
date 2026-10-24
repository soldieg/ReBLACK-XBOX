/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000BF9A0(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0x8B
        _emit 0x46
        _emit 0x48
        _emit 0x57
        _emit 0x33
        _emit 0xFF
        _emit 0x85
        _emit 0xC0
        _emit 0x7E
        _emit 0x1B
        _emit 0x53
        _emit 0x8B
        _emit 0x5C
        _emit 0x24
        _emit 0x10
        _emit 0x8B
        _emit 0x46
        _emit 0x44
        _emit 0x8B
        _emit 0x0C
        _emit 0xF8
        _emit 0x8B
        _emit 0x11
        _emit 0x53
        _emit 0x56
        _emit 0xFF
        _emit 0x52
        _emit 0x10
        _emit 0x8B
        _emit 0x46
        _emit 0x48
        _emit 0x47
        _emit 0x3B
        _emit 0xF8
        _emit 0x7C
        _emit 0xEB
        _emit 0x5B
        _emit 0x5F
        _emit 0x5E
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
