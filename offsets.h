/*
 * ╔═══════════════════════════════════════════════════════════════════════════╗
 * ║                       GetBetter.lol - Sober Dumper                        ║
 * ╠═══════════════════════════════════════════════════════════════════════════╣
 * ║  Developed By: Turner                                                     ║
 * ║  Discord: https://discord.gg/2FSqzRV27V                                   ║
 * ║  ──────────────────────────────────────────────────────────────────────── ║
 * ║  Commit: 102964bde9e5c3f14288b75e0ff54777ae06fdea98be073d679b74fa3d9eccb8 ║
 * ║  Time Taken: 3225 ms (3.225000 seconds)                                   ║
 * ║  Total Offsets: 165                                                       ║
 * ╚═══════════════════════════════════════════════════════════════════════════╝
 */

#pragma once
#include <cstdint>

// clang-format off
namespace offsets {
    inline constexpr const char* roblox_version = "102964bde9e5c3f14288b75e0ff54777ae06fdea98be073d679b74fa3d9eccb8";

    namespace Atmosphere {
        inline constexpr uintptr_t Color = 0xD0;
        inline constexpr uintptr_t Decay = 0xDC;
        inline constexpr uintptr_t Density = 0xE8;
        inline constexpr uintptr_t Glare = 0xEC;
        inline constexpr uintptr_t Haze = 0xF0;
        inline constexpr uintptr_t Offset = 0xF4;
    }

    namespace Attachment {
        inline constexpr uintptr_t Position = 0x100;
    }

    namespace BasePart {
        inline constexpr uintptr_t Locked = 0x1A0;
        inline constexpr uintptr_t Primitive = 0x138;
        inline constexpr uintptr_t Transparency = 0x164;
    }

    namespace BloomEffect {
        inline constexpr uintptr_t Intensity = 0xCC;
        inline constexpr uintptr_t Size = 0xD0;
        inline constexpr uintptr_t Threshold = 0xD4;
    }

    namespace ByteCode {
        inline constexpr uintptr_t Pointer = 0x10;
