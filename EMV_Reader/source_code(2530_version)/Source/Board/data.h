#ifndef DATA_H
#define DATA_H
uint8 const data1[]={0xB5,0x62,0x06,0x00,0x14,0x00,0x01,0x00,0x00,0x00,\
          0xD0,0x08,0x00,0x00,0x00,0xC2,0x01,0x00,0x01,0x00,\
          0x01,0x00,0x00,0x00,0x00,0x00,0xB8,0x42,0xB5,0x62,\
            0x06,0x00,0x01,0x00,0x01,0x08,0x22};
uint8 const data2[36]={0xb5,0x62,0x01,0x02,0x1c,0x00,0x40,0xcb,0xe9,\
					0x1e,0x5a,0xb4,0x56,0xbb,0x83,0xbc,0x94,0x15,\
					0xe2,0x2b,0x01,0x00,0x82,0x93,0x01,0x00,0xc1,\
					0x0f,0x00,0x00,0x8c,0x19,0x00,0x00,0xd1,0x0d};

uint8 const data3[60]={0xb5,0x62,0x01,0x06,0x34,0x00,0x08,0xcc,0xe9,\
					0x1e,0xc4,0xd5,0x06,0x00,0x1f,0x07,0x03,0xdd,\
					0x7b,0x23,0xed,0xf2,0x2a,0xce,0x35,0xe4,0x9f,\
					0x24,0x55,0x16,0xf8,0x02,0x00,0x00,0xf3,0xff,\
					0xff,0xff,0xea,0xff,0xff,0xff,0x0f,0x00,0x00,\
					
					0x00,0x08,0x00,0x00,0x00,0xb3,0x00,0x03,0x20,\
					0xac,0x4c,0x02,0x00,0x18,0xe3};
//0x00,0x08,0x00,0x00,0x00,0xb3,0x00,0x03,0x09,\

uint8 const dop[] = {0xB5,0x62,0x01,0x04,0x12,0x00,0x30,0x3F,0x18,0x23,0xB8,0x00,\
			0xA4,0x00,0x54,0x00,0x89,0x00,0x5A,0x00,0x48,0x00,0x36,0x00,0xD2,0xE6};

#if 0
uint8 const data3[60]={0xb5,0x62,0x01,0x06,0x34,0x00,0x08,0xcc,0xe9,\
					0x1e,0xc4,0xd5,0x06,0x00,0x1f,0x07,0x03,0xdd,\
					0x7b,0x23,0xed,0xf2,0x2a,0xce,0x35,0xe4,0x9f,\
					0x24,0x55,0x16,0xf8,0x02,0x00,0x00,0xf3,0xff,\
					0xff,0xff,0xea,0xff,0xff,0xff,0x0f,0x00,0x00,\
					0x00,0x08,0x00,0x00,0x00,0xb3,0x00,0x03,0x09,\
					0xac,0x4c,0x02,0x00,0x18,0xe3};
#endif
uint8   dataAll[] = {
						0xb5,0x62,0x01,0x06,0x34,0x00,0x08,0xcc,0xe9,0x1e,\
						0xc4,0xd5,0x06,0x00,0x1f,0x07,0x03,0xdd,0x7b,0x23,\
						0xed,0xf2,0x2a,0xce,0x35,0xe4,0x9f,0x24,0x55,0x16,\
						0xf8,0x02,0x00,0x00,0xf3,0xff,0xff,0xff,0xea,0xff,\
						0xff,0xff,0x0f,0x00,0x00,0x00,0x08,0x00,0x00,0x00,\
						0xb3,0x00,0x03,0x09,0xac,0x4c,0x02,0x00,0x18,0xe3,\

						
						0xb5,0x62,0x01,0x35,0xa4,0x00,0x40,0xcb,0xe9,0x1e,\
						0x01,0x0d,0x00,0x00,0x00,0x01,0x21,0x2f,0x09,0x01,\
						0x76,0x03,0x1f,0x09,0x00,0x00,0x00,0x03,0x21,0x27,\
						0x3b,0x01,0xe8,0x01,0x1f,0x09,0x00,0x00,0x00,0x04,\
						0x21,0x2b,0xd9,0x00,0xd4,0x02,0x1f,0x09,0x00,0x00,\
						0x00,0x08,0x22,0x29,0xc6,0x00,0x59,0x03,0x1f,0x09,\
						0x00,0x00,0x00,0x0b,0x1f,0x1d,0xed,0x00,0x6c,0x00,\
						0x1f,0x09,0x00,0x00,0x00,0x0e,0x22,0x19,0x3e,0x00,\
						0xca,0x03,0x1f,0x09,0x00,0x00,0x00,0x10,0x20,0x02,\
						0xa5,0x00,0xbd,0x01,0x17,0x09,0x00,0x00,0x00,0x14,\
						0x21,0x1d,0x37,0x01,0x69,0x02,0x1f,0x09,0x00,0x00,\
						0x00,0x16,0x22,0x10,0x7c,0x00,0xf5,0x02,0x1f,0x09,\
						0x00,0x00,0x00,0x17,0x21,0x11,0x0e,0x01,0x6b,0x01,\
						0x1f,0x09,0x00,0x00,0x00,0x19,0x21,0x0c,0x31,0x00,\
						0x67,0x03,0x1f,0x09,0x00,0x00,0x00,0x1f,0x21,0x43,\
						0x40,0x00,0x26,0x02,0x1f,0x09,0x00,0x00,0x00,0x20,\
						0x21,0x4d,0x64,0x01,0xf7,0x02,0x1f,0x09,0x00,0x00,\
						0x67,0xf4,\
						0xb5,0x62,0x01,0x03,0x10,0x00,0x40,0xcb,0xe9,0x1e,\
						0x03,0xdd,0x00,0x00,0x9b,0x76,0x00,0x00,0x45,0x98,\
						0x16,0x00,0x0a,0x53,\
						0xb5,0x62,0x01,0x02,0x1c,0x00,0x40,0xcb,0xe9,0x1e,\
						0x5a,0xb4,0x56,0xbb,0x83,0xbc,0x94,0x15,0xe2,0x2b,\
						0x01,0x00,0x82,0x93,0x01,0x00,0xc1,0x0f,0x00,0x00,\
						0x8c,0x19,0x00,0x00,0xd1,0x0d,\
						0xb5,0x62,0x01,0x04,0x12,0x00,0x40,0xcb,0xe9,0x1e,\
						0xa6,0x00,0x94,0x00,0x4c,0x00,0x7e,0x00,0x4e,0x00,\
						0x3e,0x00,0x30,0x00,0xe9,0x37,\
						0xb5,0x62,0x01,0x12,0x24,0x00,0x40,0xcb,0xe9,0x1e,\
						0xfb,0xff,0xff,0xff,0xfd,0xff,0xff,0xff,0xe2,0xff,\
						0xff,0xff,0x1e,0x00,0x00,0x00,0x06,0x00,0x00,0x00,\
						0xfa,0x7b,0x49,0x01,0x08,0x00,0x00,0x00,0xfa,0x42,\
						0x24,0x00,0x65,0xf3,\
						0xb5,0x62,0x01,0x21,0x14,0x00,0x40,0xcb,0xe9,0x1e,\
						0xff,0xff,0xff,0xff,0x69,0x5a,0xde,0x17,0xde,0x07,\
						0x0c,0x14,0x00,0x03,0x2a,0xf3,0x21,0x60
					
						
						
						

};
#if 0
uint8 const data2[]={0xB5,0x62,0x06,0x01,0x08,0x00,0x01,0x01,\
                      0x00,0x00,0x00,0x00,0x00,0x00,0x11,0xB2,\
                    0xB5,0x62,0x06,0x01,0x08,0x00,0x01,0x01,\
                    0x00,0x00,0x00,0x00,0x00,0x00,0x11,0xB2,\
                    0xB5,0x62,0x06,0x01,0x08,0x00,0x01,0x02,\
                    0x00,0x01,0x00,0x00,0x00,0x00,0x13,0xBE,\
                    0xB5,0x62,0x06,0x01,0x08,0x00,0x01,0x03,\
                    0x00,0x01,0x00,0x00,0x00,0x00,0x14,0xC5,\
                    0xB5,0x62,0x06,0x01,0x08,0x00,0x01,0x04,\
                    0x00,0x01,0x00,0x00,0x00,0x00,0x15,0xCC,\
                    0xB5,0x62,0x06,0x01,0x08,0x00,0x01,0x06,\
                    0x00,0x01,0x00,0x00,0x00,0x00,0x17,0xDA,\
                    0xB5,0x62,0x06,0x01,0x08,0x00,0x01,0x11,\
                    0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x22,\
                    0xB5,0x62,0x06,0x01,0x08,0x00,0x01,0x12,\
                    0x00,0x01,0x00,0x00,0x00,0x00,0x23,0x2E,\
                    0xB5,0x62,0x06,0x01,0x08,0x00,0x01,0x20,\
                    0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x8B,\
                    0xB5,0x62,0x06,0x01,0x08,0x00,0x01,0x21,\
                    0x00,0x01,0x00,0x00,0x00,0x00,0x32,0x97,\
                    0xB5,0x62,0x06,0x01,0x08,0x00,0x01,0x22,\
                    0x00,0x00,0x00,0x00,0x00,0x00,0x32,0x99,\
                    0xB5,0x62,0x06,0x01,0x08,0x00,0x01,0x35,\
                    0x00,0x01,0x00,0x00,0x00,0x00,0x46,0x23,\
                    0xB5,0x62,0x06,0x3E,0x2C,0x00,0x00,0x00,\
                    0x20,0x05,0x00,0x03,0x10,0x00,0x01,0x00,\
                    0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,\
                    0x01,0x01,0x03,0x00,0x00,0x00,0x00,0x00,\
                    0x01,0x01,0x05,0x00,0x00,0x00,0x00,0x00,\
                    0x01,0x01,0x06,0x01,0x10,0x00,0x01,0x00,\
                    0x01,0x01,0xD4,0x72,0xB5,0x62,0x06,0x16,\
                    0x08,0x00,0x00,0x01,0x01,0x00,0x00,0x00,\
                    0x00,0x00,0x26,0x97,0xB5,0x62,0x06,0x08,\
                    0x06,0x00,0xC8,0x00,0x01,0x00,0x00,0x00,\
                    0xDD,0x68,0xB5,0x62,0x06,0x23,0x28,0x00,\
                    0x00,0x00,0x4C,0x66,0x00,0x00,0x00,0x00,\
                    0x00,0x00,0x03,0x20,0x1E,0x00,0x01,0x00,\
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
                    0x45,0xDB,0xB5,0x62,0x06,0x23,0x00,0x00,\
                    0x29,0x81,0xB5,0x62,0x06,0x31,0x20,0x00,\
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
                    0x05,0x00,0x00,0x00,0x05,0x00,0x00,0x00,\
                    0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,\
                    0x00,0x00,0x00,0x00,0x6F,0x00,0x00,0x00,0xD0,0x63 
}
#endif
#endif
