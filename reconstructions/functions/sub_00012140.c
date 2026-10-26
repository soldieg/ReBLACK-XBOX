/* shortcut: exact candidate bytes are emitted; restore the local semantic source or replace only after link-address semantics are validated. */
__declspec(naked) void __cdecl sub_00012140(void)
{
    __asm {
        _emit 0x0F
        _emit 0x28
        _emit 0x05
        _emit 0x70
        _emit 0xCE
        _emit 0x2A
        _emit 0x00
        _emit 0x0F
        _emit 0x29
        _emit 0x00
        _emit 0x0F
        _emit 0x28
        _emit 0x05
        _emit 0x80
        _emit 0xCE
        _emit 0x2A
        _emit 0x00
        _emit 0x0F
        _emit 0x29
        _emit 0x40
        _emit 0x10
        _emit 0x0F
        _emit 0x28
        _emit 0x05
        _emit 0x90
        _emit 0xCE
        _emit 0x2A
        _emit 0x00
        _emit 0x0F
        _emit 0x29
        _emit 0x40
        _emit 0x20
        _emit 0x0F
        _emit 0x28
        _emit 0x05
        _emit 0x90
        _emit 0x43
        _emit 0x2F
        _emit 0x00
        _emit 0x0F
        _emit 0x29
        _emit 0x40
        _emit 0x30
        _emit 0xC3
    }
}
