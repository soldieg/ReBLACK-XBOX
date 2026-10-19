#include <stdint.h>
__declspec(naked) uint32_t __cdecl sub_000814F0(uint32_t list_object, uint32_t sought_object)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x8B
        _emit 0x48
        _emit 0x10
        _emit 0x56
        _emit 0x8D
        _emit 0x70
        _emit 0x10
        _emit 0x3B
        _emit 0xCE
        _emit 0x57
        _emit 0x74
        _emit 0x11
        _emit 0x8B
        _emit 0x7C
        _emit 0x24
        _emit 0x10
        _emit 0x8D
        _emit 0x51
        _emit 0xE8
        _emit 0x3B
        _emit 0xD7
        _emit 0x8B
        _emit 0x09
        _emit 0x74
        _emit 0x06
        _emit 0x3B
        _emit 0xCE
        _emit 0x75
        _emit 0xF3
        _emit 0x33
        _emit 0xC0
        _emit 0x5F
        _emit 0x5E
        _emit 0xC3
    }
}
