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
        inline constexpr uintptr_t Size = 0x18;
    }

    namespace Camera {
        inline constexpr uintptr_t CFrame = 0xF0;
        inline constexpr uintptr_t CameraSubject = 0xE0;
        inline constexpr uintptr_t CameraType = 0xC4;
        inline constexpr uintptr_t FieldOfView = 0x158;
        inline constexpr uintptr_t Position = 0x114;
    }

    namespace DataModel {
        inline constexpr uintptr_t CreatorId = 0x3F8;
        inline constexpr uintptr_t GameId = 0x890;
        inline constexpr uintptr_t GameLoaded = 0xCCC;
        inline constexpr uintptr_t Workspace = 0x168;
    }

    namespace DepthOfFieldEffect {
        inline constexpr uintptr_t Enabled = 0x183;
        inline constexpr uintptr_t FarIntensity = 0x114;
        inline constexpr uintptr_t FocusDistance = 0x114;
        inline constexpr uintptr_t InFocusRadius = 0x114;
        inline constexpr uintptr_t NearIntensity = 0x114;
    }

    namespace FakeDataModel {
        inline constexpr uintptr_t Pointer = 0x6AEE5E0;
        inline constexpr uintptr_t RealDataModel = 0x1D0;
    }

    namespace Humanoid {
        inline constexpr uintptr_t AutoJumpEnabled = 0x1BC;
        inline constexpr uintptr_t AutoRotate = 0x1D8;
        inline constexpr uintptr_t CameraOffset = 0x380;
        inline constexpr uintptr_t DisplayDistanceType = 0x1B4;
        inline constexpr uintptr_t EvaluateStateMachine = 0x1DC;
        inline constexpr uintptr_t Health = 0x184;
        inline constexpr uintptr_t HealthDisplayDistance = 0x188;
        inline constexpr uintptr_t HipHeight = 0x190;
        inline constexpr uintptr_t JumpHeight = 0x19C;
        inline constexpr uintptr_t JumpPower = 0x1A0;
        inline constexpr uintptr_t MaxHealth = 0x1A4;
        inline constexpr uintptr_t MaxSlopeAngle = 0x1A8;
        inline constexpr uintptr_t NameDisplayDistance = 0x1AC;
        inline constexpr uintptr_t RigType = 0x1B0;
        inline constexpr uintptr_t SeatPart = 0x110;
        inline constexpr uintptr_t Sit = 0x1DA;
        inline constexpr uintptr_t TargetPoint = 0x3F4;
        inline constexpr uintptr_t WalkSpeed = 0x1CC;
        inline constexpr uintptr_t WalkSpeedCheck = 0x3B4;
        inline constexpr uintptr_t WalkToPoint = 0x39C;
    }

    namespace InputObject {
        inline constexpr uintptr_t MousePosition = 0xEC;
    }

    namespace Instance {
        inline constexpr uintptr_t AttributeContainer = 0x88;
        inline constexpr uintptr_t ChildrenEnd = 0x8;
        inline constexpr uintptr_t ChildrenStart = 0x78;
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t ClassName = 0x8;
        inline constexpr uintptr_t Name = 0xB0;
        inline constexpr uintptr_t Parent = 0x70;
    }

    namespace Lighting {
        inline constexpr uintptr_t Ambient = 0xE0;
        inline constexpr uintptr_t Atmosphere = 0x1E8;
        inline constexpr uintptr_t Brightness = 0x128;
        inline constexpr uintptr_t ClockTime = 0x1B8;
        inline constexpr uintptr_t ColorShift_Bottom = 0xEC;
        inline constexpr uintptr_t ColorShift_Top = 0xF8;
        inline constexpr uintptr_t EnvironmentDiffuseScale = 0x12C;
        inline constexpr uintptr_t EnvironmentSpecularScale = 0x130;
        inline constexpr uintptr_t ExposureCompensation = 0x134;
        inline constexpr uintptr_t FogColor = 0x104;
        inline constexpr uintptr_t FogEnd = 0x13C;
        inline constexpr uintptr_t FogStart = 0x140;
        inline constexpr uintptr_t OutdoorAmbient = 0x110;
        inline constexpr uintptr_t ShadowSoftness = 0x148;
        inline constexpr uintptr_t Sky = 0x1D8;
    }

    namespace LightingParameters {
        inline constexpr uintptr_t GeographicLatitude = 0x194;
        inline constexpr uintptr_t LightColor = 0x160;
        inline constexpr uintptr_t LightDirection = 0x16C;
        inline constexpr uintptr_t SkyAmbient = 0x154;
        inline constexpr uintptr_t SkyAmbient2 = 0x198;
        inline constexpr uintptr_t Source = 0x178;
        inline constexpr uintptr_t TrueMoonPosition = 0x188;
        inline constexpr uintptr_t TrueSunPosition = 0x17C;
    }

    namespace LocalScript {
        inline constexpr uintptr_t Bytecode = 0x198;
        inline constexpr uintptr_t Hash = 0xF8;
    }

    namespace MaterialColors {
        inline constexpr uintptr_t Asphalt = 0x30;
        inline constexpr uintptr_t Basalt = 0x27;
        inline constexpr uintptr_t Brick = 0xF;
        inline constexpr uintptr_t Cobblestone = 0x33;
        inline constexpr uintptr_t Concrete = 0xC;
        inline constexpr uintptr_t CrackedLava = 0x2D;
        inline constexpr uintptr_t Glacier = 0x1B;
        inline constexpr uintptr_t Grass = 0x6;
        inline constexpr uintptr_t Ground = 0x2A;
        inline constexpr uintptr_t Ice = 0x36;
        inline constexpr uintptr_t LeafyGrass = 0x39;
        inline constexpr uintptr_t Limestone = 0x3F;
        inline constexpr uintptr_t Mud = 0x24;
        inline constexpr uintptr_t Pavement = 0x42;
        inline constexpr uintptr_t Rock = 0x18;
        inline constexpr uintptr_t Salt = 0x3C;
        inline constexpr uintptr_t Sand = 0x12;
        inline constexpr uintptr_t Sandstone = 0x21;
        inline constexpr uintptr_t Slate = 0x9;
        inline constexpr uintptr_t Snow = 0x1E;
        inline constexpr uintptr_t WoodPlanks = 0x15;
    }

    namespace Misc {
        inline constexpr uintptr_t Value = 0xC4;
    }

    namespace Model {
        inline constexpr uintptr_t PrimaryPart = 0x100;
        inline constexpr uintptr_t Scale = 0x160;
    }

    namespace ModuleScript {
        inline constexpr uintptr_t Bytecode = 0x140;
        inline constexpr uintptr_t Hash = 0x160;
    }

    namespace MouseService {
        inline constexpr uintptr_t InputObject = 0x118;
    }

    namespace Player {
        inline constexpr uintptr_t AccountAge = 0x120;
        inline constexpr uintptr_t Character = 0x360;
        inline constexpr uintptr_t TeamColor = 0x330;
        inline constexpr uintptr_t UserId = 0x100;
    }

    namespace Players {
        inline constexpr uintptr_t LocalPlayer = 0x128;
    }

    namespace Primitive {
        inline constexpr uintptr_t AssemblyAngularVelocity = 0x1E0;
        inline constexpr uintptr_t AssemblyLinearVelocity = 0x1C4;
        inline constexpr uintptr_t CFrame = 0xC8;
        inline constexpr uintptr_t Color = 0xF8;
        inline constexpr uintptr_t Position = 0xEC;
        inline constexpr uintptr_t PrimitiveFlags = 0x1A9;
        inline constexpr uintptr_t Size = 0x1B8;
        inline constexpr uintptr_t Transparency = 0xFC;
    }

    namespace RenderView {
        inline constexpr uintptr_t LightingValid = 0x170;
        inline constexpr uintptr_t SkyboxValid = 0x28D;
    }

    namespace ScriptContext {
        inline constexpr uintptr_t RequireBypass = 0x100;
    }

    namespace Seat {
        inline constexpr uintptr_t Occupant = 0x210;
    }

    namespace Sky {
        inline constexpr uintptr_t MoonAngularSize = 0x21C;
        inline constexpr uintptr_t SkyboxOrientation = 0x210;
        inline constexpr uintptr_t StarCount = 0x220;
        inline constexpr uintptr_t SunAngularSize = 0x224;
    }

    namespace Sound {
        inline constexpr uintptr_t Looped = 0x100;
        inline constexpr uintptr_t PlaybackSpeed = 0x170;
        inline constexpr uintptr_t Volume = 0x100;
    }

    namespace SpecialMesh {
        inline constexpr uintptr_t Offset = 0xD0;
        inline constexpr uintptr_t Scale = 0xDC;
    }

    namespace SunRaysEffect {
        inline constexpr uintptr_t Enabled = 0x190;
        inline constexpr uintptr_t Intensity = 0x108;
        inline constexpr uintptr_t Spread = 0x108;
    }

    namespace Team {
        inline constexpr uintptr_t TeamColor = 0xD0;
    }

    namespace Terrain {
        inline constexpr uintptr_t GrassLength = 0x1E8;
        inline constexpr uintptr_t MaterialColors = 0x298;
        inline constexpr uintptr_t WaterColor = 0x1D8;
        inline constexpr uintptr_t WaterReflectance = 0x1F0;
        inline constexpr uintptr_t WaterTransparency = 0x1F4;
        inline constexpr uintptr_t WaterWaveSize = 0x1F8;
        inline constexpr uintptr_t WaterWaveSpeed = 0x1FC;
    }

    namespace Value {
        inline constexpr uintptr_t Value = 0xC4;
    }

    namespace VehicleSeat {
        inline constexpr uintptr_t MaxSpeed = 0x228;
        inline constexpr uintptr_t Occupant = 0x208;
        inline constexpr uintptr_t SteerFloat = 0x230;
        inline constexpr uintptr_t ThrottleFloat = 0x238;
        inline constexpr uintptr_t Torque = 0x23C;
        inline constexpr uintptr_t TurnSpeed = 0x240;
    }

    namespace VisualEngine {
        inline constexpr uintptr_t FakeDataModel = 0xA80;
        inline constexpr uintptr_t Pointer = 0x6FBD8E0;
        inline constexpr uintptr_t RenderView = 0xBA0;
        inline constexpr uintptr_t ViewMatrix = 0x140;
    }

    namespace Workspace {
        inline constexpr uintptr_t CurrentCamera = 0x460;
        inline constexpr uintptr_t ReadOnlyGravity = 0x948;
        inline constexpr uintptr_t World = 0x3C0;
    }

    namespace World {
        inline constexpr uintptr_t Gravity = 0x208;
        inline constexpr uintptr_t Primitives = 0x258;
        inline constexpr uintptr_t WorldSteps = 0x610;
    }

} // namespace offsets
