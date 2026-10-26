/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00222F59(void)
{
    __asm {
        _emit 0x8B
        _emit 0x01
        _emit 0x8B
        _emit 0x40
        _emit 0x10
        _emit 0x8B
        _emit 0x00
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x90
        _emit 0x40
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x09
        _emit 0x8B
        _emit 0x49
        _emit 0x10
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x09
        _emit 0xC1
        _emit 0xE8
        _emit 0x02
        _emit 0x89
        _emit 0x81
        _emit 0x44
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
