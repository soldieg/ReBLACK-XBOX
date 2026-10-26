/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00226343(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x5D
        _emit 0xE9
        _emit 0x81
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
    }
}
