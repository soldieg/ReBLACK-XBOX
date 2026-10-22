__declspec(naked) int __cdecl sub_00014CF0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 20h
        movaps xmm0, xmmword ptr [eax]
        movaps xmm1, xmmword ptr [ecx]
        subps xmm1, xmm0
        movaps xmmword ptr [esp + 10h], xmm1
        movss xmm0, dword ptr [esp + 10h]
        movss dword ptr [esp + 0ch], xmm0
        fld dword ptr [esp + 0ch]
        fabs
        fstp dword ptr [esp + 0ch]
        // Preserve the target's absolute MOVSS without a DS override.
        __emit 0f3h
        __emit 00fh
        __emit 010h
        __emit 005h
        __emit 038h
        __emit 0a9h
        __emit 028h
        __emit 000h
        comiss xmm0, dword ptr [esp + 0ch]
        jc fail
        movss xmm1, dword ptr [esp + 14h]
        movss dword ptr [esp + 0ch], xmm1
        fld dword ptr [esp + 0ch]
        fabs
        fstp dword ptr [esp + 0ch]
        comiss xmm0, dword ptr [esp + 0ch]
        jc fail
        movss xmm1, dword ptr [esp + 18h]
        movss dword ptr [esp + 0ch], xmm1
        fld dword ptr [esp + 0ch]
        fabs
        fstp dword ptr [esp + 0ch]
        comiss xmm0, dword ptr [esp + 0ch]
        jc fail
        mov al, 1
        mov esp, ebp
        pop ebp
        ret
    fail:
        xor al, al
        mov esp, ebp
        pop ebp
        ret
    }
}