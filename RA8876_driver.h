#ifndef __RA8876_DRIVER_H__
#define __RA8876_DRIVER_H__

//------------------------------------------------------------------------------
// RA8876 LAYERS ADDRESSES
//------------------------------------------------------------------------------
#define PAGE0_START_ADDR 0
#define PAGE1_START_ADDR (1024 * 600 * 2 * 1)
#define PAGE2_START_ADDR (1024 * 600 * 2 * 2)
#define PAGE3_START_ADDR (1024 * 600 * 2 * 3)
#define PAGE4_START_ADDR (1024 * 600 * 2 * 4)
#define PAGE5_START_ADDR (1024 * 600 * 2 * 5)
#define PAGE6_START_ADDR (1024 * 600 * 2 * 6)
#define PAGE7_START_ADDR (1024 * 600 * 2 * 7)
#define PAGE8_START_ADDR (1024 * 600 * 2 * 8)
#define PAGE9_START_ADDR (1024 * 600 * 2 * 9)


#define W9812G6JH


//------------------------------------------------------------------------------
// FOR STM32 FMC
//------------------------------------------------------------------------------
#define LCD_DATA 0x60020000
#define LCD_REG  0x60000000



//------------------------------------------------------------------------------
// RA8876 REGISTERS
//------------------------------------------------------------------------------
#define REG_SOFTWARE_RESET_REGISTER        0x00
#define REG_CHIP_CONFIGURATION_REGISTER    0x01
#define REG_MEMORY_ACCESS_CONTROL_REGISTER 0x02
#define REG_INPUT_CONTROL_REGISTER         0x03
#define REG_MEMORY_DATA_READ_WRITE_PORT    0x04
#define REG_SCLK_PLL_CONTROL_REGISTER_1    0x05
#define REG_SCLK_PLL_CONTROL_REGISTER_2    0x06
#define REG_MCLK_PLL_CONTROL_REGISTER_1    0x07
#define REG_MCLK_PLL_CONTROL_REGISTER_2    0x08
#define REG_CCLK_PLL_CONTROL_REGISTER_1    0x09
#define REG_CCLK_PLL_CONTROL_REGISTER_2    0x0A
#define REG_INTERRUPT_ENABLE_REGISTER      0x0B
#define REG_INTERRUPT_EVENT_FLAG_REGISTER  0x0C

//------------------------------------------------------------------------------
// Software Setting
//------------------------------------------------------------------------------
/*==== [SW_(1)]  PLL  =====*/
#define OSC_FREQ      10  // crystal clcok
#define DRAM_FREQ    166  // SDRAM clock frequency, unti: MHz		  
#define CORE_FREQ    120  // Core (system) clock frequency, unit: MHz 
#define SCAN_FREQ     50  // Panel Scan clock frequency, unit: MHz	 

//=====[05h] b3-b1=====//
//#define SCAN_DIVK1      // 000	   
#define SCAN_DIVK2	      // 001   
//#define SCAN_DIVK4 	  // 010
//#define SCAN_DIVK8 	  // 011 
//#define SCAN_DIVK16 	  // 100
//#define SCAN_DIVK32	  // 101
//#define SCAN_DIVK64	  // 110
//#define SCAN_DIVK128	  // 111

//=====[05h] b0
#define SCAN_DIVM1   	  // 0
//#define SCAN_DIVM2 	  // 1 

//=====[07h] b3-b1
//#define DRAM_DIVK1 	  // 000 
#define DRAM_DIVK2        // 001
//#define DRAM_DIVK4 	  // 010
//#define DRAM_DIVK8 	  // 011

//=====[07h] b0
//#define DRAM_DIVM1 	  // 0
//#define DRAM_DIVM2	  // 1

//=====[09h] b3-b1
//#define CORE_DIVK1 	  // 000
#define CORE_DIVK2	      // 001
//#define CORE_DIVK4   	  // 010
//#define CORE_DIVK8 	  // 011

//=====[09h] b0			  
#define CORE_DIVM1   	  // 0
//#define CORE_DIVM2	  // 1


