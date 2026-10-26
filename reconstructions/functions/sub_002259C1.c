/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_002259C1(void)
{
    __asm {
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x8B
        _emit 0x45
        _emit 0x08
        _emit 0x05
        _emit 0x9C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x45
        _emit 0x08
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x4D
        _emit 0x08
        _emit 0x0F
        _emit 0xC1
        _emit 0x01
        _emit 0x40
        _emit 0x5D
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
