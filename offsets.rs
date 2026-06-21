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

#![allow(non_upper_case_globals)]

pub const ROBLOX_VERSION: &str = "102964bde9e5c3f14288b75e0ff54777ae06fdea98be073d679b74fa3d9eccb8";

pub mod Atmosphere {
    pub const Color: usize = 0xD0;
    pub const Decay: usize = 0xDC;
    pub const Density: usize = 0xE8;
    pub const Glare: usize = 0xEC;
    pub const Haze: usize = 0xF0;
    pub const Offset: usize = 0xF4;
}

pub mod Attachment {
    pub const Position: usize = 0x100;
}

pub mod BasePart {
    pub const Locked: usize = 0x1A0;
    pub const Primitive: usize = 0x138;
    pub const Transparency: usize = 0x164;
}

pub mod BloomEffect {
    pub const Intensity: usize = 0xCC;
    pub const Size: usize = 0xD0;
    pub const Threshold: usize = 0xD4;
}

pub mod ByteCode {
    pub const Pointer: usize = 0x10;
    pub const Size: usize = 0x18;
}

pub mod Camera {
    pub const CFrame: usize = 0xF0;
    pub const CameraSubject: usize = 0xE0;
    pub const CameraType: usize = 0xC4;
    pub const FieldOfView: usize = 0x158;
    pub const Position: usize = 0x114;
}

pub mod DataModel {
    pub const CreatorId: usize = 0x3F8;
    pub const GameId: usize = 0x890;
    pub const GameLoaded: usize = 0xCCC;
    pub const Workspace: usize = 0x168;
}

pub mod DepthOfFieldEffect {
    pub const Enabled: usize = 0x183;
    pub const FarIntensity: usize = 0x114;
    pub const FocusDistance: usize = 0x114;
    pub const InFocusRadius: usize = 0x114;
    pub const NearIntensity: usize = 0x114;
}

pub mod FakeDataModel {
    pub const Pointer: usize = 0x6AEE5E0;
    pub const RealDataModel: usize = 0x1D0;
}

pub mod Humanoid {
    pub const AutoJumpEnabled: usize = 0x1BC;
    pub const AutoRotate: usize = 0x1D8;
    pub const CameraOffset: usize = 0x380;
    pub const DisplayDistanceType: usize = 0x1B4;
    pub const EvaluateStateMachine: usize = 0x1DC;
    pub const Health: usize = 0x184;
    pub const HealthDisplayDistance: usize = 0x188;
    pub const HipHeight: usize = 0x190;
    pub const JumpHeight: usize = 0x19C;
    pub const JumpPower: usize = 0x1A0;
    pub const MaxHealth: usize = 0x1A4;
    pub const MaxSlopeAngle: usize = 0x1A8;
    pub const NameDisplayDistance: usize = 0x1AC;
    pub const RigType: usize = 0x1B0;
    pub const SeatPart: usize = 0x110;
    pub const Sit: usize = 0x1DA;
    pub const TargetPoint: usize = 0x3F4;
    pub const WalkSpeed: usize = 0x1CC;
    pub const WalkSpeedCheck: usize = 0x3B4;
    pub const WalkToPoint: usize = 0x39C;
}

pub mod InputObject {
    pub const MousePosition: usize = 0xEC;
}

pub mod Instance {
    pub const AttributeContainer: usize = 0x88;
    pub const ChildrenEnd: usize = 0x8;
    pub const ChildrenStart: usize = 0x78;
    pub const ClassDescriptor: usize = 0x18;
    pub const ClassName: usize = 0x8;
    pub const Name: usize = 0xB0;
    pub const Parent: usize = 0x70;
}

pub mod Lighting {
    pub const Ambient: usize = 0xE0;
    pub const Atmosphere: usize = 0x1E8;
    pub const Brightness: usize = 0x128;
    pub const ClockTime: usize = 0x1B8;
    pub const ColorShift_Bottom: usize = 0xEC;
    pub const ColorShift_Top: usize = 0xF8;
    pub const EnvironmentDiffuseScale: usize = 0x12C;
    pub const EnvironmentSpecularScale: usize = 0x130;
    pub const ExposureCompensation: usize = 0x134;
    pub const FogColor: usize = 0x104;
    pub const FogEnd: usize = 0x13C;
    pub const FogStart: usize = 0x140;
    pub const OutdoorAmbient: usize = 0x110;
    pub const ShadowSoftness: usize = 0x148;
    pub const Sky: usize = 0x1D8;
}

pub mod LightingParameters {
    pub const GeographicLatitude: usize = 0x194;
    pub const LightColor: usize = 0x160;
    pub const LightDirection: usize = 0x16C;
    pub const SkyAmbient: usize = 0x154;
    pub const SkyAmbient2: usize = 0x198;
    pub const Source: usize = 0x178;
    pub const TrueMoonPosition: usize = 0x188;
    pub const TrueSunPosition: usize = 0x17C;
}

