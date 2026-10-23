__declspec(naked) void __cdecl sub_000209F0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        cmp edi, 4h
        jl l20cb8
        mov edx, dword ptr [ebp + 8h]
        lea esi, [edi + -4h]
        shr esi, 2h
        add edx, 10h
        inc esi
        lea ecx, [ebx + 14h]
        lea ebx, [esi*4h + 0h]
        mov dword ptr [ebp + -4h], ebx
L20a23:
        mov ebx, dword ptr [eax + 10h]
        movss xmm0, dword ptr [ecx + -14h]
        movss xmm1, dword ptr [eax]
        movss xmm2, dword ptr [ecx + -10h]
        movss xmm3, dword ptr [eax + 8h]
        mov dword ptr [ebp + -10h], ebx
        mov ebx, dword ptr [eax + 14h]
        mulss xmm1, xmm0
        mov dword ptr [ebp + -0ch], ebx
        movss dword ptr [ebp + -18h], xmm1
        movss xmm1, dword ptr [eax + 4h]
        mov ebx, dword ptr [ebp + -18h]
        mulss xmm1, xmm0
        mov dword ptr [ebp + -20h], ebx
        movss xmm0, dword ptr [ebp + -20h]
        addss xmm0, dword ptr [ebp + -10h]
        movss dword ptr [ebp + -14h], xmm1
        mov ebx, dword ptr [ebp + -14h]
        mov dword ptr [ebp + -1ch], ebx
        movss xmm1, dword ptr [ebp + -1ch]
        addss xmm1, dword ptr [ebp + -0ch]
        mulss xmm3, xmm2
        movss dword ptr [ebp + -28h], xmm3
        movss xmm3, dword ptr [eax + 0ch]
        mov ebx, dword ptr [ebp + -28h]
        mov dword ptr [ebp + -30h], ebx
        mulss xmm3, xmm2
        movss xmm2, dword ptr [ebp + -30h]
        addss xmm2, xmm0
        movss dword ptr [ebp + -24h], xmm3
        mov ebx, dword ptr [ebp + -24h]
        mov dword ptr [ebp + -2ch], ebx
        movss xmm0, dword ptr [ebp + -2ch]
        addss xmm0, xmm1
        movss dword ptr [ebp + -10h], xmm2
        mov ebx, dword ptr [ebp + -10h]
        mov dword ptr [edx + -10h], ebx
        movss dword ptr [ebp + -0ch], xmm0
        mov ebx, dword ptr [ebp + -0ch]
        mov dword ptr [edx + -0ch], ebx
        mov ebx, dword ptr [eax + 10h]
        movss xmm0, dword ptr [ecx + -0ch]
        movss xmm1, dword ptr [eax]
        movss xmm2, dword ptr [ecx + -8h]
        movss xmm3, dword ptr [eax + 8h]
        mov dword ptr [ebp + -10h], ebx
        mov ebx, dword ptr [eax + 14h]
        mulss xmm1, xmm0
        mov dword ptr [ebp + -0ch], ebx
        movss dword ptr [ebp + -18h], xmm1
        movss xmm1, dword ptr [eax + 4h]
        mov ebx, dword ptr [ebp + -18h]
        mulss xmm1, xmm0
        mov dword ptr [ebp + -20h], ebx
        movss xmm0, dword ptr [ebp + -20h]
        addss xmm0, dword ptr [ebp + -10h]
        movss dword ptr [ebp + -14h], xmm1
        mov ebx, dword ptr [ebp + -14h]
        mov dword ptr [ebp + -1ch], ebx
        movss xmm1, dword ptr [ebp + -1ch]
        addss xmm1, dword ptr [ebp + -0ch]
        mulss xmm3, xmm2
        movss dword ptr [ebp + -28h], xmm3
        movss xmm3, dword ptr [eax + 0ch]
        mov ebx, dword ptr [ebp + -28h]
        mov dword ptr [ebp + -30h], ebx
        mulss xmm3, xmm2
        movss xmm2, dword ptr [ebp + -30h]
        movss dword ptr [ebp + -24h], xmm3
        mov ebx, dword ptr [ebp + -24h]
        mov dword ptr [ebp + -2ch], ebx
        addss xmm2, xmm0
        movss xmm0, dword ptr [ebp + -2ch]
        movss dword ptr [ebp + -10h], xmm2
        mov ebx, dword ptr [ebp + -10h]
        addss xmm0, xmm1
        mov dword ptr [edx + -8h], ebx
        movss dword ptr [ebp + -0ch], xmm0
        mov ebx, dword ptr [ebp + -0ch]
        mov dword ptr [edx + -4h], ebx
        mov ebx, dword ptr [eax + 10h]
        movss xmm0, dword ptr [ecx + -4h]
        movss xmm1, dword ptr [eax]
        movss xmm2, dword ptr [ecx]
        movss xmm3, dword ptr [eax + 8h]
        mulss xmm1, xmm0
        mov dword ptr [ebp + -10h], ebx
        mov ebx, dword ptr [eax + 14h]
        mov dword ptr [ebp + -0ch], ebx
        movss dword ptr [ebp + -18h], xmm1
        movss xmm1, dword ptr [eax + 4h]
        mov ebx, dword ptr [ebp + -18h]
        mulss xmm1, xmm0
        mov dword ptr [ebp + -20h], ebx
        movss xmm0, dword ptr [ebp + -20h]
        addss xmm0, dword ptr [ebp + -10h]
        movss dword ptr [ebp + -14h], xmm1
        mov ebx, dword ptr [ebp + -14h]
        mov dword ptr [ebp + -1ch], ebx
        movss xmm1, dword ptr [ebp + -1ch]
        addss xmm1, dword ptr [ebp + -0ch]
        mulss xmm3, xmm2
        movss dword ptr [ebp + -28h], xmm3
        movss xmm3, dword ptr [eax + 0ch]
        mov ebx, dword ptr [ebp + -28h]
        mov dword ptr [ebp + -30h], ebx
        mulss xmm3, xmm2
        movss xmm2, dword ptr [ebp + -30h]
        addss xmm2, xmm0
        movss dword ptr [ebp + -24h], xmm3
        mov ebx, dword ptr [ebp + -24h]
        mov dword ptr [ebp + -2ch], ebx
        movss xmm0, dword ptr [ebp + -2ch]
        addss xmm0, xmm1
        movss dword ptr [ebp + -10h], xmm2
        mov ebx, dword ptr [ebp + -10h]
        mov dword ptr [edx], ebx
        movss dword ptr [ebp + -0ch], xmm0
        mov ebx, dword ptr [ebp + -0ch]
        mov dword ptr [edx + 4h], ebx
        mov ebx, dword ptr [eax + 10h]
        movss xmm0, dword ptr [ecx + 4h]
        movss xmm1, dword ptr [eax]
        movss xmm2, dword ptr [ecx + 8h]
        movss xmm3, dword ptr [eax + 8h]
        mov dword ptr [ebp + -10h], ebx
        mov ebx, dword ptr [eax + 14h]
        mulss xmm1, xmm0
        mov dword ptr [ebp + -0ch], ebx
        movss dword ptr [ebp + -18h], xmm1
        movss xmm1, dword ptr [eax + 4h]
        mov ebx, dword ptr [ebp + -18h]
        mulss xmm1, xmm0
        mov dword ptr [ebp + -20h], ebx
        movss xmm0, dword ptr [ebp + -20h]
        addss xmm0, dword ptr [ebp + -10h]
        movss dword ptr [ebp + -14h], xmm1
        mov ebx, dword ptr [ebp + -14h]
        mulss xmm3, xmm2
        mov dword ptr [ebp + -1ch], ebx
        movss xmm1, dword ptr [ebp + -1ch]
        addss xmm1, dword ptr [ebp + -0ch]
        movss dword ptr [ebp + -28h], xmm3
        movss xmm3, dword ptr [eax + 0ch]
        mov ebx, dword ptr [ebp + -28h]
        mulss xmm3, xmm2
        mov dword ptr [ebp + -30h], ebx
        movss xmm2, dword ptr [ebp + -30h]
        movss dword ptr [ebp + -24h], xmm3
        mov ebx, dword ptr [ebp + -24h]
        addss xmm2, xmm0
        mov dword ptr [ebp + -2ch], ebx
        movss xmm0, dword ptr [ebp + -2ch]
        movss dword ptr [ebp + -10h], xmm2
        mov ebx, dword ptr [ebp + -10h]
        addss xmm0, xmm1
        mov dword ptr [edx + 8h], ebx
        movss dword ptr [ebp + -0ch], xmm0
        mov ebx, dword ptr [ebp + -0ch]
        mov dword ptr [edx + 0ch], ebx
        add ecx, 20h
        add edx, 20h
        dec esi
        jnz l20a23
        mov ebx, dword ptr [ebp + 0ch]
        mov esi, dword ptr [ebp + -4h]
