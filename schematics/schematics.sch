EESchema Schematic File Version 4
LIBS:schematics-cache
EELAYER 26 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "Embedded System for Bicycle"
Date "2019-12-06"
Rev "0.1"
Comp "Praveen Kumar S"
Comment1 ""
Comment2 "iQube December Project"
Comment3 "18BEC105"
Comment4 "Praveen Kumar S"
$EndDescr
$Comp
L Display_Character:WC1602A DS1
U 1 1 5DE9F99A
P 3850 4650
F 0 "DS1" H 3850 5628 50  0000 C CNN
F 1 "LCD" H 3850 5537 50  0000 C CNN
F 2 "Display:WC1602A" H 3850 3750 50  0001 C CIN
F 3 "http://www.wincomlcd.com/pdf/WC1602A-SFYLYHTC06.pdf" H 4550 4650 50  0001 C CNN
	1    3850 4650
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR01
U 1 1 5DE9FDDD
P 1900 5050
F 0 "#PWR01" H 1900 4800 50  0001 C CNN
F 1 "GND" H 1905 4877 50  0000 C CNN
F 2 "" H 1900 5050 50  0001 C CNN
F 3 "" H 1900 5050 50  0001 C CNN
	1    1900 5050
	1    0    0    -1  
$EndComp
Wire Wire Line
	1900 5050 1900 4850
Wire Wire Line
	1950 1850 1900 1850
Wire Wire Line
	2000 1850 1950 1850
Connection ~ 1950 1850
$Comp
L power:GND #PWR09
U 1 1 5DE9FFC3
P 3850 5550
F 0 "#PWR09" H 3850 5300 50  0001 C CNN
F 1 "GND" H 3855 5377 50  0000 C CNN
F 2 "" H 3850 5550 50  0001 C CNN
F 3 "" H 3850 5550 50  0001 C CNN
	1    3850 5550
	1    0    0    -1  
$EndComp
Wire Wire Line
	3850 5550 3850 5450
Wire Wire Line
	3850 3850 4150 3850
Wire Wire Line
	4150 3850 4150 3800
Wire Wire Line
	4250 4050 4400 4050
Wire Wire Line
	4550 3900 4550 3850
Wire Wire Line
	4550 3850 4150 3850
Connection ~ 4150 3850
$Comp
L power:GND #PWR012
U 1 1 5DEA02DA
P 4550 4450
F 0 "#PWR012" H 4550 4200 50  0001 C CNN
F 1 "GND" H 4555 4277 50  0000 C CNN
F 2 "" H 4550 4450 50  0001 C CNN
F 3 "" H 4550 4450 50  0001 C CNN
	1    4550 4450
	1    0    0    -1  
$EndComp
Wire Wire Line
	4550 4450 4550 4200
Wire Wire Line
	4250 4450 4550 4450
Connection ~ 4550 4450
Wire Wire Line
	4350 4350 4250 4350
$Comp
L power:GND #PWR06
U 1 1 5DEA065A
P 3200 4150
F 0 "#PWR06" H 3200 3900 50  0001 C CNN
F 1 "GND" H 3205 3977 50  0000 C CNN
F 2 "" H 3200 4150 50  0001 C CNN
F 3 "" H 3200 4150 50  0001 C CNN
	1    3200 4150
	1    0    0    -1  
$EndComp
Wire Wire Line
	3200 4150 3450 4150
$Comp
L Device:Crystal Y1
U 1 1 5DEA08E2
P 2850 2800
F 0 "Y1" V 2804 2931 50  0000 L CNN
F 1 "12Mhz" V 2895 2931 50  0000 L CNN
F 2 "" H 2850 2800 50  0001 C CNN
F 3 "~" H 2850 2800 50  0001 C CNN
	1    2850 2800
	0    1    1    0   
$EndComp
Wire Wire Line
	2500 2750 2700 2750
Wire Wire Line
	2700 2750 2700 2650
Wire Wire Line
	2700 2650 2850 2650
Wire Wire Line
	2500 2850 2700 2850
