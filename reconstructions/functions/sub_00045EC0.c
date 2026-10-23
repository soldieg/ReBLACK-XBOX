/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00045EC0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x0D
        _emit 0x14
        _emit 0x33
        _emit 0x2B
        _emit 0x00
        _emit 0x03
        _emit 0xC1
        _emit 0xC3
    }
}
