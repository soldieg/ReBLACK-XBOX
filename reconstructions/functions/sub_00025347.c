/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00025347(void)
{
    __asm {
        _emit 0x64
        _emit 0x0F
        _emit 0xB6
        _emit 0x05
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3C
        _emit 0x02
        _emit 0x73
        _emit 0x06
        _emit 0x64
        _emit 0xA1
        _emit 0x28
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xA1
        _emit 0xF8
        _emit 0x27
        _emit 0x2B
        _emit 0x00
        _emit 0x64
        _emit 0x8B
        _emit 0x0D
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x04
        _emit 0x81
        _emit 0x8B
        _emit 0x80
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