Wire Wire Line
	2700 2850 2700 2950
Wire Wire Line
	2700 2950 2850 2950
$Comp
L power:GND #PWR07
U 1 1 5DEA0C59
P 3300 2800
F 0 "#PWR07" H 3300 2550 50  0001 C CNN
F 1 "GND" H 3305 2627 50  0000 C CNN
F 2 "" H 3300 2800 50  0001 C CNN
F 3 "" H 3300 2800 50  0001 C CNN
	1    3300 2800
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C2
U 1 1 5DEA0CDC
P 3100 2650
F 0 "C2" V 2871 2650 50  0000 C CNN
F 1 "22pF" V 2962 2650 50  0000 C CNN
F 2 "" H 3100 2650 50  0001 C CNN
F 3 "~" H 3100 2650 50  0001 C CNN
	1    3100 2650
	0    1    1    0   
$EndComp
$Comp
L Device:C_Small C3
U 1 1 5DEA0D2F
P 3100 3000
F 0 "C3" V 3300 3000 50  0000 C CNN
F 1 "22pF" V 3200 3000 50  0000 C CNN
F 2 "" H 3100 3000 50  0001 C CNN
F 3 "~" H 3100 3000 50  0001 C CNN
	1    3100 3000
	0    1    1    0   
$EndComp
Wire Wire Line
	3200 2650 3200 2800
Wire Wire Line
	3200 2800 3300 2800
Connection ~ 3200 2800
Wire Wire Line
	3200 2800 3200 3000
Wire Wire Line
	2850 2650 3000 2650
Connection ~ 2850 2650
Wire Wire Line
	2850 2950 2850 3000
Wire Wire Line
	2850 3000 3000 3000
Connection ~ 2850 2950
Wire Wire Line
	3450 4050 3450 3850
Wire Wire Line
	3450 3850 2500 3850
Wire Wire Line
	3450 4250 3400 4250
Wire Wire Line
	3400 4250 3400 3950
Wire Wire Line
	3400 3950 2500 3950
Wire Wire Line
	3450 4950 3100 4950
Wire Wire Line
	3100 4950 3100 4250
Wire Wire Line
	3100 4250 2500 4250
Wire Wire Line
	3450 5050 3000 5050
Wire Wire Line
	3000 5050 3000 4350
Wire Wire Line
	3000 4350 2500 4350
Wire Wire Line
	3450 5150 2900 5150
Wire Wire Line
	2900 5150 2900 4450
Wire Wire Line
	2900 4450 2500 4450
Wire Wire Line
	3450 5250 2800 5250
Wire Wire Line
	2800 5250 2800 4550
Wire Wire Line
	2800 4550 2500 4550
$Comp
L MCU_Microchip_ATmega:ATmega328P-PU U1
U 1 1 5DE9FBBC
P 1900 3350
F 0 "U1" H 1259 3396 50  0000 R CNN
F 1 "ATmega328P-PU" H 1259 3305 50  0000 R CNN
F 2 "Package_DIP:DIP-28_W7.62mm" H 1900 3350 50  0001 C CIN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/ATmega328_P%20AVR%20MCU%20with%20picoPower%20Technology%20Data%20Sheet%2040001984A.pdf" H 1900 3350 50  0001 C CNN
	1    1900 3350
	1    0    0    -1  
$EndComp
Wire Wire Line
	1950 1600 1950 1850
$Comp
L Switch:SW_Push SW2
U 1 1 5DF39CBD
P 4250 1850
F 0 "SW2" H 4250 2135 50  0000 C CNN
F 1 "Mode" H 4250 2044 50  0000 C CNN
F 2 "" H 4250 2050 50  0001 C CNN
F 3 "" H 4250 2050 50  0001 C CNN
	1    4250 1850
	1    0    0    -1  
$EndComp
$Comp
L Device:R_US R2
U 1 1 5DF3B100
P 3850 1500
F 0 "R2" H 3918 1546 50  0000 L CNN
F 1 "10k" H 3918 1455 50  0000 L CNN
F 2 "" V 3890 1490 50  0001 C CNN
F 3 "~" H 3850 1500 50  0001 C CNN
	1    3850 1500
	1    0    0    -1  
