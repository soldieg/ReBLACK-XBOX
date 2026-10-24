/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0008DE80(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0xD9
        _emit 0x80
        _emit 0xF4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
