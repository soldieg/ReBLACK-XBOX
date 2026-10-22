__declspec(naked) void __cdecl sub_00092C60(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 10h
        mov ecx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 8]
        movaps xmm0, xmmword ptr [eax]
        mov edx, dword ptr [ebp + 0ch]
        movaps xmm2, xmmword ptr [edx]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [esp + 0ch], ecx
        movss xmm1, dword ptr [esp + 0ch]
        subps xmm2, xmm0
        shufps xmm1, xmm1, 0
        mulps xmm2, xmm1
        addps xmm0, xmm2
        movaps xmmword ptr [eax], xmm0
        mov esp, ebp
        pop ebp
        ret
    }
}