$EndComp
Wire Wire Line
	3850 1250 3850 1350
Wire Wire Line
	3850 1650 3850 1850
Wire Wire Line
	3850 1850 4000 1850
$Comp
L power:GND #PWR011
U 1 1 5DF3C558
P 4550 1850
F 0 "#PWR011" H 4550 1600 50  0001 C CNN
F 1 "GND" H 4555 1677 50  0000 C CNN
F 2 "" H 4550 1850 50  0001 C CNN
F 3 "" H 4550 1850 50  0001 C CNN
	1    4550 1850
	1    0    0    -1  
$EndComp
Wire Wire Line
	4550 1850 4450 1850
$Comp
L Switch:SW_Push SW3
U 1 1 5DF3D06D
P 5550 1850
F 0 "SW3" H 5550 2135 50  0000 C CNN
F 1 "Set1" H 5550 2044 50  0000 C CNN
F 2 "" H 5550 2050 50  0001 C CNN
F 3 "" H 5550 2050 50  0001 C CNN
	1    5550 1850
	1    0    0    -1  
$EndComp
$Comp
L Device:R_US R4
U 1 1 5DF3D074
P 5150 1500
F 0 "R4" H 5218 1546 50  0000 L CNN
F 1 "10k" H 5218 1455 50  0000 L CNN
F 2 "" V 5190 1490 50  0001 C CNN
F 3 "~" H 5150 1500 50  0001 C CNN
	1    5150 1500
	1    0    0    -1  
$EndComp
Wire Wire Line
	5150 1850 5350 1850
$Comp
L power:GND #PWR015
U 1 1 5DF3D07E
P 5850 1850
F 0 "#PWR015" H 5850 1600 50  0001 C CNN
F 1 "GND" H 5855 1677 50  0000 C CNN
F 2 "" H 5850 1850 50  0001 C CNN
F 3 "" H 5850 1850 50  0001 C CNN
	1    5850 1850
	1    0    0    -1  
$EndComp
Wire Wire Line
	5850 1850 5750 1850
$Comp
L Switch:SW_Push SW4
U 1 1 5DF3DC55
P 6850 1900
F 0 "SW4" H 6850 2185 50  0000 C CNN
F 1 "Set2" H 6850 2094 50  0000 C CNN
F 2 "" H 6850 2100 50  0001 C CNN
F 3 "" H 6850 2100 50  0001 C CNN
	1    6850 1900
	1    0    0    -1  
$EndComp
$Comp
L Device:R_US R7
U 1 1 5DF3DC5C
P 6450 1550
F 0 "R7" H 6518 1596 50  0000 L CNN
F 1 "10k" H 6518 1505 50  0000 L CNN
F 2 "" V 6490 1540 50  0001 C CNN
F 3 "~" H 6450 1550 50  0001 C CNN
	1    6450 1550
	1    0    0    -1  
$EndComp
Wire Wire Line
	6450 1700 6450 1900
Wire Wire Line
	6450 1900 6650 1900
$Comp
L power:GND #PWR018
U 1 1 5DF3DC66
P 7150 1900
F 0 "#PWR018" H 7150 1650 50  0001 C CNN
F 1 "GND" H 7155 1727 50  0000 C CNN
F 2 "" H 7150 1900 50  0001 C CNN
F 3 "" H 7150 1900 50  0001 C CNN
	1    7150 1900
	1    0    0    -1  
$EndComp
Wire Wire Line
	7150 1900 7050 1900
Wire Wire Line
	5150 1650 5150 1850
Connection ~ 3850 1850
Connection ~ 5150 1850
Text Notes 1800 1300 0    118  ~ 24
MCU
Text Notes 3700 3450 0    118  ~ 24
LCD
Text Notes 5000 1100 0    98   ~ 20
Switches\n
Wire Wire Line
	3700 1850 3850 1850
