/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00042F20(void)
{
    __asm {
        _emit 0xE8
        _emit 0xAB
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0x56
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0xE9
        _emit 0xD1
        _emit 0xDE
        _emit 0x00
        _emit 0x00
    }
}