#define RGB565(r,g,b) ((r >> 3) << 11 | (g >> 2) << 5 | ( b >> 3))

#define C16_WHITE   0xFFFF
#define C16_BLACK   0x0000
#define C16_BLUE    0x001F
#define C16_RED     0xF800
#define C16_MAGENTA 0xF81F
#define C16_GREEN   0x07E0
#define C16_CYAN    0x07FF
#define C16_YELLOW  0xFFE0

#define C16_GRAY00  2113*0
#define C16_GRAY01  2113*2
#define C16_GRAY02  2113*3
#define C16_GRAY03  2113*4
#define C16_GRAY04  2113*5
#define C16_GRAY05  2113*6
#define C16_GRAY06  2113*7
#define C16_GRAY07  2113*8
#define C16_GRAY08  2113*9
#define C16_GRAY09  2113*10
#define C16_GRAY10  2113*11
#define C16_GRAY11  2113*12
#define C16_GRAY12  2113*13
#define C16_GRAY13  2113*14
#define C16_GRAY14  2113*15
#define C16_GRAY15  2113*16
#define C16_GRAY16  2113*17
#define C16_GRAY17  2113*18
#define C16_GRAY18  2113*19
#define C16_GRAY19  2113*20
#define C16_GRAY20  2113*21
#define C16_GRAY21  2113*22
#define C16_GRAY22  2113*23
#define C16_GRAY23  2113*24
#define C16_GRAY24  2113*25
#define C16_GRAY25  2113*26
#define C16_GRAY26  2113*27
#define C16_GRAY27  2113*28
#define C16_GRAY28  2113*29
#define C16_GRAY29  2113*30







#define Line0          0
#define Line1          24
#define Line2          48
#define Line3          72
#define Line4          96
#define Line5          120
#define Line6          144
#define Line7          168
#define Line8          192
#define Line9          216
#define Line10         240
#define Line11         264
#define Line12         288
#define Line13         312
#define Line14         336
#define Line15         360
#define Line16         384
#define Line17         408
#define Line18         432
#define Line19         456
#define Line20         480
#define Line21         504
#define Line22         528
#define Line23         552
#define Line24         576




#define	cSetb0		0x01
#define	cSetb1		0x02
#define	cSetb2		0x04
#define	cSetb3		0x08
#define	cSetb4		0x10
#define	cSetb5		0x20
#define	cSetb6		0x40
#define	cSetb7		0x80

#define	cClrb0		0xfe
#define	cClrb1		0xfd
#define	cClrb2		0xfb
#define	cClrb3		0xf7
#define	cClrb4		0xef
#define	cClrb5		0xdf
#define	cClrb6		0xbf
#define	cClrb7		0x7f

 
 void RA8875_usart_show_register (char * header, unsigned char reg);
 
 
// ===========================================
// LOW LEVEL FUNCTIONS
// ===========================================
         void LCD_CmdWrite      (unsigned char cmd);
		 void LCD_DataWrite     (unsigned short data);
unsigned char LCD_StatusRead    (void);
unsigned char LCD_DataRead      (void);
         void LCD_RegisterWrite (unsigned char cmd, unsigned char data);
unsigned char LCD_RegisterRead  (unsigned char cmd);

// ===========================================
// INIT
// ===========================================
void RA8876_Init      (void);
void RA8876_PLL_Init  (void); 
void RA8876_SDRAM_Init(void);




// ===========================================
// STATUS
// ===========================================
void Check_Mem_WR_FIFO_not_Full  (void);
void Check_Mem_WR_FIFO_Empty     (void);
void Check_Mem_RD_FIFO_not_Full  (void);
void Check_Mem_RD_FIFO_not_Empty (void);
void Check_2D_Busy               (void);
void Check_SDRAM_Ready           (void);
void Check_Power_is_Normal       (void); //Normal mode
void Check_Power_is_Saving       (void); //Saving mode
void Check_NO_Interrupt          (void); //Interrupt
void Check_Interrupt_Occur       (void); //Interrupt

unsigned char Power_Saving_Status(void);

// ===========================================
// BUSY
// ===========================================
void Check_Busy_Draw   (void);
void Check_Busy_SFI_DMA(void);