Text GLabel 3700 1850 0    50   Output ~ 0
Mode
Text GLabel 2750 3350 2    50   Input ~ 0
Mode
Wire Wire Line
	2750 3350 2500 3350
Text GLabel 2750 3250 2    50   Input ~ 0
Set1
Wire Wire Line
	2750 3250 2500 3250
Text GLabel 2750 3150 2    50   Input ~ 0
Set2
Wire Wire Line
	2500 3150 2750 3150
Wire Wire Line
	2500 3650 2850 3650
Text GLabel 5000 1850 0    50   Output ~ 0
Set1
Text GLabel 6300 1900 0    50   Output ~ 0
Set2
Wire Wire Line
	6300 1900 6450 1900
Connection ~ 6450 1900
Wire Wire Line
	5000 1850 5150 1850
Wire Wire Line
	3850 1350 5150 1350
Wire Wire Line
	6450 1350 6450 1400
Connection ~ 3850 1350
Connection ~ 5150 1350
Wire Wire Line
	5150 1350 6450 1350
$Comp
L Timer_RTC:DS3231MZ U2
U 1 1 5DF4C18B
P 6050 3650
F 0 "U2" H 5750 4000 50  0000 C CNN
F 1 "DS3231MZ" H 5750 3250 50  0000 C CNN
F 2 "Package_SO:SOIC-8_3.9x4.9mm_P1.27mm" H 6050 3150 50  0001 C CNN
F 3 "http://datasheets.maximintegrated.com/en/ds/DS3231M.pdf" H 6050 3050 50  0001 C CNN
	1    6050 3650
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR017
U 1 1 5E007BE8
P 6050 4450
F 0 "#PWR017" H 6050 4200 50  0001 C CNN
F 1 "GND" H 6055 4277 50  0000 C CNN
F 2 "" H 6050 4450 50  0001 C CNN
F 3 "" H 6050 4450 50  0001 C CNN
	1    6050 4450
	1    0    0    -1  
$EndComp
Wire Wire Line
	6050 4450 6050 4050
Wire Wire Line
	6050 3050 6050 3250
$Comp
L power:VCC #PWR016
U 1 1 5E00A358
P 6050 3050
F 0 "#PWR016" H 6050 2900 50  0001 C CNN
F 1 "VCC" H 6067 3223 50  0000 C CNN
F 2 "" H 6050 3050 50  0001 C CNN
F 3 "" H 6050 3050 50  0001 C CNN
	1    6050 3050
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR02
U 1 1 5E00B6C3
P 1950 1600
F 0 "#PWR02" H 1950 1450 50  0001 C CNN
F 1 "VCC" H 1967 1773 50  0000 C CNN
F 2 "" H 1950 1600 50  0001 C CNN
F 3 "" H 1950 1600 50  0001 C CNN
	1    1950 1600
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR05
U 1 1 5E00B7B6
P 3200 3650
F 0 "#PWR05" H 3200 3500 50  0001 C CNN
F 1 "VCC" H 3217 3823 50  0000 C CNN
F 2 "" H 3200 3650 50  0001 C CNN
F 3 "" H 3200 3650 50  0001 C CNN
	1    3200 3650
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR010
U 1 1 5E00B8B6
P 4150 3800
F 0 "#PWR010" H 4150 3650 50  0001 C CNN
F 1 "VCC" H 4167 3973 50  0000 C CNN
F 2 "" H 4150 3800 50  0001 C CNN
F 3 "" H 4150 3800 50  0001 C CNN
	1    4150 3800
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR08
U 1 1 5E00BA6C
P 3850 1250
F 0 "#PWR08" H 3850 1100 50  0001 C CNN
F 1 "VCC" H 3867 1423 50  0000 C CNN
F 2 "" H 3850 1250 50  0001 C CNN
F 3 "" H 3850 1250 50  0001 C CNN
	1    3850 1250
	1    0    0    -1  
$EndComp
Text GLabel 2650 3550 2    50   Input ~ 0
SCL
Wire Wire Line
	2650 3550 2500 3550
Text GLabel 2650 3450 2    50   Input ~ 0
SDA
Wire Wire Line
	2500 3450 2650 3450
Text GLabel 5300 3400 0    50   Output ~ 0
SCL
Wire Wire Line
	5300 3400 5350 3400
Text GLabel 5300 3600 0    50   Output ~ 0
SDA
Wire Wire Line
	5550 3600 5550 3550
Text Notes 5900 2750 0    118  ~ 24
RTC
Text Notes 8600 1250 0    118  ~ 24
Power
$Comp
L power:VCC #PWR019
U 1 1 5E015EFA
P 8800 1700
F 0 "#PWR019" H 8800 1550 50  0001 C CNN
F 1 "VCC" H 8817 1873 50  0000 C CNN
F 2 "" H 8800 1700 50  0001 C CNN
F 3 "" H 8800 1700 50  0001 C CNN
	1    8800 1700
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR020
U 1 1 5E015F72
P 8800 2500
F 0 "#PWR020" H 8800 2250 50  0001 C CNN
F 1 "GND" H 8805 2327 50  0000 C CNN
F 2 "" H 8800 2500 50  0001 C CNN
F 3 "" H 8800 2500 50  0001 C CNN
	1    8800 2500
	1    0    0    -1  
$EndComp
$Comp
L Device:Battery_Cell BT1
U 1 1 5E016040
P 8800 2400
F 0 "BT1" H 8918 2496 50  0000 L CNN
F 1 "Battery" H 8918 2405 50  0000 L CNN
F 2 "" V 8800 2460 50  0001 C CNN
F 3 "~" V 8800 2460 50  0001 C CNN
	1    8800 2400
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_SPST SW5
U 1 1 5E018E25
P 8800 2000
F 0 "SW5" V 8754 2098 50  0000 L CNN
F 1 "SW_Power" V 8845 2098 50  0000 L CNN
F 2 "" H 8800 2000 50  0001 C CNN
F 3 "" H 8800 2000 50  0001 C CNN
	1    8800 2000
	0    1    1    0   
$EndComp
Wire Wire Line
	8800 1700 8800 1750
$Comp
L Device:R_US R8
U 1 1 5E01BBA9
P 9200 1750
F 0 "R8" V 9405 1750 50  0000 C CNN
F 1 "1k" V 9314 1750 50  0000 C CNN
F 2 "" V 9240 1740 50  0001 C CNN
F 3 "~" H 9200 1750 50  0001 C CNN
	1    9200 1750
	0    -1   -1   0   
$EndComp
Wire Wire Line
	9050 1750 8800 1750
Connection ~ 8800 1750
Wire Wire Line
	8800 1750 8800 1800
$Comp
L Device:LED D1
U 1 1 5E01FFFE
P 9500 1750
F 0 "D1" H 9492 1495 50  0000 C CNN
F 1 "Power" H 9492 1586 50  0000 C CNN
F 2 "" H 9500 1750 50  0001 C CNN
F 3 "~" H 9500 1750 50  0001 C CNN
	1    9500 1750
	-1   0    0    1   
$EndComp
$Comp
L power:GND #PWR021
U 1 1 5E0200A2
P 9900 1900
F 0 "#PWR021" H 9900 1650 50  0001 C CNN
F 1 "GND" H 9905 1727 50  0000 C CNN
F 2 "" H 9900 1900 50  0001 C CNN
F 3 "" H 9900 1900 50  0001 C CNN
	1    9900 1900
	1    0    0    -1  
$EndComp
Wire Wire Line
	9900 1900 9900 1750
Wire Wire Line
	9900 1750 9650 1750
$Comp
L Device:R_POT_TRIM_US RV1
U 1 1 5DEA0129
P 4550 4050
F 0 "RV1" H 4483 4004 50  0000 R CNN
F 1 "10k" H 4483 4095 50  0000 R CNN
F 2 "" H 4550 4050 50  0001 C CNN
F 3 "~" H 4550 4050 50  0001 C CNN
	1    4550 4050
	-1   0    0    1   
