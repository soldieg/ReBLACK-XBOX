/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00080150(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xA3
        _emit 0x18
        _emit 0x84
        _emit 0x29
        _emit 0x00
        _emit 0xC3
    }
}
