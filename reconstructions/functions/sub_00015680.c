extern unsigned char dat_00295e98;
__declspec(naked) void sub_00015680(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF0h
        sub esp, 30h
        movss xmm0, dword ptr [dat_00295e98]
        movaps xmm1, xmmword ptr [edx]
        movss dword ptr [esp + 0Ch], xmm0
        lea eax, [esp + 0Ch]
        movss xmm0, dword ptr [eax]
        shufps xmm0, xmm0, 0h
        mulps xmm1, xmm0
        movaps xmmword ptr [esp + 20h], xmm1
        cvttss2si edx, dword ptr [esp + 24h]
        cvttss2si eax, dword ptr [esp + 20h]
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 10h], eax
        cvttss2si eax, dword ptr [esp + 28h]
        mov edx, 0FFh
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 0Ch], edx
        push eax
        mov eax, dword ptr [esp + 14h]
        cmp eax, dword ptr [esp + 10h]
        cmovg eax, dword ptr [esp + 10h]
        mov dword ptr [esp + 20h], eax
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
        mov dl, byte ptr [esp + 1Ch]
        mov al, byte ptr [esp + 0Ch]
        mov byte ptr [ecx], dl
        mov dl, byte ptr [esp + 10h]
        mov byte ptr [ecx + 1h], al
        mov byte ptr [ecx + 2h], dl
        mov byte ptr [ecx + 3h], 80h
        mov esp, ebp
        pop ebp
        ret
    }
}