L20cb8:
        cmp esi, edi
        jge l20d7b
        mov edx, dword ptr [ebp + 8h]
        sub edx, ebx
        lea ecx, [ebx + esi*8h]
        sub edi, esi
        ; Preserve the observed six-byte LEA encoding; MASM shortens this identity LEA.
        __emit 0x8D
        __emit 0x9B
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
L20cd0:
        mov esi, dword ptr [eax + 10h]
        movss xmm0, dword ptr [ecx]
        movss xmm1, dword ptr [eax]
        movss xmm2, dword ptr [ecx + 4h]
        movss xmm3, dword ptr [eax + 8h]
        mov dword ptr [ebp + -10h], esi
        mov esi, dword ptr [eax + 14h]
        mulss xmm1, xmm0
        mov dword ptr [ebp + -0ch], esi
        movss dword ptr [ebp + -18h], xmm1
        movss xmm1, dword ptr [eax + 4h]
        mov esi, dword ptr [ebp + -18h]
        mulss xmm1, xmm0
        mov dword ptr [ebp + -20h], esi
        movss xmm0, dword ptr [ebp + -20h]
        addss xmm0, dword ptr [ebp + -10h]
        movss dword ptr [ebp + -14h], xmm1
        mov esi, dword ptr [ebp + -14h]
        mulss xmm3, xmm2
        mov dword ptr [ebp + -1ch], esi
        movss xmm1, dword ptr [ebp + -1ch]
        addss xmm1, dword ptr [ebp + -0ch]
        movss dword ptr [ebp + -28h], xmm3
        movss xmm3, dword ptr [eax + 0ch]
        mov esi, dword ptr [ebp + -28h]
        mulss xmm3, xmm2
        mov dword ptr [ebp + -30h], esi
        movss xmm2, dword ptr [ebp + -30h]
        movss dword ptr [ebp + -24h], xmm3
        mov esi, dword ptr [ebp + -24h]
        addss xmm2, xmm0
        mov dword ptr [ebp + -2ch], esi
        movss xmm0, dword ptr [ebp + -2ch]
        movss dword ptr [ebp + -10h], xmm2
        mov esi, dword ptr [ebp + -10h]
        addss xmm0, xmm1
        mov dword ptr [edx + ecx*1h], esi
        movss dword ptr [ebp + -0ch], xmm0
        mov esi, dword ptr [ebp + -0ch]
        mov dword ptr [edx + ecx*1h + 4h], esi
        add ecx, 8h
        dec edi
        jnz l20cd0
L20d7b:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
