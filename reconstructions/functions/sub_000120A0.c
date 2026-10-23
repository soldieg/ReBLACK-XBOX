/* Destination is live in EAX; value 0 is in XMM0; values 1-3 are on the stack. */
void __declspec(naked) sub_000120A0(void)
{
    __asm {
        movss dword ptr [eax], xmm0
        movss xmm0, dword ptr [esp + 4]
        movss dword ptr [eax + 4], xmm0
        movss xmm0, dword ptr [esp + 8]
        movss dword ptr [eax + 8], xmm0
        movss xmm0, dword ptr [esp + 0xc]
        movss dword ptr [eax + 0xc], xmm0
        ret 0xc
    }
}
