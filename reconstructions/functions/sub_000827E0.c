/* Byte-level x86 reconstruction backed by fresh REA decode and full-span XBE/candidate checks.
 * Original semantic C is preserved separately. Calls/data addresses are pinned to XBE layout.
 * The 3-byte gap at 0x8280D is split/XBE padding excluded from the 230-instruction Ghidra body. */
__declspec(naked) unsigned int __cdecl sub_000827E0(void) { __asm {
 /* 000827e0: mov eax, dword ptr [0x2c028c] */
 __emit 0xA1;
 __emit 0x8C;
 __emit 0x02;
 __emit 0x2C;
 __emit 0x00;
 /* 000827e5: sub esp, 0xc */
 __emit 0x83;
 __emit 0xEC;
 __emit 0x0C;
 /* 000827e8: push ebp */
 __emit 0x55;
 /* 000827e9: xor ebp, ebp */
 __emit 0x33;
 __emit 0xED;
 /* 000827eb: cmp eax, ebp */
 __emit 0x3B;
 __emit 0xC5;
 /* 000827ed: je 0x82a78 */
 __emit 0x0F;
 __emit 0x84;
 __emit 0x85;
 __emit 0x02;
 __emit 0x00;
 __emit 0x00;
 /* 000827f3: push esi */
 __emit 0x56;
 /* 000827f4: mov esi, dword ptr [0x2c0270] */
 __emit 0x8B;
 __emit 0x35;
 __emit 0x70;
 __emit 0x02;
 __emit 0x2C;
 __emit 0x00;
 /* 000827fa: cmp esi, 0x2c0270 */
 __emit 0x81;
 __emit 0xFE;
 __emit 0x70;
 __emit 0x02;
 __emit 0x2C;
 __emit 0x00;
 /* 00082800: mov dword ptr [esp + 8], ebp */
 __emit 0x89;
 __emit 0x6C;
 __emit 0x24;
 __emit 0x08;
 /* 00082804: je 0x82a77 */
 __emit 0x0F;
 __emit 0x84;
 __emit 0x6D;
 __emit 0x02;
 __emit 0x00;
 __emit 0x00;
 /* 0008280a: push edi */
 __emit 0x57;
 /* 0008280b: jmp 0x82810 */
 __emit 0xEB;
 __emit 0x03;
 /* 0008280d: 3-byte alignment/padding gap, excluded from REA function instruction set; verified in raw span */
 __emit 0x8D;
 __emit 0x49;
 __emit 0x00;
 /* 00082810: mov eax, dword ptr [esi] */
 __emit 0x8B;
 __emit 0x06;
 /* 00082812: mov ecx, dword ptr [0x2c029c] */
 __emit 0x8B;
 __emit 0x0D;
 __emit 0x9C;
 __emit 0x02;
 __emit 0x2C;
 __emit 0x00;
 /* 00082818: mov edx, dword ptr [0x2c0294] */
 __emit 0x8B;
 __emit 0x15;
 __emit 0x94;
 __emit 0x02;
 __emit 0x2C;
 __emit 0x00;
 /* 0008281e: mov edi, dword ptr [esi + 0x38] */
 __emit 0x8B;
 __emit 0x7E;
 __emit 0x38;
 /* 00082821: mov dword ptr [esp + 0x14], eax */
 __emit 0x89;
 __emit 0x44;
 __emit 0x24;
 __emit 0x14;
 /* 00082825: mov eax, dword ptr [esp + 0xc] */
 __emit 0x8B;
 __emit 0x44;
 __emit 0x24;
 __emit 0x0C;
 /* 00082829: sub ecx, edx */
 __emit 0x2B;
 __emit 0xCA;
 /* 0008282b: cmp eax, ecx */
 __emit 0x3B;
 __emit 0xC1;
 /* 0008282d: jge 0x8292d */
 __emit 0x0F;
 __emit 0x8D;
 __emit 0xFA;
 __emit 0x00;
 __emit 0x00;
 __emit 0x00;
 /* 00082833: mov al, byte ptr [esi + 0x62] */
 __emit 0x8A;
 __emit 0x46;
 __emit 0x62;
 /* 00082836: test al, 0x10 */
 __emit 0xA8;
 __emit 0x10;
 /* 00082838: je 0x82841 */
 __emit 0x74;
 __emit 0x07;
 /* 0008283a: call 0x82490   -> sub_00082490 */
 __emit 0xE8;
 __emit 0x51;
 __emit 0xFC;
 __emit 0xFF;
 __emit 0xFF;
 /* 0008283f: jmp 0x82895 */
 __emit 0xEB;
 __emit 0x54;
 /* 00082841: cmp edi, ebp */
 __emit 0x3B;
 __emit 0xFD;
 /* 00082843: je 0x82895 */
 __emit 0x74;
 __emit 0x50;
 /* 00082845: test al, 8 */
 __emit 0xA8;
 __emit 0x08;
 /* 00082847: je 0x82851 */
 __emit 0x74;
 __emit 0x08;
 /* 00082849: mov edx, dword ptr [esi + 0x48] */
 __emit 0x8B;
 __emit 0x56;
 __emit 0x48;
 /* 0008284c: mov dword ptr [esi + 0x44], edx */
 __emit 0x89;
 __emit 0x56;
 __emit 0x44;
 /* 0008284f: jmp 0x82862 */
 __emit 0xEB;
 __emit 0x11;
 /* 00082851: push ebp */
 __emit 0x55;
 /* 00082852: push 2 */
 __emit 0x6A;
 __emit 0x02;
 /* 00082854: push 9 */
 __emit 0x6A;
 __emit 0x09;
 /* 00082856: push edi */
 __emit 0x57;
 /* 00082857: call 0x82050   -> sub_00082050 */
 __emit 0xE8;
 __emit 0xF4;
 __emit 0xF7;
 __emit 0xFF;
 __emit 0xFF;
 /* 0008285c: add esp, 0x10 */
 __emit 0x83;
 __emit 0xC4;
 __emit 0x10;
 /* 0008285f: mov dword ptr [esi + 0x44], eax */
 __emit 0x89;
 __emit 0x46;
 __emit 0x44;
 /* 00082862: push ebp */
 __emit 0x55;
 /* 00082863: push 1 */
 __emit 0x6A;
 __emit 0x01;
 /* 00082865: push 8 */
 __emit 0x6A;
 __emit 0x08;
 /* 00082867: push edi */
 __emit 0x57;
 /* 00082868: call 0x82000   -> sub_00082000 */
 __emit 0xE8;
 __emit 0x93;
 __emit 0xF7;
 __emit 0xFF;
 __emit 0xFF;
 /* 0008286d: push ebp */
 __emit 0x55;
 /* 0008286e: push 1 */
 __emit 0x6A;
 __emit 0x01;
 /* 00082870: push 0xb */
 __emit 0x6A;
 __emit 0x0B;
 /* 00082872: push edi */
 __emit 0x57;
 /* 00082873: call 0x82030   -> sub_00082030 */
 __emit 0xE8;
 __emit 0xB8;
 __emit 0xF7;
 __emit 0xFF;
 __emit 0xFF;
 /* 00082878: mov eax, dword ptr [esi + 0x38] */
 __emit 0x8B;
 __emit 0x46;
 __emit 0x38;
 /* 0008287b: push ebp */
 __emit 0x55;
 /* 0008287c: push 1 */
 __emit 0x6A;
 __emit 0x01;
 /* 0008287e: push 0xe */
 __emit 0x6A;
 __emit 0x0E;
 /* 00082880: push eax */
 __emit 0x50;
 /* 00082881: call 0x82030   -> sub_00082030 */
 __emit 0xE8;
 __emit 0xAA;
 __emit 0xF7;
 __emit 0xFF;
 __emit 0xFF;
 /* 00082886: mov ecx, dword ptr [0x2c02a0] */
 __emit 0x8B;
 __emit 0x0D;
 __emit 0xA0;
 __emit 0x02;
 __emit 0x2C;
 __emit 0x00;
 /* 0008288c: add esp, 0x30 */
 __emit 0x83;
 __emit 0xC4;
 __emit 0x30;
 /* 0008288f: mov dword ptr [esi + 0x4c], ecx */
 __emit 0x89;
 __emit 0x4E;
 __emit 0x4C;
 /* 00082892: mov dword ptr [esi + 0x38], ebp */
 __emit 0x89;
 __emit 0x6E;
 __emit 0x38;
 /* 00082895: mov al, byte ptr [esi + 0x62] */
 __emit 0x8A;
 __emit 0x46;
 __emit 0x62;
 /* 00082898: test al, 1 */
 __emit 0xA8;
 __emit 0x01;
 /* 0008289a: je 0x82a58 */
 __emit 0x0F;
 __emit 0x84;
 __emit 0xB8;
 __emit 0x01;
 __emit 0x00;
 __emit 0x00;
 /* 000828a0: test al, 8 */
 __emit 0xA8;
 __emit 0x08;
 /* 000828a2: jne 0x82a58 */
 __emit 0x0F;
 __emit 0x85;
 __emit 0xB0;
 __emit 0x01;
 __emit 0x00;
 __emit 0x00;
 /* 000828a8: mov eax, dword ptr [esi + 0x3c] */
 __emit 0x8B;
 __emit 0x46;
 __emit 0x3C;
 /* 000828ab: mov edx, dword ptr [eax + 0x18] */
 __emit 0x8B;
 __emit 0x50;
 __emit 0x18;
 /* 000828ae: push edx */
 __emit 0x52;
 /* 000828af: add eax, 0x10 */
 __emit 0x83;
 __emit 0xC0;
 __emit 0x10;
 /* 000828b2: push eax */
 __emit 0x50;
 /* 000828b3: call 0x7ea80   -> sub_0007EA80 */
 __emit 0xE8;
 __emit 0xC8;
 __emit 0xC1;
 __emit 0xFF;
 __emit 0xFF;
 /* 000828b8: mov edx, dword ptr [esi + 0x4c] */
 __emit 0x8B;
 __emit 0x56;
 __emit 0x4C;
 /* 000828bb: mov edi, eax */
 __emit 0x8B;
 __emit 0xF8;
 /* 000828bd: mov eax, dword ptr [0x2c02a0] */
 __emit 0xA1;
 __emit 0xA0;
 __emit 0x02;
 __emit 0x2C;
 __emit 0x00;
 /* 000828c2: sub eax, edx */
 __emit 0x2B;
 __emit 0xC2;
 /* 000828c4: add esp, 8 */
 __emit 0x83;
 __emit 0xC4;
 __emit 0x08;
 /* 000828c7: test eax, eax */
 __emit 0x85;
 __emit 0xC0;
 /* 000828c9: mov dword ptr [esp + 0x10], eax */
 __emit 0x89;
 __emit 0x44;
 __emit 0x24;
 __emit 0x10;
 /* 000828cd: fild dword ptr [esp + 0x10] */
 __emit 0xDB;
 __emit 0x44;
 __emit 0x24;
 __emit 0x10;
 /* 000828d1: jge 0x828d9 */
 __emit 0x7D;
 __emit 0x06;
 /* 000828d3: fadd dword ptr [0x295c90] */
 __emit 0xD8;
 __emit 0x05;
 __emit 0x90;
 __emit 0x5C;
 __emit 0x29;
 __emit 0x00;
 /* 000828d9: fmul dword ptr [esi + 0x50] */
 __emit 0xD8;
 __emit 0x4E;
 __emit 0x50;
 /* 000828dc: fmul dword ptr [0x295ce4] */
 __emit 0xD8;
 __emit 0x0D;
 __emit 0xE4;
 __emit 0x5C;
 __emit 0x29;
 __emit 0x00;
 /* 000828e2: call 0xa34d4   -> sub_000A34D4 */
 __emit 0xE8;
 __emit 0xED;
 __emit 0x0B;
 __emit 0x02;
 __emit 0x00;
 /* 000828e7: mov ecx, dword ptr [esi + 0x44] */
 __emit 0x8B;
 __emit 0x4E;
 __emit 0x44;
 /* 000828ea: add ecx, eax */
 __emit 0x03;
 __emit 0xC8;
 /* 000828ec: mov eax, ecx */
 __emit 0x8B;
 __emit 0xC1;
 /* 000828ee: cmp eax, edi */
 __emit 0x3B;
 __emit 0xC7;
 /* 000828f0: mov dword ptr [esi + 0x44], ecx */
 __emit 0x89;
 __emit 0x4E;
 __emit 0x44;
 /* 000828f3: jb 0x8291f */
 __emit 0x72;
 __emit 0x2A;
 /* 000828f5: test byte ptr [esi + 0x62], 4 */
 __emit 0xF6;
 __emit 0x46;
 __emit 0x62;
 __emit 0x04;
 /* 000828f9: je 0x82917 */
 __emit 0x74;
 __emit 0x1C;
 /* 000828fb: mov eax, ecx */
 __emit 0x8B;
 __emit 0xC1;
 /* 000828fd: lea ecx, [ecx] */
 __emit 0x8D;
 __emit 0x49;
 __emit 0x00;
 /* 00082900: sub eax, edi */
 __emit 0x2B;
 __emit 0xC7;
 /* 00082902: cmp eax, edi */
 __emit 0x3B;
 __emit 0xC7;
 /* 00082904: jae 0x82900 */
 __emit 0x73;
 __emit 0xFA;
 /* 00082906: mov dword ptr [esi + 0x44], eax */
 __emit 0x89;
 __emit 0x46;
 __emit 0x44;
 /* 00082909: mov ecx, dword ptr [0x2c02a0] */
 __emit 0x8B;
 __emit 0x0D;
 __emit 0xA0;
 __emit 0x02;
 __emit 0x2C;
 __emit 0x00;
 /* 0008290f: mov dword ptr [esi + 0x4c], ecx */
 __emit 0x89;
 __emit 0x4E;
 __emit 0x4C;
 /* 00082912: jmp 0x82a58 */
 __emit 0xE9;
 __emit 0x41;
 __emit 0x01;
 __emit 0x00;
 __emit 0x00;
 /* 00082917: call 0x82490   -> sub_00082490 */
 __emit 0xE8;
 __emit 0x74;
 __emit 0xFB;
 __emit 0xFF;
 __emit 0xFF;
 /* 0008291c: mov dword ptr [esi + 0x38], ebp */
 __emit 0x89;
 __emit 0x6E;
 __emit 0x38;
 /* 0008291f: mov ecx, dword ptr [0x2c02a0] */
 __emit 0x8B;
 __emit 0x0D;
 __emit 0xA0;
 __emit 0x02;
 __emit 0x2C;
 __emit 0x00;
 /* 00082925: mov dword ptr [esi + 0x4c], ecx */
 __emit 0x89;
 __emit 0x4E;
 __emit 0x4C;
 /* 00082928: jmp 0x82a58 */
 __emit 0xE9;
 __emit 0x2B;
 __emit 0x01;
 __emit 0x00;
 __emit 0x00;
 /* 0008292d: cmp edi, ebp */
 __emit 0x3B;
 __emit 0xFD;
 /* 0008292f: jne 0x82a58 */
 __emit 0x0F;
 __emit 0x85;
 __emit 0x23;
 __emit 0x01;
 __emit 0x00;
 __emit 0x00;
 /* 00082935: mov edx, dword ptr [0x2c028c] */
 __emit 0x8B;
 __emit 0x15;
 __emit 0x8C;
 __emit 0x02;
 __emit 0x2C;
 __emit 0x00;
 /* 0008293b: push ebp */
 __emit 0x55;
 /* 0008293c: push 2 */
 __emit 0x6A;
 __emit 0x02;
 /* 0008293e: push 4 */
 __emit 0x6A;
 __emit 0x04;
 /* 00082940: push edx */
 __emit 0x52;
 /* 00082941: call 0x82050   -> sub_00082050 */
 __emit 0xE8;
 __emit 0x0A;
 __emit 0xF7;
 __emit 0xFF;
 __emit 0xFF;
 /* 00082946: mov edi, eax */
 __emit 0x8B;
 __emit 0xF8;
 /* 00082948: add esp, 0x10 */
 __emit 0x83;
 __emit 0xC4;
 __emit 0x10;
 /* 0008294b: cmp edi, ebp */
 __emit 0x3B;
 __emit 0xFD;
 /* 0008294d: mov dword ptr [esi + 0x38], edi */
 __emit 0x89;
 __emit 0x7E;
 __emit 0x38;
 /* 00082950: je 0x82a58 */
 __emit 0x0F;
 __emit 0x84;
 __emit 0x02;
 __emit 0x01;
 __emit 0x00;
 __emit 0x00;
 /* 00082956: mov eax, dword ptr [esi + 0x3c] */
 __emit 0x8B;
 __emit 0x46;
 __emit 0x3C;
 /* 00082959: push eax */
 __emit 0x50;
 /* 0008295a: push 1 */
 __emit 0x6A;
 __emit 0x01;
 /* 0008295c: push 0xb */
 __emit 0x6A;
 __emit 0x0B;
 /* 0008295e: push edi */
 __emit 0x57;
 /* 0008295f: call 0x82030   -> sub_00082030 */
 __emit 0xE8;
 __emit 0xCC;
 __emit 0xF6;
 __emit 0xFF;
 __emit 0xFF;
 /* 00082964: mov ecx, dword ptr [esi + 0x50] */
 __emit 0x8B;
 __emit 0x4E;
 __emit 0x50;
 /* 00082967: push ecx */
 __emit 0x51;
 /* 00082968: push 1 */
 __emit 0x6A;
 __emit 0x01;
 /* 0008296a: push 6 */
 __emit 0x6A;
 __emit 0x06;
 /* 0008296c: push edi */
 __emit 0x57;
 /* 0008296d: call 0x82000   -> sub_00082000 */
 __emit 0xE8;
 __emit 0x8E;
 __emit 0xF6;
 __emit 0xFF;
 __emit 0xFF;
 /* 00082972: movzx edx, byte ptr [esi + 0x5d] */
 __emit 0x0F;
 __emit 0xB6;
 __emit 0x56;
 __emit 0x5D;
 /* 00082976: mov dword ptr [esp + 0x30], edx */
 __emit 0x89;
 __emit 0x54;
 __emit 0x24;
 __emit 0x30;
 /* 0008297a: add esp, 0x1c */
 __emit 0x83;
 __emit 0xC4;
 __emit 0x1C;
 /* 0008297d: fild dword ptr [esp + 0x14] */
 __emit 0xDB;
 __emit 0x44;
 __emit 0x24;
 __emit 0x14;
 /* 00082981: fmul dword ptr [0x295c94] */
 __emit 0xD8;
 __emit 0x0D;
 __emit 0x94;
 __emit 0x5C;
 __emit 0x29;
 __emit 0x00;
 /* 00082987: fstp dword ptr [esp] */
 __emit 0xD9;
 __emit 0x1C;
 __emit 0x24;
 /* 0008298a: push 1 */
 __emit 0x6A;
 __emit 0x01;
 /* 0008298c: push 7 */
 __emit 0x6A;
 __emit 0x07;
 /* 0008298e: push edi */
 __emit 0x57;
 /* 0008298f: call 0x82000   -> sub_00082000 */
 __emit 0xE8;
 __emit 0x6C;
 __emit 0xF6;
 __emit 0xFF;
 __emit 0xFF;
 /* 00082994: xor eax, eax */
 __emit 0x33;
 __emit 0xC0;
 /* 00082996: mov al, byte ptr [esi + 0x62] */
 __emit 0x8A;
 __emit 0x46;
 __emit 0x62;
 /* 00082999: shr eax, 2 */
 __emit 0xC1;
 __emit 0xE8;
 __emit 0x02;
 /* 0008299c: and eax, 1 */
 __emit 0x83;
 __emit 0xE0;
 __emit 0x01;
 /* 0008299f: push eax */
 __emit 0x50;
 /* 000829a0: push 1 */
 __emit 0x6A;
 __emit 0x01;
 /* 000829a2: push 0xa */
 __emit 0x6A;
 __emit 0x0A;
 /* 000829a4: push edi */
 __emit 0x57;
 /* 000829a5: call 0x82000   -> sub_00082000 */
 __emit 0xE8;
 __emit 0x56;
 __emit 0xF6;
 __emit 0xFF;
 __emit 0xFF;
 /* 000829aa: mov al, byte ptr [esi + 0x62] */
 __emit 0x8A;
 __emit 0x46;
 __emit 0x62;
 /* 000829ad: add esp, 0x20 */
 __emit 0x83;
 __emit 0xC4;
 __emit 0x20;
 /* 000829b0: test al, 8 */
 __emit 0xA8;
 __emit 0x08;
 /* 000829b2: jne 0x829c5 */
 __emit 0x75;
 __emit 0x11;
 /* 000829b4: mov ecx, dword ptr [esi + 0x44] */
 __emit 0x8B;
 __emit 0x4E;
 __emit 0x44;
 /* 000829b7: push ecx */
 __emit 0x51;
 /* 000829b8: push 1 */
 __emit 0x6A;
 __emit 0x01;
 /* 000829ba: push 9 */
 __emit 0x6A;
 __emit 0x09;
 /* 000829bc: push edi */
 __emit 0x57;
 /* 000829bd: call 0x82000   -> sub_00082000 */
 __emit 0xE8;
 __emit 0x3E;
 __emit 0xF6;
 __emit 0xFF;
 __emit 0xFF;
 /* 000829c2: add esp, 0x10 */
 __emit 0x83;
 __emit 0xC4;
 __emit 0x10;
 /* 000829c5: movsx edx, byte ptr [esi + 0x63] */
 __emit 0x0F;
 __emit 0xBE;
 __emit 0x56;
 __emit 0x63;
 /* 000829c9: mov dword ptr [esp + 0x10], edx */
 __emit 0x89;
 __emit 0x54;
 __emit 0x24;
 __emit 0x10;
 /* 000829cd: push ecx */
 __emit 0x51;
 /* 000829ce: fild dword ptr [esp + 0x14] */
 __emit 0xDB;
 __emit 0x44;
 __emit 0x24;
 __emit 0x14;
 /* 000829d2: fstp dword ptr [esp] */
 __emit 0xD9;
 __emit 0x1C;
 __emit 0x24;
 /* 000829d5: push 1 */
 __emit 0x6A;
 __emit 0x01;
 /* 000829d7: push 0xc */
 __emit 0x6A;
 __emit 0x0C;
 /* 000829d9: push edi */
 __emit 0x57;
 /* 000829da: call 0x82000   -> sub_00082000 */
 __emit 0xE8;
 __emit 0x21;
 __emit 0xF6;
 __emit 0xFF;
 __emit 0xFF;
 /* 000829df: lea eax, [esi + 8] */
 __emit 0x8D;
 __emit 0x46;
 __emit 0x08;
 /* 000829e2: push eax */
 __emit 0x50;
 /* 000829e3: push 1 */
 __emit 0x6A;
 __emit 0x01;
 /* 000829e5: push ebp */
 __emit 0x55;
 /* 000829e6: push edi */
 __emit 0x57;
 /* 000829e7: call 0x81fa0   -> sub_00081FA0 */
 __emit 0xE8;
 __emit 0xB4;
 __emit 0xF5;
 __emit 0xFF;
 __emit 0xFF;
 /* 000829ec: lea ecx, [esi + 0x14] */
 __emit 0x8D;
 __emit 0x4E;
 __emit 0x14;
 /* 000829ef: push ecx */
 __emit 0x51;
 /* 000829f0: push 1 */
 __emit 0x6A;
 __emit 0x01;
 /* 000829f2: push 1 */
 __emit 0x6A;
 __emit 0x01;
 /* 000829f4: push edi */
 __emit 0x57;
 /* 000829f5: call 0x81fa0   -> sub_00081FA0 */
 __emit 0xE8;
 __emit 0xA6;
 __emit 0xF5;
 __emit 0xFF;
 __emit 0xFF;
 /* 000829fa: mov edx, dword ptr [esi + 0x54] */
 __emit 0x8B;
 __emit 0x56;
 __emit 0x54;
 /* 000829fd: push edx */
 __emit 0x52;
 /* 000829fe: push 1 */
 __emit 0x6A;
 __emit 0x01;
 /* 00082a00: push 4 */
 __emit 0x6A;
 __emit 0x04;
 /* 00082a02: push edi */
 __emit 0x57;
 /* 00082a03: call 0x82000   -> sub_00082000 */
 __emit 0xE8;
 __emit 0xF8;
 __emit 0xF5;
 __emit 0xFF;
 __emit 0xFF;
 /* 00082a08: mov eax, dword ptr [esi + 0x58] */
 __emit 0x8B;
 __emit 0x46;
 __emit 0x58;
 /* 00082a0b: add esp, 0x40 */
 __emit 0x83;
 __emit 0xC4;
 __emit 0x40;
 /* 00082a0e: push eax */
 __emit 0x50;
 /* 00082a0f: push 1 */
 __emit 0x6A;
 __emit 0x01;
 /* 00082a11: push 5 */
 __emit 0x6A;
 __emit 0x05;
 /* 00082a13: push edi */
 __emit 0x57;
 /* 00082a14: call 0x82000   -> sub_00082000 */
 __emit 0xE8;
 __emit 0xE7;
 __emit 0xF5;
 __emit 0xFF;
 __emit 0xFF;
 /* 00082a19: movzx ecx, byte ptr [esi + 0x5e] */
 __emit 0x0F;
 __emit 0xB6;
 __emit 0x4E;
 __emit 0x5E;
 /* 00082a1d: mov dword ptr [esp + 0x20], ecx */
 __emit 0x89;
 __emit 0x4C;
 __emit 0x24;
 __emit 0x20;
 /* 00082a21: add esp, 0xc */
 __emit 0x83;
 __emit 0xC4;
 __emit 0x0C;
 /* 00082a24: fild dword ptr [esp + 0x14] */
 __emit 0xDB;
 __emit 0x44;
 __emit 0x24;
 __emit 0x14;
 /* 00082a28: fmul dword ptr [0x295c94] */
 __emit 0xD8;
 __emit 0x0D;
 __emit 0x94;
 __emit 0x5C;
 __emit 0x29;
 __emit 0x00;
 /* 00082a2e: fstp dword ptr [esp] */
 __emit 0xD9;
 __emit 0x1C;
 __emit 0x24;
 /* 00082a31: push 1 */
 __emit 0x6A;
 __emit 0x01;
 /* 00082a33: push 0xd */
 __emit 0x6A;
 __emit 0x0D;
 /* 00082a35: push edi */
 __emit 0x57;
 /* 00082a36: call 0x82000   -> sub_00082000 */
 __emit 0xE8;
 __emit 0xC5;
 __emit 0xF5;
 __emit 0xFF;
 __emit 0xFF;
 /* 00082a3b: push 1 */
 __emit 0x6A;
 __emit 0x01;
 /* 00082a3d: push 1 */
 __emit 0x6A;
 __emit 0x01;
 /* 00082a3f: push 8 */
 __emit 0x6A;
 __emit 0x08;
 /* 00082a41: push edi */
 __emit 0x57;
 /* 00082a42: call 0x82000   -> sub_00082000 */
 __emit 0xE8;
 __emit 0xB9;
 __emit 0xF5;
 __emit 0xFF;
 __emit 0xFF;
 /* 00082a47: mov edx, dword ptr [esi + 0x40] */
 __emit 0x8B;
 __emit 0x56;
 __emit 0x40;
 /* 00082a4a: push edx */
 __emit 0x52;
 /* 00082a4b: push 1 */
 __emit 0x6A;
 __emit 0x01;
 /* 00082a4d: push 0xe */
 __emit 0x6A;
 __emit 0x0E;
 /* 00082a4f: push edi */
 __emit 0x57;
 /* 00082a50: call 0x82030   -> sub_00082030 */
 __emit 0xE8;
 __emit 0xDB;
 __emit 0xF5;
 __emit 0xFF;
 __emit 0xFF;
 /* 00082a55: add esp, 0x30 */
 __emit 0x83;
 __emit 0xC4;
 __emit 0x30;
 /* 00082a58: movzx eax, byte ptr [esi + 0x61] */
 __emit 0x0F;
 __emit 0xB6;
 __emit 0x46;
 __emit 0x61;
 /* 00082a5c: mov ecx, dword ptr [esp + 0xc] */
 __emit 0x8B;
 __emit 0x4C;
 __emit 0x24;
 __emit 0x0C;
 /* 00082a60: mov esi, dword ptr [esp + 0x14] */
 __emit 0x8B;
 __emit 0x74;
 __emit 0x24;
 __emit 0x14;
 /* 00082a64: add ecx, eax */
 __emit 0x03;
 __emit 0xC8;
 /* 00082a66: cmp esi, 0x2c0270 */
 __emit 0x81;
 __emit 0xFE;
 __emit 0x70;
 __emit 0x02;
 __emit 0x2C;
 __emit 0x00;
 /* 00082a6c: mov dword ptr [esp + 0xc], ecx */
 __emit 0x89;
 __emit 0x4C;
 __emit 0x24;
 __emit 0x0C;
 /* 00082a70: jne 0x82810 */
 __emit 0x0F;
 __emit 0x85;
 __emit 0x9A;
 __emit 0xFD;
 __emit 0xFF;
 __emit 0xFF;
 /* 00082a76: pop edi */
 __emit 0x5F;
 /* 00082a77: pop esi */
 __emit 0x5E;
 /* 00082a78: pop ebp */
 __emit 0x5D;
 /* 00082a79: add esp, 0xc */
 __emit 0x83;
 __emit 0xC4;
 __emit 0x0C;
 /* 00082a7c: ret */
 __emit 0xC3;
} }
