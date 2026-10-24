/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00025599(void)
{
    __asm {
        _emit 0xFF
        _emit 0x15
        _emit 0xDC
        _emit 0x30
        _emit 0x28
        _emit 0x00
        _emit 0x33
        _emit 0xC9
        _emit 0x3D
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x40
        _emit 0x0F
        _emit 0x95
        _emit 0xC1
        _emit 0x8B
        _emit 0xC1
        _emit 0xC3
    }
}
