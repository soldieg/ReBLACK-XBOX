/* Input vector address is live in EAX; boolean result is returned in AL. */
extern float DAT_00288244;

void __declspec(naked) sub_00011B30(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0xfffffff0
        sub esp, 0x10
        xorps xmm0, xmm0
        movss dword ptr [esp + 0xc], xmm0
        movaps xmm0, xmmword ptr [eax]
        mulps xmm0, xmm0
        movaps xmm1, xmm0
        shufps xmm1, xmm0, 0x39
        movaps xmm2, xmm1
        addss xmm0, xmm1
        shufps xmm2, xmm1, 0x39
        addss xmm0, xmm2
        lea ecx, [esp + 0xc]
        movss dword ptr [ecx], xmm0
        movss xmm0, dword ptr [DAT_00288244]
        comiss xmm0, dword ptr [esp + 0xc]
        jbe short return_false
        mov al, 1
        mov esp, ebp
        pop ebp
        ret
    return_false:
        xor al, al
        mov esp, ebp
        pop ebp
        ret
    }
}