// ===========================================
// RESET
// ===========================================
void RA8876_SW_Reset(void);
void RA8876_HW_Reset(void);




// ===========================================
// RGB24 DISPLAY CONFIG
// ===========================================
//**[01h]**//
void Enable_PLL(void);
void RA8876_Sleep(void);
void RA8876_WakeUp(void);
void TFT_24bit(void);
void TFT_18bit(void);
void TFT_16bit(void);
void TFT_LVDS(void);
void Enable_SFlash_SPI(void);
void Disable_SFlash_SPI(void);


void Host_Bus_8bit(void);
void Host_Bus_16bit(void);
//**[02h]**//

void RGB_8b_8bpp(void);
void RGB_8b_16bpp(void);
void RGB_8b_24bpp(void);

void RGB_16b_8bpp(void);
void RGB_16b_16bpp(void);
void RGB_16b_24bpp_mode1(void);
void RGB_16b_24bpp_mode2(void);

void MemRead_Left_Right_Top_Down(void);
void MemRead_Right_Left_Top_Down(void);
void MemRead_Top_Down_Left_Right(void);
void MemRead_Down_Top_Left_Right(void);

void MemWrite_Left_Right_Top_Down(void);
void MemWrite_Right_Left_Top_Down(void);
void MemWrite_Top_Down_Left_Right(void);
void MemWrite_Down_Top_Left_Right(void);

//**[03h]**//
void Interrupt_Active_Low(void);
void Interrupt_Active_High(void);

void LVDS_Format1(void);
void LVDS_Format2(void);
void Graphic_Mode(void);
void Text_Mode(void);
void Memory_Select_SDRAM(void);
void Memory_Select_Graphic_Cursor_RAM(void);
void Memory_Select_Color_Palette_RAM(void);



// ===========================================
// INTERRUPTS
// ===========================================
//**[05h]**//
//**[06h]**//
//**[07h]**//
//**[09h]**//
//**[0Ah]**//
//**[0Bh]**//
void Enable_Resume_Interrupt(void);
void Disable_Resume_Interrupt(void);
void Enable_ExtInterrupt_Input(void);
void Disable_ExtInterrupt_Input(void);
void Enable_Vsync_Interrupt(void);
void Disable_Vsync_Interrupt(void);
void Enable_DMA_Draw_BTE_Interrupt(void);
void Disable_DMA_Draw_BTE_Interrupt(void);


//**[0Ch]**//
unsigned char Read_Interrupt_status(void);
void Clear_Resume_Interrupt_Flag(void);
void Clear_ExtInterrupt_Input_Flag(void);
void Clear_Vsync_Interrupt_Flag(void);
void Clear_DMA_Draw_BTE_Interrupt_Flag(void);

//**[0Dh]**//
void Mask_Resume_Interrupt_Flag(void);
void Mask_ExtInterrupt_Input_Flag(void);
void Mask_Vsync_Interrupt_Flag(void);
void Mask_DMA_Draw_BTE_Interrupt_Flag(void);


//
void Enable_Resume_Interrupt_Flag(void);
void Enable_ExtInterrupt_Input_Flag(void);
void Enable_Vsync_Interrupt_Flag(void);
void Enable_DMA_Draw_BTE_Interrupt_Flag(void);



// ======================================================
// REG[12h] Display Configuration Register (DPCR)
// ======================================================
void PCLK_Rising      (void);
void PCLK_Falling     (void);
void Display_ON       (void);
void Display_OFF      (void);
void Color_Bar_ON     (void);
void Color_Bar_OFF    (void);
void HSCAN_L_to_R     (void);
void HSCAN_R_to_L     (void);
void VSCAN_T_to_B     (void);
void VSCAN_B_to_T     (void);
void PDATA_Set_RGB    (void);
void PDATA_Set_RBG    (void);
void PDATA_Set_GRB    (void);
void PDATA_Set_GBR    (void);
void PDATA_Set_BRG    (void);
void PDATA_Set_BGR    (void);
void PDATA_IDLE_STATE (void);

