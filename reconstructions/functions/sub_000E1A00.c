/* Startup initialization reconstructed from the observed instruction flow; formal C contracts remain unresolved. */
/* shortcut: fixed calls and globals retain original addresses until Xbox link symbols/layout are known. */
__declspec(naked) void __cdecl sub_000E1A00(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF8h
        push ebx
        push ebp
        push esi
        push edi
        push 030000h
        push 020000h
        ; call 0xa2cf6
        __emit 0E8h
        __emit 0DDh
        __emit 012h
        __emit 0FCh
        __emit 0FFh
        push 03000000h
        push 01000000h
        ; call 0xa2cf6
        __emit 0E8h
        __emit 0CEh
        __emit 012h
        __emit 0FCh
        __emit 0FFh
        push 08001Fh
        push 08001Fh
        ; call 0xa2cf6
        __emit 0E8h
        __emit 0BFh
        __emit 012h
        __emit 0FCh
        __emit 0FFh
        add esp, 018h
        mov esi, 02D12E8h
        ; mov dword ptr [0x27ceb4], 0x400000
        __emit 0C7h
        __emit 005h
        __emit 0B4h
        __emit 0CEh
        __emit 027h
        __emit 000h
        __emit 000h
        __emit 000h
        __emit 040h
        __emit 000h
        ; mov dword ptr [0x27ceb0], 0x80000
        __emit 0C7h
        __emit 005h
        __emit 0B0h
        __emit 0CEh
        __emit 027h
        __emit 000h
        __emit 000h
        __emit 000h
        __emit 008h
        __emit 000h
        ; call 0x1f49f0
        __emit 0E8h
        __emit 098h
        __emit 02Fh
        __emit 011h
        __emit 000h
        mov edi, 0210D0h
        mov eax, esi
        ; call 0x1f3fc0
        __emit 0E8h
        __emit 05Ch
        __emit 025h
        __emit 011h
        __emit 000h
        xor ebx, ebx
        cmp eax, ebx
        je L_000E1A73
        mov esi, eax
        ; call 0x20210
        __emit 0E8h
        __emit 09Fh
        __emit 0E7h
        __emit 0F3h
        __emit 0FFh
        jmp L_000E1A75
    L_000E1A73:
        xor eax, eax
    L_000E1A75:
        push eax
        ; mov dword ptr [0x2d45f0], eax
        __emit 0A3h
        __emit 0F0h
        __emit 045h
        __emit 02Dh
        __emit 000h
        ; call 0x20bc40
        __emit 0E8h
        __emit 0C0h
        __emit 0A1h
        __emit 012h
        __emit 000h
        ; mov edi, dword ptr [0x2d45f0]
        __emit 08Bh
        __emit 03Dh
        __emit 0F0h
        __emit 045h
        __emit 02Dh
        __emit 000h
        ; call 0x20d930
        __emit 0E8h
        __emit 0A5h
        __emit 0BEh
        __emit 012h
        __emit 000h
        test al, al
        jne L_000E1AAA
        nop
    L_000E1A90:
        ; mov eax, dword ptr [0x2d45f0]
        __emit 0A1h
        __emit 0F0h
        __emit 045h
        __emit 02Dh
        __emit 000h
        push eax
        ; call 0x20b9b0
        __emit 0E8h
        __emit 015h
        __emit 09Fh
        __emit 012h
        __emit 000h
        ; mov edi, dword ptr [0x2d45f0]
        __emit 08Bh
        __emit 03Dh
        __emit 0F0h
        __emit 045h
        __emit 02Dh
        __emit 000h
        ; call 0x20d930
        __emit 0E8h
        __emit 08Ah
        __emit 0BEh
        __emit 012h
        __emit 000h
        test al, al
        je L_000E1A90
    L_000E1AAA:
        ; mov eax, dword ptr [0x2d45f0]
        __emit 0A1h
        __emit 0F0h
        __emit 045h
        __emit 02Dh
        __emit 000h
        cmp byte ptr [eax + 0210CAh], bl
        jne L_000E1AD0
    L_000E1AB7:
        ; call 0x20f6a0
        __emit 0E8h
        __emit 0E4h
        __emit 0DBh
        __emit 012h
        __emit 000h
        ; mov eax, dword ptr [0x2d45f0]
        __emit 0A1h
        __emit 0F0h
        __emit 045h
        __emit 02Dh
        __emit 000h
        cmp byte ptr [eax + 0210CAh], bl
        je L_000E1AB7
        ; lea esp, [esp]
        __emit 08Dh
        __emit 0A4h
        __emit 024h
        __emit 000h
        __emit 000h
        __emit 000h
        __emit 000h
    L_000E1AD0:
        mov edx, dword ptr [eax + 0210A0h]
        lea ecx, [eax + 0210A0h]
        mov esi, eax
        call dword ptr [edx + 0Ch]
        ; mov ebp, dword ptr [0x2d45d4]
        __emit 08Bh
        __emit 02Dh
        __emit 0D4h
        __emit 045h
        __emit 02Dh
        __emit 000h
        mov dword ptr [esi + 02107Ch], ebx
        mov dword ptr [esi + 021080h], ebx
        lea edi, [ebp + 05AFCh]
        mov esi, 2
        mov edi, edi
    L_000E1B00:
        ; call 0x1bb920
        __emit 0E8h
        __emit 01Bh
        __emit 09Eh
        __emit 00Dh
        __emit 000h
        add edi, 8
        dec esi
        jne L_000E1B00
        mov dword ptr [ebp + 05B0Ch], ebx
        mov dword ptr [ebp + 05B10h], ebx
        ; mov eax, dword ptr [0x2d165c]
        __emit 0A1h
        __emit 05Ch
        __emit 016h
        __emit 02Dh
        __emit 000h
        push eax
        ; call 0x22b84
        __emit 0E8h
        __emit 062h
        __emit 010h
        __emit 0F4h
        __emit 0FFh
        pop edi
        xor eax, eax
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