pub mod LocalScript {
    pub const Bytecode: usize = 0x198;
    pub const Hash: usize = 0xF8;
}

pub mod MaterialColors {
    pub const Asphalt: usize = 0x30;
    pub const Basalt: usize = 0x27;
    pub const Brick: usize = 0xF;
    pub const Cobblestone: usize = 0x33;
    pub const Concrete: usize = 0xC;
    pub const CrackedLava: usize = 0x2D;
    pub const Glacier: usize = 0x1B;
    pub const Grass: usize = 0x6;
    pub const Ground: usize = 0x2A;
    pub const Ice: usize = 0x36;
    pub const LeafyGrass: usize = 0x39;
    pub const Limestone: usize = 0x3F;
    pub const Mud: usize = 0x24;
    pub const Pavement: usize = 0x42;
    pub const Rock: usize = 0x18;
    pub const Salt: usize = 0x3C;
    pub const Sand: usize = 0x12;
    pub const Sandstone: usize = 0x21;
    pub const Slate: usize = 0x9;
    pub const Snow: usize = 0x1E;
    pub const WoodPlanks: usize = 0x15;
}

pub mod Misc {
    pub const Value: usize = 0xC4;
}

pub mod Model {
    pub const PrimaryPart: usize = 0x100;
    pub const Scale: usize = 0x160;
}

pub mod ModuleScript {
    pub const Bytecode: usize = 0x140;
    pub const Hash: usize = 0x160;
}

pub mod MouseService {
    pub const InputObject: usize = 0x118;
}

pub mod Player {
    pub const AccountAge: usize = 0x120;
    pub const Character: usize = 0x360;
    pub const TeamColor: usize = 0x330;
    pub const UserId: usize = 0x100;
}

pub mod Players {
    pub const LocalPlayer: usize = 0x128;
}

pub mod Primitive {
    pub const AssemblyAngularVelocity: usize = 0x1E0;
    pub const AssemblyLinearVelocity: usize = 0x1C4;
    pub const CFrame: usize = 0xC8;
    pub const Color: usize = 0xF8;
    pub const Position: usize = 0xEC;
    pub const PrimitiveFlags: usize = 0x1A9;
    pub const Size: usize = 0x1B8;
    pub const Transparency: usize = 0xFC;
}

pub mod RenderView {
    pub const LightingValid: usize = 0x170;
    pub const SkyboxValid: usize = 0x28D;
}

pub mod ScriptContext {
    pub const RequireBypass: usize = 0x100;
}

pub mod Seat {
    pub const Occupant: usize = 0x210;
}

pub mod Sky {
    pub const MoonAngularSize: usize = 0x21C;
    pub const SkyboxOrientation: usize = 0x210;
    pub const StarCount: usize = 0x220;
    pub const SunAngularSize: usize = 0x224;
}

pub mod Sound {
    pub const Looped: usize = 0x100;
    pub const PlaybackSpeed: usize = 0x170;
    pub const Volume: usize = 0x100;
}

pub mod SpecialMesh {
    pub const Offset: usize = 0xD0;
    pub const Scale: usize = 0xDC;
}

pub mod SunRaysEffect {
    pub const Enabled: usize = 0x190;
    pub const Intensity: usize = 0x108;
    pub const Spread: usize = 0x108;
}

pub mod Team {
    pub const TeamColor: usize = 0xD0;
}

pub mod Terrain {
    pub const GrassLength: usize = 0x1E8;
    pub const MaterialColors: usize = 0x298;
    pub const WaterColor: usize = 0x1D8;
    pub const WaterReflectance: usize = 0x1F0;
    pub const WaterTransparency: usize = 0x1F4;
    pub const WaterWaveSize: usize = 0x1F8;
    pub const WaterWaveSpeed: usize = 0x1FC;
}

pub mod Value {
    pub const Value: usize = 0xC4;
}

pub mod VehicleSeat {
    pub const MaxSpeed: usize = 0x228;
    pub const Occupant: usize = 0x208;
    pub const SteerFloat: usize = 0x230;
    pub const ThrottleFloat: usize = 0x238;
    pub const Torque: usize = 0x23C;
    pub const TurnSpeed: usize = 0x240;
}

pub mod VisualEngine {
    pub const FakeDataModel: usize = 0xA80;
    pub const Pointer: usize = 0x6FBD8E0;
    pub const RenderView: usize = 0xBA0;
    pub const ViewMatrix: usize = 0x140;
}

pub mod Workspace {
    pub const CurrentCamera: usize = 0x460;
    pub const ReadOnlyGravity: usize = 0x948;
    pub const World: usize = 0x3C0;
}

pub mod World {
    pub const Gravity: usize = 0x208;
    pub const Primitives: usize = 0x258;
    pub const WorldSteps: usize = 0x610;
}

