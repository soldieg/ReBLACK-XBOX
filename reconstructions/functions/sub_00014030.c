__declspec(naked) void sub_00014030(void)
{
    __asm {
        mov ecx, dword ptr [edx + 4h]
        mov al, byte ptr [edx + 1h]
        push ebx
        add ecx, edx
        xor bl, bl
        test al, al
        mov dword ptr [edx + 4h], ecx
        jbe L_14084
        push esi
        L_14043:
        mov esi, dword ptr [edx + 4h]
        movzx eax, bl
        shl eax, 5h
        mov ecx, dword ptr [eax + esi*1h + 8h]
        add eax, esi
        add dword ptr [eax + 0Ch], eax
        add dword ptr [eax + 10h], eax
        add dword ptr [eax + 14h], eax
        mov esi, dword ptr [eax + 18h]
        add ecx, eax
        add esi, eax
        mov dword ptr [eax + 8h], ecx
        mov dword ptr [eax + 18h], esi
        mov eax, dword ptr [ecx + 0A0h]
        test eax, eax
        jz L_1407A
        add eax, ecx
        mov dword ptr [ecx + 0A0h], eax
        L_1407A:
        mov al, byte ptr [edx + 1h]
        inc bl
        cmp bl, al
        jc L_14043
        pop esi
        L_14084:
        pop ebx
        ret
    }
}
