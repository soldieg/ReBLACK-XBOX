extern void sub_00011C70(void);
extern void sub_00011E70(void);
extern float DAT_00295C74;
extern float DAT_002881A0;
extern float DAT_00288D84;

void __declspec(naked) sub_00011F90(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF0h
        sub esp, 30h
        movaps xmm0, xmmword ptr [eax]
        movaps xmmword ptr [esp + 10h], xmm0
        movaps xmm0, xmmword ptr [ecx]
        lea eax, [esp + 10h]
        movaps xmmword ptr [esp + 20h], xmm0
        call sub_00011C70
        lea eax, [esp + 20h]
        call sub_00011C70
        lea eax, [esp + 20h]
        lea ecx, [esp + 10h]
        call sub_00011E70
        movaps xmm1, xmm0
        movss dword ptr [esp + 0Ch], xmm0
        mulss xmm1, xmm0
        movss xmm0, dword ptr [DAT_00295C74]
        subss xmm0, xmm1
        movss dword ptr [esp + 4], xmm0
        sqrtss xmm0, dword ptr [esp + 4]
        movss dword ptr [esp + 8], xmm0
        movss xmm0, dword ptr [esp + 8]
        movss dword ptr [esp + 8], xmm0
        fld dword ptr [esp + 0Ch]
        fld dword ptr [esp + 8]
        fpatan
        fstp dword ptr [esp + 4]
        movaps xmm1, xmmword ptr [esp + 10h]
        movaps xmm2, xmmword ptr [esp + 20h]
        mov edx, dword ptr [ebp + 8]
        movaps xmm4, xmmword ptr [edx]
        movss xmm0, dword ptr [DAT_002881A0]
        subss xmm0, dword ptr [esp + 4]
        xorps xmm3, xmm3
        mulss xmm0, dword ptr [DAT_00288D84]
        shufps xmm1, xmm1, 0C9h
        movaps xmm6, xmm1
        shufps xmm2, xmm2, 0D2h
        shufps xmm6, xmm1, 0C9h
        mulps xmm1, xmm2
        movaps xmm5, xmm2
        shufps xmm5, xmm2, 0D2h
        mulps xmm6, xmm5
        subps xmm1, xmm6
        mulps xmm1, xmm4
        movaps xmm2, xmm1
        shufps xmm2, xmm1, 39h
        movaps xmm4, xmm2
        addss xmm1, xmm2
        movss dword ptr [esp + 4], xmm3
        shufps xmm4, xmm2, 39h
        addss xmm1, xmm4
        lea eax, [esp + 4]
        movss dword ptr [eax], xmm1
        movss xmm1, dword ptr [esp + 4]
        comiss xmm1, xmm3
        jbe finish
        subss xmm3, xmm0
        movaps xmm0, xmm3
    finish:
        mov esp, ebp
        pop ebp
        ret
    }
}
