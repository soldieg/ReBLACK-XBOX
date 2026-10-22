#include <stdint.h>
extern uint32_t sub_00266880(void);
extern uint32_t sub_00266895(void);

/* shortcut: preserve the observed implicit ECX/AL ABI until callers establish a C signature. */
__declspec(naked) uint32_t sub_0026689F(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x1c
        and dword ptr [ebp - 4], 0
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x14]
        push edi
        mov edi, ecx
        mov bl, al
        mov al, byte ptr [esi + 0x268838]
        xor ecx, ecx
        mov cl, al
        and ecx, 0x3c
        test al, 1
        mov dword ptr [ebp - 0xc], ecx
        jne short L_266916
        mov eax, esi
        call sub_00266880
        test al, al
        jne short L_266916
        xor ecx, ecx
        xor esi, esi
        cmp dword ptr [ebp + 0x10], ecx
        mov dword ptr [ebp - 0x14], ecx
        mov dword ptr [ebp - 8], ecx
        jne short L_2668e8
        mov dword ptr [ebp + 0x10], 1
        L_2668e8:
        mov eax, dword ptr [ebp + 0x18]
        cmp eax, ecx
        jne short L_266902
        mov eax, dword ptr [ebp - 0xc]
        imul eax, dword ptr [ebp + 8]
        shr eax, 3
        add eax, 0x3f
        and eax, 0xffffffc0
        mov dword ptr [ebp + 0x18], eax
        L_266902:
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0x1c], edi
        imul edi, eax
        mov dword ptr [ebp - 0x18], ecx
        mov dword ptr [ebp - 4], edi
        jmp short L_2669de
        L_266916:
        mov ecx, dword ptr [ebp + 8]
        call sub_00266895
        mov ecx, edi
        mov dword ptr [ebp - 8], eax
        call sub_00266895
        mov ecx, dword ptr [ebp + 0xc]
        mov edi, eax
        mov dword ptr [ebp - 0x14], edi
        call sub_00266895
        and dword ptr [ebp - 0x18], 0
        and dword ptr [ebp - 0x1c], 0
        mov esi, eax
        mov eax, dword ptr [ebp + 0x14]
        call sub_00266880
        neg al
        sbb eax, eax
        and eax, 2
        cmp dword ptr [ebp + 0x10], 0
        mov dword ptr [ebp + 0xc], eax
        jne short L_266975
        cmp edi, esi
        mov eax, edi
        ja short L_26695f
        mov eax, esi
        L_26695f:
        cmp dword ptr [ebp - 8], eax
        jbe short L_266969
        mov eax, dword ptr [ebp - 8]
        jmp short L_266971
        L_266969:
        cmp edi, esi
        mov eax, edi
        ja short L_266971
        mov eax, esi
        L_266971:
        inc eax
        mov dword ptr [ebp + 0x10], eax
        L_266975:
        mov eax, dword ptr [ebp + 0x10]
        test eax, eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp + 8], edi
        mov edi, esi
        je short L_2669c6
        mov dword ptr [ebp - 0x10], eax
        L_266987:
        mov ecx, dword ptr [ebp + 0xc]
        cmp edx, ecx
        jbe short L_266990
        mov ecx, edx
        L_266990:
        mov eax, dword ptr [ebp + 0xc]
        cmp dword ptr [ebp + 8], eax
        jbe short L_26699b
        mov eax, dword ptr [ebp + 8]
        L_26699b:
        add ecx, eax
        xor eax, eax
        inc eax
        add ecx, edi
        shl eax, cl
        imul eax, dword ptr [ebp - 0xc]
        shr eax, 3
        add dword ptr [ebp - 4], eax
        test edx, edx
        jbe short L_2669b3
        dec edx
        L_2669b3:
        cmp dword ptr [ebp + 8], 0
        jbe short L_2669bc
        dec dword ptr [ebp + 8]
        L_2669bc:
        test edi, edi
        jbe short L_2669c1
        dec edi
        L_2669c1:
        dec dword ptr [ebp - 0x10]
        jne short L_266987
        L_2669c6:
        test bl, bl
        je short L_2669db
        mov eax, dword ptr [ebp - 4]
        add eax, 0x7f
        and eax, 0xffffff80
        lea eax, [eax + eax*2]
        shl eax, 1
        mov dword ptr [ebp - 4], eax
        L_2669db:
        mov eax, dword ptr [ebp + 0x18]
        L_2669de:
        shl esi, 4
        or esi, dword ptr [ebp - 0x14]
        xor ecx, ecx
        shl esi, 4
        or esi, dword ptr [ebp - 8]
        pop edi
        shl esi, 4
        or esi, dword ptr [ebp + 0x10]
        shl esi, 8
        or esi, dword ptr [ebp + 0x14]
        shl esi, 4
        cmp byte ptr [ebp + 0x1c], cl
        setne cl
        inc ecx
        inc ecx
        or esi, ecx
        mov ecx, dword ptr [ebp + 0x20]
        shl esi, 4
        neg bl
        sbb ebx, ebx
        and ebx, 4
        or esi, ebx
        or esi, 9
        mov dword ptr [ecx], esi
        mov ecx, dword ptr [ebp - 0x18]
        test ecx, ecx
        pop esi
        pop ebx
        je short L_266a3d
        mov edx, dword ptr [ebp - 0x1c]
        shr eax, 6
        dec eax
        shl eax, 0xc
        dec edx
        or eax, edx
        shl eax, 0xc
        dec ecx
        or eax, ecx
        mov ecx, dword ptr [ebp + 0x24]
        mov dword ptr [ecx], eax
        jmp short L_266a43
        L_266a3d:
        mov eax, dword ptr [ebp + 0x24]
        and dword ptr [eax], 0
        L_266a43:
        mov eax, dword ptr [ebp - 4]
        leave
        ret 0x20
    }
}
