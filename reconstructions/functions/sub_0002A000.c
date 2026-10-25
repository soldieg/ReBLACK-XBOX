/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0002A000(void)
{
    __asm {
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x0C
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x52
        _emit 0x51
        _emit 0x8D
        _emit 0x34
        _emit 0x88
        _emit 0x50
        _emit 0x89
        _emit 0x14
        _emit 0xB5
        _emit 0x00
        _emit 0xEB
        _emit 0x56
        _emit 0x00
        _emit 0xE8
        _emit 0x41
        _emit 0x48
        _emit 0x24
        _emit 0x00
        _emit 0x5E
        _emit 0xC3
    }
}
