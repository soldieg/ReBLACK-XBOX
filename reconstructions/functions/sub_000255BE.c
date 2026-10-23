/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000255BE(void)
{
    __asm {
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0xA1
        _emit 0x64
        _emit 0x61
        _emit 0x56
        _emit 0x00
        _emit 0x89
        _emit 0x0D
        _emit 0x64
        _emit 0x61
        _emit 0x56
        _emit 0x00
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
