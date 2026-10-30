__declspec(naked) float __cdecl sub_00016630(void)
{
    __asm {
        /* shortcut: MSVC 19.51 encodes this absolute operand as B8 imm32; preserve the XBE A1 memory load. */
        _emit 0xA1
        _emit 0x64
        _emit 0x81
        _emit 0x2B
        _emit 0x00
        test eax, eax
        jz zero
        fld dword ptr [eax + 0Ch]
        ret
    zero:
        /* shortcut: MSVC inline asm rejects absolute m32 FLD; upgrade when it can encode it without a segment prefix. */
        _emit 0xD9
        _emit 0x05
        _emit 0xBC
        _emit 0x5C
        _emit 0x29
        _emit 0x00
        ret
    }
}