// ======================================================
// RGB24 IF CONFIG
// ======================================================
void HSYNC_Low_Active  (void);
void HSYNC_High_Active (void);
void VSYNC_Low_Active  (void);
void VSYNC_High_Active (void);
void DE_Low_Active     (void);
void DE_High_Active    (void);
void Idle_DE_Low       (void);
void Idle_DE_High      (void);
void Idle_PCLK_Low     (void);
void Idle_PCLK_High    (void);
void Idle_PDAT_Low     (void);
void Idle_PDAT_High    (void);
void Idle_HSYNC_Low    (void);
void Idle_HSYNC_High   (void);
void Idle_VSYNC_Low    (void);
void Idle_VSYNC_High   (void);

void LCD_HorizontalWidth_VerticalHeight (unsigned short WX, unsigned short HY); //[14h][15h][1Ah][1Bh]
void LCD_Horizontal_Non_Display         (unsigned short WX);                    //[16h][17h]
void LCD_HSYNC_Start_Position           (unsigned short WX);                    //[18h]
void LCD_HSYNC_Pulse_Width              (unsigned short WX);                    //[19h]
void LCD_Vertical_Non_Display           (unsigned short HY);                    //[1Ch][1Dh]
void LCD_VSYNC_Start_Position           (unsigned short HY);                    //[1Eh]
void LCD_VSYNC_Pulse_Width              (unsigned short HY);                    //[1Fh]


// ===========================================
// FRAME BUFFER
// ===========================================
void Frame_Buffer_Start_Address    (unsigned long Addr);                   //[20h][21h][22h][23h]
void Frame_Buffer_Width            (unsigned short WX);                    //[24h][25h]
void Frame_Buffer_Start_XY         (unsigned short WX, unsigned short HY); //[26h][27h][28h][29h]
void Frame_Buffer_Color_Mode_8bpp  (void);                                 //[10h]
void Frame_Buffer_Color_Mode_16bpp (void);                                 //[10h]
void Frame_Buffer_Color_Mode_24bpp (void);                                 //[10h]

void Frame_Buffer_Switch           (unsigned long Addr);                   //[20h][21h][22h][23h]

// ===========================================
//  CANVAS
// ===========================================
void Canvas_Window_Start_Address    (unsigned long Addr);                   //[50h][51h][52h][53h]
void Canvas_Window_Width            (unsigned short WX);                    //[54h][55h]
void Canvas_Window_Start_XY         (unsigned short WX, unsigned short HY); //[56h][57h][58h][59h]
void Canvas_Window_WH               (unsigned short WX, unsigned short HY); //[5Ah][5Bh][5Ch][5Dh]
void Canvas_Memory_XY_Mode          (void);                                 //[5Eh]
void Canvas_Memory_Linear_Mode      (void);                                 //[5Eh]
void Canvas_Window_Color_Mode_8bpp  (void);                                 //[5Eh]
void Canvas_Window_Color_Mode_16bpp (void);                                 //[5Eh]
void Canvas_Window_Color_Mode_24bpp (void);                                 //[5Eh]

void Canvas_Window_Switch           (unsigned long Addr);                   //[20h][21h][22h][23h]

// ===========================================
// PICTURE IN PICTURE CONFIG 
// ===========================================

//**[10h]**//
void Enable_PIP1(void);
void Disable_PIP1(void);
void Enable_PIP2(void);
void Disable_PIP2(void);
void Select_PIP1_Parameter(void);
void Select_PIP2_Parameter(void);

//**[11h]**//
void Select_PIP1_Window_8bpp(void);
void Select_PIP1_Window_16bpp(void);
void Select_PIP1_Window_24bpp(void);
void Select_PIP2_Window_8bpp(void);
void Select_PIP2_Window_16bpp(void);
void Select_PIP2_Window_24bpp(void);

void PIP_Display_Start_XY      (unsigned short WX,unsigned short HY); //**[2Ah][2Bh][2Ch][2Dh]**//
void PIP_Image_Start_Address   (unsigned long Addr);                  //**[2Eh][2Fh][30h][31h]**//
void PIP_Image_Width           (unsigned short WX);                   //**[32h][33h]**//
void PIP_Window_Image_Start_XY (unsigned short WX,unsigned short HY); //**[34h][35h][36h][37h]**//
void PIP_Window_Width_Height   (unsigned short WX,unsigned short HY); //**[38h][39h][3Ah][3Bh]**//

