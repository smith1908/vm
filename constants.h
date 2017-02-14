#ifndef CONSTANTS_H_
#define CONSTANTS_H_

// Number of cells in a Segment
#define MEMORY_SEGMENT_SIZE 256
// Number of segments
#define MEMORY_SEGMENT_COUNT 256
// 256*256 = 357604 Total memory cells

#define REGISTER_COUNT 16


// Number of sprites able to be rendered at once
#define NUM_SPRITES 32

// Number of bytes per sprite attribute
#define SPRITE_ATTR_LENGTH 16

// Segment of memory where sprites attributes are found
#define ADDR_SPRITE_ATTR 64

// Color depth aka bits per pixel
#define COLOR_DEPTH 8
// Number of colors in the color palette, directly related to the above number
#define NUM_COLORS 256
#endif
