/* Exact x86 body; the object arrives in EAX and the caller passes one stack word. */
__declspec(naked) void sub_000DBD10(void)
{
    __asm {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 40h]
        mov edx, dword ptr [ecx + 30h]
        movzx eax, word ptr [ebp + 8]
        xorps xmm0, xmm0
        lea eax, [eax + eax * 2]
        shl eax, 5
        mov ecx, dword ptr [eax + edx + 5Ch]
        add eax, edx
        movss dword ptr [eax + 40h], xmm0
        movss dword ptr [eax + 44h], xmm0
        movss dword ptr [eax + 48h], xmm0
        and esp, 0FFFFFFF0h
        and ecx, 0FFFFFFFEh
        mov dword ptr [eax + 5Ch], ecx
        __emit 0Fh
        __emit 28h
        __emit 0Dh
        __emit 70h
        __emit 0CEh
        __emit 2Ah
        __emit 00h
        movaps xmmword ptr [eax], xmm1
        __emit 0Fh
        __emit 28h
        __emit 0Dh
        __emit 80h
        __emit 0CEh
        __emit 2Ah
        __emit 00h
        movaps xmmword ptr [eax + 10h], xmm1
        __emit 0Fh
        __emit 28h
        __emit 0Dh
        __emit 90h
        __emit 0CEh
        __emit 2Ah
        __emit 00h
        movaps xmmword ptr [eax + 20h], xmm1
        __emit 0Fh
        __emit 28h
        __emit 0Dh
        __emit 90h
        __emit 43h
        __emit 2Fh
        __emit 00h
        movaps xmmword ptr [eax + 30h], xmm1
        movss dword ptr [eax + 30h], xmm0
        movss dword ptr [eax + 38h], xmm0
        __emit 0F3h
        __emit 0Fh
        __emit 10h
        __emit 05h
        __emit 94h
        __emit 5Eh
        __emit 29h
        __emit 00h
        movss dword ptr [eax + 34h], xmm0
        mov esp, ebp
        pop ebp
        ret 4
    }
}