// ===========================================
// CURSOR CONFIG
// ===========================================
//**[3C]**//
void Enable_Graphic_Cursor        (void);
void Disable_Graphic_Cursor       (void);
void Select_Graphic_Cursor_1      (void);
void Select_Graphic_Cursor_2      (void);
void Select_Graphic_Cursor_3      (void);
void Select_Graphic_Cursor_4      (void);
void Enable_Text_Cursor           (void);
void Disable_Text_Cursor          (void);
void Enable_Text_Cursor_Blinking  (void);
void Disable_Text_Cursor_Blinking (void);


void Blinking_Time_Frames       (unsigned char temp);                   //**[3D]**//
void Text_Cursor_H_V            (unsigned short WX, unsigned short HY); //**[3E][3Fh]**//
void Graphic_Cursor_XY          (unsigned short WX, unsigned short HY); //**[40h][41h][42h][43h]**//
void Set_Graphic_Cursor_Color_1 (unsigned char temp);                   //**[44]**//
void Set_Graphic_Cursor_Color_2 (unsigned char temp);                   //**[45]**//







void Goto_Linear_Addr(unsigned long Addr);











// ===========================================
// GRAPHICS
// ===========================================
//**[67h]**//
void Start_Line          (void);
void Start_Triangle      (void);
void Start_Triangle_Fill (void);

//**[68h]~[73h]**//
void Line_Start_XY      (unsigned short WX, unsigned short HY);
void Line_End_XY        (unsigned short WX, unsigned short HY);
void Triangle_Point1_XY (unsigned short WX, unsigned short HY);
void Triangle_Point2_XY (unsigned short WX, unsigned short HY);
void Triangle_Point3_XY (unsigned short WX, unsigned short HY);
void Square_Start_XY    (unsigned short WX, unsigned short HY);
void Square_End_XY      (unsigned short WX, unsigned short HY);

//**[76h]**//
void Start_Circle_or_Ellipse      (void);
void Start_Circle_or_Ellipse_Fill (void);
void Start_Left_Down_Curve        (void);
void Start_Left_Up_Curve          (void);
void Start_Right_Up_Curve         (void);
void Start_Right_Down_Curve       (void);
void Start_Left_Down_Curve_Fill   (void);
void Start_Left_Up_Curve_Fill     (void);
void Start_Right_Up_Curve_Fill    (void);
void Start_Right_Down_Curve_Fill  (void);
void Start_Square                 (void);
void Start_Square_Fill            (void);
void Start_Circle_Square          (void);
void Start_Circle_Square_Fill     (void);

//**[77h]~[7Eh]**//
void Circle_Center_XY          (unsigned short WX,unsigned short HY);
void Ellipse_Center_XY         (unsigned short WX,unsigned short HY);
void Circle_Radius_R           (unsigned short WX);
void Ellipse_Radius_RxRy       (unsigned short WX,unsigned short HY);
void Circle_Square_Radius_RxRy (unsigned short WX,unsigned short HY);

//**[5Fh][60h][61h][62h]**//
void Goto_Pixel_XY(unsigned short WX,unsigned short HY);

void LCD_SetPoint           (unsigned short x,unsigned short y,unsigned short point);
void LCD_Clear              (unsigned short Color);
void LCD_SetCursor          (unsigned short Xpos, unsigned short Ypos);

// ===========================================
// BLOCK TRANSFER ENGINE
// ===========================================

//[90h]
void BTE_Enable(void);
void BTE_Disable(void);

void Check_BTE_Busy(void);

void Pattern_Format_8X8(void);
void Pattern_Format_16X16(void);


void BTE_ROP_Code(unsigned char setx); //[91h]
void BTE_Operation_Code(unsigned char setx); //[91h]
void BTE_Window_Size (unsigned short WX, unsigned short WY); //[B1h][B2h][B3h][B4h]
void BTE_Alpha_Blending_Effect(unsigned char temp); //[B5h]




