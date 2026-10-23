__declspec(naked) void sub_000141E0(void)
{
    __asm {
        mov ecx, dword ptr [edx + 4h]
        mov al, byte ptr [edx]
        push edi
        add ecx, edx
        xor edi, edi
        test al, al
        mov dword ptr [edx + 4h], ecx
        jbe L_1422B
        push esi
        xor esi, esi
        L_141F4:
        mov eax, dword ptr [edx + 4h]
        mov ecx, dword ptr [esi + eax*1h + 14h]
        test ecx, ecx
        lea eax, [esi + eax*1h + 14h]
        jz L_14207
        add ecx, eax
        mov dword ptr [eax], ecx
        L_14207:
        mov ecx, dword ptr [eax + 4h]
        test ecx, ecx
        jz L_14213
        add ecx, eax
        mov dword ptr [eax + 4h], ecx
        L_14213:
        mov ecx, dword ptr [eax + 8h]
        test ecx, ecx
        jz L_1421F
        add ecx, eax
        mov dword ptr [eax + 8h], ecx
        L_1421F:
        movzx ecx, byte ptr [edx]
        inc edi
        add esi, 24h
        cmp edi, ecx
        jc L_141F4
        pop esi
        L_1422B:
        pop edi
        ret
    }
}