$EndComp
$Comp
L Transistor_BJT:BC547 Q1
U 1 1 5E021D76
P 5000 4200
F 0 "Q1" V 5236 4200 50  0000 C CNN
F 1 "BC547" V 5327 4200 50  0000 C CNN
F 2 "Package_TO_SOT_THT:TO-92_Inline" H 5200 4125 50  0001 L CIN
F 3 "http://www.fairchildsemi.com/ds/BC/BC547.pdf" H 5000 4200 50  0001 L CNN
	1    5000 4200
	0    1    1    0   
$EndComp
$Comp
L Device:R_US R3
U 1 1 5E023634
P 5000 3850
F 0 "R3" H 5068 3896 50  0000 L CNN
F 1 "10k" H 5068 3805 50  0000 L CNN
F 2 "" V 5040 3840 50  0001 C CNN
F 3 "~" H 5000 3850 50  0001 C CNN
	1    5000 3850
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR013
U 1 1 5E0236D1
P 5300 4300
F 0 "#PWR013" H 5300 4150 50  0001 C CNN
F 1 "VCC" H 5317 4473 50  0000 C CNN
F 2 "" H 5300 4300 50  0001 C CNN
F 3 "" H 5300 4300 50  0001 C CNN
	1    5300 4300
	1    0    0    -1  
$EndComp
Wire Wire Line
	5300 4300 5200 4300
Wire Wire Line
	4800 4300 4350 4300
Wire Wire Line
	4350 4300 4350 4350
$Comp
L Switch:SW_Reed SW1
U 1 1 5E02A2F8
P 2550 1550
F 0 "SW1" V 2504 1635 50  0000 L CNN
F 1 "reed" V 2595 1635 50  0000 L CNN
F 2 "" H 2550 1550 50  0001 C CNN
F 3 "" H 2550 1550 50  0001 C CNN
	1    2550 1550
	0    1    1    0   
$EndComp
Wire Wire Line
	2500 2150 2550 2150
Wire Wire Line
	2550 2150 2550 1950
$Comp
L power:GND #PWR03
U 1 1 5E02C139
P 2950 1200
F 0 "#PWR03" H 2950 950 50  0001 C CNN
F 1 "GND" H 2955 1027 50  0000 C CNN
F 2 "" H 2950 1200 50  0001 C CNN
F 3 "" H 2950 1200 50  0001 C CNN
	1    2950 1200
	1    0    0    -1  
$EndComp
Wire Wire Line
	2950 1200 2550 1200
Wire Wire Line
	2550 1200 2550 1350
$Comp
L Device:C_Small C4
U 1 1 5E02E9B6
P 4000 1950
F 0 "C4" H 4092 1996 50  0000 L CNN
F 1 "10n" H 4092 1905 50  0000 L CNN
F 2 "" H 4000 1950 50  0001 C CNN
F 3 "~" H 4000 1950 50  0001 C CNN
	1    4000 1950
	1    0    0    -1  
$EndComp
Connection ~ 4000 1850
Wire Wire Line
	4000 1850 4050 1850
Wire Wire Line
	2500 2250 3150 2250
Wire Wire Line
	3150 2250 3150 2350
Wire Wire Line
	3150 2350 5000 2350
Wire Wire Line
	5000 2350 5000 3700
Wire Wire Line
	4450 2050 4450 1850
Connection ~ 4450 1850
$Comp
L Device:C_Small C5
U 1 1 5E032F31
P 5350 1950
F 0 "C5" H 5442 1996 50  0000 L CNN
F 1 "10n" H 5442 1905 50  0000 L CNN
F 2 "" H 5350 1950 50  0001 C CNN
F 3 "~" H 5350 1950 50  0001 C CNN
	1    5350 1950
	1    0    0    -1  
$EndComp
Connection ~ 5350 1850
Wire Wire Line
	5750 2050 5750 1850