void BTE_S0_Color_8bpp(void);
void BTE_S0_Color_16bpp(void);
void BTE_S0_Color_24bpp(void);
void BTE_S0_Memory_Start_Address(unsigned long Addr); //[93h][94h][95h][96h]
void BTE_S0_Image_Width(unsigned short WX); //[97h][98h]	
void BTE_S0_Window_Start_XY(unsigned short WX,unsigned short HY); //[99h][9Ah][9Bh][9Ch]

void S1_Constant_color_256(unsigned char temp);
void S1_Constant_color_65k(unsigned short temp);
void S1_Constant_color_16M(unsigned long temp);	

void BTE_S1_Color_8bpp(void);
void BTE_S1_Color_16bpp(void);
void BTE_S1_Color_24bpp(void);
void BTE_S1_Color_Constant(void);
void BTE_S1_Color_8bit_Alpha(void);
void BTE_S1_Color_16bit_Alpha(void);
void BTE_S1_Memory_Start_Address(unsigned long Addr); //[9Dh][9Eh][9Fh][A0h]
void BTE_S1_Image_Width(unsigned short WX); //[A1h][A2h]
void BTE_S1_Window_Start_XY(unsigned short WX,unsigned short HY); //[A3h][A4h][A5h][A6h]

void BTE_Destination_Color_8bpp(void);
void BTE_Destination_Color_16bpp(void);
void BTE_Destination_Color_24bpp(void);
void BTE_Destination_Memory_Start_Address(unsigned long Addr); //[A7h][A8h][A9h][AAh]
void BTE_Destination_Image_Width(unsigned short WX); //[ABh][ACh]
void BTE_Destination_Window_Start_XY(unsigned short WX,unsigned short HY); //[ADh][AEh][AFh][B0h]	








// ===========================================
// SERIAL FLASH
// ===========================================

//REG[B6h] Serial flash DMA Controller REG (DMA_CTRL) 
void Start_SFI_DMA(void);
void Check_Busy_SFI_DMA(void);

//REG[B7h] Serial Flash/ROM Controller Register (SFL_CTRL) 
void Select_SFI_0(void);
void Select_SFI_1(void);
void Select_SFI_Font_Mode(void);
void Select_SFI_DMA_Mode(void);
void Select_SFI_24bit_Address(void);
void Select_SFI_32bit_Address(void);
void Select_SFI_Waveform_Mode_0(void);
void Select_SFI_Waveform_Mode_3(void);
void Select_SFI_0_DummyRead(void);
void Select_SFI_8_DummyRead(void);
void Select_SFI_16_DummyRead(void);
void Select_SFI_24_DummyRead(void);
void Select_SFI_Single_Mode(void);
void Select_SFI_Dual_Mode0(void);
void Select_SFI_Dual_Mode1(void);

//REG[B8h] SPI master Tx /Rx FIFO Data Register (SPIDR) 
unsigned char SPI_Master_FIFO_Data_Put(unsigned char Data);
unsigned char SPI_Master_FIFO_Data_Get(void);

//REG[B9h] SPI master Control Register (SPIMCR2) 
void Mask_SPI_Master_Interrupt_Flag(void);
void Select_nSS_drive_on_xnsfcs0(void);
void Select_nSS_drive_on_xnsfcs1(void);
void nSS_Inactive(void);
void nSS_Active(void);
void OVFIRQEN_Enable(void);
void EMTIRQEN_Enable(void);
void Reset_CPOL(void);
void Set_CPOL(void);
void Reset_CPHA(void);
void Set_CPHA(void);

//REG[BAh] SPI master Status Register (SPIMSR)
unsigned char Tx_FIFO_Empty_Flag(void);
unsigned char Tx_FIFO_Full_Flag(void);
unsigned char Rx_FIFO_Empty_Flag(void);
unsigned char Rx_FIFO_full_flag(void);
unsigned char OVFI_Flag(void);
void Clear_OVFI_Flag(void);
unsigned char EMTI_Flag(void);
void Clear_EMTI_Flag(void);

