void __declspec(naked) sub_00011D90(void)
{
    __asm {
        push ebp
        mov ebp, esp
        mov edx, dword ptr [ebp + 8]
        movaps xmm0, xmmword ptr [ecx]
        movaps xmm1, xmmword ptr [edx]
        shufps xmm0, xmm0, 0C9h
        shufps xmm1, xmm1, 0D2h
        movaps xmm3, xmm0
        shufps xmm3, xmm0, 0C9h
        movaps xmm2, xmm1
        shufps xmm2, xmm1, 0D2h
        mulps xmm3, xmm2
        mulps xmm0, xmm1
        subps xmm0, xmm3
        and esp, 0FFFFFFF0h
        movaps xmmword ptr [eax], xmm0
        mov esp, ebp
        pop ebp
        ret
    }
}
