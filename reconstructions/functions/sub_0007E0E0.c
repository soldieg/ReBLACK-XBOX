/* Byte-level x86 reconstruction backed by fresh REA instruction decode and split/XBE encoding cross-check.
 * The semantic C original is preserved separately; this body pins relative calls to the shipped XBE layout. */
__declspec(naked) unsigned int __cdecl sub_0007E0E0(void) { __asm {
 /* 0007E0E0: push esi */
 __emit 0x56
 /* 0007E0E1: mov esi, dword ptr [esp + 8] */
 __emit 0x8B
 __emit 0x74
 __emit 0x24
 __emit 0x08
 /* 0007E0E5: mov eax, dword ptr [esi + 4] */
 __emit 0x8B
 __emit 0x46
 __emit 0x04
 /* 0007E0E8: push 0x286150 */
 __emit 0x68
 __emit 0x50
 __emit 0x61
 __emit 0x28
 __emit 0x00
 /* 0007E0ED: push eax */
 __emit 0x50
 /* 0007E0EE: call 0x85a70   -> sub_00085A70 */
 __emit 0xE8
 __emit 0x7D
 __emit 0x79
 __emit 0x00
 __emit 0x00
 /* 0007E0F3: add esp, 8 */
 __emit 0x83
 __emit 0xC4
 __emit 0x08
 /* 0007E0F6: test eax, eax */
 __emit 0x85
 __emit 0xC0
 /* 0007E0F8: jne 0x7e103 */
 __emit 0x75
 __emit 0x09
 /* 0007E0FA: movzx eax, byte ptr [esi + 0xc] */
 __emit 0x0F
 __emit 0xB6
 __emit 0x46
 __emit 0x0C
 /* 0007E0FE: shr eax, 3 */
 __emit 0xC1
 __emit 0xE8
 __emit 0x03
 /* 0007E101: pop esi */
 __emit 0x5E
 /* 0007E102: ret */
 __emit 0xC3
 /* 0007E103: mov ecx, dword ptr [esi + 4] */
 __emit 0x8B
 __emit 0x4E
 __emit 0x04
 /* 0007E106: push 0x286140 */
 __emit 0x68
 __emit 0x40
 __emit 0x61
 __emit 0x28
 __emit 0x00
 /* 0007E10B: push ecx */
 __emit 0x51
 /* 0007E10C: call 0x85a70   -> sub_00085A70 */
 __emit 0xE8
 __emit 0x5F
 __emit 0x79
 __emit 0x00
 __emit 0x00
 /* 0007E111: add esp, 8 */
 __emit 0x83
 __emit 0xC4
 __emit 0x08
 /* 0007E114: test eax, eax */
 __emit 0x85
 __emit 0xC0
 /* 0007E116: jne 0x7e11f */
 __emit 0x75
 __emit 0x07
 /* 0007E118: mov eax, 0x10 */
 __emit 0xB8
 __emit 0x10
 __emit 0x00
 __emit 0x00
 __emit 0x00
 /* 0007E11D: pop esi */
 __emit 0x5E
 /* 0007E11E: ret */
 __emit 0xC3
 /* 0007E11F: mov edx, dword ptr [esi + 4] */
 __emit 0x8B
 __emit 0x56
 __emit 0x04
 /* 0007E122: push 0x286160 */
 __emit 0x68
 __emit 0x60
 __emit 0x61
 __emit 0x28
 __emit 0x00
 /* 0007E127: push edx */
 __emit 0x52
 /* 0007E128: call 0x85a70   -> sub_00085A70 */
 __emit 0xE8
 __emit 0x43
 __emit 0x79
 __emit 0x00
 __emit 0x00
 /* 0007E12D: add esp, 8 */
 __emit 0x83
 __emit 0xC4
 __emit 0x08
 /* 0007E130: test eax, eax */
 __emit 0x85
 __emit 0xC0
 /* 0007E132: jne 0x7e13b */
 __emit 0x75
 __emit 0x07
 /* 0007E134: mov eax, 4 */
 __emit 0xB8
 __emit 0x04
 __emit 0x00
 __emit 0x00
 __emit 0x00
 /* 0007E139: pop esi */
 __emit 0x5E
 /* 0007E13A: ret */
 __emit 0xC3
 /* 0007E13B: mov eax, dword ptr [esi + 4] */
 __emit 0x8B
 __emit 0x46
 __emit 0x04
 /* 0007E13E: push 0x286170 */
 __emit 0x68
 __emit 0x70
 __emit 0x61
 __emit 0x28
 __emit 0x00
 /* 0007E143: push eax */
 __emit 0x50
 /* 0007E144: call 0x85a70   -> sub_00085A70 */
 __emit 0xE8
 __emit 0x27
 __emit 0x79
 __emit 0x00
 __emit 0x00
 /* 0007E149: add esp, 8 */
 __emit 0x83
 __emit 0xC4
 __emit 0x08
 /* 0007E14C: test eax, eax */
 __emit 0x85
 __emit 0xC0
 /* 0007E14E: jne 0x7e157 */
 __emit 0x75
 __emit 0x07
 /* 0007E150: mov eax, 8 */
 __emit 0xB8
 __emit 0x08
 __emit 0x00
 __emit 0x00
 __emit 0x00
 /* 0007E155: pop esi */
 __emit 0x5E
 /* 0007E156: ret */
 __emit 0xC3
 /* 0007E157: mov ecx, dword ptr [esi + 4] */
 __emit 0x8B
 __emit 0x4E
 __emit 0x04
 /* 0007E15A: push 0x286180 */
 __emit 0x68
 __emit 0x80
 __emit 0x61
 __emit 0x28
 __emit 0x00
 /* 0007E15F: push ecx */
 __emit 0x51
 /* 0007E160: call 0x85a70   -> sub_00085A70 */
 __emit 0xE8
 __emit 0x0B
 __emit 0x79
 __emit 0x00
 __emit 0x00
 /* 0007E165: add esp, 8 */
 __emit 0x83
 __emit 0xC4
 __emit 0x08
 /* 0007E168: test eax, eax */
 __emit 0x85
 __emit 0xC0
 /* 0007E16A: je 0x7e1c1 */
 __emit 0x74
 __emit 0x55
 /* 0007E16C: mov edx, dword ptr [esi + 4] */
 __emit 0x8B
 __emit 0x56
 __emit 0x04
 /* 0007E16F: push 0x2861e0 */
 __emit 0x68
 __emit 0xE0
 __emit 0x61
 __emit 0x28
 __emit 0x00
 /* 0007E174: push edx */
 __emit 0x52
 /* 0007E175: call 0x85a70   -> sub_00085A70 */
 __emit 0xE8
 __emit 0xF6
 __emit 0x78
 __emit 0x00
 __emit 0x00
 /* 0007E17A: add esp, 8 */
 __emit 0x83
 __emit 0xC4
 __emit 0x08
 /* 0007E17D: test eax, eax */
 __emit 0x85
 __emit 0xC0
 /* 0007E17F: je 0x7e1c1 */
 __emit 0x74
 __emit 0x40
 /* 0007E181: mov eax, dword ptr [esi + 4] */
 __emit 0x8B
 __emit 0x46
 __emit 0x04
 /* 0007E184: push 0x2861a0 */
 __emit 0x68
 __emit 0xA0
 __emit 0x61
 __emit 0x28
 __emit 0x00
 /* 0007E189: push eax */
 __emit 0x50
 /* 0007E18A: call 0x85a70   -> sub_00085A70 */
 __emit 0xE8
 __emit 0xE1
 __emit 0x78
 __emit 0x00
 __emit 0x00
 /* 0007E18F: add esp, 8 */
 __emit 0x83
 __emit 0xC4
 __emit 0x08
 /* 0007E192: test eax, eax */
 __emit 0x85
 __emit 0xC0
 /* 0007E194: jne 0x7e1bd */
 __emit 0x75
 __emit 0x27
 /* 0007E196: mov eax, dword ptr [esi + 0x10] */
 __emit 0x8B
 __emit 0x46
 __emit 0x10
 /* 0007E199: test eax, eax */
 __emit 0x85
 __emit 0xC0
 /* 0007E19B: je 0x7e1a1 */
 __emit 0x74
 __emit 0x04
 /* 0007E19D: mov eax, dword ptr [eax] */
 __emit 0x8B
 __emit 0x00
 /* 0007E19F: jmp 0x7e1a6 */
 __emit 0xEB
 __emit 0x05
 /* 0007E1A1: mov eax, 0x1f400 */
 __emit 0xB8
 __emit 0x00
 __emit 0xF4
 __emit 0x01
 __emit 0x00
 /* 0007E1A6: mov esi, dword ptr [esi] */
 __emit 0x8B
 __emit 0x36
 /* 0007E1A8: test esi, esi */
 __emit 0x85
 __emit 0xF6
 /* 0007E1AA: jne 0x7e1b1 */
 __emit 0x75
 __emit 0x05
 /* 0007E1AC: mov esi, 0xbb80 */
 __emit 0xBE
 __emit 0x80
 __emit 0xBB
 __emit 0x00
 __emit 0x00
 /* 0007E1B1: lea eax, [eax + eax*8] */
 __emit 0x8D
 __emit 0x04
 __emit 0xC0
 /* 0007E1B4: shl eax, 4 */
 __emit 0xC1
 __emit 0xE0
 __emit 0x04
 /* 0007E1B7: xor edx, edx */
 __emit 0x33
 __emit 0xD2
 /* 0007E1B9: div esi */
 __emit 0xF7
 __emit 0xF6
 /* 0007E1BB: pop esi */
 __emit 0x5E
 /* 0007E1BC: ret */
 __emit 0xC3
 /* 0007E1BD: xor eax, eax */
 __emit 0x33
 __emit 0xC0
 /* 0007E1BF: pop esi */
 __emit 0x5E
 /* 0007E1C0: ret */
 __emit 0xC3
 /* 0007E1C1: mov al, byte ptr [esi + 0xd] */
 __emit 0x8A
 __emit 0x46
 __emit 0x0D
 /* 0007E1C4: dec al */
 __emit 0xFE
 __emit 0xC8
 /* 0007E1C6: neg al */
 __emit 0xF6
 __emit 0xD8
 /* 0007E1C8: pop esi */
 __emit 0x5E
 /* 0007E1C9: sbb eax, eax */
 __emit 0x1B
 __emit 0xC0
 /* 0007E1CB: and eax, 0xffffffe0 */
 __emit 0x83
 __emit 0xE0
 __emit 0xE0
 /* 0007E1CE: add eax, 0x24 */
 __emit 0x83
 __emit 0xC0
 __emit 0x24
 /* 0007E1D1: ret */
 __emit 0xC3
 } }