Connection ~ 5750 1850
$Comp
L Device:C_Small C6
U 1 1 5E0354AD
P 6650 2000
F 0 "C6" H 6742 2046 50  0000 L CNN
F 1 "10n" H 6742 1955 50  0000 L CNN
F 2 "" H 6650 2000 50  0001 C CNN
F 3 "~" H 6650 2000 50  0001 C CNN
	1    6650 2000
	1    0    0    -1  
$EndComp
Connection ~ 6650 1900
Wire Wire Line
	7050 2100 7050 1900
Connection ~ 7050 1900
Wire Wire Line
	4000 2050 4450 2050
Wire Wire Line
	5350 2050 5750 2050
Wire Wire Line
	6650 2100 7050 2100
$Comp
L Device:CP C1
U 1 1 5E0414B3
P 2700 1950
F 0 "C1" V 2955 1950 50  0000 C CNN
F 1 "10u" V 2864 1950 50  0000 C CNN
F 2 "" H 2738 1800 50  0001 C CNN
F 3 "~" H 2700 1950 50  0001 C CNN
	1    2700 1950
	0    -1   -1   0   
$EndComp
Connection ~ 2550 1950
Wire Wire Line
	2550 1950 2550 1750
$Comp
L power:GND #PWR04
U 1 1 5E0460B3
P 3000 1950
F 0 "#PWR04" H 3000 1700 50  0001 C CNN
F 1 "GND" H 3005 1777 50  0000 C CNN
F 2 "" H 3000 1950 50  0001 C CNN
F 3 "" H 3000 1950 50  0001 C CNN
	1    3000 1950
	1    0    0    -1  
$EndComp
Wire Wire Line
	3000 1950 2850 1950
$Comp
L Device:R_US R1
U 1 1 5E049A3E
P 3000 3650
F 0 "R1" V 2795 3650 50  0000 C CNN
F 1 "10k" V 2886 3650 50  0000 C CNN
F 2 "" V 3040 3640 50  0001 C CNN
F 3 "~" H 3000 3650 50  0001 C CNN
	1    3000 3650
	0    1    1    0   
$EndComp
Wire Wire Line
	3150 3650 3200 3650
$Comp
L Device:R_US R5
U 1 1 5E04AC8D
P 5350 3200
F 0 "R5" H 5250 3200 50  0000 L CNN
F 1 "10k" H 5418 3155 50  0000 L CNN
F 2 "" V 5390 3190 50  0001 C CNN
F 3 "~" H 5350 3200 50  0001 C CNN
	1    5350 3200
	1    0    0    -1  
$EndComp
$Comp
L Device:R_US R6
U 1 1 5E04AD31
P 5500 3000
F 0 "R6" H 5568 3046 50  0000 L CNN
F 1 "10k" H 5568 2955 50  0000 L CNN
F 2 "" V 5540 2990 50  0001 C CNN
F 3 "~" H 5500 3000 50  0001 C CNN
	1    5500 3000
	1    0    0    -1  
$EndComp
Wire Wire Line
	5350 3350 5350 3400
Connection ~ 5350 3400
Wire Wire Line
	5350 3400 5550 3400
Wire Wire Line
	5550 3400 5550 3450
Wire Wire Line
	5500 3150 5500 3600
Wire Wire Line
	5300 3600 5500 3600
Connection ~ 5500 3600
Wire Wire Line
	5500 3600 5550 3600
$Comp
L power:VCC #PWR014
U 1 1 5E052D71
P 5400 2800
F 0 "#PWR014" H 5400 2650 50  0001 C CNN
F 1 "VCC" H 5417 2973 50  0000 C CNN
F 2 "" H 5400 2800 50  0001 C CNN
F 3 "" H 5400 2800 50  0001 C CNN
	1    5400 2800
	1    0    0    -1  
$EndComp
Wire Wire Line
	5400 2800 5500 2800
Wire Wire Line
	5500 2800 5500 2850
Wire Wire Line
	5400 2800 5350 2800
Wire Wire Line
	5350 2800 5350 3050
Connection ~ 5400 2800
$EndSCHEMATC
