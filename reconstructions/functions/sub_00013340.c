extern unsigned char dat_00295cbc;
extern unsigned char dat_00295c74;
extern unsigned char dat_00295c6c;
__declspec(naked) void sub_00013340(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 10h
        movss xmm1, dword ptr [eax + 28h]
        addss xmm1, dword ptr [eax + 14h]
        movaps xmm0, xmm1
        addss xmm0, dword ptr [eax]
        comiss xmm0, dword ptr [dat_00295cbc]
        jbe L_133EA
        addss xmm0, dword ptr [dat_00295c74]
        movss dword ptr [esp + 8h], xmm0
        sqrtss xmm0, dword ptr [esp + 8h]
        movss dword ptr [esp + 0ch], xmm0
        movss xmm0, dword ptr [eax + 18h]
        subss xmm0, dword ptr [eax + 24h]
        movss xmm2, dword ptr [dat_00295c6c]
        movss dword ptr [ecx], xmm0
        movss xmm0, dword ptr [eax + 20h]
        subss xmm0, dword ptr [eax + 8h]
        movss dword ptr [ecx + 4h], xmm0
        movss xmm0, dword ptr [eax + 4h]
        subss xmm0, dword ptr [eax + 10h]
        movss dword ptr [ecx + 8h], xmm0
        movss xmm0, dword ptr [esp + 0ch]
        movaps xmm3, xmmword ptr [ecx]
        movaps xmm1, xmm2
        divss xmm1, xmm0
        movss dword ptr [esp + 0ch], xmm1
        lea eax, [esp + 0ch]
        movss xmm1, dword ptr [eax]
        shufps xmm1, xmm1, 0h
        mulps xmm3, xmm1
        movaps xmmword ptr [ecx], xmm3
        mulss xmm0, xmm2
        movss dword ptr [ecx + 0ch], xmm0
        mov esp, ebp
        pop ebp
        ret
        L_133EA:
        movss xmm0, dword ptr [eax + 14h]
        comiss xmm0, dword ptr [eax]
        movss xmm0, dword ptr [eax + 28h]
        jbe L_1340D
        comiss xmm0, dword ptr [eax + 14h]
        jbe L_13406
        mov edx, 2h
        jmp L_1341B
        L_13406:
        mov edx, 1h
        jmp L_1341B
        L_1340D:
        comiss xmm0, dword ptr [eax]
        jbe L_13419
        mov edx, 2h
        jmp L_1341B
        L_13419:
        xor edx, edx
        L_1341B:
        sub edx, 0h
        jz L_1353E
        dec edx
        jz L_134B8
        dec edx
        jnz L_135B6
        movss xmm0, dword ptr [eax]
        addss xmm0, dword ptr [eax + 14h]
        movss xmm1, dword ptr [eax + 28h]
        subss xmm1, xmm0
        addss xmm1, dword ptr [dat_00295c74]
        movss dword ptr [esp + 0ch], xmm1
        sqrtss xmm0, dword ptr [esp + 0ch]
        movss dword ptr [esp + 8h], xmm0
        movss xmm1, dword ptr [esp + 8h]
        movss xmm0, dword ptr [dat_00295c6c]
        movaps xmm2, xmm1
        mulss xmm2, xmm0
        divss xmm0, xmm1
        movss dword ptr [ecx + 8h], xmm2
        movss xmm1, dword ptr [eax + 4h]
        subss xmm1, dword ptr [eax + 10h]
        mulss xmm1, xmm0
        movss dword ptr [ecx + 0ch], xmm1
        movss xmm1, dword ptr [eax + 20h]
        addss xmm1, dword ptr [eax + 8h]
        mulss xmm1, xmm0
        movss dword ptr [ecx], xmm1
        movss xmm1, dword ptr [eax + 24h]
        addss xmm1, dword ptr [eax + 18h]
        mulss xmm1, xmm0
        movss dword ptr [ecx + 4h], xmm1
        mov esp, ebp
        pop ebp
        ret
        L_134B8:
        movss xmm0, dword ptr [eax]
        addss xmm0, dword ptr [eax + 28h]
        movss xmm1, dword ptr [eax + 14h]
        subss xmm1, xmm0
        addss xmm1, dword ptr [dat_00295c74]
        movss dword ptr [esp + 0ch], xmm1
        sqrtss xmm0, dword ptr [esp + 0ch]
        movss dword ptr [esp + 8h], xmm0
        movss xmm1, dword ptr [esp + 8h]
        movss xmm0, dword ptr [dat_00295c6c]
        movaps xmm2, xmm1
        mulss xmm2, xmm0
        divss xmm0, xmm1
        movss dword ptr [ecx + 4h], xmm2
        movss xmm1, dword ptr [eax + 20h]
        subss xmm1, dword ptr [eax + 8h]
        mulss xmm1, xmm0
        movss dword ptr [ecx + 0ch], xmm1
        movss xmm1, dword ptr [eax + 24h]
        addss xmm1, dword ptr [eax + 18h]
        mulss xmm1, xmm0
        movss dword ptr [ecx + 8h], xmm1
        movss xmm1, dword ptr [eax + 10h]
        addss xmm1, dword ptr [eax + 4h]
        mulss xmm1, xmm0
        movss dword ptr [ecx], xmm1
        mov esp, ebp
        pop ebp
        ret
        L_1353E:
        movss xmm0, dword ptr [eax]
        subss xmm0, xmm1
        addss xmm0, dword ptr [dat_00295c74]
        movss dword ptr [esp + 0ch], xmm0
        sqrtss xmm0, dword ptr [esp + 0ch]
        movss dword ptr [esp + 8h], xmm0
        movss xmm1, dword ptr [esp + 8h]
        movss xmm0, dword ptr [dat_00295c6c]
        movaps xmm2, xmm1
        mulss xmm2, xmm0
        divss xmm0, xmm1
        movss dword ptr [ecx], xmm2
        movss xmm1, dword ptr [eax + 18h]
        subss xmm1, dword ptr [eax + 24h]
        mulss xmm1, xmm0
        movss dword ptr [ecx + 0ch], xmm1
        movss xmm1, dword ptr [eax + 10h]
        addss xmm1, dword ptr [eax + 4h]
        mulss xmm1, xmm0
        movss dword ptr [ecx + 4h], xmm1
        movss xmm1, dword ptr [eax + 20h]
        addss xmm1, dword ptr [eax + 8h]
        mulss xmm1, xmm0
        movss dword ptr [ecx + 8h], xmm1
        L_135B6:
        mov esp, ebp
        pop ebp
        ret
    }
}