//REG[BB] SPI Clock period (SPIDIV) 
void SPI_Clock_Period(unsigned char temp);

//**[BCh][BDh][BEh][BFh]**//
void SFI_DMA_Source_Start_Address(unsigned long Addr);

//**[C0h][C1h][C2h][C3h]**//
void SFI_DMA_Destination_Start_Address(unsigned long Addr);
void SFI_DMA_Destination_Upper_Left_Corner(unsigned short WX,unsigned short HY);

//**[C4h][C5h]**//
void SFI_DMA_Destination_Width(unsigned short WX);

//**[C6h][C7h][C8h][C9h]**//
void SFI_DMA_Transfer_Number(unsigned long Addr);
void SFI_DMA_Transfer_Width_Height(unsigned short WX,unsigned short HY);

//**[CAh][CBh]**//
void SFI_DMA_Source_Width(unsigned short WX);






// ===========================================
// FONT
// ===========================================

//**[63h][64h][65h][66h]**//
void Goto_Text_XY(unsigned short WX,unsigned short HY);

//**[CCh]**//
void Font_Select_UserDefine_Mode(void);
void CGROM_Select_Internal_CGROM(void);
void CGROM_Select_Genitop_FontROM(void);
void Font_Select_8x16_16x16(void);
void Font_Select_12x24_24x24(void);
void Font_Select_16x32_32x32(void);
void Internal_CGROM_Select_ISOIEC8859_1(void);
void Internal_CGROM_Select_ISOIEC8859_2(void);
void Internal_CGROM_Select_ISOIEC8859_3(void);
void Internal_CGROM_Select_ISOIEC8859_4(void);

//**[CDh]**//
void Enable_Font_Alignment(void);
void Disable_Font_Alignment(void);
void Font_Background_select_Transparency(void);
void Font_Background_select_Color(void);
void Font_0_degree(void);
void Font_90_degree(void);
void Font_Width_X1(void);
void Font_Width_X2(void);
void Font_Width_X3(void);
void Font_Width_X4(void);
void Font_Height_X1(void);
void Font_Height_X2(void);
void Font_Height_X3(void);
void Font_Height_X4(void);

//**[CEh]**//
void GTFont_Select_GT21L16TW_GT21H16T1W(void);
void GTFont_Select_GT23L16U2W(void);
void GTFont_Select_GT23L24T3Y_GT23H24T3Y(void);
void GTFont_Select_GT23L24M1Z(void);
void GTFont_Select_GT23L32S4W_GT23H32S4W(void);
void GTFont_Select_GT20L24F6Y(void);
void GTFont_Select_GT21L24S1W(void);
void GTFont_Select_GT22L16A1Y(void);

//**[CFh]**//
void Set_GTFont_Decoder(unsigned char temp);

//**[D0h]**//
void Font_Line_Distance(unsigned char temp);

//**[D1h]**//
void Set_Font_to_Font_Width(unsigned char temp);

//**[D2h]~[D4h]**//
void Foreground_RGB      (unsigned char  RED,unsigned char GREEN,unsigned char BLUE);
void Foreground_color_256(unsigned char  temp);
void Foreground_color_65k(unsigned short temp);
void Foreground_color_16M(unsigned long  temp);

//**[D5h]~[D7h]**//
void Background_RGB      (unsigned char  RED, unsigned char GREEN, unsigned char BLUE);
void Background_color_256(unsigned char  temp);
void Background_color_65k(unsigned short temp);
void Background_color_16M(unsigned long  temp);

//**[DBh]~[DEh]**//
void CGRAM_Start_address(unsigned long Addr);



// ===========================================
// POWER MODE
// ===========================================
//**[DFh]**//
void Power_Normal_Mode(void);
void Power_Saving_Standby_Mode(void);
void Power_Saving_Suspend_Mode(void);
void Power_Saving_Sleep_Mode(void);




void delay_us   (unsigned long i);
void delay_ms   (unsigned long i);
void Delay10ms  (unsigned long i);
void Delay100ms (unsigned long i);


void LCD_WriteRAM_Prepare  (void);


#endif

