extern unsigned char dat_00295f6c;
extern unsigned char dat_00295c74;
__declspec(naked) void sub_00014F00(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF0h
        sub esp, 68h
        mulss xmm0, dword ptr [dat_00295f6c]
        push esi
        push edi
        movss dword ptr [esp + 8h], xmm0
        fld float ptr [esp + 8h]
        fsin
        fstp float ptr [esp + 0Ch]
        movss xmm0, dword ptr [esp + 0Ch]
        movss dword ptr [esp + 10h], xmm0
        fld float ptr [esp + 8h]
        fcos
        fstp float ptr [esp + 0Ch]
        movss xmm0, dword ptr [esp + 0Ch]
        mov ecx, dword ptr [esp + 10h]
        movss dword ptr [esp + 14h], xmm0
        movss xmm0, dword ptr [dat_00295c74]
        mov edx, dword ptr [esp + 14h]
        movss dword ptr [esp + 30h], xmm0
        xorps xmm0, xmm0
        mov dword ptr [esp + 20h], ecx
        mov ecx, dword ptr [esp + 18h]
        movss xmm2, dword ptr [esp + 20h]
        mov dword ptr [esp + 24h], edx
        movss xmm1, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 1Ch]
        mov dword ptr [esp + 28h], ecx
        movss dword ptr [esp + 34h], xmm0
        movss dword ptr [esp + 38h], xmm0
        movss dword ptr [esp + 40h], xmm0
        movaps xmm3, xmm0
        movss dword ptr [esp + 50h], xmm0
        subss xmm3, xmm2
        xorps xmm0, xmm0
        mov ecx, 10h
        lea esi, [esp + 30h]
        mov edi, eax
        movss dword ptr [esp + 44h], xmm1
        movss dword ptr [esp + 48h], xmm3
        movss dword ptr [esp + 54h], xmm2
        movss dword ptr [esp + 58h], xmm1
        movaps xmmword ptr [esp + 60h], xmm0
        rep movsd
        pop edi
        mov dword ptr [esp + 28h], edx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
