__declspec(naked) void __cdecl sub_00020330(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 30h
        movaps xmm0, xmmword ptr [ecx]
        movaps xmm1, xmmword ptr [ecx + 10h]
        subps xmm1, xmm0
        movaps xmmword ptr [esp + 20h], xmm1
        movss xmm1, dword ptr [esp + 20h]
        movss dword ptr [esp + 0ch], xmm1
        fld dword ptr [esp + 0ch]
        fabs
        fstp dword ptr [esp + 0ch]
        ; Preserve the candidate's absolute disp32 encoding (the inline assembler adds a DS prefix).
        __emit 0xF3
        __emit 0x0F
        __emit 0x10
        __emit 0x15
        __emit 0x38
        __emit 0xA9
        __emit 0x28
        __emit 0x00
        comiss xmm2, dword ptr [esp + 0ch]
        __emit 0xF3
        __emit 0x0F
        __emit 0x10
        __emit 0x05
        __emit 0x74
        __emit 0x5C
        __emit 0x29
        __emit 0x00
        __emit 0xF3
        __emit 0x0F
        __emit 0x10
        __emit 0x1D
        __emit 0x20
        __emit 0x5E
        __emit 0x29
        __emit 0x00
        jc L20385
        movss dword ptr [esp + 10h], xmm3
        jmp L20392
    L20385:
        movaps xmm4, xmm0
        divss xmm4, xmm1
        movss dword ptr [esp + 10h], xmm4
    L20392:
        movss xmm1, dword ptr [esp + 24h]
        movss dword ptr [esp + 0ch], xmm1
        fld dword ptr [esp + 0ch]
        fabs
        fstp dword ptr [esp + 0ch]
        comiss xmm2, dword ptr [esp + 0ch]
        jc L203B7
        movss dword ptr [esp + 14h], xmm3
        jmp L203C4
    L203B7:
        movaps xmm4, xmm0
        divss xmm4, xmm1
        movss dword ptr [esp + 14h], xmm4
    L203C4:
        movss xmm1, dword ptr [esp + 28h]
        movss dword ptr [esp + 0ch], xmm1
        fld dword ptr [esp + 0ch]
        fabs
        fstp dword ptr [esp + 0ch]
        comiss xmm2, dword ptr [esp + 0ch]
        jc L203E9
        movss dword ptr [esp + 18h], xmm3
        jmp L203F3
    L203E9:
        divss xmm0, xmm1
        movss dword ptr [esp + 18h], xmm0
    L203F3:
        mov edx, dword ptr [esp + 10h]
        mov ecx, eax
        mov dword ptr [ecx], edx
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [ecx + 04h], edx
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [ecx + 08h], edx
        mov edx, dword ptr [esp + 1ch]
        mov dword ptr [ecx + 0ch], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
