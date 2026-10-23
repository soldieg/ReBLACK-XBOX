__declspec(naked) void __cdecl sub_00020D90(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        cmp edi, 4h
        jl l20fd0
        mov edx, dword ptr [ebp + 8h]
        lea esi, [edi + -4h]
        shr esi, 2h
        add edx, 10h
        inc esi
        lea ecx, [ebx + 14h]
        lea ebx, [esi*4h + 0h]
        mov dword ptr [ebp + -4h], ebx
L20dc3:
        movss xmm0, dword ptr [ecx + -14h]
        movss xmm1, dword ptr [eax]
        mulss xmm1, xmm0
        mulss xmm0, dword ptr [eax + 4h]
        movss dword ptr [ebp + -18h], xmm1
        mov ebx, dword ptr [ebp + -18h]
        movss xmm1, dword ptr [eax + 8h]
        movss dword ptr [ebp + -14h], xmm0
        movss xmm0, dword ptr [ecx + -10h]
        mulss xmm1, xmm0
        mov dword ptr [ebp + -10h], ebx
        mov ebx, dword ptr [ebp + -14h]
        movss dword ptr [ebp + -20h], xmm1
        movss xmm1, dword ptr [eax + 0ch]
        mulss xmm1, xmm0
        movss xmm0, dword ptr [ebp + -10h]
        mov dword ptr [ebp + -0ch], ebx
        mov ebx, dword ptr [ebp + -20h]
        movss dword ptr [ebp + -1ch], xmm1
        mov dword ptr [ebp + -28h], ebx
        addss xmm0, dword ptr [ebp + -28h]
        mov ebx, dword ptr [ebp + -1ch]
        movss dword ptr [ebp + -10h], xmm0
        mov dword ptr [ebp + -24h], ebx
        mov ebx, dword ptr [ebp + -10h]
        movss xmm0, dword ptr [ebp + -24h]
        addss xmm0, dword ptr [ebp + -0ch]
        mov dword ptr [edx + -10h], ebx
        movss dword ptr [ebp + -0ch], xmm0
        mov ebx, dword ptr [ebp + -0ch]
        mov dword ptr [edx + -0ch], ebx
        movss xmm0, dword ptr [ecx + -0ch]
        movss xmm1, dword ptr [eax]
        mulss xmm1, xmm0
        mulss xmm0, dword ptr [eax + 4h]
        movss dword ptr [ebp + -18h], xmm1
        mov ebx, dword ptr [ebp + -18h]
        movss xmm1, dword ptr [eax + 8h]
        movss dword ptr [ebp + -14h], xmm0
        movss xmm0, dword ptr [ecx + -8h]
        mulss xmm1, xmm0
        mov dword ptr [ebp + -10h], ebx
        mov ebx, dword ptr [ebp + -14h]
        movss dword ptr [ebp + -20h], xmm1
        movss xmm1, dword ptr [eax + 0ch]
        mulss xmm1, xmm0
        movss xmm0, dword ptr [ebp + -10h]
        mov dword ptr [ebp + -0ch], ebx
        mov ebx, dword ptr [ebp + -20h]
        movss dword ptr [ebp + -1ch], xmm1
        mov dword ptr [ebp + -28h], ebx
        addss xmm0, dword ptr [ebp + -28h]
        mov ebx, dword ptr [ebp + -1ch]
        movss dword ptr [ebp + -10h], xmm0
        mov dword ptr [ebp + -24h], ebx
        mov ebx, dword ptr [ebp + -10h]
        movss xmm0, dword ptr [ebp + -24h]
        addss xmm0, dword ptr [ebp + -0ch]
        mov dword ptr [edx + -8h], ebx
        movss dword ptr [ebp + -0ch], xmm0
        mov ebx, dword ptr [ebp + -0ch]
        mov dword ptr [edx + -4h], ebx
        movss xmm0, dword ptr [ecx + -4h]
        movss xmm1, dword ptr [eax]
        mulss xmm1, xmm0
        mulss xmm0, dword ptr [eax + 4h]
        movss dword ptr [ebp + -18h], xmm1
        mov ebx, dword ptr [ebp + -18h]
        movss xmm1, dword ptr [eax + 8h]
        movss dword ptr [ebp + -14h], xmm0
        movss xmm0, dword ptr [ecx]
        mov dword ptr [ebp + -10h], ebx
        mov ebx, dword ptr [ebp + -14h]
        mulss xmm1, xmm0
        movss dword ptr [ebp + -20h], xmm1
        movss xmm1, dword ptr [eax + 0ch]
        mov dword ptr [ebp + -0ch], ebx
        mov ebx, dword ptr [ebp + -20h]
        mulss xmm1, xmm0
        movss dword ptr [ebp + -1ch], xmm1
        mov dword ptr [ebp + -28h], ebx
        movss xmm0, dword ptr [ebp + -10h]
        addss xmm0, dword ptr [ebp + -28h]
        mov ebx, dword ptr [ebp + -1ch]
        movss dword ptr [ebp + -10h], xmm0
        mov dword ptr [ebp + -24h], ebx
        mov ebx, dword ptr [ebp + -10h]
        movss xmm0, dword ptr [ebp + -24h]
        addss xmm0, dword ptr [ebp + -0ch]
        mov dword ptr [edx], ebx
        movss dword ptr [ebp + -0ch], xmm0
        mov ebx, dword ptr [ebp + -0ch]
        mov dword ptr [edx + 4h], ebx
        movss xmm0, dword ptr [ecx + 4h]
        movss xmm1, dword ptr [eax]
        mulss xmm1, xmm0
        mulss xmm0, dword ptr [eax + 4h]
        movss dword ptr [ebp + -18h], xmm1
        mov ebx, dword ptr [ebp + -18h]
        movss xmm1, dword ptr [eax + 8h]
        mov dword ptr [ebp + -10h], ebx
        movss dword ptr [ebp + -14h], xmm0
        movss xmm0, dword ptr [ecx + 8h]
        mov ebx, dword ptr [ebp + -14h]
        mulss xmm1, xmm0
        mov dword ptr [ebp + -0ch], ebx
        movss dword ptr [ebp + -20h], xmm1
        movss xmm1, dword ptr [eax + 0ch]
        mov ebx, dword ptr [ebp + -20h]
        mulss xmm1, xmm0
        movss xmm0, dword ptr [ebp + -10h]
        mov dword ptr [ebp + -28h], ebx
        addss xmm0, dword ptr [ebp + -28h]
        movss dword ptr [ebp + -1ch], xmm1
        mov ebx, dword ptr [ebp + -1ch]
        mov dword ptr [ebp + -24h], ebx
        movss dword ptr [ebp + -10h], xmm0
        mov ebx, dword ptr [ebp + -10h]
        movss xmm0, dword ptr [ebp + -24h]
        addss xmm0, dword ptr [ebp + -0ch]
        mov dword ptr [edx + 8h], ebx
        movss dword ptr [ebp + -0ch], xmm0
        mov ebx, dword ptr [ebp + -0ch]
        mov dword ptr [edx + 0ch], ebx
        add ecx, 20h
        add edx, 20h
        dec esi
        jnz l20dc3
        mov ebx, dword ptr [ebp + 0ch]
        mov esi, dword ptr [ebp + -4h]
L20fd0:
        cmp esi, edi
        jge l2106b
        mov edx, dword ptr [ebp + 8h]
        sub edx, ebx
        lea ecx, [ebx + esi*8h]
        sub edi, esi
L20fe2:
        movss xmm0, dword ptr [ecx]
        movss xmm1, dword ptr [eax]
        mulss xmm1, xmm0
        mulss xmm0, dword ptr [eax + 4h]
        movss dword ptr [ebp + -18h], xmm1
        mov esi, dword ptr [ebp + -18h]
        movss xmm1, dword ptr [eax + 8h]
        mov dword ptr [ebp + -10h], esi
        movss dword ptr [ebp + -14h], xmm0
        movss xmm0, dword ptr [ecx + 4h]
        mov esi, dword ptr [ebp + -14h]
        mulss xmm1, xmm0
        mov dword ptr [ebp + -0ch], esi
        movss dword ptr [ebp + -20h], xmm1
        movss xmm1, dword ptr [eax + 0ch]
        mov esi, dword ptr [ebp + -20h]
        mulss xmm1, xmm0
        movss xmm0, dword ptr [ebp + -10h]
        mov dword ptr [ebp + -28h], esi
        addss xmm0, dword ptr [ebp + -28h]
        movss dword ptr [ebp + -1ch], xmm1
        mov esi, dword ptr [ebp + -1ch]
        mov dword ptr [ebp + -24h], esi
        movss dword ptr [ebp + -10h], xmm0
        mov esi, dword ptr [ebp + -10h]
        movss xmm0, dword ptr [ebp + -24h]
        addss xmm0, dword ptr [ebp + -0ch]
        mov dword ptr [edx + ecx*1h], esi
        movss dword ptr [ebp + -0ch], xmm0
        mov esi, dword ptr [ebp + -0ch]
        mov dword ptr [edx + ecx*1h + 4h], esi
        add ecx, 8h
        dec edi
        jnz l20fe2
L2106b:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
