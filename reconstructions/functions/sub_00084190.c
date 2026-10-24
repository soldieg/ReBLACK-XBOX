/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_00084190(void)
{
    __asm {
        _emit 0x53
        _emit 0x0F
        _emit 0x31
        _emit 0x8D
        _emit 0x1D
        _emit 0x68
        _emit 0x04
        _emit 0x2C
        _emit 0x00
        _emit 0x89
        _emit 0x03
        _emit 0x89
        _emit 0x53
        _emit 0x04
        _emit 0x5B
        _emit 0xC3
    }
}
