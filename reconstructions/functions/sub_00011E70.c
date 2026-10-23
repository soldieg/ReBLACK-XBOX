extern float DAT_00295C74;
extern float DAT_00295CC4;

void __declspec(naked) sub_00011E70(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF0h
        sub esp, 10h
        xorps xmm0, xmm0
        movaps xmm1, xmmword ptr [eax]
        movss dword ptr [esp], xmm0
        movaps xmm0, xmmword ptr [ecx]
        mulps xmm0, xmm1
        movaps xmm1, xmm0
        shufps xmm1, xmm0, 39h
        addss xmm0, xmm1
        movaps xmm2, xmm1
        shufps xmm2, xmm1, 39h
        addss xmm0, xmm2
        lea edx, [esp]
        movss dword ptr [edx], xmm0
        movss xmm0, dword ptr [DAT_00295C74]
        movss dword ptr [esp + 4], xmm0
        movss xmm0, dword ptr [DAT_00295CC4]
        movss dword ptr [esp + 8], xmm0
        movss xmm0, dword ptr [esp]
        movss dword ptr [esp], xmm0
        movss xmm0, dword ptr [esp]
        maxss xmm0, dword ptr [esp + 8]
        minss xmm0, dword ptr [esp + 4]
        movss dword ptr [esp + 0Ch], xmm0
        movss xmm0, dword ptr [esp + 0Ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
