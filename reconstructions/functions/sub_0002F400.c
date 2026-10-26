/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0002F400(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x39
        _emit 0x05
        _emit 0x90
        _emit 0x2A
        _emit 0x2B
        _emit 0x00
        _emit 0x74
        _emit 0x0B
        _emit 0x50
        _emit 0xA3
        _emit 0x90
        _emit 0x2A
        _emit 0x2B
        _emit 0x00
        _emit 0xE8
        _emit 0xF9
        _emit 0xA2
        _emit 0x23
        _emit 0x00
        _emit 0xC3
    }
}
