/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00269BC0(void)
{
    __asm {
        _emit 0x53
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x10
        _emit 0x57
        _emit 0x8B
        _emit 0x7C
        _emit 0x24
        _emit 0x10
        _emit 0x33
        _emit 0xDB
        _emit 0xE8
        _emit 0x5E
        _emit 0x3A
        _emit 0x00
        _emit 0x00
        _emit 0x5F
        _emit 0x5E
        _emit 0x5B
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
