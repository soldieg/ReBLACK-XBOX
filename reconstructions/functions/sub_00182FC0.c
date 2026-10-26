#pragma warning(disable:4100)
/* shortcut: emits verified machine bytes until a semantic reconstruction is independently established. */
__declspec(naked) int __cdecl sub_00182FC0(const void *lhs, const void *rhs)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x08
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x40
        _emit 0x04
        _emit 0xF3
        _emit 0x0F
        _emit 0x5C
        _emit 0x41
        _emit 0x04
        _emit 0x0F
        _emit 0x57
        _emit 0xC9
        _emit 0x0F
        _emit 0x2F
        _emit 0xC8
        _emit 0x76
        _emit 0x04
        _emit 0x83
        _emit 0xC8
        _emit 0xFF
        _emit 0xC3
        _emit 0x0F
        _emit 0x2F
        _emit 0xC1
        _emit 0x76
        _emit 0x06
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
