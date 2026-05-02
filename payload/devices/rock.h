// ============================================================
// Xiaomi MT6789 Little Kernel — Symbol Addresses
// File: lk.img (2789616 bytes)
// LK binary: file offset 0x200, size 730552 bytes
// Load base:  0xFFFF000050F00000
//
// Verified via opcode fingerprint matching against:
//   LG8n (Tecno Pova 4 Pro, MT6789) — lg8n.bin
//   Analysis date: 2026-03-24
//
// ============================================================
#pragma once

#define DEVICE_NAME "rock"

#define STAGE1_BASE                  0xFFFF000050F25658  
#define STAGE2_BASE                  0xFFFF000050F08030  // TENTATIVE (frame size differs)
#define STAGE3_BASE                  0xFFFF000050F229C8  

#define PLATFORM_INIT_ADDR           0xFFFF000050F024D0  
#define NOTIFY_ENTER_FASTBOOT_ADDR   0xFFFF000050F05874  // TENTATIVE (could be off)
#define NOTIFY_BOOT_LINUX_ADDR       0xFFFF000050F0D914  // TENTATIVE (could be off)

#define PRINTF_ADDR                  0xFFFF000050F5C6F8  
#define VIDEO_PRINTF_ADDR            0xFFFF000050F368A8  

#define FASTBOOT_OKAY_ADDR           0xFFFF000050F05030  
#define FASTBOOT_FAIL_ADDR           0xFFFF000050F04FF8  
#define FASTBOOT_INFO_ADDR           0xFFFF000050F04F58  
#define FASTBOOT_REGISTER_ADDR       0xFFFF000050F04C84  
#define FASTBOOT_PUBLISH_ADDR        0xFFFF000050F04D48  

#define PADDR_TO_KVADDR_ADDR         0xFFFF000050F5954C
#define KERNEL_ASPACE_ADDR           0xFFFF000050FFA838  // PLACEHOLDER FROM LG8N

