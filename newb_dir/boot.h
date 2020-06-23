/**
 ****************************************************************************************
 *
 * @file boot.h
 *
 * @brief This file contains the declarations of the boot related variables.
 *
 * Copyright (C) RivieraWaves 2009-2013
 *
 *
 ****************************************************************************************
 */

#ifndef _BOOT_H_
#define _BOOT_H_



/// Length of the code
//extern const uint32_t Image$$EXEC_RAM_TEXT$$Length[];
//#define CODE_LENGTH        ((uint32_t)Image$$EXEC_RAM_TEXT$$Length)


/// Length of the RW data

//BT RAM
extern const uint32_t Image$$RAM_BT_DATA$$Length[];
#define RAM_BT_DATA_LENGTH        	   ((uint32_t)Image$$RAM_BT_DATA$$Length)
extern const uint32_t Image$$RAM_BT_DATA$$Base[];
#define RAM_BT_IMAGE_DATA_BASE     ((uint32_t)Image$$RAM_BT_DATA$$Base)
extern const uint32_t Load$$RAM_BT_DATA$$Base[];
#define RAM_BT_LOAD_DATA_BASE     ((uint32_t)Load$$RAM_BT_DATA$$Base)

extern const uint32_t Image$$RAM_BT_BSS$$ZI$$Length[];
#define RAM_BT_BSS_LENGTH        ((uint32_t)Image$$RAM_BT_BSS$$ZI$$Length)
extern const uint32_t Image$$RAM_BT_BSS$$Base[];
#define RAM_BT_BSS_BASE     ((uint32_t)Image$$RAM_BT_BSS$$Base)
extern const uint32_t Image$$RAM_BT_STACK$$Base[];
#define RAM_BT_STACK_BASE     ((uint32_t)Image$$RAM_BT_STACK$$Base)

//MP3 RAM
extern const uint32_t Image$$RAM_AUDIO_SUBSYS_DATA$$Length[];
#define RAM_AUDIO_SUBSYS_DATA_LENGTH        	   ((uint32_t)Image$$RAM_AUDIO_SUBSYS_DATA$$Length)
extern const uint32_t Image$$RAM_AUDIO_SUBSYS_DATA$$Base[];
#define RAM_AUDIO_SUBSYS_IMAGE_DATA_BASE     ((uint32_t)Image$$RAM_AUDIO_SUBSYS_DATA$$Base)
extern const uint32_t Load$$RAM_AUDIO_SUBSYS_DATA$$Base[];
#define RAM_AUDIO_SUBSYS_LOAD_DATA_BASE     ((uint32_t)Load$$RAM_AUDIO_SUBSYS_DATA$$Base)

extern const uint32_t Image$$RAM_AUDIO_SUBSYS_BSS$$ZI$$Length[];
#define RAM_AUDIO_SUBSYS_BSS_LENGTH        ((uint32_t)Image$$RAM_AUDIO_SUBSYS_BSS$$ZI$$Length)
extern const uint32_t Image$$RAM_AUDIO_SUBSYS_BSS$$Base[];
#define RAM_AUDIO_SUBSYS_BSS_BASE     ((uint32_t)Image$$RAM_AUDIO_SUBSYS_BSS$$Base)
extern const uint32_t Image$$RAM_AUDIO_SUBSYS_STACK$$Base[];
#define RAM_AUDIO_SUBSYS_STACK_BASE     ((uint32_t)Image$$RAM_AUDIO_SUBSYS_STACK$$Base)

//BOOT RAM
extern const uint32_t Image$$RAM_BOOT_DATA$$Length[];
#define RAM_BOOT_DATA_LENGTH        	   ((uint32_t)Image$$RAM_BOOT_DATA$$Length)
extern const uint32_t Image$$RAM_BOOT_DATA$$Base[];
#define RAM_BOOT_IMAGE_DATA_BASE     ((uint32_t)Image$$RAM_BOOT_DATA$$Base)
extern const uint32_t Load$$RAM_BOOT_DATA$$Base[];
#define RAM_BOOT_LOAD_DATA_BASE     ((uint32_t)Load$$RAM_BOOT_DATA$$Base)

extern const uint32_t Image$$RAM_BOOT_BSS$$ZI$$Length[];
#define RAM_BOOT_BSS_LENGTH        ((uint32_t)Image$$RAM_BOOT_BSS$$ZI$$Length)
extern const uint32_t Image$$RAM_BOOT_BSS$$Base[];
#define RAM_BOOT_BSS_BASE     ((uint32_t)Image$$RAM_BOOT_BSS$$Base)

/// Unloaded RAM area base address
//extern const uint32_t Image$$RAM_UNLOADED$$Base[];
//#define RAM_UNLOADED_BASE   ((uint32_t)Image$$RAM_UNLOADED$$Base)

/// Stack base address
//extern const uint32_t Image$$RAM_STACK_UNUSED$$Base[];
//#define STACK_BASE_UNUSED   ((uint32_t)Image$$RAM_STACK_UNUSED$$Base)
//extern const uint32_t Image$$RAM_STACK_UNUSED$$ZI$$Length[];
//#define STACK_LEN_UNUSED   ((uint32_t)Image$$RAM_STACK_UNUSED$$ZI$$Length)

//extern const uint32_t Image$$RAM_STACK_SVC$$Base[] ;
//#define STACK_BASE_SVC   ((uint32_t)Image$$RAM_STACK_SVC$$Base)
//extern const uint32_t Image$$RAM_STACK_SVC$$ZI$$Length[];
//#define STACK_LEN_SVC  ((uint32_t)Image$$RAM_STACK_SVC$$ZI$$Length)

//extern const uint32_t Image$$RAM_STACK_IRQ$$Base[];
//#define STACK_BASE_IRQ  ((uint32_t)Image$$RAM_STACK_IRQ$$Base)
//extern const uint32_t Image$$RAM_STACK_IRQ$$ZI$$Length[];
//#define STACK_LEN_IRQ   ((uint32_t)Image$$RAM_STACK_IRQ$$ZI$$Length)

//extern const uint32_t Image$$RAM_STACK_FIQ$$Base[];
//#define STACK_BASE_FIQ   ((uint32_t)Image$$RAM_STACK_FIQ$$Base)
//extern const uint32_t Image$$RAM_STACK_FIQ$$ZI$$Length[];
//#define STACK_LEN_FIQ   ((uint32_t)Image$$RAM_STACK_FIQ$$ZI$$Length)

#define BOOT_PATTERN_UNUSED   0xAA      // Pattern to fill UNUSED stack
#define BOOT_PATTERN_SVC      0xBB      // Pattern to fill SVC stack
#define BOOT_PATTERN_IRQ      0xCC      // Pattern to fill IRQ stack
#define BOOT_PATTERN_FIQ      0xDD      // Pattern to fill FIQ stack

#endif // _BOOT_H_
