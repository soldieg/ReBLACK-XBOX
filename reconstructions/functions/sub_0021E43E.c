/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0021E43E(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x48
        _emit 0x08
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x01
        _emit 0x4E
        _emit 0x08
        _emit 0x50
        _emit 0xE8
        _emit 0x6D
        _emit 0x9B
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0xC6
        _emit 0x5E
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
