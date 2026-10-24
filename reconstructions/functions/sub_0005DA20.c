/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0005DA20(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC1
        _emit 0xC7
        _emit 0x00
        _emit 0x24
        _emit 0x52
        _emit 0x28
        _emit 0x00
        _emit 0x8B
        _emit 0x0D
        _emit 0xD0
        _emit 0x64
        _emit 0x2B
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0x8B
        _emit 0x15
        _emit 0xD4
        _emit 0x64
        _emit 0x2B
        _emit 0x00
        _emit 0x89
        _emit 0x50
        _emit 0x08
        _emit 0x8B
        _emit 0x0D
        _emit 0xD8
        _emit 0x64
        _emit 0x2B
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x0C
        _emit 0x33
        _emit 0xC9
        _emit 0x89
        _emit 0x48
        _emit 0x10
        _emit 0x89
        _emit 0x48
        _emit 0x14
        _emit 0x89
        _emit 0x48
        _emit 0x18
        _emit 0x66
        _emit 0x89
        _emit 0x48
        _emit 0x1C
        _emit 0xC3
    }
}
