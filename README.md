# 🚀 Embedded C Bootcamp: From Basics to Bare-Metal STM32

A repository tracking my progression from foundational C programming to rigorous, bare-metal embedded software development for ARM Cortex-M4 microcontrollers. 

This repository serves as a technical log of my learning curve. It starts with standard C programming exercises and gradually evolves into a hardcore, zero-overhead hardware programming environment.

## 📈 The Evolution & "Embedded MMA" Constraints

As the directories progress from basic concepts to advanced hardware manipulation (MCU1), the code strictly adapts to resource-constrained microcontroller environments under these core rules:

1. **No `<string.h>` Allowed:** In advanced modules, all string manipulations, parsing, and comparisons are done manually via raw memory pointers.
2. **Standard Types Only:** Usage of standard `int` is dropped in later stages. The `stdint.h` library (`uint8_t`, `uint16_t`, `uint32_t`) is utilized to guarantee precise memory footprint across different architectures.
3. **Array Indexing Restriction:** Array subscript operators (`[]`) are prohibited during advanced traversal. Memory blocks are navigated purely through pointer arithmetic (e.g., `*ptr`, `*(ptr + i)`).
4. **Zero-Overhead Debugging:** Moving away from blocking UART `printf` calls, hardware debugging is handled via **SWV (Serial Wire Viewer) ITM** data console for zero-cycle-overhead logging.

## 🛠️ Hardware & Tools

* **Microcontroller:** STM32F407VG (ARM Cortex-M4) - *STM32F407G-DISC1 Development Board*
* **Debugger:** ST-LINK/V2 (with SWO pin active for SWV ITM Data Console)
* **IDE & Toolchain:** STM32CubeIDE, VS Code, GCC for ARM
* **Reference:** RM0090 Reference Manual

## 📂 Repository Structure

The repository is structured sequentially to reflect the learning path from high-level C to bare-metal hardware control:

* **`01_Variables/`**: Foundational concepts, data types, memory footprint understanding, and variable scopes.
* **`02_Functions/`**: Modular programming exercises, including custom implementations of standard library logic.
* **`03_Pointers/`**: Advanced pointer and memory gymnastics. Direct interaction with SRAM, raw pointer arithmetic, address collisions, and memory casting (e.g., extracting 32-bit payloads from 8-bit buffers).
* **`04_Bitwise_Operations/`**: Bit-level hardware manipulation logic. Includes W1C (Write 1 to Clear) rules, bit masking (`|`, `& ~`), and macro-based conditional compilation for hardware revisions.
* **`MCU1/`**: The "Bare-Metal" stage. Direct register manipulation based on the RM0090 datasheet, SWV ITM hardware debugging, and real-time microcontroller simulations.
* **`Mini_Projects/`**: Complex data structure integrations such as pointer-based circular ring buffers, advanced `scanf` scansets for UART parsing, and array of structs traversal for autonomous sensor error detection.
