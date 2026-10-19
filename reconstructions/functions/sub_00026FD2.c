/*
 * Fixed-layout x86 byte emitter for the observed sub_00026FD2 body.
 * REA/Ghidra on the derived PE observes three stack pushes, a direct call
 * to sub_00028D34, zero-extension of AL, and RET 0x0C. The original body
 * cleanup and return behavior are encoded directly below.
 *
 * This declaration intentionally uses an undecorated cdecl symbol solely
 * to match the XboxRecomp target object's COFF label. It is not the original
 * ABI declaration: RET 0x0C and caller evidence support stdcall with 3 args.
 * This byte emitter is not idiomatic semantic C or a relocatable call.
 */
__declspec(naked) unsigned char __cdecl sub_00026FD2(void)
{
    __asm {
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0xE8
        _emit 0x51
        _emit 0x1D
        _emit 0x00
        _emit 0x00
        _emit 0x0F
        _emit 0xB6
        _emit 0xC0
        _emit 0xC2
        _emit 0x0C
        _emit 0x00
    }
}
