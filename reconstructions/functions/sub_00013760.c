extern unsigned char dat_00295c74;
extern unsigned char dat_00295e58;
extern unsigned char dat_002881a0;
extern unsigned char dat_00295f80;
extern unsigned char dat_00295f7c;
extern unsigned char dat_00295d94;
extern unsigned char dat_00295f78;
extern unsigned char dat_00295f74;
extern unsigned char dat_00295f60;
__declspec(naked) void sub_00013760(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF0h
        sub esp, 24h
        movss xmm3, dword ptr [dat_00295c74]
        movss xmm2, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 0Ch]
        mov edx, dword ptr [ebp + 8h]
        push ebx
        push esi
        movaps xmm4, xmm3
        push edi
        subss xmm4, xmm2
        mov esi, dword ptr [ebp + 8h]
        mov edi, dword ptr [ebp + 0Ch]
        movaps xmm0, xmmword ptr [esi]
        mulps xmm0, xmmword ptr [edi]
        movaps xmm1, xmm0
        shufps xmm1, xmm1, 39h
        addss xmm0, xmm1
        shufps xmm1, xmm1, 39h
        addss xmm0, xmm1
        shufps xmm1, xmm1, 39h
        addss xmm0, xmm1
        movss dword ptr [esp + 14h], xmm0
        movss xmm1, dword ptr [esp + 14h]
        xorps xmm5, xmm5
        comiss xmm5, xmm1
        movaps xmm0, xmm1
        movss dword ptr [esp + 14h], xmm0
        jbe L_137DB
        movaps xmm0, xmm5
        subss xmm0, xmm1
        movss dword ptr [esp + 14h], xmm0
        mov bl, 1h
        jmp L_137DD
        L_137DB:
        xor bl, bl
        L_137DD:
        movss xmm1, dword ptr [dat_00295e58]
        comiss xmm1, xmm0
        jbe L_13956
        movaps xmm1, xmm0
        mulss xmm1, xmm0
        movaps xmm0, xmm3
        subss xmm0, xmm1
        movss dword ptr [esp + 18h], xmm0
        sqrtss xmm0, dword ptr [esp + 18h]
        movss dword ptr [esp + 1Ch], xmm0
        movss xmm0, dword ptr [esp + 1Ch]
        movss dword ptr [esp + 1Ch], xmm0
        fld float ptr [esp + 14h]
        fld float ptr [esp + 1Ch]
        fpatan
        fstp float ptr [esp + 18h]
        movss xmm0, dword ptr [dat_002881a0]
        subss xmm0, dword ptr [esp + 18h]
        movss xmm5, dword ptr [dat_00295f80]
        movss xmm6, dword ptr [dat_00295f7c]
        movss xmm7, dword ptr [dat_00295d94]
        movaps xmm1, xmm0
        mulss xmm1, xmm0
        movaps xmm2, xmm1
        mulss xmm2, xmm5
        subss xmm2, xmm6
        mulss xmm2, xmm1
        addss xmm2, dword ptr [dat_00295f78]
        mulss xmm2, xmm1
        subss xmm2, dword ptr [dat_00295f74]
        mulss xmm2, xmm1
        addss xmm2, dword ptr [dat_00295f60]
        mulss xmm2, xmm1
        subss xmm2, xmm7
        mulss xmm1, xmm0
        mulss xmm2, xmm1
        addss xmm2, xmm0
        divss xmm3, xmm2
        movss dword ptr [esp + 1Ch], xmm3
        movaps xmm3, xmm0
        mulss xmm0, dword ptr [ebp + 10h]
        mulss xmm3, xmm4
        movaps xmm1, xmm3
        mulss xmm1, xmm3
        movaps xmm2, xmm1
        mulss xmm2, xmm5
        subss xmm2, xmm6
        mulss xmm2, xmm1
        addss xmm2, dword ptr [dat_00295f78]
        mulss xmm2, xmm1
        subss xmm2, dword ptr [dat_00295f74]
        mulss xmm2, xmm1
        addss xmm2, dword ptr [dat_00295f60]
        mulss xmm2, xmm1
        subss xmm2, xmm7
        mulss xmm1, xmm3
        mulss xmm2, xmm1
        addss xmm2, xmm3
        movss xmm3, dword ptr [esp + 1Ch]
        mulss xmm2, xmm3
        movaps xmm4, xmm2
        movaps xmm1, xmm0
        mulss xmm1, xmm0
        movaps xmm2, xmm1
        mulss xmm2, xmm5
        xorps xmm5, xmm5
        subss xmm2, xmm6
        mulss xmm2, xmm1
        addss xmm2, dword ptr [dat_00295f78]
        mulss xmm2, xmm1
        subss xmm2, dword ptr [dat_00295f74]
        mulss xmm2, xmm1
        addss xmm2, dword ptr [dat_00295f60]
        mulss xmm2, xmm1
        subss xmm2, xmm7
        mulss xmm1, xmm0
        mulss xmm2, xmm1
        addss xmm2, xmm0
        mulss xmm2, xmm3
        L_13956:
        test bl, bl
        jz L_13961
        subss xmm5, xmm2
        movaps xmm2, xmm5
        L_13961:
        movss xmm0, dword ptr [edx]
        movss xmm1, dword ptr [ecx]
        mulss xmm0, xmm4
        mulss xmm1, xmm2
        addss xmm0, xmm1
        movss xmm1, dword ptr [ecx + 4h]
        movss dword ptr [esp + 20h], xmm0
        movss xmm0, dword ptr [edx + 4h]
        mulss xmm0, xmm4
        mulss xmm1, xmm2
        addss xmm0, xmm1
        movss xmm1, dword ptr [ecx + 8h]
        movss dword ptr [esp + 24h], xmm0
        movss xmm0, dword ptr [edx + 8h]
        mulss xmm0, xmm4
        mulss xmm1, xmm2
        addss xmm0, xmm1
        movss xmm1, dword ptr [ecx + 0Ch]
        movss dword ptr [esp + 28h], xmm0
        movss xmm0, dword ptr [edx + 0Ch]
        mov edx, dword ptr [esp + 20h]
        mov ecx, eax
        mov dword ptr [ecx], edx
        mov edx, dword ptr [esp + 24h]
        mov dword ptr [ecx + 4h], edx
        mov edx, dword ptr [esp + 28h]
        mulss xmm0, xmm4
        mulss xmm1, xmm2
        pop edi
        addss xmm0, xmm1
        mov dword ptr [ecx + 8h], edx
        movss dword ptr [esp + 28h], xmm0
        mov edx, dword ptr [esp + 28h]
        pop esi
        mov dword ptr [ecx + 0Ch], edx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
