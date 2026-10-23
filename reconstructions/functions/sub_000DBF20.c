/* Exact x86 body; callers pass the output in EAX and the object in ECX. */
__declspec(naked) void sub_000DBF20(void)
{
    __asm {
        mov edx, dword ptr [ecx + 0Ch]
        mov ecx, dword ptr [edx + 0Ch]
        mov ecx, dword ptr [ecx + 0C8h]
        mov edx, dword ptr [ecx + 4Ch]
        movaps xmm1, xmmword ptr [ecx + 20h]
        movss xmm0, dword ptr [edx + 384h]
        shufps xmm1, xmm1, 24h
        shufps xmm0, xmm0, 0
        mulps xmm0, xmm1
        movaps xmmword ptr [eax], xmm0
        ret
    }
}
