__declspec(naked) void sub_00015E10(void)
{
    __asm {
        movaps xmm0, xmmword ptr [ecx]
        movaps xmmword ptr [eax], xmm0
        movaps xmm0, xmmword ptr [ecx + 10h]
        movaps xmmword ptr [eax + 10h], xmm0
        mov edx, dword ptr [ecx + 20h]
        mov dword ptr [eax + 20h], edx
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [eax + 24h], edx
        mov edx, dword ptr [ecx + 28h]
        mov dword ptr [eax + 28h], edx
        mov dl, byte ptr [ecx + 2Ch]
        mov byte ptr [eax + 2Ch], dl
        mov dl, byte ptr [ecx + 2Dh]
        mov byte ptr [eax + 2Dh], dl
        mov ecx, dword ptr [ecx + 30h]
        mov dword ptr [eax + 30h], ecx
        ret
    }
}
