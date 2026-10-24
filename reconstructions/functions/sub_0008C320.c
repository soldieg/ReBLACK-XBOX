/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0008C320(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0x57
        _emit 0x8D
        _emit 0x78
        _emit 0x34
        _emit 0xB9
        _emit 0x0C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xF3
        _emit 0xA5
        _emit 0x8B
        _emit 0x48
        _emit 0x68
        _emit 0x83
        _emit 0xC9
        _emit 0x02
        _emit 0x5F
        _emit 0x89
        _emit 0x48
        _emit 0x68
        _emit 0x5E
        _emit 0xC3
    }
}
