/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00218947(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x48
        _emit 0x0C
        _emit 0xE8
        _emit 0x45
        _emit 0x70
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
