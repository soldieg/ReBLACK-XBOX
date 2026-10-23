extern unsigned char dat_00295c6c;
__declspec(naked) void sub_000132C0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 20h
        mulss xmm0, dword ptr [dat_00295c6c]
        movss dword ptr [esp + 4h], xmm0
        fld float ptr [esp + 4h]
        fsin
        fstp float ptr [esp + 8h]
        fld float ptr [esp + 4h]
        fcos
        fstp float ptr [esp + 0ch]
        movss xmm0, dword ptr [esp + 8h]
        movaps xmm1, xmmword ptr [edx]
        movss dword ptr [esp + 8h], xmm0
        lea ecx, [esp + 8h]
        movss xmm0, dword ptr [ecx]
        shufps xmm0, xmm0, 0h
        mulps xmm1, xmm0
        movaps xmmword ptr [esp + 10h], xmm1
        movss xmm0, dword ptr [esp + 10h]
        movss dword ptr [eax], xmm0
        movss xmm0, dword ptr [esp + 14h]
        movss dword ptr [eax + 4h], xmm0
        movss xmm0, dword ptr [esp + 18h]
        movss dword ptr [eax + 8h], xmm0
        movss xmm0, dword ptr [esp + 0ch]
        movss dword ptr [eax + 0ch], xmm0
        mov esp, ebp
        pop ebp
        ret
    }
}
