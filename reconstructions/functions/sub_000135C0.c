extern unsigned char dat_002881a4;
extern unsigned char dat_00295c74;
__declspec(naked) void sub_000135C0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF0h
        sub esp, 68h
        push esi
        push edi
        movss xmm0, dword ptr [dat_002881a4]
        movaps xmm1, xmmword ptr [edx]
        movss dword ptr [esp + 14h], xmm0
        lea ecx, [esp + 14h]
        movss xmm0, dword ptr [ecx]
        shufps xmm0, xmm0, 0h
        mulps xmm1, xmm0
        movaps xmmword ptr [esp + 20h], xmm1
        movss xmm2, dword ptr [esp + 20h]
        movss xmm6, dword ptr [esp + 28h]
        movss xmm5, dword ptr [esp + 24h]
        movaps xmm1, xmm6
        movaps xmm3, xmm6
        movaps xmm0, xmm2
        mulss xmm0, xmm2
        movss dword ptr [esp + 18h], xmm0
        mulss xmm1, xmm5
        movaps xmm0, xmm5
        movaps xmm4, xmm5
        movaps xmm5, xmm6
        movss xmm6, dword ptr [esp + 2Ch]
        movaps xmm7, xmm6
        mulss xmm0, xmm2
        mulss xmm7, xmm2
        mulss xmm3, xmm2
        movaps xmm2, xmm6
        mulss xmm6, dword ptr [esp + 28h]
        mulss xmm2, dword ptr [esp + 24h]
        movss dword ptr [esp + 14h], xmm6
        movss dword ptr [esp + 1Ch], xmm7
        movss xmm7, dword ptr [dat_00295c74]
        mulss xmm4, xmm4
        mulss xmm5, xmm5
        movaps xmm6, xmm7
        subss xmm7, dword ptr [esp + 18h]
        subss xmm6, xmm4
        subss xmm6, xmm5
        movss dword ptr [esp + 30h], xmm6
        movss xmm6, dword ptr [esp + 14h]
        addss xmm6, xmm0
        subss xmm0, dword ptr [esp + 14h]
        movss dword ptr [esp + 34h], xmm6
        movss dword ptr [esp + 40h], xmm0
        movaps xmm6, xmm3
        subss xmm6, xmm2
        movss dword ptr [esp + 38h], xmm6
        movaps xmm0, xmm7
        movaps xmm6, xmm0
        subss xmm6, xmm5
        movss xmm5, dword ptr [esp + 1Ch]
        movss dword ptr [esp + 44h], xmm6
        movaps xmm6, xmm5
        addss xmm6, xmm1
        addss xmm2, xmm3
        subss xmm1, xmm5
        subss xmm0, xmm4
        mov ecx, 10h
        lea esi, [esp + 30h]
        mov edi, eax
        movss dword ptr [esp + 48h], xmm6
        movss dword ptr [esp + 50h], xmm2
        movss dword ptr [esp + 54h], xmm1
        movss dword ptr [esp + 58h], xmm0
        rep movsd
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
