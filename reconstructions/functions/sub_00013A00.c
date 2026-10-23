extern unsigned char dat_00295e98;
__declspec(naked) void sub_00013A00(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF0h
        sub esp, 30h
        movss xmm0, dword ptr [dat_00295e98]
        movaps xmm1, xmmword ptr [edx]
        movss dword ptr [esp + 8h], xmm0
        lea eax, [esp + 8h]
        movss xmm0, dword ptr [eax]
        shufps xmm0, xmm0, 0h
        mulps xmm1, xmm0
        movaps xmmword ptr [esp + 20h], xmm1
        cvttss2si edx, dword ptr [esp + 24h]
        cvttss2si eax, dword ptr [esp + 20h]
        mov dword ptr [esp + 10h], edx
        cvttss2si edx, dword ptr [esp + 2Ch]
        mov dword ptr [esp + 18h], edx
        mov dword ptr [esp + 0Ch], eax
        cvttss2si eax, dword ptr [esp + 28h]
        mov edx, 0FFh
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 8h], edx
        push eax
        mov eax, dword ptr [esp + 10h]
        cmp eax, dword ptr [esp + 0Ch]
        cmovg eax, dword ptr [esp + 0Ch]
        mov dword ptr [esp + 20h], eax
        pop eax
        mov dword ptr [esp + 0Ch], edx
        push eax
        mov eax, dword ptr [esp + 14h]
        cmp eax, dword ptr [esp + 10h]
        cmovg eax, dword ptr [esp + 10h]
        mov dword ptr [esp + 0Ch], eax
        pop eax
        mov dword ptr [esp + 10h], edx
        push eax
        mov eax, dword ptr [esp + 18h]
        cmp eax, dword ptr [esp + 14h]
        cmovg eax, dword ptr [esp + 14h]
        mov dword ptr [esp + 10h], eax
        pop eax
        mov dword ptr [esp + 14h], edx
        push eax
        mov eax, dword ptr [esp + 1Ch]
        cmp eax, dword ptr [esp + 18h]
        cmovg eax, dword ptr [esp + 18h]
        mov dword ptr [esp + 14h], eax
        pop eax
        mov al, byte ptr [esp + 1Ch]
        mov dl, byte ptr [esp + 8h]
        mov byte ptr [ecx], al
        mov al, byte ptr [esp + 0Ch]
        mov byte ptr [ecx + 1h], dl
        mov dl, byte ptr [esp + 10h]
        mov byte ptr [ecx + 2h], al
        mov byte ptr [ecx + 3h], dl
        mov esp, ebp
        pop ebp
        ret
    }
}
