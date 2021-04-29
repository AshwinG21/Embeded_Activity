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

; ***** TIMER_COUNTER_2 **************
; TIMSK2 - Timer/Counter Interrupt Mask register
.equ	TOIE2	= 0	; Timer/Counter2 Overflow Interrupt Enable
.equ	TOIE2A	= TOIE2	; For compatibility
.equ	OCIE2A	= 1	; Timer/Counter2 Output Compare Match A Interrupt Enable
.equ	OCIE2B	= 2	; Timer/Counter2 Output Compare Match B Interrupt Enable

; TIFR2 - Timer/Counter Interrupt Flag Register
.equ	TOV2	= 0	; Timer/Counter2 Overflow Flag
.equ	OCF2A	= 1	; Output Compare Flag 2A
.equ	OCF2B	= 2	; Output Compare Flag 2B

; TCCR2A - Timer/Counter2 Control Register A
.equ	WGM20	= 0	; Waveform Genration Mode
.equ	WGM21	= 1	; Waveform Genration Mode
.equ	COM2B0	= 4	; Compare Output Mode bit 0
.equ	COM2B1	= 5	; Compare Output Mode bit 1
.equ	COM2A0	= 6	; Compare Output Mode bit 1
.equ	COM2A1	= 7	; Compare Output Mode bit 1

; TCCR2B - Timer/Counter2 Control Register B
.equ	CS20	= 0	; Clock Select bit 0
.equ	CS21	= 1	; Clock Select bit 1
.equ	CS22	= 2	; Clock Select bit 2
.equ	WGM22	= 3	; Waveform Generation Mode
.equ	FOC2B	= 6	; Force Output Compare B
.equ	FOC2A	= 7	; Force Output Compare A

; TCNT2 - Timer/Counter2
.equ	TCNT2_0	= 0	; Timer/Counter 2 bit 0
.equ	TCNT2_1	= 1	; Timer/Counter 2 bit 1
.equ	TCNT2_2	= 2	; Timer/Counter 2 bit 2
.equ	TCNT2_3	= 3	; Timer/Counter 2 bit 3
.equ	TCNT2_4	= 4	; Timer/Counter 2 bit 4
.equ	TCNT2_5	= 5	; Timer/Counter 2 bit 5
.equ	TCNT2_6	= 6	; Timer/Counter 2 bit 6
.equ	TCNT2_7	= 7	; Timer/Counter 2 bit 7

; OCR2A - Timer/Counter2 Output Compare Register A
.equ	OCR2A_0	= 0	; Timer/Counter2 Output Compare Register Bit 0
.equ	OCR2A_1	= 1	; Timer/Counter2 Output Compare Register Bit 1
.equ	OCR2A_2	= 2	; Timer/Counter2 Output Compare Register Bit 2
.equ	OCR2A_3	= 3	; Timer/Counter2 Output Compare Register Bit 3
.equ	OCR2A_4	= 4	; Timer/Counter2 Output Compare Register Bit 4
.equ	OCR2A_5	= 5	; Timer/Counter2 Output Compare Register Bit 5
.equ	OCR2A_6	= 6	; Timer/Counter2 Output Compare Register Bit 6
.equ	OCR2A_7	= 7	; Timer/Counter2 Output Compare Register Bit 7

; OCR2B - Timer/Counter2 Output Compare Register B
.equ	OCR2B_0	= 0	; Timer/Counter2 Output Compare Register Bit 0
.equ	OCR2B_1	= 1	; Timer/Counter2 Output Compare Register Bit 1
.equ	OCR2B_2	= 2	; Timer/Counter2 Output Compare Register Bit 2
.equ	OCR2B_3	= 3	; Timer/Counter2 Output Compare Register Bit 3
.equ	OCR2B_4	= 4	; Timer/Counter2 Output Compare Register Bit 4
.equ	OCR2B_5	= 5	; Timer/Counter2 Output Compare Register Bit 5
.equ	OCR2B_6	= 6	; Timer/Counter2 Output Compare Register Bit 6
.equ	OCR2B_7	= 7	; Timer/Counter2 Output Compare Register Bit 7