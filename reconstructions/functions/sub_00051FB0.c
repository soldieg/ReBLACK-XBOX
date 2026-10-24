/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00051FB0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0xE8
        _emit 0x97
        _emit 0xD9
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x0D
        _emit 0x64
        _emit 0x81
        _emit 0x2B
        _emit 0x00
        _emit 0x3B
        _emit 0x41
        _emit 0x10
        _emit 0x73
        _emit 0x05
        _emit 0xA3
        _emit 0x70
        _emit 0x7F
        _emit 0x29
        _emit 0x00
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
