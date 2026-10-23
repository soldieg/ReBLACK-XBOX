/* Exact x86 body; the caller establishes ECX and semantic field names remain unknown. */
__declspec(naked) int sub_000DBC80(void)
{
    __asm {
        __emit 0F3h
        __emit 0Fh
        __emit 10h
        __emit 0Dh
        __emit 0C4h
        __emit 5Ch
        __emit 29h
        __emit 00h
        movss xmm0, dword ptr [ecx + 8B1Ch]
        push ebx
        mov bl, byte ptr [ecx + 8B40h]
        xor eax, eax
        or edx, 0FFFFFFFFh
        test bl, bl
        jnz L_second
        comiss xmm0, xmm1
        jbe L_second
        xor edx, edx
        movaps xmm1, xmm0
    L_second:
        mov bl, byte ptr [ecx + 8B41h]
        test bl, bl
        pop ebx
        jnz L_decide
        movss xmm0, dword ptr [ecx + 8B38h]
        comiss xmm0, xmm1
        jbe L_decide
        mov edx, 1
        jmp L_result
    L_decide:
        test edx, edx
        jl L_done
    L_result:
        mov eax, edx
        imul eax, eax, 1Ch
        lea eax, [eax + ecx + 8B08h]
        mov byte ptr [edx + ecx + 8B40h], 1
    L_done:
        ret
    }
}
