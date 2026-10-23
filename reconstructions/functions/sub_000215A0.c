__declspec(naked) void __cdecl sub_000215A0(void)
{
    __asm {
        sub esp, 8h
        push esi
        mov esi, ecx
        mov edx, dword ptr [esi + 4h]
        mov ecx, dword ptr [edx + 4h]
        cmp byte ptr [ecx + 15h], 0h
        push edi
        jnz l215c9
        mov edi, dword ptr [ebx]
L215b5:
        cmp dword ptr [ecx + 0ch], edi
        jnc l215bf
        mov ecx, dword ptr [ecx + 8h]
        jmp l215c3
L215bf:
        mov edx, ecx
        mov ecx, dword ptr [ecx]
L215c3:
        cmp byte ptr [ecx + 15h], 0h
        jz l215b5
L215c9:
        mov ecx, dword ptr [esi + 4h]
        cmp edx, ecx
        mov dword ptr [esp + 8h], edx
        jz l215e9
        mov esi, dword ptr [ebx]
        cmp esi, dword ptr [edx + 0ch]
        jc l215e9
        lea ecx, [esp + 8h]
        mov ecx, dword ptr [ecx]
        pop edi
        mov dword ptr [eax], ecx
        pop esi
        add esp, 8h
        ret
L215e9:
        mov dword ptr [esp + 0ch], ecx
        lea ecx, [esp + 0ch]
        mov ecx, dword ptr [ecx]
        pop edi
        mov dword ptr [eax], ecx
        pop esi
        add esp, 8h
        ret
    }
}
