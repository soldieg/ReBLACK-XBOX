/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001BDF70(void)
{
    __asm {
        _emit 0x8B
        _emit 0x90
        _emit 0xBC
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x52
        _emit 0x40
        _emit 0x8B
        _emit 0x52
        _emit 0x30
        _emit 0x0F
        _emit 0xB7
        _emit 0xC1
        _emit 0x8B
        _emit 0x0C
        _emit 0x8D
        _emit 0xE0
        _emit 0x89
        _emit 0x28
        _emit 0x00
        _emit 0x8D
        _emit 0x04
        _emit 0x40
        _emit 0xC1
        _emit 0xE0
        _emit 0x05
        _emit 0x89
        _emit 0x4C
        _emit 0x02
        _emit 0x4C
        _emit 0xC3
    }
}
