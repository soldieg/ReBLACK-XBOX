__declspec(naked) void sub_00015D00(void)
{
    __asm {
        movaps xmm0, xmmword ptr [ecx]
        movaps xmmword ptr [eax], xmm0
        movaps xmm0, xmmword ptr [ecx + 10h]
        movaps xmmword ptr [eax + 10h], xmm0
        movaps xmm0, xmmword ptr [ecx + 20h]
        movaps xmmword ptr [eax + 20h], xmm0
        movaps xmm0, xmmword ptr [ecx + 30h]
        movaps xmmword ptr [eax + 30h], xmm0
        push ebx
        push ebp
        lea edx, [ecx + 40h]
        push esi
        push edi
        mov edi, dword ptr [edx]
        mov dword ptr [eax + 40h], edi
        mov edi, dword ptr [edx]
        mov dword ptr [eax + 40h], edi
        mov edi, dword ptr [edx]
        mov dword ptr [eax + 40h], edi
        mov edi, dword ptr [edx]
        lea esi, [eax + 40h]
        mov dword ptr [esi], edi
        mov edi, edx
        mov ebp, dword ptr [edi]
        mov ebx, esi
        mov dword ptr [ebx], ebp
        mov ebp, dword ptr [edi + 4h]
        mov dword ptr [ebx + 4h], ebp
        mov edi, dword ptr [edi + 8h]
        mov dword ptr [ebx + 8h], edi
        mov edx, dword ptr [edx]
        mov dword ptr [esi], edx
        mov edx, dword ptr [ecx + 4Ch]
        mov dword ptr [eax + 4Ch], edx
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [eax + 50h], edx
        mov edx, dword ptr [ecx + 54h]
        pop edi
        mov dword ptr [eax + 54h], edx
        mov edx, dword ptr [ecx + 58h]
        pop esi
        mov dword ptr [eax + 58h], edx
        mov ecx, dword ptr [ecx + 5Ch]
        pop ebp
        mov dword ptr [eax + 5Ch], ecx
        pop ebx
        ret
    }
}
