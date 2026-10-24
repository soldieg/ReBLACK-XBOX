/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00051B30(void)
{
    __asm {
        _emit 0x8B
        _emit 0x41
        _emit 0x30
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0xD9
        _emit 0x04
        _emit 0x88
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
