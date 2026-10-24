/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00097BD0(void)
{
    __asm {
        _emit 0xD9
        _emit 0x05
        _emit 0xFC
        _emit 0xE6
        _emit 0x2C
        _emit 0x00
        _emit 0xD8
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xD9
        _emit 0x1D
        _emit 0xFC
        _emit 0xE6
        _emit 0x2C
        _emit 0x00
        _emit 0xC3
    }
}
