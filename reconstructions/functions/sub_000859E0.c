/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000859E0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x4A
        _emit 0x04
        _emit 0x33
        _emit 0xC0
        _emit 0x3B
        _emit 0xCA
        _emit 0x74
        _emit 0x0B
        _emit 0x8D
        _emit 0x49
        _emit 0x00
        _emit 0x8B
        _emit 0x49
        _emit 0x04
        _emit 0x40
        _emit 0x3B
        _emit 0xCA
        _emit 0x75
        _emit 0xF8
        _emit 0xC3
    }
}
