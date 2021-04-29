;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************
;***** Created: 2021-29-04 12:03 ******* Source: ATmega328P.xml **********
;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : "m328Pdef.inc"
;* Title             : Register/Bit Definitions for the ATmega328P
;* Date              : 2021-29-04
;* Version           : 2.35
;* Support E-mail    : avr@atmel.com
;* Target MCU        : ATmega328P
;* 
;* DESCRIPTION
;* When including this file in the assembly program file, all I/O register 
;* names and I/O register bit names appearing in the data book can be used.
;* In addition, the six registers forming the three data pointers X, Y and 
;* Z have been assigned names XL - ZH. Highest RAM address for Internal 
;* SRAM is also defined 
;* 
;* The Register names are represented by their hexadecimal address.
;* 
;* The Register Bit names are represented by their bit number (0-7).
;* 
;* Please observe the difference in using the bit names with instructions
;* such as "sbr"/"cbr" (set/clear bit in register) and "sbrs"/"sbrc"
;* (skip if bit in register set/cleared). The following example illustrates
;* this:
;* 
;* in    r16,PORTB             ;read PORTB latch
;* sbr   r16,(1<<PB6)+(1<<PB5) ;set PB6 and PB5 (use masks, not bit#)
;* out   PORTB,r16             ;output to PORTB
;* 
;* in    r16,TIFR              ;read the Timer Interrupt Flag Register
;* sbrc  r16,TOV0              ;test the overflow flag (use bit#)
;* rjmp  TOV0_is_set           ;jump if set
;* ...                         ;otherwise do something else
;*************************************************************************

#ifndef _M328PDEF_INC_
#define _M328PDEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device ATmega328P
#pragma AVRPART ADMIN PART_NAME ATmega328P
.equ	SIGNATURE_000	= 0x1e
.equ	SIGNATURE_001	= 0x95
.equ	SIGNATURE_002	= 0x0f

#pragma AVRPART CORE CORE_VERSION V2E

; ***** USART0 ***********************
; UDR0 - USART I/O Data Register
.equ	UDR0_0	= 0	; USART I/O Data Register bit 0
.equ	UDR0_1	= 1	; USART I/O Data Register bit 1
.equ	UDR0_2	= 2	; USART I/O Data Register bit 2
.equ	UDR0_3	= 3	; USART I/O Data Register bit 3
.equ	UDR0_4	= 4	; USART I/O Data Register bit 4
.equ	UDR0_5	= 5	; USART I/O Data Register bit 5
.equ	UDR0_6	= 6	; USART I/O Data Register bit 6
.equ	UDR0_7	= 7	; USART I/O Data Register bit 7

; UCSR0A - USART Control and Status Register A
.equ	MPCM0	= 0	; Multi-processor Communication Mode
.equ	U2X0	= 1	; Double the USART transmission speed
.equ	UPE0	= 2	; Parity Error
.equ	DOR0	= 3	; Data overRun
.equ	FE0	= 4	; Framing Error
.equ	UDRE0	= 5	; USART Data Register Empty
.equ	TXC0	= 6	; USART Transmitt Complete
.equ	RXC0	= 7	; USART Receive Complete

; UCSR0B - USART Control and Status Register B
.equ	TXB80	= 0	; Transmit Data Bit 8
.equ	RXB80	= 1	; Receive Data Bit 8
.equ	UCSZ02	= 2	; Character Size
.equ	TXEN0	= 3	; Transmitter Enable
.equ	RXEN0	= 4	; Receiver Enable
.equ	UDRIE0	= 5	; USART Data register Empty Interrupt Enable
.equ	TXCIE0	= 6	; TX Complete Interrupt Enable
.equ	RXCIE0	= 7	; RX Complete Interrupt Enable

; UCSR0C - USART Control and Status Register C
.equ	UCPOL0	= 0	; Clock Polarity
.equ	UCSZ00	= 1	; Character Size
.equ	UCPHA0	= UCSZ00	; For compatibility
.equ	UCSZ01	= 2	; Character Size
.equ	UDORD0	= UCSZ01	; For compatibility
.equ	USBS0	= 3	; Stop Bit Select
.equ	UPM00	= 4	; Parity Mode Bit 0
.equ	UPM01	= 5	; Parity Mode Bit 1
.equ	UMSEL00	= 6	; USART Mode Select
.equ	UMSEL0	= UMSEL00	; For compatibility
.equ	UMSEL01	= 7	; USART Mode Select
.equ	UMSEL1	= UMSEL01	; For compatibility

; UBRR0H - USART Baud Rate Register High Byte
.equ	UBRR8	= 0	; USART Baud Rate Register bit 8
.equ	UBRR9	= 1	; USART Baud Rate Register bit 9
.equ	UBRR10	= 2	; USART Baud Rate Register bit 10
.equ	UBRR11	= 3	; USART Baud Rate Register bit 11

; UBRR0L - USART Baud Rate Register Low Byte
.equ	_UBRR0	= 0	; USART Baud Rate Register bit 0
.equ	_UBRR1	= 1	; USART Baud Rate Register bit 1
.equ	UBRR2	= 2	; USART Baud Rate Register bit 2
.equ	UBRR3	= 3	; USART Baud Rate Register bit 3
.equ	UBRR4	= 4	; USART Baud Rate Register bit 4
.equ	UBRR5	= 5	; USART Baud Rate Register bit 5
.equ	UBRR6	= 6	; USART Baud Rate Register bit 6
.equ	UBRR7	= 7	; USART Baud Rate Register bit 7