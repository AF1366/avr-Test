
	.DEF _q=R5
	.DEF _w=R4
	.DEF _r=R7
_3:
	.DB  0x3F,0x6,0x5B,0x4F,0x66,0x6D,0x7D,0x7
	.DB  0x7F,0x6F

__GLOBAL_INI_TBL:
	.DW  0x0A
	.DW  _e
	.DW  _3*2

	.DW  0
_0x0A:
