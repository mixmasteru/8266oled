#define banana_width 42
#define banana_height 45

char banana_bits[8][12*22+6] =
{
  {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x10, 0x03, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06, 0x00, 0x00,
  0x00, 0x00, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x0C, 0x00, 0x00,
  0x00, 0x00, 0x8A, 0x08, 0x00, 0x00, 0x00, 0x00, 0x9E, 0x08, 0x00, 0x00,
  0x00, 0x00, 0x8A, 0x08, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x0A, 0x00, 0x00,
  0x00, 0x00, 0x88, 0x0B, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x0B, 0x00, 0x00,
  0x00, 0x00, 0xF0, 0x09, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x08, 0x00, 0x00,
  0x00, 0x00, 0x38, 0x08, 0x00, 0x00, 0x00, 0xE0, 0x08, 0xEC, 0x00, 0x00,
  0x00, 0x90, 0x0D, 0x34, 0x01, 0x00, 0x00, 0x10, 0x05, 0x16, 0x01, 0x00,
  0x00, 0x90, 0x05, 0x32, 0x01, 0x00, 0x00, 0xE0, 0x06, 0xF3, 0x00, 0x00,
  0x00, 0x80, 0x82, 0x1B, 0x00, 0x00, 0x00, 0x80, 0xE7, 0x0E, 0x00, 0x00,
  0x00, 0xC0, 0xFF, 0x07, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x0F, 0x00, 0x00,
  0x00, 0x10, 0xC7, 0x11, 0x00, 0x00, 0x00, 0x10, 0x44, 0x10, 0x00, 0x00,
  0x00, 0xE0, 0xC7, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, },
  {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x10, 0x03, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06, 0x00, 0x00,
  0x00, 0x00, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x0C, 0x00, 0x00,
  0x00, 0x00, 0x8A, 0x08, 0x00, 0x00, 0x00, 0x00, 0x9E, 0x08, 0x00, 0x00,
  0x00, 0x00, 0x8A, 0x08, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x0A, 0x00, 0x00,
  0x00, 0x00, 0x88, 0x0B, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x0B, 0x00, 0x00,
  0x00, 0x00, 0xF0, 0x09, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x08, 0x00, 0x00,
  0x00, 0x00, 0x38, 0x08, 0x00, 0x00, 0x00, 0x38, 0x08, 0x88, 0x03, 0x00,
  0x00, 0x64, 0x08, 0xCC, 0x04, 0x00, 0x00, 0x44, 0x0C, 0x44, 0x04, 0x00,
  0x00, 0x64, 0x04, 0xC6, 0x04, 0x00, 0x00, 0xF8, 0x06, 0xEE, 0x03, 0x00,
  0x00, 0x80, 0x07, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x82, 0x01, 0x00, 0x00,
  0x00, 0x00, 0xE7, 0x00, 0x00, 0x00, 0x00, 0x80, 0xBF, 0x01, 0x00, 0x00,
  0x00, 0x80, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE0, 0x01, 0x0F, 0x00, 0x00,
  0x00, 0x10, 0xC6, 0x10, 0x00, 0x00, 0x00, 0x10, 0x44, 0x10, 0x00, 0x00,
  0x00, 0xE0, 0x83, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, },
  {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x8C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0xC0, 0x01, 0xEE, 0x01, 0x0E, 0x00,
  0x20, 0x03, 0x11, 0x03, 0x13, 0x00, 0x20, 0x02, 0x55, 0x03, 0x11, 0x00,
  0x20, 0x03, 0x11, 0x03, 0x13, 0x00, 0xC0, 0x03, 0xEE, 0x02, 0x0F, 0x00,
  0x00, 0x0E, 0x02, 0xC3, 0x01, 0x00, 0x00, 0x38, 0xFE, 0x73, 0x00, 0x00,
  0x00, 0xE0, 0xFE, 0x1A, 0x00, 0x00, 0x00, 0x80, 0x7F, 0x0E, 0x00, 0x00,
  0x00, 0x00, 0x3A, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x82, 0x01, 0x00, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xC2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6E, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xC6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC7, 0x07, 0x00, 0x00,
  0x00, 0x30, 0x44, 0x18, 0x00, 0x00, 0x00, 0x10, 0xC6, 0x10, 0x00, 0x00,
  0x00, 0xF0, 0x01, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, },
  {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x00, 0x80, 0x21, 0x00, 0x00, 0x00,
  0x00, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x80, 0x77, 0x00, 0x00, 0x00,
  0x00, 0xC0, 0x88, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xAA, 0x00, 0x00, 0x00,
  0xC0, 0xC0, 0x88, 0x70, 0x00, 0x00, 0x20, 0x43, 0x77, 0x98, 0x00, 0x00,
  0x20, 0xC2, 0x40, 0x88, 0x00, 0x00, 0x20, 0xC3, 0x7F, 0x98, 0x00, 0x00,
  0xC0, 0x43, 0x7F, 0x78, 0x00, 0x00, 0x00, 0x46, 0x7E, 0x0C, 0x00, 0x00,
  0x00, 0x4C, 0x5C, 0x06, 0x00, 0x00, 0x00, 0x78, 0xC0, 0x03, 0x00, 0x00,
  0x00, 0xC0, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x80, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x41, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x81, 0x07, 0x00, 0x00,
  0x00, 0x30, 0xC6, 0x18, 0x00, 0x00, 0x00, 0x10, 0x44, 0x10, 0x00, 0x00,
  0x00, 0xF0, 0x83, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, },
  {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
  0x00, 0x80, 0x11, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x40, 0x10, 0x00, 0x00, 0x00, 0x00, 0x60, 0x7C, 0x00, 0x00, 0x00,
  0x00, 0x20, 0xA2, 0x00, 0x00, 0x00, 0x00, 0x20, 0xF2, 0x00, 0x00, 0x00,
  0x00, 0x20, 0xA2, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x7C, 0x00, 0x00, 0x00,
  0x00, 0xA0, 0x23, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x3F, 0x00, 0x00, 0x00,
  0x00, 0x20, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x20, 0x1E, 0x00, 0x00, 0x00,
  0x00, 0x20, 0x38, 0x00, 0x00, 0x00, 0x00, 0x6E, 0x20, 0x0E, 0x00, 0x00,
  0x00, 0x59, 0x60, 0x13, 0x00, 0x00, 0x00, 0xD1, 0x40, 0x11, 0x00, 0x00,
  0x00, 0x99, 0x40, 0x13, 0x00, 0x00, 0x00, 0x9E, 0xC1, 0x0E, 0x00, 0x00,
  0x00, 0xB0, 0x83, 0x02, 0x00, 0x00, 0x00, 0xE0, 0xCE, 0x03, 0x00, 0x00,
  0x00, 0xC0, 0xFF, 0x07, 0x00, 0x00, 0x00, 0xE0, 0x01, 0x0E, 0x00, 0x00,
  0x00, 0x10, 0xC7, 0x11, 0x00, 0x00, 0x00, 0x10, 0x44, 0x10, 0x00, 0x00,
  0x00, 0xE0, 0xC7, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, },
  {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
  0x00, 0x80, 0x11, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x40, 0x10, 0x00, 0x00, 0x00, 0x00, 0x60, 0x7C, 0x00, 0x00, 0x00,
  0x00, 0x20, 0xA2, 0x00, 0x00, 0x00, 0x00, 0x20, 0xF2, 0x00, 0x00, 0x00,
  0x00, 0x20, 0xA2, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x7C, 0x00, 0x00, 0x00,
  0x00, 0xA0, 0x23, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x3F, 0x00, 0x00, 0x00,
  0x00, 0x20, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x20, 0x1E, 0x00, 0x00, 0x00,
  0x00, 0x20, 0x38, 0x00, 0x00, 0x00, 0x80, 0x23, 0x20, 0x38, 0x00, 0x00,
  0x40, 0x66, 0x20, 0x4C, 0x00, 0x00, 0x40, 0x44, 0x60, 0x44, 0x00, 0x00,
  0x40, 0xC6, 0x40, 0x4C, 0x00, 0x00, 0x80, 0xEF, 0xC0, 0x3E, 0x00, 0x00,
  0x00, 0xB8, 0xC1, 0x03, 0x00, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xCE, 0x01, 0x00, 0x00, 0x00, 0x00, 0xFB, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x02, 0x00, 0x00, 0x00, 0xE0, 0x01, 0x0F, 0x00, 0x00,
  0x00, 0x10, 0xC6, 0x10, 0x00, 0x00, 0x00, 0x10, 0x44, 0x10, 0x00, 0x00,
  0x00, 0xE0, 0x83, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, },
  {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0xE0, 0x00, 0xEF, 0x00, 0x07, 0x00,
  0x90, 0x81, 0x11, 0x81, 0x09, 0x00, 0x10, 0x81, 0x55, 0x81, 0x08, 0x00,
  0x90, 0x81, 0x11, 0x81, 0x09, 0x00, 0xE0, 0x81, 0xEE, 0x80, 0x07, 0x00,
  0x00, 0x87, 0x81, 0xE0, 0x00, 0x00, 0x00, 0x9C, 0xFF, 0x38, 0x00, 0x00,
  0x00, 0xB0, 0xFE, 0x0E, 0x00, 0x00, 0x00, 0xE0, 0xFC, 0x03, 0x00, 0x00,
  0x00, 0x80, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00,
  0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x81, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0xEC, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xC6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC7, 0x07, 0x00, 0x00,
  0x00, 0x30, 0x44, 0x18, 0x00, 0x00, 0x00, 0x10, 0xC6, 0x10, 0x00, 0x00,
  0x00, 0xF0, 0x01, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, },
  {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x18, 0x01, 0x00, 0x00, 0x00, 0x00, 0x08, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0xDC, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x22, 0x06, 0x00, 0x00, 0x00, 0x00, 0xAA, 0x06, 0x00, 0x00,
  0x00, 0x1C, 0x22, 0x06, 0x07, 0x00, 0x00, 0x32, 0xDC, 0x85, 0x09, 0x00,
  0x00, 0x22, 0x04, 0x86, 0x08, 0x00, 0x00, 0x32, 0xFC, 0x87, 0x09, 0x00,
  0x00, 0x3C, 0xFC, 0x85, 0x07, 0x00, 0x00, 0x60, 0xFC, 0xC4, 0x00, 0x00,
  0x00, 0xC0, 0x74, 0x64, 0x00, 0x00, 0x00, 0x80, 0x07, 0x3C, 0x00, 0x00,
  0x00, 0x00, 0x04, 0x06, 0x00, 0x00, 0x00, 0x00, 0x04, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x04, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x84, 0x01, 0x00, 0x00,
  0x00, 0x00, 0xDC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0xC0, 0x03, 0x07, 0x00, 0x00,
  0x00, 0x30, 0xC6, 0x18, 0x00, 0x00, 0x00, 0x10, 0x44, 0x10, 0x00, 0x00,
  0x00, 0xF0, 0x83, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,}
};