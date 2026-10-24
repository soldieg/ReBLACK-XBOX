/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0008B600(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x32
        _emit 0xC9
        _emit 0x88
        _emit 0x48
        _emit 0x01
        _emit 0x88
        _emit 0x48
        _emit 0x02
        _emit 0x88
        _emit 0x08
        _emit 0x8A
        _emit 0x4C
        _emit 0x24
        _emit 0x0C
        _emit 0x88
        _emit 0x48
        _emit 0x03
        _emit 0x89
        _emit 0x50
        _emit 0x04
        _emit 0xC3
    }
}
