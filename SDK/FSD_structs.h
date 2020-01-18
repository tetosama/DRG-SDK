#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum FSD.EDrinkableAlcoholStrength
enum class EDrinkableAlcoholStrength : uint8_t
{
	EDrinkableAlcoholStrength__NonAlcoholic = 0,
	EDrinkableAlcoholStrength__Light = 1,
	EDrinkableAlcoholStrength__Regular = 2,
	EDrinkableAlcoholStrength__Strong = 3,
	EDrinkableAlcoholStrength__VeryStrong = 4,
	EDrinkableAlcoholStrength__InstantPassout = 5,
	EDrinkableAlcoholStrength__EDrinkableAlcoholStrength_MAX = 6
};


// Enum FSD.EIntoxicationState
enum class EIntoxicationState : uint8_t
{
	EIntoxicationState__NotIntoxicated = 0,
	EIntoxicationState__Intoxicated = 1,
	EIntoxicationState__PassOut    = 2,
	EIntoxicationState__EIntoxicationState_MAX = 3
};


// Enum FSD.ECharacterState
enum class ECharacterState : uint8_t
{
	ECharacterState__Walking       = 0,
	ECharacterState__Downed        = 1,
	ECharacterState__Dead          = 2,
	ECharacterState__Falling       = 3,
	ECharacterState__Paralyzed     = 4,
	ECharacterState__Using         = 5,
	ECharacterState__ZipLine       = 6,
	ECharacterState__NoMovement    = 7,
	ECharacterState__Grabbed       = 8,
	ECharacterState__Flying        = 9,
	ECharacterState__Frozen        = 10,
	ECharacterState__PassedOut     = 11,
	ECharacterState__Photography   = 12,
	ECharacterState__Piloting      = 13,
	ECharacterState__Attached      = 14,
	ECharacterState__ECharacterState_MAX = 15
};


// Enum FSD.ELaserPointerTargetType
enum class ELaserPointerTargetType : uint8_t
{
	ELaserPointerTargetType__Chunkable = 0,
	ELaserPointerTargetType__Dirt  = 1,
	ELaserPointerTargetType__Player = 2,
	ELaserPointerTargetType__Enemy = 3,
	ELaserPointerTargetType__EmbeddedGem = 4,
	ELaserPointerTargetType__Other = 5,
	ELaserPointerTargetType__ELaserPointerTargetType_MAX = 6
};


// Enum FSD.ECharacterCameraMode
enum class ECharacterCameraMode : uint8_t
{
	ECharacterCameraMode__FirstPerson = 0,
	ECharacterCameraMode__ThirdPerson = 1,
	ECharacterCameraMode__Follow   = 2,
	ECharacterCameraMode__DownCamera = 3,
	ECharacterCameraMode__TerrainScanner = 4,
	ECharacterCameraMode__PhotographyMode = 5,
	ECharacterCameraMode__FirstPersonHeadOnly = 6,
	ECharacterCameraMode__ECharacterCameraMode_MAX = 7
};


// Enum FSD.EPlayerTemperatureState
enum class EPlayerTemperatureState : uint8_t
{
	EPlayerTemperatureState__Normal = 0,
	EPlayerTemperatureState__Frozen = 1,
	EPlayerTemperatureState__Overheated = 2,
	EPlayerTemperatureState__EPlayerTemperatureState_MAX = 3
};


// Enum FSD.EGroundLeechState
enum class EGroundLeechState : uint8_t
{
	EGroundLeechState__Idle        = 0,
	EGroundLeechState__Tracking    = 1,
	EGroundLeechState__Pulling     = 2,
	EGroundLeechState__Retracting  = 3,
	EGroundLeechState__Dying       = 4,
	EGroundLeechState__Dead        = 5,
	EGroundLeechState__EGroundLeechState_MAX = 6
};


// Enum FSD.EFriendOnlineStatusEnum
enum class EFriendOnlineStatusEnum : uint8_t
{
	EFriendOnlineStatusEnum__Online = 0,
	EFriendOnlineStatusEnum__Offline = 1,
	EFriendOnlineStatusEnum__Away  = 2,
	EFriendOnlineStatusEnum__EFriendOnlineStatusEnum_MAX = 3
};


// Enum FSD.EChatSenderType
enum class EChatSenderType : uint8_t
{
	EChatSenderType__NormalUser    = 0,
	EChatSenderType__DeluxUser     = 1,
	EChatSenderType__Developer     = 2,
	EChatSenderType__Streamer      = 3,
	EChatSenderType__EChatSenderType_MAX = 4
};


// Enum FSD.EChatMessageType
enum class EChatMessageType : uint8_t
{
	EChatMessageType__ES_Chat      = 0,
	EChatMessageType__ES_Game      = 1,
	EChatMessageType__ES_MAX       = 2
};


// Enum FSD.ECharselectionCameraLocation
enum class ECharselectionCameraLocation : uint8_t
{
	ECharselectionCameraLocation__Selection = 0,
	ECharselectionCameraLocation__Customization = 1,
	ECharselectionCameraLocation__Crafting = 2,
	ECharselectionCameraLocation__ViewWeapon = 3,
	ECharselectionCameraLocation__EndScreen = 4,
	ECharselectionCameraLocation__Forge = 5,
	ECharselectionCameraLocation__ECharselectionCameraLocation_MAX = 6
};


// Enum FSD.ESteamSearchRegion
enum class ESteamSearchRegion : uint8_t
{
	ESteamSearchRegion__Close      = 0,
	ESteamSearchRegion__Medium     = 1,
	ESteamSearchRegion__Far        = 2,
	ESteamSearchRegion__World      = 3,
	ESteamSearchRegion__ESteamSearchRegion_MAX = 4
};


// Enum FSD.ESteamServerJoinStatus
enum class ESteamServerJoinStatus : uint8_t
{
	ESteamServerJoinStatus__Open   = 0,
	ESteamServerJoinStatus__PasswordRequired = 1,
	ESteamServerJoinStatus__ESteamServerJoinStatus_MAX = 2
};


// Enum FSD.EAlwaysLoadedWorlds
enum class EAlwaysLoadedWorlds : uint8_t
{
	EAlwaysLoadedWorlds__CharacterViewer = 0,
	EAlwaysLoadedWorlds__LoaderNormal = 1,
	EAlwaysLoadedWorlds__LoaderDeepDive = 2,
	EAlwaysLoadedWorlds__EAlwaysLoadedWorlds_MAX = 3
};


// Enum FSD.EDisconnectReason
enum class EDisconnectReason : uint8_t
{
	EDisconnectReason__None        = 0,
	EDisconnectReason__Kicked_HaveMyReasons = 1,
	EDisconnectReason__Kicked_ShouldBePrivate = 2,
	EDisconnectReason__Kicked_AFK  = 3,
	EDisconnectReason__Banned      = 4,
	EDisconnectReason__ServerQuit  = 5,
	EDisconnectReason__Disconnected = 6,
	EDisconnectReason__SignInChange = 7,
	EDisconnectReason__JoinSessionFail_SessionIsFull = 8,
	EDisconnectReason__JoinSessionFail_SessionDoesNotExist = 9,
	EDisconnectReason__JoinSessionFail_Other = 10,
	EDisconnectReason__JoinSessionFail_Privilege = 11,
	EDisconnectReason__NetworkError = 12,
	EDisconnectReason__SignOutComplete = 13,
	EDisconnectReason__WrongPassword = 14,
	EDisconnectReason__DeepDiveLateJoin = 15,
	EDisconnectReason__MissionStarting = 16,
	EDisconnectReason__EDisconnectReason_MAX = 17
};


// Enum FSD.EInputSource
enum class EInputSource : uint8_t
{
	EInputSource__None             = 0,
	EInputSource__MouseAndKeyboard = 1,
	EInputSource__Controller       = 2,
	EInputSource__EInputSource_MAX = 3
};


// Enum FSD.EKeyboardLayout
enum class EKeyboardLayout : uint8_t
{
	EKeyboardLayout__QWERTY        = 0,
	EKeyboardLayout__AZERTY        = 1,
	EKeyboardLayout__QWERTZ        = 2,
	EKeyboardLayout__EKeyboardLayout_MAX = 3
};


// Enum FSD.EHUDVisibilityReason
enum class EHUDVisibilityReason : uint8_t
{
	EHUDVisibilityReason__UserChoice = 0,
	EHUDVisibilityReason__StandDown = 1,
	EHUDVisibilityReason__MenuActive = 2,
	EHUDVisibilityReason__Photography = 3,
	EHUDVisibilityReason__EHUDVisibilityReason_MAX = 4
};


// Enum FSD.CarveOptionsCellSize
enum class ECarveOptionsCellSize : uint8_t
{
	CarveOptionsCellSize__CARVE_CELL_SIZE = 0,
	CarveOptionsCellSize__CARVE_CELL_SIZE01 = 1,
	CarveOptionsCellSize__CARVE_CELL_SIZE02 = 2,
	CarveOptionsCellSize__CARVE_CELL_SIZE03 = 3,
	CarveOptionsCellSize__CARVE_CELL_SIZE_MAX = 4
};


// Enum FSD.ECarveFilterType
enum class ECarveFilterType : uint8_t
{
	ECarveFilterType__ReplaceAll   = 0,
	ECarveFilterType__ReplaceEmpty = 1,
	ECarveFilterType__ReplaceSolid = 2,
	ECarveFilterType__ECarveFilterType_MAX = 3
};


// Enum FSD.EPreciousMaterialOptions
enum class EPreciousMaterialOptions : uint8_t
{
	EPreciousMaterialOptions__TurnIntoGems = 0,
	EPreciousMaterialOptions__LeaveUntouched = 1,
	EPreciousMaterialOptions__Ignore = 2,
	EPreciousMaterialOptions__EPreciousMaterialOptions_MAX = 3
};


// Enum FSD.ESpacerigStartType
enum class ESpacerigStartType : uint8_t
{
	ESpacerigStartType__PlayerHub  = 0,
	ESpacerigStartType__Medbay     = 1,
	ESpacerigStartType__ESpacerigStartType_MAX = 2
};


// Enum FSD.EItemCategory
enum class EItemCategory : uint8_t
{
	EItemCategory__PrimaryWeapon   = 0,
	EItemCategory__SecondaryWeapon = 1,
	EItemCategory__TraversalTool   = 2,
	EItemCategory__ClassTool       = 3,
	EItemCategory__Grenade         = 4,
	EItemCategory__Flare           = 5,
	EItemCategory__MiningTool      = 6,
	EItemCategory__Armor           = 7,
	EItemCategory__EItemCategory_MAX = 8
};


// Enum FSD.EFSDFaction
enum class EFSDFaction : uint8_t
{
	EFSDFaction__NoFaction         = 0,
	EFSDFaction__CaveCrawlers      = 1,
	EFSDFaction__MightyMiners      = 2,
	EFSDFaction__DirtDiggers       = 3,
	EFSDFaction__EFSDFaction_MAX   = 4
};


// Enum FSD.EKeyBindingAxis
enum class EKeyBindingAxis : uint8_t
{
	EKeyBindingAxis__None          = 0,
	EKeyBindingAxis__Positive      = 1,
	EKeyBindingAxis__Negative      = 2,
	EKeyBindingAxis__EKeyBindingAxis_MAX = 3
};


// Enum FSD.EHUDVisibilityMode
enum class EHUDVisibilityMode : uint8_t
{
	EHUDVisibilityMode__Visible    = 0,
	EHUDVisibilityMode__Dynamic    = 1,
	EHUDVisibilityMode__Hidden     = 2,
	EHUDVisibilityMode__EHUDVisibilityMode_MAX = 3
};


// Enum FSD.EVanitySlot
enum class EVanitySlot : uint8_t
{
	EVanitySlot__Head              = 0,
	EVanitySlot__Beard             = 1,
	EVanitySlot__Armor             = 2,
	EVanitySlot__BeardColor        = 3,
	EVanitySlot__SkinColor         = 4,
	EVanitySlot__Moustache         = 5,
	EVanitySlot__Eyebrows          = 6,
	EVanitySlot__Sideburns         = 7,
	EVanitySlot__Count             = 8,
	EVanitySlot__EVanitySlot_MAX   = 9
};


// Enum FSD.EMissionStatType
enum class EMissionStatType : uint8_t
{
	EMissionStatType__Float        = 0,
	EMissionStatType__Integer      = 1,
	EMissionStatType__Time         = 2,
	EMissionStatType__Distance     = 3,
	EMissionStatType__EMissionStatType_MAX = 4
};


// Enum FSD.EItemPreviewStatus
enum class EItemPreviewStatus : uint8_t
{
	EItemPreviewStatus__Normal     = 0,
	EItemPreviewStatus__Upgraded   = 1,
	EItemPreviewStatus__Previewed  = 2,
	EItemPreviewStatus__PreviewReduced = 3,
	EItemPreviewStatus__UpgradedAndPreviewReduced = 4,
	EItemPreviewStatus__EItemPreviewStatus_MAX = 5
};


// Enum FSD.EUpgradeCalucationType
enum class EUpgradeCalucationType : uint8_t
{
	EUpgradeCalucationType__Additive = 0,
	EUpgradeCalucationType__Multiplicative = 1,
	EUpgradeCalucationType__EUpgradeCalucationType_MAX = 2
};


// Enum FSD.EUpgradeClass
enum class EUpgradeClass : uint8_t
{
	EUpgradeClass__Class_A         = 0,
	EUpgradeClass__Class_B         = 1,
	EUpgradeClass__Gear_A          = 2,
	EUpgradeClass__Gear_B          = 3,
	EUpgradeClass__Armor           = 4,
	EUpgradeClass__Pickaxe         = 5,
	EUpgradeClass__Class_Bosco     = 6,
	EUpgradeClass__EUpgradeClass_MAX = 7
};


// Enum FSD.EUpgradeTiers
enum class EUpgradeTiers : uint8_t
{
	EUpgradeTiers__Tier            = 0,
	EUpgradeTiers__Tier01          = 1,
	EUpgradeTiers__Tier02          = 2,
	EUpgradeTiers__Tier03          = 3,
	EUpgradeTiers__Tier04          = 4,
	EUpgradeTiers__Tier_MAX        = 5
};


// Enum FSD.EDroneAIState
enum class EDroneAIState : uint8_t
{
	EDroneAIState__Follow          = 0,
	EDroneAIState__Mine            = 1,
	EDroneAIState__Fight           = 2,
	EDroneAIState__Revive          = 3,
	EDroneAIState__Light           = 4,
	EDroneAIState__GoToPlayer      = 5,
	EDroneAIState__Salute          = 6,
	EDroneAIState__CarryGem        = 7,
	EDroneAIState__UseAbillity     = 8,
	EDroneAIState__EDroneAIState_MAX = 9
};


// Enum FSD.EEnemyHealthScaling
enum class EEnemyHealthScaling : uint8_t
{
	EEnemyHealthScaling__SmallEnemy = 0,
	EEnemyHealthScaling__LargeEnemy = 1,
	EEnemyHealthScaling__ExtraLargeEnemy = 2,
	EEnemyHealthScaling__EEnemyHealthScaling_MAX = 3
};


// Enum FSD.EHealthbarType
enum class EHealthbarType : uint8_t
{
	EHealthbarType__None           = 0,
	EHealthbarType__MainLife       = 1,
	EHealthbarType__Shield         = 2,
	EHealthbarType__EHealthbarType_MAX = 3
};


// Enum FSD.EFrozenBitsSize
enum class EFrozenBitsSize : uint8_t
{
	EFrozenBitsSize__Tiny          = 0,
	EFrozenBitsSize__Small         = 1,
	EFrozenBitsSize__Medium        = 2,
	EFrozenBitsSize__Large         = 3,
	EFrozenBitsSize__Huge          = 4,
	EFrozenBitsSize__EFrozenBitsSize_MAX = 5
};


// Enum FSD.EUseRestriction
enum class EUseRestriction : uint8_t
{
	EUseRestriction__Free          = 0,
	EUseRestriction__DepositOnly   = 1,
	EUseRestriction__Repair        = 2,
	EUseRestriction__Zipline       = 3,
	EUseRestriction__BlockAll      = 4,
	EUseRestriction__PickupItem    = 5,
	EUseRestriction__EUseRestriction_MAX = 6
};


// Enum FSD.ESchematicState
enum class ESchematicState : uint8_t
{
	ESchematicState__NotOwned      = 0,
	ESchematicState__OwnedCannotBuild = 1,
	ESchematicState__OwnedCanBuild = 2,
	ESchematicState__OwnedBuilt    = 3,
	ESchematicState__ESchematicState_MAX = 4
};


// Enum FSD.ESchematicType
enum class ESchematicType : uint8_t
{
	ESchematicType__Overclock      = 0,
	ESchematicType__Vanity         = 1,
	ESchematicType__Resource       = 2,
	ESchematicType__Blank          = 3,
	ESchematicType__ESchematicType_MAX = 4
};


// Enum FSD.EHUDVisibilityPresets
enum class EHUDVisibilityPresets : uint8_t
{
	EHUDVisibilityPresets__AllVisible = 0,
	EHUDVisibilityPresets__Recommended = 1,
	EHUDVisibilityPresets__Minimal = 2,
	EHUDVisibilityPresets__AllHidden = 3,
	EHUDVisibilityPresets__EHUDVisibilityPresets_MAX = 4
};


// Enum FSD.EHUDVisibilityGroups
enum class EHUDVisibilityGroups : uint8_t
{
	EHUDVisibilityGroups__OnScreenHelp = 0,
	EHUDVisibilityGroups__EnemyHealth = 1,
	EHUDVisibilityGroups__RadarAndDepth = 2,
	EHUDVisibilityGroups__PlayerHealthShield = 3,
	EHUDVisibilityGroups__PlayerNameClassIcon = 4,
	EHUDVisibilityGroups__PlayerItems = 5,
	EHUDVisibilityGroups__PlayerResources = 6,
	EHUDVisibilityGroups__WeaponInfo = 7,
	EHUDVisibilityGroups__Grenades = 8,
	EHUDVisibilityGroups__FlashLight = 9,
	EHUDVisibilityGroups__Flares   = 10,
	EHUDVisibilityGroups__Crosshair = 11,
	EHUDVisibilityGroups__Objectives = 12,
	EHUDVisibilityGroups__TeamDisplay = 13,
	EHUDVisibilityGroups__SentryGunDisplay = 14,
	EHUDVisibilityGroups__EHUDVisibilityGroups_MAX = 15
};


// Enum FSD.ELineRotation
enum class ELineRotation : uint8_t
{
	ELineRotation__None            = 0,
	ELineRotation__Yaw             = 1,
	ELineRotation__Pitch           = 2,
	ELineRotation__Roll            = 3,
	ELineRotation__ELineRotation_MAX = 4
};


// Enum FSD.EImpactDecalSize
enum class EImpactDecalSize : uint8_t
{
	EImpactDecalSize__Small        = 0,
	EImpactDecalSize__Medium       = 1,
	EImpactDecalSize__Large        = 2,
	EImpactDecalSize__None         = 3,
	EImpactDecalSize__EImpactDecalSize_MAX = 4
};


// Enum FSD.ERecallableActorState
enum class ERecallableActorState : uint8_t
{
	ERecallableActorState__Idle    = 0,
	ERecallableActorState__RelocateRequested = 1,
	ERecallableActorState__Relocating = 2,
	ERecallableActorState__ReturnRequested = 3,
	ERecallableActorState__Returning = 4,
	ERecallableActorState__Home    = 5,
	ERecallableActorState__ERecallableActorState_MAX = 6
};


// Enum FSD.ERedeployableSentryGunState
enum class ERedeployableSentryGunState : uint8_t
{
	ERedeployableSentryGunState__Deploying = 0,
	ERedeployableSentryGunState__Deployed = 1,
	ERedeployableSentryGunState__Dismantling = 2,
	ERedeployableSentryGunState__Dismantled = 3,
	ERedeployableSentryGunState__ERedeployableSentryGunState_MAX = 4
};


// Enum FSD.EDeepMovementState
enum class EDeepMovementState : uint8_t
{
	EDeepMovementState__Stationary = 0,
	EDeepMovementState__Controlled = 1,
	EDeepMovementState__Moving     = 2,
	EDeepMovementState__WaitingForPath = 3,
	EDeepMovementState__AttackStance = 4,
	EDeepMovementState__FakePhysics = 5,
	EDeepMovementState__EDeepMovementState_MAX = 6
};


// Enum FSD.EFSDTargetPlatform
enum class EFSDTargetPlatform : uint8_t
{
	EFSDTargetPlatform__Steam      = 0,
	EFSDTargetPlatform__UWPBox     = 1,
	EFSDTargetPlatform__XboxOne    = 2,
	EFSDTargetPlatform__Oddish     = 3,
	EFSDTargetPlatform__EFSDTargetPlatform_MAX = 4
};


// Enum FSD.ECreatureSize
enum class ECreatureSize : uint8_t
{
	ECreatureSize__Tiny            = 0,
	ECreatureSize__Small           = 1,
	ECreatureSize__Medium          = 2,
	ECreatureSize__Large           = 3,
	ECreatureSize__Huge            = 4,
	ECreatureSize__ECreatureSize_MAX = 5
};


// Enum FSD.EAmmoWeaponState
enum class EAmmoWeaponState : uint8_t
{
	EAmmoWeaponState__Equipping    = 0,
	EAmmoWeaponState__Ready        = 1,
	EAmmoWeaponState__Cycling      = 2,
	EAmmoWeaponState__Reloading    = 3,
	EAmmoWeaponState__BurstCycling = 4,
	EAmmoWeaponState__EAmmoWeaponState_MAX = 5
};


// Enum FSD.EAsyncLoadPriority
enum class EAsyncLoadPriority : uint8_t
{
	EAsyncLoadPriority__Normal     = 0,
	EAsyncLoadPriority__High       = 1,
	EAsyncLoadPriority__EAsyncLoadPriority_MAX = 2
};


// Enum FSD.EAsyncPersistence
enum class EAsyncPersistence : uint8_t
{
	EAsyncPersistence__Manual      = 0,
	EAsyncPersistence__Level       = 1,
	EAsyncPersistence__Permanent   = 2,
	EAsyncPersistence__EAsyncPersistence_MAX = 3
};


// Enum FSD.ECampaignMutators
enum class ECampaignMutators : uint8_t
{
	ECampaignMutators__NotAllowed  = 0,
	ECampaignMutators__Allowed     = 1,
	ECampaignMutators__Preffered   = 2,
	ECampaignMutators__ECampaignMutators_MAX = 3
};


// Enum FSD.EAutoMiningState
enum class EAutoMiningState : uint8_t
{
	EAutoMiningState__Equipping    = 0,
	EAutoMiningState__Idle         = 1,
	EAutoMiningState__Mining       = 2,
	EAutoMiningState__Overheated   = 3,
	EAutoMiningState__EAutoMiningState_MAX = 4
};


// Enum FSD.ECampaignType
enum class ECampaignType : uint8_t
{
	ECampaignType__Normal          = 0,
	ECampaignType__Weekly          = 1,
	ECampaignType__MatrixCoreHunt  = 2,
	ECampaignType__ECampaignType_MAX = 3
};


// Enum FSD.ECellCategory
enum class ECellCategory : uint8_t
{
	ECellCategory__Cave            = 0,
	ECellCategory__Tunnel          = 1,
	ECellCategory__ECellCategory_MAX = 2
};


// Enum FSD.EFSDChromaEffect
enum class EFSDChromaEffect : uint8_t
{
	EFSDChromaEffect__HealthDamage = 0,
	EFSDChromaEffect__ShieldDamage = 1,
	EFSDChromaEffect__Flare        = 2,
	EFSDChromaEffect__MissionSuccess = 3,
	EFSDChromaEffect__None         = 4,
	EFSDChromaEffect__EFSDChromaEffect_MAX = 5
};


// Enum FSD.EExampleEnum
enum class EExampleEnum : uint8_t
{
	EExampleEnum__FirstName        = 0,
	EExampleEnum__SecondName       = 1,
	EExampleEnum__EExampleEnum_MAX = 2
};


// Enum FSD.ECaveLeechState
enum class ECaveLeechState : uint8_t
{
	ECaveLeechState__Idle          = 0,
	ECaveLeechState__Tracking      = 1,
	ECaveLeechState__Pulling       = 2,
	ECaveLeechState__Retracting    = 3,
	ECaveLeechState__Dying         = 4,
	ECaveLeechState__Dead          = 5,
	ECaveLeechState__Frozen        = 6,
	ECaveLeechState__ECaveLeechState_MAX = 7
};


// Enum FSD.EShoutType
enum class EShoutType : uint8_t
{
	EShoutType__Attention          = 0,
	EShoutType__Follow             = 1,
	EShoutType__StandingDown       = 2,
	EShoutType__Downed             = 3,
	EShoutType__RequestRevive      = 4,
	EShoutType__Revived            = 5,
	EShoutType__Resupply           = 6,
	EShoutType__FriendlyFire       = 7,
	EShoutType__KillCry            = 8,
	EShoutType__Dead               = 9,
	EShoutType__Cheating           = 10,
	EShoutType__ResourceFull       = 11,
	EShoutType__ResourceFullNoDonkey = 12,
	EShoutType__CallDonkey         = 13,
	EShoutType__Depositing         = 14,
	EShoutType__DepositingNoDonkey = 15,
	EShoutType__OutOfAmmo          = 16,
	EShoutType__Reloading          = 17,
	EShoutType__CharacterSelected  = 18,
	EShoutType__UpgradeBought      = 19,
	EShoutType__WaitingInDropPod   = 20,
	EShoutType__Carrying           = 21,
	EShoutType__EShoutType_MAX     = 22
};


// Enum FSD.ECommunityGoalTier
enum class ECommunityGoalTier : uint8_t
{
	ECommunityGoalTier__Bronze     = 0,
	ECommunityGoalTier__Silver     = 1,
	ECommunityGoalTier__Gold       = 2,
	ECommunityGoalTier__ECommunityGoalTier_MAX = 3
};


// Enum FSD.ECommunityGoalType
enum class ECommunityGoalType : uint8_t
{
	ECommunityGoalType__Float      = 0,
	ECommunityGoalType__Integer    = 1,
	ECommunityGoalType__Time       = 2,
	ECommunityGoalType__Distance   = 3,
	ECommunityGoalType__ECommunityGoalType_MAX = 4
};


// Enum FSD.ECommunityUIState
enum class ECommunityUIState : uint8_t
{
	ECommunityUIState__Loading     = 0,
	ECommunityUIState__SelectFaction = 1,
	ECommunityUIState__Progress    = 2,
	ECommunityUIState__Recruitment = 3,
	ECommunityUIState__Reward      = 4,
	ECommunityUIState__Invalid     = 5,
	ECommunityUIState__ECommunityUIState_MAX = 6
};


// Enum FSD.ERobotState
enum class ERobotState : uint8_t
{
	ERobotState__Enemy             = 0,
	ERobotState__Friendly          = 1,
	ERobotState__PoweredDown       = 2,
	ERobotState__ERobotState_MAX   = 3
};


// Enum FSD.EDamageComponentType
enum class EDamageComponentType : uint8_t
{
	EDamageComponentType__Primary  = 0,
	EDamageComponentType__Secondary = 1,
	EDamageComponentType__EDamageComponentType_MAX = 2
};


// Enum FSD.EDashPointsGenerationMode
enum class EDashPointsGenerationMode : uint8_t
{
	EDashPointsGenerationMode__Surround = 0,
	EDashPointsGenerationMode__Forward = 1,
	EDashPointsGenerationMode__EDashPointsGenerationMode_MAX = 2
};


// Enum FSD.EDebrisOrientation
enum class EDebrisOrientation : uint8_t
{
	EDebrisOrientation__Random     = 0,
	EDebrisOrientation__RandomXY   = 1,
	EDebrisOrientation__AlignToSurfaceNormal = 2,
	EDebrisOrientation__Fixed      = 3,
	EDebrisOrientation__EDebrisOrientation_MAX = 4
};


// Enum FSD.EDebrisMeshShadows
enum class EDebrisMeshShadows : uint8_t
{
	EDebrisMeshShadows__Never      = 0,
	EDebrisMeshShadows__High       = 1,
	EDebrisMeshShadows__Always     = 2,
	EDebrisMeshShadows__EDebrisMeshShadows_MAX = 3
};


// Enum FSD.EDebrisMeshCollisionProfile
enum class EDebrisMeshCollisionProfile : uint8_t
{
	EDebrisMeshCollisionProfile__NoCollision = 0,
	EDebrisMeshCollisionProfile__HitOnly = 1,
	EDebrisMeshCollisionProfile__HitAndCollide = 2,
	EDebrisMeshCollisionProfile__EDebrisMeshCollisionProfile_MAX = 3
};


// Enum FSD.EDebrisColliderType
enum class EDebrisColliderType : uint8_t
{
	EDebrisColliderType__Object    = 0,
	EDebrisColliderType__AirParticles = 1,
	EDebrisColliderType__ObjectB   = 2,
	EDebrisColliderType__ObjectC   = 3,
	EDebrisColliderType__EDebrisColliderType_MAX = 4
};


// Enum FSD.ELandscapeCellFilter
enum class ELandscapeCellFilter : uint8_t
{
	ELandscapeCellFilter__Any      = 0,
	ELandscapeCellFilter__Empty    = 1,
	ELandscapeCellFilter__Filled   = 2,
	ELandscapeCellFilter__Diggable = 3,
	ELandscapeCellFilter__NotDiggable = 4,
	ELandscapeCellFilter__Collidable = 5,
	ELandscapeCellFilter__NotCollidable = 6,
	ELandscapeCellFilter__Rubble   = 7,
	ELandscapeCellFilter__NotRubble = 8,
	ELandscapeCellFilter__ELandscapeCellFilter_MAX = 9
};


// Enum FSD.EDebrisCarvedType
enum class EDebrisCarvedType : uint8_t
{
	EDebrisCarvedType__Large       = 0,
	EDebrisCarvedType__Small       = 1,
	EDebrisCarvedType__EDebrisCarvedType_MAX = 2
};


// Enum FSD.EPathfinderResult
enum class EPathfinderResult : uint8_t
{
	EPathfinderResult__Success     = 0,
	EPathfinderResult__Failed_StartingPointNotFound = 1,
	EPathfinderResult__Failed_EndPointNotFound = 2,
	EPathfinderResult__Failed_PointsNotConnected = 3,
	EPathfinderResult__Failed_UsedTooManyNodes = 4,
	EPathfinderResult__Failed_NotReady = 5,
	EPathfinderResult__Failed_UnknownError = 6,
	EPathfinderResult__EPathfinderResult_MAX = 7
};


// Enum FSD.PFCollisionType
enum class EPFCollisionType : uint8_t
{
	PFCollisionType__SolidWalkable = 0,
	PFCollisionType__Block         = 1,
	PFCollisionType__Danger        = 2,
	PFCollisionType__PFCollisionType_MAX = 3
};


// Enum FSD.DeepPathFinderPreference
enum class EDeepPathFinderPreference : uint8_t
{
	DeepPathFinderPreference__None = 0,
	DeepPathFinderPreference__Floor = 1,
	DeepPathFinderPreference__Walls = 2,
	DeepPathFinderPreference__Ceiling = 3,
	DeepPathFinderPreference__DeepPathFinderPreference_MAX = 4
};


// Enum FSD.DeepPathFinderSize
enum class EDeepPathFinderSize : uint8_t
{
	DeepPathFinderSize__Small      = 0,
	DeepPathFinderSize__Medium     = 1,
	DeepPathFinderSize__Large      = 2,
	DeepPathFinderSize__DeepPathFinderSize_MAX = 3
};


// Enum FSD.DeepPathFinderType
enum class EDeepPathFinderType : uint8_t
{
	DeepPathFinderType__Walk       = 0,
	DeepPathFinderType__WalkUpright = 1,
	DeepPathFinderType__Fly        = 2,
	DeepPathFinderType__MAX        = 3
};


// Enum FSD.EDeepMovementMode
enum class EDeepMovementMode : uint8_t
{
	EDeepMovementMode__Normal      = 0,
	EDeepMovementMode__Flee        = 1,
	EDeepMovementMode__Fly         = 2,
	EDeepMovementMode__BackOff     = 3,
	EDeepMovementMode__EDeepMovementMode_MAX = 4
};


// Enum FSD.EDefendPointState
enum class EDefendPointState : uint8_t
{
	EDefendPointState__Idle        = 0,
	EDefendPointState__Started     = 1,
	EDefendPointState__Completed   = 2,
	EDefendPointState__Failed      = 3,
	EDefendPointState__EDefendPointState_MAX = 4
};


// Enum FSD.EDialogRestriction
enum class EDialogRestriction : uint8_t
{
	EDialogRestriction__None       = 0,
	EDialogRestriction__SinglePlayerOnly = 1,
	EDialogRestriction__MultiPlayerOnly = 2,
	EDialogRestriction__EDialogRestriction_MAX = 3
};


// Enum FSD.EVeteranScaling
enum class EVeteranScaling : uint8_t
{
	EVeteranScaling__NormalEnemy   = 0,
	EVeteranScaling__LargeEnemy    = 1,
	EVeteranScaling__EVeteranScaling_MAX = 2
};


// Enum FSD.EEnemySignificance
enum class EEnemySignificance : uint8_t
{
	EEnemySignificance__Swarmer    = 0,
	EEnemySignificance__Normal     = 1,
	EEnemySignificance__Critical   = 2,
	EEnemySignificance__Critter    = 3,
	EEnemySignificance__EEnemySignificance_MAX = 4
};


// Enum FSD.EBoscoAbillityTargetPreference
enum class EBoscoAbillityTargetPreference : uint8_t
{
	EBoscoAbillityTargetPreference__Self = 0,
	EBoscoAbillityTargetPreference__SelectedTarget = 1,
	EBoscoAbillityTargetPreference__ClosestPlayer = 2,
	EBoscoAbillityTargetPreference__ClosestEnemy = 3,
	EBoscoAbillityTargetPreference__TargetLocation = 4,
	EBoscoAbillityTargetPreference__EBoscoAbillityTargetPreference_MAX = 5
};


// Enum FSD.EDroneActions
enum class EDroneActions : uint8_t
{
	EDroneActions__Wandering       = 0,
	EDroneActions__Mining          = 1,
	EDroneActions__Fighting        = 2,
	EDroneActions__Lighting        = 3,
	EDroneActions__Reviving        = 4,
	EDroneActions__EDroneActions_MAX = 5
};


// Enum FSD.EDropPodState
enum class EDropPodState : uint8_t
{
	EDropPodState__WaitingToDrop   = 0,
	EDropPodState__Drilling        = 1,
	EDropPodState__Landed          = 2,
	EDropPodState__PrepTakeoff     = 3,
	EDropPodState__Departing       = 4,
	EDropPodState__EDropPodState_MAX = 5
};


// Enum FSD.EFSDAchievementType
enum class EFSDAchievementType : uint8_t
{
	EFSDAchievementType__NoStatUsed = 0,
	EFSDAchievementType__IncrementStatPerCall = 1,
	EFSDAchievementType__SetStatIfHighscore = 2,
	EFSDAchievementType__ForceNewStatEachCall = 3,
	EFSDAchievementType__EFSDAchievementType_MAX = 4
};


// Enum FSD.ETargetStateDamageBonusType
enum class ETargetStateDamageBonusType : uint8_t
{
	ETargetStateDamageBonusType__Frozen = 0,
	ETargetStateDamageBonusType__OnFire = 1,
	ETargetStateDamageBonusType__Fleeing = 2,
	ETargetStateDamageBonusType__Staggered = 3,
	ETargetStateDamageBonusType__ETargetStateDamageBonusType_MAX = 4
};


// Enum FSD.EPauseReason
enum class EPauseReason : uint8_t
{
	EPauseReason__MenuActive       = 0,
	EPauseReason__ReconnectController = 1,
	EPauseReason__EPauseReason_MAX = 2
};


// Enum FSD.EVolumeType
enum class EVolumeType : uint8_t
{
	EVolumeType__Master            = 0,
	EVolumeType__SFX               = 1,
	EVolumeType__Music             = 2,
	EVolumeType__VoiceChat         = 3,
	EVolumeType__EVolumeType_MAX   = 4
};


// Enum FSD.EPostProcessingType
enum class EPostProcessingType : uint8_t
{
	EPostProcessingType__GameWorld = 0,
	EPostProcessingType__CharacterSelector = 1,
	EPostProcessingType__EPostProcessingType_MAX = 2
};


// Enum FSD.EItemNotificationType
enum class EItemNotificationType : uint8_t
{
	EItemNotificationType__NewOverclock = 0,
	EItemNotificationType__EItemNotificationType_MAX = 1
};


// Enum FSD.ESteamBranch
enum class ESteamBranch : uint8_t
{
	ESteamBranch__Main             = 0,
	ESteamBranch__Experimental     = 1,
	ESteamBranch__Internal_Testing = 2,
	ESteamBranch__Other            = 3,
	ESteamBranch__ESteamBranch_MAX = 4
};


// Enum FSD.EMoveType
enum class EMoveType : uint8_t
{
	EMoveType__EaseIn              = 0,
	EMoveType__EaseOut             = 1,
	EMoveType__EMoveType_MAX       = 2
};


// Enum FSD.EPingType
enum class EPingType : uint8_t
{
	EPingType__EaseOut             = 0,
	EPingType__Bounce              = 1,
	EPingType__EPingType_MAX       = 2
};


// Enum FSD.ECommunityGoalIndex
enum class ECommunityGoalIndex : uint8_t
{
	ECommunityGoalIndex__KillBroodNexus = 0,
	ECommunityGoalIndex__KillBulkDetonators = 1,
	ECommunityGoalIndex__KillCaveLeeches = 2,
	ECommunityGoalIndex__KillJellyBreeders = 3,
	ECommunityGoalIndex__KillPretorians = 4,
	ECommunityGoalIndex__KillShellbacks = 5,
	ECommunityGoalIndex__KillSpitballers = 6,
	ECommunityGoalIndex__CollectBittergem = 7,
	ECommunityGoalIndex__CollectCompressedGold = 8,
	ECommunityGoalIndex__CollectGold = 9,
	ECommunityGoalIndex__CollectCraftingMaterials = 10,
	ECommunityGoalIndex__GainXP    = 11,
	ECommunityGoalIndex__TestGoal  = 12,
	ECommunityGoalIndex__Count     = 13,
	ECommunityGoalIndex__ECommunityGoalIndex_MAX = 14
};


// Enum FSD.EFSDGoogleAnalyticsProperties
enum class EFSDGoogleAnalyticsProperties : uint8_t
{
	EFSDGoogleAnalyticsProperties__DRG = 0,
	EFSDGoogleAnalyticsProperties__Discord = 1,
	EFSDGoogleAnalyticsProperties__CommunityGoals = 2,
	EFSDGoogleAnalyticsProperties__DRG_Discord = 3,
	EFSDGoogleAnalyticsProperties__All = 4,
	EFSDGoogleAnalyticsProperties__Other = 5,
	EFSDGoogleAnalyticsProperties__EFSDGoogleAnalyticsProperties_MAX = 6
};


// Enum FSD.EFlyingLifterSpeed
enum class EFlyingLifterSpeed : uint8_t
{
	EFlyingLifterSpeed__Normal     = 0,
	EFlyingLifterSpeed__Chasing    = 1,
	EFlyingLifterSpeed__Grabbed    = 2,
	EFlyingLifterSpeed__EFlyingLifterSpeed_MAX = 3
};


// Enum FSD.EGrabberState
enum class EGrabberState : uint8_t
{
	EGrabberState__Chase           = 0,
	EGrabberState__Wander          = 1,
	EGrabberState__Carry           = 2,
	EGrabberState__Flee            = 3,
	EGrabberState__StandBy         = 4,
	EGrabberState__EGrabberState_MAX = 5
};


// Enum FSD.EGrabbedStateCameraMode
enum class EGrabbedStateCameraMode : uint8_t
{
	EGrabbedStateCameraMode__FirstPerson = 0,
	EGrabbedStateCameraMode__ThirdPerson = 1,
	EGrabbedStateCameraMode__EGrabbedStateCameraMode_MAX = 2
};


// Enum FSD.ERicochetBehavior
enum class ERicochetBehavior : uint8_t
{
	ERicochetBehavior__All         = 0,
	ERicochetBehavior__PawnsOnly   = 1,
	ERicochetBehavior__NotPawns    = 2,
	ERicochetBehavior__ERicochetBehavior_MAX = 3
};


// Enum FSD.ECharacterAnimSet
enum class ECharacterAnimSet : uint8_t
{
	ECharacterAnimSet__Pistol      = 0,
	ECharacterAnimSet__Rifle       = 1,
	ECharacterAnimSet__HeavyLow    = 2,
	ECharacterAnimSet__NoHands     = 3,
	ECharacterAnimSet__HeavyDual   = 4,
	ECharacterAnimSet__DualPistol  = 5,
	ECharacterAnimSet__ECharacterAnimSet_MAX = 6
};


// Enum FSD.ESkeletalMeshSkinEffectType
enum class ESkeletalMeshSkinEffectType : uint8_t
{
	ESkeletalMeshSkinEffectType__ReplaceMesh = 0,
	ESkeletalMeshSkinEffectType__AddChildMesh = 1,
	ESkeletalMeshSkinEffectType__ESkeletalMeshSkinEffectType_MAX = 2
};


// Enum FSD.EItemSkinCollectionType
enum class EItemSkinCollectionType : uint8_t
{
	EItemSkinCollectionType__PerCharacter = 0,
	EItemSkinCollectionType__PerItem = 1,
	EItemSkinCollectionType__EItemSkinCollectionType_MAX = 2
};


// Enum FSD.EDetPackUpgrades
enum class EDetPackUpgrades : uint8_t
{
	EDetPackUpgrades__CanPickUp    = 0,
	EDetPackUpgrades__CarveDiameter = 1,
	EDetPackUpgrades__ExplodeOnDeath = 2,
	EDetPackUpgrades__ExtraFearRadius = 3,
	EDetPackUpgrades__ExtraStaggerRadius = 4,
	EDetPackUpgrades__EDetPackUpgrades_MAX = 5
};


// Enum FSD.EPlatformGunUpgrades
enum class EPlatformGunUpgrades : uint8_t
{
	EPlatformGunUpgrades__BiggerPlatform = 0,
	EPlatformGunUpgrades__LessFallDamage = 1,
	EPlatformGunUpgrades__BugRepellant = 2,
	EPlatformGunUpgrades__CubePlatform = 3,
	EPlatformGunUpgrades__EPlatformGunUpgrades_MAX = 4
};


// Enum FSD.EBoscoUpgrades
enum class EBoscoUpgrades : uint8_t
{
	EBoscoUpgrades__MiningSpeedUpgrade = 0,
	EBoscoUpgrades__ExtraRevive    = 1,
	EBoscoUpgrades__ActiveLightRadius = 2,
	EBoscoUpgrades__Missile        = 3,
	EBoscoUpgrades__CryoGrenade    = 4,
	EBoscoUpgrades__SACooldownReduction = 5,
	EBoscoUpgrades__ExtraAbillityCharge = 6,
	EBoscoUpgrades__EBoscoUpgrades_MAX = 7
};


// Enum FSD.EArmorUpgradeType
enum class EArmorUpgradeType : uint8_t
{
	EArmorUpgradeType__RegenDelay  = 0,
	EArmorUpgradeType__RegenRate   = 1,
	EArmorUpgradeType__ReviveInvulnerability = 2,
	EArmorUpgradeType__EArmorUpgradeType_MAX = 3
};


// Enum FSD.ETriggeredStatusEffectType
enum class ETriggeredStatusEffectType : uint8_t
{
	ETriggeredStatusEffectType__ShieldDestroyed = 0,
	ETriggeredStatusEffectType__GrapplingHookReleased = 1,
	ETriggeredStatusEffectType__NONE = 2,
	ETriggeredStatusEffectType__ETriggeredStatusEffectType_MAX = 3
};


// Enum FSD.EArmorRegeneratorUpgrades
enum class EArmorRegeneratorUpgrades : uint8_t
{
	EArmorRegeneratorUpgrades__Radius = 0,
	EArmorRegeneratorUpgrades__Duration = 1,
	EArmorRegeneratorUpgrades__DeployTime = 2,
	EArmorRegeneratorUpgrades__RechargeTime = 3,
	EArmorRegeneratorUpgrades__RechargeCount = 4,
	EArmorRegeneratorUpgrades__PushStatusEffect = 5,
	EArmorRegeneratorUpgrades__EArmorRegeneratorUpgrades_MAX = 6
};


// Enum FSD.ESentryGunUpgradeType
enum class ESentryGunUpgradeType : uint8_t
{
	ESentryGunUpgradeType__MaxAmmo = 0,
	ESentryGunUpgradeType__ReloadSpeed = 1,
	ESentryGunUpgradeType__ExtraSentry = 2,
	ESentryGunUpgradeType__AngleRestriction = 3,
	ESentryGunUpgradeType__ManualTargeting = 4,
	ESentryGunUpgradeType__MaxRange = 5,
	ESentryGunUpgradeType__ESentryGunUpgradeType_MAX = 6
};


// Enum FSD.EGrapplingHookUpgrade
enum class EGrapplingHookUpgrade : uint8_t
{
	EGrapplingHookUpgrade__MaxDistance = 0,
	EGrapplingHookUpgrade__MaxSpeed = 1,
	EGrapplingHookUpgrade__WindUpTime = 2,
	EGrapplingHookUpgrade__EGrapplingHookUpgrade_MAX = 3
};


// Enum FSD.EZiplineGunUpgrades
enum class EZiplineGunUpgrades : uint8_t
{
	EZiplineGunUpgrades__MaxAngle  = 0,
	EZiplineGunUpgrades__MaxDistance = 1,
	EZiplineGunUpgrades__MovementSpeed = 2,
	EZiplineGunUpgrades__FallDamageReduction = 3,
	EZiplineGunUpgrades__EZiplineGunUpgrades_MAX = 4
};


// Enum FSD.EElectricalSMGUpgrades
enum class EElectricalSMGUpgrades : uint8_t
{
	EElectricalSMGUpgrades__AoEChance = 0,
	EElectricalSMGUpgrades__PlasmaBeam = 1,
	EElectricalSMGUpgrades__TurretEMPDischarge = 2,
	EElectricalSMGUpgrades__EElectricalSMGUpgrades_MAX = 3
};


// Enum FSD.EChargedProjectileUpgrades
enum class EChargedProjectileUpgrades : uint8_t
{
	EChargedProjectileUpgrades__ExplodesOnDamage = 0,
	EChargedProjectileUpgrades__AoEDamageInFlight = 1,
	EChargedProjectileUpgrades__PersistentExplosion = 2,
	EChargedProjectileUpgrades__EChargedProjectileUpgrades_MAX = 3
};


// Enum FSD.EFlaregunProjectileUpgrades
enum class EFlaregunProjectileUpgrades : uint8_t
{
	EFlaregunProjectileUpgrades__Duration = 0,
	EFlaregunProjectileUpgrades__EFlaregunProjectileUpgrades_MAX = 1
};


// Enum FSD.EFlaregunUpgrades
enum class EFlaregunUpgrades : uint8_t
{
	EFlaregunUpgrades__AutoReload  = 0,
	EFlaregunUpgrades__EFlaregunUpgrades_MAX = 1
};


// Enum FSD.EProjectileUpgrade
enum class EProjectileUpgrade : uint8_t
{
	EProjectileUpgrade__Velocity   = 0,
	EProjectileUpgrade__Bouncy     = 1,
	EProjectileUpgrade__Lifetime   = 2,
	EProjectileUpgrade__DoOnImpact = 3,
	EProjectileUpgrade__DoOnImpact2 = 4,
	EProjectileUpgrade__EProjectileUpgrade_MAX = 5
};


// Enum FSD.ELineCutterProjectileUpgradeType
enum class ELineCutterProjectileUpgradeType : uint8_t
{
	ELineCutterProjectileUpgradeType__LineSize = 0,
	ELineCutterProjectileUpgradeType__LineSizeMultiplier = 1,
	ELineCutterProjectileUpgradeType__ExplosiveRound = 2,
	ELineCutterProjectileUpgradeType__SetDeployDelay = 3,
	ELineCutterProjectileUpgradeType__AddDeployTime = 4,
	ELineCutterProjectileUpgradeType__ExplodeOnNextProjectile = 5,
	ELineCutterProjectileUpgradeType__DoubleLine = 6,
	ELineCutterProjectileUpgradeType__LineSizeAdd = 7,
	ELineCutterProjectileUpgradeType__SetDeployTime = 8,
	ELineCutterProjectileUpgradeType__RollUntilStop = 9,
	ELineCutterProjectileUpgradeType__Yawing = 10,
	ELineCutterProjectileUpgradeType__ELineCutterProjectileUpgradeType_MAX = 11
};


// Enum FSD.ELineCutterUpgradeType
enum class ELineCutterUpgradeType : uint8_t
{
	ELineCutterUpgradeType__ReverseDirection = 0,
	ELineCutterUpgradeType__ELineCutterUpgradeType_MAX = 1
};


// Enum FSD.EGrenadeUpgradeType
enum class EGrenadeUpgradeType : uint8_t
{
	EGrenadeUpgradeType__MaxGrenades = 0,
	EGrenadeUpgradeType__FuseTime  = 1,
	EGrenadeUpgradeType__EGrenadeUpgradeType_MAX = 2
};


// Enum FSD.EFlareUpgradeType
enum class EFlareUpgradeType : uint8_t
{
	EFlareUpgradeType__Duration    = 0,
	EFlareUpgradeType__MaxFlares   = 1,
	EFlareUpgradeType__ProductionTime = 2,
	EFlareUpgradeType__EFlareUpgradeType_MAX = 3
};


// Enum FSD.ESingleUsableUpgradeType
enum class ESingleUsableUpgradeType : uint8_t
{
	ESingleUsableUpgradeType__UseDuration = 0,
	ESingleUsableUpgradeType__ESingleUsableUpgradeType_MAX = 1
};


// Enum FSD.EExplosionUpgrade
enum class EExplosionUpgrade : uint8_t
{
	EExplosionUpgrade__NOTUSED     = 0,
	EExplosionUpgrade__EExplosionUpgrade_MAX = 1
};


// Enum FSD.EDamageUpgrade
enum class EDamageUpgrade : uint8_t
{
	EDamageUpgrade__Damage         = 0,
	EDamageUpgrade__WeakpointDamageMultiplier = 1,
	EDamageUpgrade__StaggerChance  = 2,
	EDamageUpgrade__StaggerDuration = 3,
	EDamageUpgrade__RadialDamage   = 4,
	EDamageUpgrade__RadialRange    = 5,
	EDamageUpgrade__ArmorDamageMultiplier = 6,
	EDamageUpgrade__FearFactor     = 7,
	EDamageUpgrade__RadialRangeMultiplier = 8,
	EDamageUpgrade__EDamageUpgrade_MAX = 9
};


// Enum FSD.EHitScanBaseUpgradeType
enum class EHitScanBaseUpgradeType : uint8_t
{
	EHitScanBaseUpgradeType__MaxVerticalSpread = 0,
	EHitScanBaseUpgradeType__MaxHorizontalSpread = 1,
	EHitScanBaseUpgradeType__MaxPenetrations = 2,
	EHitScanBaseUpgradeType__WeaponAccuracySpreadMultiplier = 3,
	EHitScanBaseUpgradeType__SpreadPerShot = 4,
	EHitScanBaseUpgradeType__MinSpreadWhileMoving = 5,
	EHitScanBaseUpgradeType__SpreadRecoveryMultiplier = 6,
	EHitScanBaseUpgradeType__MinSpreadWhileSprinting = 7,
	EHitScanBaseUpgradeType__MaxSpread = 8,
	EHitScanBaseUpgradeType__RicochetChance = 9,
	EHitScanBaseUpgradeType__RicochetOnWeakspotOnly = 10,
	EHitScanBaseUpgradeType__RicochetBehaviourAll = 11,
	EHitScanBaseUpgradeType__RicochetBehaviourPawnsOnly = 12,
	EHitScanBaseUpgradeType__RicochetBehaviourNotPawns = 13,
	EHitScanBaseUpgradeType__EHitScanBaseUpgradeType_MAX = 14
};


// Enum FSD.EMultiHitscanUpgradeType
enum class EMultiHitscanUpgradeType : uint8_t
{
	EMultiHitscanUpgradeType__BulletsPerShot = 0,
	EMultiHitscanUpgradeType__EMultiHitscanUpgradeType_MAX = 1
};


// Enum FSD.EInventoryItemUpgradeType
enum class EInventoryItemUpgradeType : uint8_t
{
	EInventoryItemUpgradeType__MovementSpeedWhileUsing = 0,
	EInventoryItemUpgradeType__CooldownRate = 1,
	EInventoryItemUpgradeType__UnJamDuration = 2,
	EInventoryItemUpgradeType__EInventoryItemUpgradeType_MAX = 3
};


// Enum FSD.EAutoMinerUpgradeType
enum class EAutoMinerUpgradeType : uint8_t
{
	EAutoMinerUpgradeType__MiningRate = 0,
	EAutoMinerUpgradeType__MaxFuel = 1,
	EAutoMinerUpgradeType__HeatRemovalOnKill = 2,
	EAutoMinerUpgradeType__HeatRemovalOnDamage = 3,
	EAutoMinerUpgradeType__MovementPenalty = 4,
	EAutoMinerUpgradeType__EAutoMinerUpgradeType_MAX = 5
};


// Enum FSD.EFlameThrowerUpgradeType
enum class EFlameThrowerUpgradeType : uint8_t
{
	EFlameThrowerUpgradeType__StickyFlameDuration = 0,
	EFlameThrowerUpgradeType__LongReach = 1,
	EFlameThrowerUpgradeType__AoEHeat = 2,
	EFlameThrowerUpgradeType__KilledTargetsExplodeChance = 3,
	EFlameThrowerUpgradeType__EFlameThrowerUpgradeType_MAX = 4
};


// Enum FSD.EManualMiningUpgradeType
enum class EManualMiningUpgradeType : uint8_t
{
	EManualMiningUpgradeType__RockMining = 0,
	EManualMiningUpgradeType__OneHitMineralMining = 1,
	EManualMiningUpgradeType__ReceiveBonusMineralNitra = 2,
	EManualMiningUpgradeType__ReceiveBonusMineralGold = 3,
	EManualMiningUpgradeType__EnablePowerAttack = 4,
	EManualMiningUpgradeType__PowerAttackCoolDown = 5,
	EManualMiningUpgradeType__EManualMiningUpgradeType_MAX = 6
};


// Enum FSD.ECryoSprayUpgrades
enum class ECryoSprayUpgrades : uint8_t
{
	ECryoSprayUpgrades__PressureDropMultiplier = 0,
	ECryoSprayUpgrades__PressureGainMultiplier = 1,
	ECryoSprayUpgrades__ChargeupTime = 2,
	ECryoSprayUpgrades__RePressurisationTime = 3,
	ECryoSprayUpgrades__FrozenTargetsCanShatter = 4,
	ECryoSprayUpgrades__AoECold    = 5,
	ECryoSprayUpgrades__LongReach  = 6,
	ECryoSprayUpgrades__ECryoSprayUpgrades_MAX = 7
};


// Enum FSD.ERevolerUpgrades
enum class ERevolerUpgrades : uint8_t
{
	ERevolerUpgrades__OnKillFearFactor = 0,
	ERevolerUpgrades__ERevolerUpgrades_MAX = 1
};


// Enum FSD.EBasicPistol
enum class EBasicPistol : uint8_t
{
	EBasicPistol__ConsecutiveHitsDamageBonus = 0,
	EBasicPistol__EBasicPistol_MAX = 1
};


// Enum FSD.EAutoShotgunUpgrades
enum class EAutoShotgunUpgrades : uint8_t
{
	EAutoShotgunUpgrades__TurretSpecialAttackEnabled = 0,
	EAutoShotgunUpgrades__RateOfFireAndAutoMatic = 1,
	EAutoShotgunUpgrades__EAutoShotgunUpgrades_MAX = 2
};


// Enum FSD.EBurstWeaponUpgrades
enum class EBurstWeaponUpgrades : uint8_t
{
	EBurstWeaponUpgrades__FullBurstHitBonusDamage = 0,
	EBurstWeaponUpgrades__FullBurstStaggerDuraion = 1,
	EBurstWeaponUpgrades__EBurstWeaponUpgrades_MAX = 2
};


// Enum FSD.ESawedOffShotgunUpgrades
enum class ESawedOffShotgunUpgrades : uint8_t
{
	ESawedOffShotgunUpgrades__FearOnShoot = 0,
	ESawedOffShotgunUpgrades__AutoReload = 1,
	ESawedOffShotgunUpgrades__ShockWave = 2,
	ESawedOffShotgunUpgrades__ShotgunJump = 3,
	ESawedOffShotgunUpgrades__ESawedOffShotgunUpgrades_MAX = 4
};


// Enum FSD.EAutoCannonUpgrades
enum class EAutoCannonUpgrades : uint8_t
{
	EAutoCannonUpgrades__FireTimeIncreaseScaleMultiplier = 0,
	EAutoCannonUpgrades__DamageBonusAtFullROF = 1,
	EAutoCannonUpgrades__StatusEffectAtFullROF = 2,
	EAutoCannonUpgrades__StartingFireRate = 3,
	EAutoCannonUpgrades__MaxFireRate = 4,
	EAutoCannonUpgrades__EAutoCannonUpgrades_MAX = 5
};


// Enum FSD.EChargedWeaponUpgrades
enum class EChargedWeaponUpgrades : uint8_t
{
	EChargedWeaponUpgrades__ShotCostAtFullCharge = 0,
	EChargedWeaponUpgrades__ChargeSpeed = 1,
	EChargedWeaponUpgrades__CoolingRate = 2,
	EChargedWeaponUpgrades__HeatPerSecondCharging = 3,
	EChargedWeaponUpgrades__HeatPerSecondCharged = 4,
	EChargedWeaponUpgrades__HeatPerChargedShot = 5,
	EChargedWeaponUpgrades__HeatPerNormalShot = 6,
	EChargedWeaponUpgrades__EChargedWeaponUpgrades_MAX = 7
};


// Enum FSD.EDualMachinePistolsUpgrades
enum class EDualMachinePistolsUpgrades : uint8_t
{
	EDualMachinePistolsUpgrades__TriggerStatusEffectOnEmptyClip = 0,
	EDualMachinePistolsUpgrades__EDualMachinePistolsUpgrades_MAX = 1
};


// Enum FSD.EBoltActionRifleUpgrades
enum class EBoltActionRifleUpgrades : uint8_t
{
	EBoltActionRifleUpgrades__FocusSpeed = 0,
	EBoltActionRifleUpgrades__AimedShotStagger = 1,
	EBoltActionRifleUpgrades__AimedWeakShotKillFearFactor = 2,
	EBoltActionRifleUpgrades__FocusDamageBonus = 3,
	EBoltActionRifleUpgrades__UnZoomedAccuracySpread = 4,
	EBoltActionRifleUpgrades__FocusedWeakspotHitStatusEffect = 5,
	EBoltActionRifleUpgrades__NoGravityOnFocus = 6,
	EBoltActionRifleUpgrades__KillReloadTimeBoost = 7,
	EBoltActionRifleUpgrades__EBoltActionRifleUpgrades_MAX = 8
};


// Enum FSD.EAssaultRifleUpgrade
enum class EAssaultRifleUpgrade : uint8_t
{
	EAssaultRifleUpgrade__KillResetsSpread = 0,
	EAssaultRifleUpgrade__KillTriggerStatusEffect = 1,
	EAssaultRifleUpgrade__EAssaultRifleUpgrade_MAX = 2
};


// Enum FSD.EGatlingGunUpgrade
enum class EGatlingGunUpgrade : uint8_t
{
	EGatlingGunUpgrade__DamageMultiplierAtMaxStabilization = 0,
	EGatlingGunUpgrade__HeatRemovedOnKill = 1,
	EGatlingGunUpgrade__CriticalOverheat = 2,
	EGatlingGunUpgrade__BarrelProximityDamage = 3,
	EGatlingGunUpgrade__EGatlingGunUpgrade_MAX = 4
};


// Enum FSD.EBeltDrivenWeaponUpgrade
enum class EBeltDrivenWeaponUpgrade : uint8_t
{
	EBeltDrivenWeaponUpgrade__BarrelSpinupTime = 0,
	EBeltDrivenWeaponUpgrade__BarrelSpinDownTime = 1,
	EBeltDrivenWeaponUpgrade__EBeltDrivenWeaponUpgrade_MAX = 2
};


// Enum FSD.EAmmoDrivenWeapnUpgradeType
enum class EAmmoDrivenWeapnUpgradeType : uint8_t
{
	EAmmoDrivenWeapnUpgradeType__MaxAmmo = 0,
	EAmmoDrivenWeapnUpgradeType__ClipSize = 1,
	EAmmoDrivenWeapnUpgradeType__RateOfFire = 2,
	EAmmoDrivenWeapnUpgradeType__ReloadSpeed = 3,
	EAmmoDrivenWeapnUpgradeType__RecoilMultiplier = 4,
	EAmmoDrivenWeapnUpgradeType__BurstCount = 5,
	EAmmoDrivenWeapnUpgradeType__BurstRateOfFire = 6,
	EAmmoDrivenWeapnUpgradeType__ActivateBurstFireMode = 7,
	EAmmoDrivenWeapnUpgradeType__ActivateAutomaticFireMode = 8,
	EAmmoDrivenWeapnUpgradeType__HeatUpRateModifier = 9,
	EAmmoDrivenWeapnUpgradeType__EAmmoDrivenWeapnUpgradeType_MAX = 10
};


// Enum FSD.EManualMiningState
enum class EManualMiningState : uint8_t
{
	EManualMiningState__Equipping  = 0,
	EManualMiningState__Mining     = 1,
	EManualMiningState__PowerAttack = 2,
	EManualMiningState__End        = 3,
	EManualMiningState__EManualMiningState_MAX = 4
};


// Enum FSD.EMiningPodMission
enum class EMiningPodMission : uint8_t
{
	EMiningPodMission__DropAndReturn = 0,
	EMiningPodMission__Extraction  = 1,
	EMiningPodMission__DropFromSpacerig = 2,
	EMiningPodMission__EMiningPodMission_MAX = 3
};


// Enum FSD.EMiningPodRampState
enum class EMiningPodRampState : uint8_t
{
	EMiningPodRampState__Closed    = 0,
	EMiningPodRampState__Opening   = 1,
	EMiningPodRampState__Open      = 2,
	EMiningPodRampState__Closing   = 3,
	EMiningPodRampState__EMiningPodRampState_MAX = 4
};


// Enum FSD.EMiningPodState
enum class EMiningPodState : uint8_t
{
	EMiningPodState__Dropping      = 0,
	EMiningPodState__Drilling      = 1,
	EMiningPodState__Landed        = 2,
	EMiningPodState__PrepTakeoff   = 3,
	EMiningPodState__Departing     = 4,
	EMiningPodState__WaitingForGameStart = 5,
	EMiningPodState__InSpace       = 6,
	EMiningPodState__Destroy       = 7,
	EMiningPodState__WaitOnSpacerig = 8,
	EMiningPodState__ExitSpacerig  = 9,
	EMiningPodState__Damaged       = 10,
	EMiningPodState__PoweringUp    = 11,
	EMiningPodState__PoweredUp     = 12,
	EMiningPodState__DeepDiveDeparture = 13,
	EMiningPodState__EMiningPodState_MAX = 14
};


// Enum FSD.EMissionStructure
enum class EMissionStructure : uint8_t
{
	EMissionStructure__SingleMission = 0,
	EMissionStructure__DeepDive    = 1,
	EMissionStructure__EMissionStructure_MAX = 2
};


// Enum FSD.EOutline
enum class EOutline : uint8_t
{
	EOutline__OL_NONE              = 0,
	EOutline__OL_FRIENDLY          = 1,
	EOutline__OL_NEUTRAL           = 2,
	EOutline__OL_ENEMY             = 3,
	EOutline__OL_ITEM              = 4,
	EOutline__EOutline_MAX         = 5
};


// Enum FSD.EAfflictionSocket
enum class EAfflictionSocket : uint8_t
{
	EAfflictionSocket__CenterMass  = 0,
	EAfflictionSocket__Feet        = 1,
	EAfflictionSocket__EAfflictionSocket_MAX = 2
};


// Enum FSD.EPawnStatType
enum class EPawnStatType : uint8_t
{
	EPawnStatType__Multiplicative  = 0,
	EPawnStatType__Additive        = 1,
	EPawnStatType__EPawnStatType_MAX = 2
};


// Enum FSD.EPerkTierState
enum class EPerkTierState : uint8_t
{
	EPerkTierState__Claimable      = 0,
	EPerkTierState__Claimed        = 1,
	EPerkTierState__Locked         = 2,
	EPerkTierState__Unaffordable   = 3,
	EPerkTierState__NotAvailable   = 4,
	EPerkTierState__EPerkTierState_MAX = 5
};


// Enum FSD.EGameOwnerStatus
enum class EGameOwnerStatus : uint8_t
{
	EGameOwnerStatus__Supporter    = 0,
	EGameOwnerStatus__ContentCreator = 1,
	EGameOwnerStatus__Developer    = 2,
	EGameOwnerStatus__EGameOwnerStatus_Max = 3
};


// Enum FSD.ETerrainPlacementBoxType
enum class ETerrainPlacementBoxType : uint8_t
{
	ETerrainPlacementBoxType__NoTerrain = 0,
	ETerrainPlacementBoxType__Terrain = 1,
	ETerrainPlacementBoxType__ETerrainPlacementBoxType_MAX = 2
};


// Enum FSD.ERoomMirror
enum class ERoomMirror : uint8_t
{
	ERoomMirror__None              = 0,
	ERoomMirror__MirrorX           = 1,
	ERoomMirror__MirrorY           = 2,
	ERoomMirror__ERoomMirror_MAX   = 3
};


// Enum FSD.ERoomMirroringSupport
enum class ERoomMirroringSupport : uint8_t
{
	ERoomMirroringSupport__NotAllowed = 0,
	ERoomMirroringSupport__MirrorAroundX = 1,
	ERoomMirroringSupport__MirrorAroundY = 2,
	ERoomMirroringSupport__MirrorBoth = 3,
	ERoomMirroringSupport__ERoomMirroringSupport_MAX = 4
};


// Enum FSD.EItemAdjustmentType
enum class EItemAdjustmentType : uint8_t
{
	EItemAdjustmentType__None      = 0,
	EItemAdjustmentType__Cieling   = 1,
	EItemAdjustmentType__Wall      = 2,
	EItemAdjustmentType__Floor     = 3,
	EItemAdjustmentType__EItemAdjustmentType_MAX = 4
};


// Enum FSD.ECharacterMoveDirection
enum class ECharacterMoveDirection : uint8_t
{
	ECharacterMoveDirection__None  = 0,
	ECharacterMoveDirection__Forward = 1,
	ECharacterMoveDirection__Left  = 2,
	ECharacterMoveDirection__Right = 3,
	ECharacterMoveDirection__Back  = 4,
	ECharacterMoveDirection__ECharacterMoveDirection_MAX = 5
};


// Enum FSD.ECaveEntranceType
enum class ECaveEntranceType : uint8_t
{
	ECaveEntranceType__EntranceAndExit = 0,
	ECaveEntranceType__Entrance    = 1,
	ECaveEntranceType__Exit        = 2,
	ECaveEntranceType__TreassureRoom = 3,
	ECaveEntranceType__ECaveEntranceType_MAX = 4
};


// Enum FSD.ERoomType
enum class ERoomType : uint8_t
{
	ERoomType__Start               = 0,
	ERoomType__End                 = 1,
	ERoomType__MainPath            = 2,
	ERoomType__Gold                = 3,
	ERoomType__ERoomType_MAX       = 4
};


// Enum FSD.ERessuplyPodState
enum class ERessuplyPodState : uint8_t
{
	ERessuplyPodState__ReadyToDrop = 0,
	ERessuplyPodState__Dropping    = 1,
	ERessuplyPodState__Landed      = 2,
	ERessuplyPodState__ERessuplyPodState_MAX = 3
};


// Enum FSD.EEnemyPlacementMask
enum class EEnemyPlacementMask : uint8_t
{
	EEnemyPlacementMask__Ground    = 0,
	EEnemyPlacementMask__Spawner   = 1,
	EEnemyPlacementMask__Cieling   = 2,
	EEnemyPlacementMask__EEnemyPlacementMask_MAX = 3
};


// Enum FSD.ERoomPieceSide
enum class ERoomPieceSide : uint8_t
{
	ERoomPieceSide__Up             = 0,
	ERoomPieceSide__Down           = 1,
	ERoomPieceSide__Forward        = 2,
	ERoomPieceSide__Backward       = 3,
	ERoomPieceSide__Right          = 4,
	ERoomPieceSide__Left           = 5,
	ERoomPieceSide__ERoomPieceSide_MAX = 6
};


// Enum FSD.EBPUWPMandatoryUpdateCheck
enum class EBPUWPMandatoryUpdateCheck : uint8_t
{
	EBPUWPMandatoryUpdateCheck__NotStarted = 0,
	EBPUWPMandatoryUpdateCheck__Waiting = 1,
	EBPUWPMandatoryUpdateCheck__NoUpdates = 2,
	EBPUWPMandatoryUpdateCheck__UpdateNeeded = 3,
	EBPUWPMandatoryUpdateCheck__EBPUWPMandatoryUpdateCheck_MAX = 4
};


// Enum FSD.EFSDNATType
enum class EFSDNATType : uint8_t
{
	EFSDNATType__Open              = 0,
	EFSDNATType__Moderate          = 1,
	EFSDNATType__Strict            = 2,
	EFSDNATType__Unknown           = 3,
	EFSDNATType__EFSDNATType_MAX   = 4
};


// Enum FSD.EFSDMissionStatus
enum class EFSDMissionStatus : uint8_t
{
	EFSDMissionStatus__SpaceRig    = 0,
	EFSDMissionStatus__InGame      = 1,
	EFSDMissionStatus__Starting    = 2,
	EFSDMissionStatus__EscapeSequence = 3,
	EFSDMissionStatus__EFSDMissionStatus_MAX = 4
};


// Enum FSD.ESharkEnemyState
enum class ESharkEnemyState : uint8_t
{
	ESharkEnemyState__Idle         = 0,
	ESharkEnemyState__Circling     = 1,
	ESharkEnemyState__Attacking    = 2,
	ESharkEnemyState__Vulnerable   = 3,
	ESharkEnemyState__Dive         = 4,
	ESharkEnemyState__ESharkEnemyState_MAX = 5
};


// Enum FSD.EMaggotAnimationState
enum class EMaggotAnimationState : uint8_t
{
	EMaggotAnimationState__Idle    = 0,
	EMaggotAnimationState__Moving  = 1,
	EMaggotAnimationState__EMaggotAnimationState_MAX = 2
};


// Enum FSD.EMoveDirection
enum class EMoveDirection : uint8_t
{
	EMoveDirection__None           = 0,
	EMoveDirection__Forward        = 1,
	EMoveDirection__Left           = 2,
	EMoveDirection__Right          = 3,
	EMoveDirection__Back           = 4,
	EMoveDirection__EMoveDirection_MAX = 5
};


// Enum FSD.EFSDSteelSeriesEffect
enum class EFSDSteelSeriesEffect : uint8_t
{
	EFSDSteelSeriesEffect__HealthDamage = 0,
	EFSDSteelSeriesEffect__ShieldDamage = 1,
	EFSDSteelSeriesEffect__Flare   = 2,
	EFSDSteelSeriesEffect__MissionSuccess = 3,
	EFSDSteelSeriesEffect__None    = 4,
	EFSDSteelSeriesEffect__EFSDSteelSeriesEffect_MAX = 5
};


// Enum FSD.ETemperatureIntensity
enum class ETemperatureIntensity : uint8_t
{
	ETemperatureIntensity__Cold3   = 0,
	ETemperatureIntensity__Cold2   = 1,
	ETemperatureIntensity__Cold1   = 2,
	ETemperatureIntensity__Heat1   = 3,
	ETemperatureIntensity__Heat2   = 4,
	ETemperatureIntensity__Heat3   = 5,
	ETemperatureIntensity__ETemperatureIntensity_MAX = 6
};


// Enum FSD.EThrownGrenadeItemState
enum class EThrownGrenadeItemState : uint8_t
{
	EThrownGrenadeItemState__NotEquipped = 0,
	EThrownGrenadeItemState__Cooking = 1,
	EThrownGrenadeItemState__Throwing = 2,
	EThrownGrenadeItemState__EThrownGrenadeItemState_MAX = 3
};


// Enum FSD.EItemUpgradeStatus
enum class EItemUpgradeStatus : uint8_t
{
	EItemUpgradeStatus__Locked     = 0,
	EItemUpgradeStatus__AvailableCannotAfford = 1,
	EItemUpgradeStatus__AvailableCanAfford = 2,
	EItemUpgradeStatus__Owned      = 3,
	EItemUpgradeStatus__Equipped   = 4,
	EItemUpgradeStatus__EItemUpgradeStatus_MAX = 5
};


// Enum FSD.EHeadVanityType
enum class EHeadVanityType : uint8_t
{
	EHeadVanityType__HairOnly      = 0,
	EHeadVanityType__HeadGearOnly  = 1,
	EHeadVanityType__HeadGearOnly_UseArmorMaterial = 2,
	EHeadVanityType__HairAndHeadGear = 3,
	EHeadVanityType__HairAndHeadGear_UseArmorMaterial = 4,
	EHeadVanityType__EHeadVanityType_MAX = 5
};


// Enum FSD.EArmorSetLegs
enum class EArmorSetLegs : uint8_t
{
	EArmorSetLegs__Invalid         = 0,
	EArmorSetLegs__LeftUpperLeg    = 1,
	EArmorSetLegs__LeftLowerLeg    = 2,
	EArmorSetLegs__LeftFoot        = 3,
	EArmorSetLegs__LeftToe         = 4,
	EArmorSetLegs__RightUpperLeg   = 5,
	EArmorSetLegs__RightLowerLeg   = 6,
	EArmorSetLegs__RightFoot       = 7,
	EArmorSetLegs__RightToe        = 8,
	EArmorSetLegs__EArmorSetLegs_MAX = 9
};


// Enum FSD.ESpawnSettings
enum class ESpawnSettings : uint8_t
{
	ESpawnSettings__Normal         = 0,
	ESpawnSettings__NoSpawning     = 1,
	ESpawnSettings__SpawnAll       = 2,
	ESpawnSettings__ESpawnSettings_MAX = 3
};


// Enum FSD.EArmorSetArms
enum class EArmorSetArms : uint8_t
{
	EArmorSetArms__Invalid         = 0,
	EArmorSetArms__LeftShoulder    = 1,
	EArmorSetArms__RightShoulder   = 2,
	EArmorSetArms__LeftUpperArm    = 3,
	EArmorSetArms__LeftLowerArm1   = 4,
	EArmorSetArms__LeftLowerArm2   = 5,
	EArmorSetArms__LeftHand        = 6,
	EArmorSetArms__LeftHandAttach  = 7,
	EArmorSetArms__RightUpperArm   = 8,
	EArmorSetArms__RightLowerArm1  = 9,
	EArmorSetArms__RightLowerArm2  = 10,
	EArmorSetArms__RightHand       = 11,
	EArmorSetArms__RightHandAttach = 12,
	EArmorSetArms__EArmorSetArms_MAX = 13
};


// Enum FSD.EArmorSetTorso
enum class EArmorSetTorso : uint8_t
{
	EArmorSetTorso__Invalid        = 0,
	EArmorSetTorso__UpperTorso     = 1,
	EArmorSetTorso__MiddleTorso    = 2,
	EArmorSetTorso__LowerTorso     = 3,
	EArmorSetTorso__UpperBack      = 4,
	EArmorSetTorso__MiddleBack     = 5,
	EArmorSetTorso__LowerBack      = 6,
	EArmorSetTorso__LeftHip        = 7,
	EArmorSetTorso__RightHip       = 8,
	EArmorSetTorso__FrontHip       = 9,
	EArmorSetTorso__LeftUpperLeg   = 10,
	EArmorSetTorso__LeftLowerLeg   = 11,
	EArmorSetTorso__LeftFoot       = 12,
	EArmorSetTorso__LeftToe        = 13,
	EArmorSetTorso__RightUpperLeg  = 14,
	EArmorSetTorso__RightLowerLeg  = 15,
	EArmorSetTorso__RightFoot      = 16,
	EArmorSetTorso__RightToe       = 17,
	EArmorSetTorso__EArmorSetTorso_MAX = 18
};


// Enum FSD.EWoodLouseState
enum class EWoodLouseState : uint8_t
{
	EWoodLouseState__Unfolded      = 0,
	EWoodLouseState__Folded        = 1,
	EWoodLouseState__Size          = 2,
	EWoodLouseState__EWoodLouseState_MAX = 3
};


// Enum FSD.EUWPBPTrialCheck
enum class EUWPBPTrialCheck : uint8_t
{
	EUWPBPTrialCheck__NotStarted   = 0,
	EUWPBPTrialCheck__Waiting      = 1,
	EUWPBPTrialCheck__Expired      = 2,
	EUWPBPTrialCheck__Valid        = 3,
	EUWPBPTrialCheck__EUWPBPTrialCheck_MAX = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FSD.MissionShouts
// 0x0038
struct FMissionShouts
{
	class UDialogDataAsset*                            AfterDropPodExit;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            OnExitPodDescending;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            OnExitPodArrived;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            OnCompletion;                                             // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            OnDeepDiveExitPodDescending;                              // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            OnDeepDiveObjectiveCompletion;                            // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            OnDeepDiveAllReturnObjectivesCompleted;                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.CreditsReward
// 0x0020
struct FCreditsReward
{
	struct FText                                       Description;                                              // 0x0000(0x0018) (Edit, BlueprintVisible)
	int                                                amount;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ObjectiveMissionIcon
// 0x0018
struct FObjectiveMissionIcon
{
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.HeroInfo
// 0x0080
struct FHeroInfo
{
	struct FString                                     HeroAnalyticsID;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       HeroName;                                                 // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UTexture2D*                                  HeroIcon;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  SmallHeroIcon;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  HeroFullSizeImage;                                        // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                HeroColor;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       HeroShortDescription;                                     // 0x0050(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       HeroLongDescription;                                      // 0x0068(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FSD.AttachMeshesAfflictionItem
// 0x0018
struct FAttachMeshesAfflictionItem
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.RandRange
// 0x0008
struct FRandRange
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.FrozenAfflictionItem
// 0x0018
struct FFrozenAfflictionItem
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRandRange                                  MeshScale;                                                // 0x0008(0x0008) (Edit)
	EFrozenBitsSize                                    FrozenBitsSize;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              ChanceToSpawn;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.QueuedMontage
// 0x0010
struct FQueuedMontage
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ForceUpdate;                                              // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.EnemyGroupDescriptorItem
// 0x0008
struct FEnemyGroupDescriptorItem
{
	class UEnemyDescriptor*                            EnemyDescriptor;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.IRandRange
// 0x0008
struct FIRandRange
{
	int                                                Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.RandIntervalItem
// 0x000C
struct FRandIntervalItem
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FIRandRange                                 Range;                                                    // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FSD.RandInterval
// 0x0010
struct FRandInterval
{
	TArray<struct FRandIntervalItem>                   Intervals;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.ItemAnimationItem
// 0x0018
struct FItemAnimationItem
{
	class UAnimMontage*                                FP_CharacterMontage;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                TP_CharacterMontage;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ItemMontage;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.RecoilSettings
// 0x0028
struct FRecoilSettings
{
	struct FRandRange                                  RecoilRoll;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FRandRange                                  RecoilPitch;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FRandRange                                  RecoilYaw;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               CanRecoilDown;                                            // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              SpringStiffness;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CriticalDampening;                                        // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.DestructableBodypartItem
// 0x0018
struct FDestructableBodypartItem
{
	unsigned char                                      MaterialIndex;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               ArmorBones;                                               // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FSD.ArmorHealthSubItem
// 0x0028
struct FArmorHealthSubItem
{
	float                                              Health;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FName>                               AdditionalBones;                                          // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FName                                       OptionalFXSocket;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.ArmorHealthItem
// 0x0018
struct FArmorHealthItem
{
	unsigned char                                      MaterialIndex;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HealthIsBreakPercentage;                                  // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<struct FArmorHealthSubItem>                 ArmorBones;                                               // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FSD.CoolDownProgressStyle
// 0x0040
struct FCoolDownProgressStyle
{
	class UTexture2D*                                  Icon;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IconTint;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UClass*                                      WidgetOverride;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   AudioCoolDownFinished;                                    // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.AttackerInfo
// 0x0010
struct FAttackerInfo
{
	TWeakObjectPtr<class AActor>                       Attacker;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PositionIndex;                                            // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AttackerRadius;                                           // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.AutoMinerDamageItem
// 0x0030
struct FAutoMinerDamageItem
{
	TWeakObjectPtr<class UPrimitiveComponent>          Target;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FVector_NetQuantize                         Location;                                                 // 0x0008(0x000C) (Transient)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // 0x0014(0x000C) (Transient)
	class UFSDPhysicalMaterial*                        Material;                                                 // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      BoneIndex;                                                // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.HeatSource
// 0x0008
struct FHeatSource
{
	float                                              Temperature;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Intensity;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.BiomeDebrisInfluencerVariant
// 0x0010
struct FBiomeDebrisInfluencerVariant
{
	class UCaveInfluencer*                             Influencer;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomWeight;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.BiomeNoiseItem
// 0x0038
struct FBiomeNoiseItem
{
	class UFloodFillSettings*                          CeilingNoise;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDetailNoise*                                CeilingDetailNoise;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UFloodFillSettings*                          WallNoise;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDetailNoise*                                WallDetailNoise;                                          // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UFloodFillSettings*                          FloorNoise;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDetailNoise*                                FloorDetailNoise;                                         // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.RandFloatIntervalItem
// 0x000C
struct FRandFloatIntervalItem
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRandRange                                  Range;                                                    // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FSD.RandFloatInterval
// 0x0010
struct FRandFloatInterval
{
	TArray<struct FRandFloatIntervalItem>              Intervals;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.ResourceSpawner
// 0x0018
struct FResourceSpawner
{
	class UResourceData*                               Resource;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRandFloatInterval                          AmountToSpawn;                                            // 0x0008(0x0010) (Edit)
};

// ScriptStruct FSD.BiomeEnemyEntry
// 0x0010
struct FBiomeEnemyEntry
{
	class UEnemyDescriptor*                            enemy;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsDistruptive;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.BoscoLightSetting
// 0x000C
struct FBoscoLightSetting
{
	struct FColor                                      Color;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.RequiredMissionItem
// 0x0018
struct FRequiredMissionItem
{
	class UMissionTemplate*                            MissionTemplate;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionComplexity*                          Complexity;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMissionDuration*                            Duration;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.VeinResource
// 0x0028
struct FVeinResource
{
	class UVeinResourceCreator*                        ResourceCreator;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              VeinLengthToGenerate;                                     // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x000C(0x001C) MISSED OFFSET
};

// ScriptStruct FSD.CarvedResource
// 0x0010
struct FCarvedResource
{
	class UCarvedResourceCreator*                      ResourceCreator;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	int                                                amount;                                                   // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Overflow;                                                 // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.GemResourceAmount
// 0x0010
struct FGemResourceAmount
{
	class UGemResourceCreator*                         GemCreator;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                amount;                                                   // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.CollectableSpawnableItem
// 0x0010
struct FCollectableSpawnableItem
{
	class UCollectableResourceData*                    Resource;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                amount;                                                   // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.RoomNodeBase
// 0x0001
struct FRoomNodeBase
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FSD.RoomEntrance
// 0x0020
struct FRoomEntrance
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               IsBLocked;                                                // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	ECaveEntranceType                                  EntranceType;                                             // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	int                                                PathObstacleID;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct FSD.RoomLinePoint
// 0x0030
struct FRoomLinePoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HRange;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VRange;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CielingNoiseRange;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WallNoiseRange;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloorNoiseRange;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Cielingheight;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeightScale;                                              // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloorDepth;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloorAngle;                                               // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.RoomLine
// 0x0038
struct FRoomLine
{
	class UFloodFillSettings*                          WallNoiseOverride;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UFloodFillSettings*                          CeilingNoiseOverride;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UFloodFillSettings*                          FloorNoiseOverride;                                       // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FRoomLinePoint>                      Points;                                                   // 0x0018(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FVector>                             RightVectors;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct FSD.WeightedLinePoint
// 0x001C
struct FWeightedLinePoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoiseRange;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SkewFactor;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FillAmount;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.Pillar
// 0x0020
struct FPillar
{
	class UFloodFillSettings*                          NoiseOverride;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FWeightedLinePoint>                  Points;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              NoiseScale;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              EndcapScale;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct FSD.Rotator_NoQuantize
// 0x0000 (0x000C - 0x000C)
struct FRotator_NoQuantize : public FRotator
{

};

// ScriptStruct FSD.RoomBox
// 0x0030
struct FRoomBox
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator_NoQuantize                         Rotation;                                                 // 0x000C(0x000C) (Edit, EditConst)
	struct FVector                                     Extends;                                                  // 0x0018(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              NoiseRange;                                               // 0x0024(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UFloodFillSettings*                          Noise;                                                    // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct FSD.RoomItem
// 0x0040
struct FRoomItem
{
	class UClass*                                      Spawnable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     AdjustmentDirection;                                      // 0x0014(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EItemAdjustmentType                                Adjustment;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FVector                                     Scale;                                                    // 0x0024(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator_NoQuantize                         Rotation;                                                 // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.GeneratedRoom
// 0x0068
struct FGeneratedRoom
{
	class UTerrainMaterial*                            Material;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FRoomLine>                           Lines;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FPillar>                             Pillars;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FRoomBox>                            BoxCarvers;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FRoomBox>                            BoxFillers;                                               // 0x0038(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FRoomEntrance>                       Entrances;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FRoomItem>                           RoomItems;                                                // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct FSD.RoomGeneratorItem
// 0x0018
struct FRoomGeneratorItem
{
	class URoomGeneratorBase*                          RoomGenerator;                                            // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0008(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Rotation;                                                 // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.RoomNode
// 0x00DF (0x00E0 - 0x0001)
struct FRoomNode : public FRoomNodeBase
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	ERoomType                                          RoomType;                                                 // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                CarvePass;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Radius;                                                   // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<int>                                        EntranceIDs;                                              // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
	TArray<int>                                        ExitIDs;                                                  // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
	TArray<struct FRoomEntrance>                       RoomEntrances;                                            // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
	bool                                               CanHaveEnemies;                                           // 0x0050(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	TArray<struct FGeneratedRoom>                      Rooms;                                                    // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
	float                                              ResourceMultiplier;                                       // 0x0068(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              WeightedResourceAmount;                                   // 0x006C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FRoomGeneratorItem>                  RoomGenerators;                                           // 0x0070(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x60];                                      // 0x0080(0x0060) MISSED OFFSET
};

// ScriptStruct FSD.TunnelPath
// 0x0010
struct FTunnelPath
{
	TArray<struct FVector>                             Path;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
};

// ScriptStruct FSD.TunnelNode
// 0x00BF (0x00C0 - 0x0001)
struct FTunnelNode : public FRoomNodeBase
{
	int                                                EntranceRoomID;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ExitRoomID;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRoomEntrance                               Entrance;                                                 // 0x0008(0x0020) (Edit, BlueprintVisible, EditConst)
	struct FRoomEntrance                               Exit;                                                     // 0x0028(0x0020) (Edit, BlueprintVisible, EditConst)
	struct FTunnelPath                                 Path;                                                     // 0x0048(0x0010) (Edit, BlueprintVisible, Transient, EditConst)
	int                                                ID;                                                       // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              WeightedResourceAmount;                                   // 0x005C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0060(0x0060) MISSED OFFSET
};

// ScriptStruct FSD.CaveInfluence
// 0x0010
struct FCaveInfluence
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Range;                                                    // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.GeneratedInfluenceSet
// 0x0020
struct FGeneratedInfluenceSet
{
	class UObject*                                     CaveInfluencer;                                           // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NetworkID;                                                // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FCaveInfluence>                      CaveInfluences;                                           // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.GeneratedInfluenceSets
// 0x0018
struct FGeneratedInfluenceSets
{
	TArray<struct FGeneratedInfluenceSet>              InfluenceSets;                                            // 0x0000(0x0010) (ZeroConstructor, Transient)
	bool                                               IsValid;                                                  // 0x0010(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.GeneratedInstantCarver
// 0x0020
struct FGeneratedInstantCarver
{
	class UClass*                                      Carver;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              RotationPitch;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RotationYaw;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RotationRoll;                                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.GeneratedInstantCarverLists
// 0x0010
struct FGeneratedInstantCarverLists
{
	TArray<struct FGeneratedInstantCarver>             Carvers;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.MatrixWithExactSync
// 0x0040
struct FMatrixWithExactSync
{
	float                                              Values[0x10];                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.LevelGenerationCarver
// 0x0070
struct FLevelGenerationCarver
{
	struct FMatrixWithExactSync                        Transform;                                                // 0x0000(0x0040)
	class USTLMeshCarver*                              MeshCarver;                                               // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 ConvexCarver;                                             // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStaticMeshCarver*                           StaticMeshCarver;                                         // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              ConvexExpensiveNoise;                                     // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	ECarveOptionsCellSize                              CarveCellSize;                                            // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	class UTerrainMaterial*                            TerrainMaterial;                                          // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	ECarveFilterType                                   Filter;                                                   // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.LevelGenerationCarverLists
// 0x0010
struct FLevelGenerationCarverLists
{
	TArray<struct FLevelGenerationCarver>              Carvers;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.GeneratedInstantCarvers
// 0x0028
struct FGeneratedInstantCarvers
{
	TArray<struct FGeneratedInstantCarverLists>        Carvers;                                                  // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<struct FLevelGenerationCarverLists>         levelCarvers;                                             // 0x0010(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.PathObstacle
// 0x0010
struct FPathObstacle
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.CaveInfluenceSet
// 0x0010
struct FCaveInfluenceSet
{
	TArray<struct FCaveInfluence>                      CaveInfluences;                                           // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.InfluenceMap
// 0x0050
struct FInfluenceMap
{
	TMap<class UObject*, struct FCaveInfluenceSet>     CaveInfluences;                                           // 0x0000(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.DebrisCapsule
// 0x001C
struct FDebrisCapsule
{
	struct FVector                                     Start;                                                    // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     End;                                                      // 0x000C(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Radius;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct FSD.LerpingPercent
// 0x0008
struct FLerpingPercent
{
	unsigned char                                      TargetPercent;                                            // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.CountDownFloat
// 0x000C
struct FCountDownFloat
{
	float                                              CountDownDuration;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.ReplicatedCharacterData
// 0x0014
struct FReplicatedCharacterData
{
	TWeakObjectPtr<class AActor>                       Target;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              TemperatureEffect;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x000C(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.ProjectileImpact
// 0x0030
struct FProjectileImpact
{
	struct FVector_NetQuantize                         Location;                                                 // 0x0000(0x000C)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // 0x000C(0x000C)
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMat;                                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                BoneIndex;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.CharacterShouts
// 0x00B0
struct FCharacterShouts
{
	class UDialogDataAsset*                            Attention;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            Follow;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            standingDown;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            Downed;                                                   // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            RequestRevive;                                            // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            Revived;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            Resupply;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            FriendlyFire;                                             // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            KillCry;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            Dead;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            Cheating;                                                 // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            ResourceFull;                                             // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            ResourceFullNoDonkey;                                     // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            CallDonkey;                                               // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            Depositing;                                               // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            DepositingNoDonkey;                                       // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            OutOfAmmo;                                                // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            Reloading;                                                // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            CharacterSelected;                                        // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            UpgradeBought;                                            // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            WaitingInDropPod;                                         // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            Carrying;                                                 // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.ActiveOutline
// 0x000C
struct FActiveOutline
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct FSD.MissionShoutQueueItem
// 0x0010
struct FMissionShoutQueueItem
{
	class UDialogDataAsset*                            Shout;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.MixerAnnouncement
// 0x0028
struct FMixerAnnouncement
{
	struct FString                                     UserName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       Text;                                                     // 0x0010(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct FSD.CommunityGoalStateData
// 0x0010
struct FCommunityGoalStateData
{
	bool                                               isGoal;                                                   // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isRecruitment;                                            // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              TimeLeftSeconds;                                          // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentGoalPeriodID;                                      // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.CommunityFactionData
// 0x0038
struct FCommunityFactionData
{
	bool                                               IsValid;                                                  // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FString>                             Goals;                                                    // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<float>                                      Values;                                                   // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<int>                                        Members;                                                  // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct FSD.CommunityRewardNotification
// 0x0040
struct FCommunityRewardNotification
{
	struct FText                                       Text;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  Icon;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IconColor;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct FSD.ActionIconMapping
// 0x0028
struct FActionIconMapping
{
	struct FKey                                        ActionKey;                                                // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UTexture2D*                                  Icon;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               DoNotTint;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.CraftingCost
// 0x0010
struct FCraftingCost
{
	class UResourceData*                               Resource;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.DecalData
// 0x0018
struct FDecalData
{
	class UMaterialInterface*                          DecalMaterial;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecalSize;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecalDepth;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeSpan;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeDuration;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FSD.CellNoise
// 0x002C
struct FCellNoise
{
	int                                                Seed;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CellSize;                                                 // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumValues;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinCellValue;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxCellValue;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x001C(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.DebrisCellNoiseParameters
// 0x0010
struct FDebrisCellNoiseParameters
{
	class UDebrisCellNoise*                            Noise;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinCellValue;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxCellValue;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.UDebrisCarveMesh
// 0x0010
struct FUDebrisCarveMesh
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Probablity;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.DebrisInfluence
// 0x0010
struct FDebrisInfluence
{
	class UObject*                                     CaveInfluencer;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.DebrisItemActorItem
// 0x0010
struct FDebrisItemActorItem
{
	class UClass*                                      Actor;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Probability;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.DebrisStaticMesh
// 0x0030
struct FDebrisStaticMesh
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EDebrisMeshCollisionProfile                        CollisionProfile;                                         // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              Probablity;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   DestroyedSound;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DestroyedParticles;                                       // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Fragile;                                                  // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EDebrisMeshShadows                                 CastShadows;                                              // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Durable;                                                  // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnWhenCarving;                                         // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OnlySpawnWhenCarving;                                     // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct FSD.UDebrisStaticCarveMesh
// 0x0010
struct FUDebrisStaticCarveMesh
{
	class UStaticMeshCarver*                           Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Probablity;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.DebrisWhenCarving
// 0x0030
struct FDebrisWhenCarving
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	class UDebrisInstances*                            Debris;                                                   // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct FSD.GrenadeExplodeOperationData
// 0x0034
struct FGrenadeExplodeOperationData
{
	int                                                OperationNumber;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitPos;                                                   // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalOffset;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalSqueeze;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Noise;                                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BurnThickness;                                            // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseBulletBurntMaterial;                                   // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DissolvePlatforms;                                        // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
};

// ScriptStruct FSD.CarveWithColliderOperationData
// 0x0068
struct FCarveWithColliderOperationData
{
	int                                                OperationNumber;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UStaticMesh*                                 StaticMesh;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTerrainMaterial*                            Material;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ECarveFilterType                                   CarveFilter;                                              // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FMatrixWithExactSync                        Transform;                                                // 0x001C(0x0040) (Edit)
	float                                              ExpensiveNoise;                                           // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EPreciousMaterialOptions                           Precious;                                                 // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECarveOptionsCellSize                              CarveCellSize;                                            // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
};

// ScriptStruct FSD.CarveWithSTLMeshOperationData
// 0x0068
struct FCarveWithSTLMeshOperationData
{
	int                                                OperationNumber;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class USTLMeshCarver*                              STLMeshCarver;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMeshCarver*                           StaticMeshCarver;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTerrainMaterial*                            Material;                                                 // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ECarveFilterType                                   CarveFilter;                                              // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EPreciousMaterialOptions                           Precious;                                                 // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	struct FMatrixWithExactSync                        Transform;                                                // 0x0024(0x0040) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.PickaxeDigOperationData
// 0x0028
struct FPickaxeDigOperationData
{
	int                                                OperationNumber;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitPos;                                                   // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Dir;                                                      // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DigSize;                                                  // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Miner;                                                    // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.RemoveFloatingIslandOperationData
// 0x0004
struct FRemoveFloatingIslandOperationData
{
	int                                                OperationNumber;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.DrillOperationData
// 0x002C
struct FDrillOperationData
{
	int                                                OperationNumber;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitPos;                                                   // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Dir;                                                      // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CarveSize;                                                // 0x001C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CarveNoise;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.MeltOperationData
// 0x0020
struct FMeltOperationData
{
	int                                                OperationNumber;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FVector>                             Points;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor)
	float                                              Radius;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.TerrainLateJoinData
// 0x0098
struct FTerrainLateJoinData
{
	TArray<struct FGrenadeExplodeOperationData>        explosions;                                               // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<struct FCarveWithColliderOperationData>     colliderCarves;                                           // 0x0010(0x0010) (ZeroConstructor, Transient)
	TArray<struct FCarveWithSTLMeshOperationData>      meshCarves;                                               // 0x0020(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPickaxeDigOperationData>            pickAxe;                                                  // 0x0030(0x0010) (ZeroConstructor, Transient)
	TArray<struct FRemoveFloatingIslandOperationData>  RemoveFloating;                                           // 0x0040(0x0010) (ZeroConstructor, Transient)
	TArray<struct FDrillOperationData>                 drills;                                                   // 0x0050(0x0010) (ZeroConstructor, Transient)
	TArray<struct FMeltOperationData>                  melts;                                                    // 0x0060(0x0010) (ZeroConstructor, Transient)
	TArray<int>                                        DebrisInstanceComponentPairs;                             // 0x0070(0x0010) (ZeroConstructor, Transient)
	TArray<uint32_t>                                   visibleChunks;                                            // 0x0080(0x0010) (ZeroConstructor, Transient)
	int                                                OperationCount;                                           // 0x0090(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.EncodedChunkId
// 0x0004
struct FEncodedChunkId
{
	uint32_t                                           ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.CSGRaycastHitInfo
// 0x001C
struct FCSGRaycastHitInfo
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Material;                                                 // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.DeepDiveTemplateItem
// 0x0018
struct FDeepDiveTemplateItem
{
	class UMissionTemplate*                            mission;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMissionDuration*>                    AllowedDurations;                                         // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FSD.DeepDiveLoaderSequence
// 0x0028
struct FDeepDiveLoaderSequence
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FSD.DeepDiveLoaderSequence.LevelSequence
};

// ScriptStruct FSD.DeepDiveBank
// 0x0010
struct FDeepDiveBank
{
	class UDeepDive*                                   NormalDeepDive;                                           // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDeepDive*                                   HardDeepDive;                                             // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.DeepDiveRewardItem
// 0x0010
struct FDeepDiveRewardItem
{
	class USchematic*                                  Schematic;                                                // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                Stage;                                                    // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               WasAlreadyGiven;                                          // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct FSD.CommunityReward
// 0x0010
struct FCommunityReward
{
	class UResourceData*                               Resource;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.DeepRepPath
// 0x00D0
struct FDeepRepPath
{
	struct FVector                                     PathBase;                                                 // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      PathLength;                                               // 0x000C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EDeepMovementState                                 State;                                                    // 0x000D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      StateBits;                                                // 0x000E(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	struct FVector                                     PathOffsets[0x10];                                        // 0x0010(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.FakeMoverState
// 0x0060
struct FFakeMoverState
{
	float                                              TickRate;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TickTime;                                                 // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     PrevPos;                                                  // 0x0008(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     NextPos;                                                  // 0x0014(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     PrevSurfaceNormal;                                        // 0x0020(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     NextSurfaceNormal;                                        // 0x002C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AccumulatedTime;                                          // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0048(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               NearSurface;                                              // 0x0054(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	float                                              SignedDistToSurface;                                      // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.DialogStruct
// 0x0050
struct FDialogStruct
{
	bool                                               Enabled;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FSD.DialogStruct.Audio
	EDialogRestriction                                 Restriction;                                              // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.VeteranComposition
// 0x0020
struct FVeteranComposition
{
	struct FRandFloatInterval                          Normal;                                                   // 0x0000(0x0010) (Edit)
	struct FRandFloatInterval                          Large;                                                    // 0x0010(0x0010) (Edit)
};

// ScriptStruct FSD.DiscordServerInviteData
// 0x0078
struct FDiscordServerInviteData
{
	struct FString                                     code;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     serverID;                                                 // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     serverDescription;                                        // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     serverName;                                               // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                presenceCount;                                            // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                memberCount;                                              // 0x0044(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     iconKey;                                                  // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     bannerKey;                                                // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     splashKey;                                                // 0x0068(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct FSD.DiscordRewardNotification
// 0x0040
struct FDiscordRewardNotification
{
	struct FText                                       Text;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  Icon;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IconColor;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct FSD.DiscordEoMData
// 0x0020
struct FDiscordEoMData
{
	struct FString                                     nick;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     userId;                                                   // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.BarleySpawnItem
// 0x0010
struct FBarleySpawnItem
{
	class UResourceData*                               Resource;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.EncounterRareCritterItem
// 0x0010
struct FEncounterRareCritterItem
{
	class URareCritterDescriptor*                      Critter;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Chance;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ManagedEncounterItem
// 0x0010
struct FManagedEncounterItem
{
	class UEnemyDescriptor*                            Descriptor;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                amount;                                                   // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.PrePlacedEncounterItem
// 0x0050
struct FPrePlacedEncounterItem
{
	class UEnemyDescriptor*                            Descriptor;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Location;                                                 // 0x0010(0x0030) (Transient, IsPlainOldData)
	class AEncounterActor*                             EncounterActor;                                           // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.EncounterManagerItem
// 0x0030
struct FEncounterManagerItem
{
	TArray<struct FManagedEncounterItem>               ManagedEcnounterItems;                                    // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPrePlacedEncounterItem>             PrePlacedEncounterItems;                                  // 0x0010(0x0010) (ZeroConstructor, Transient)
	int                                                ID;                                                       // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsRoom;                                                   // 0x0024(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0025(0x000B) MISSED OFFSET
};

// ScriptStruct FSD.TestAnimInstanceProxy
// 0x0020 (0x06B0 - 0x0690)
struct FTestAnimInstanceProxy : public FAnimInstanceProxy
{
	bool                                               IsAlive;                                                  // 0x0690(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0691(0x0003) MISSED OFFSET
	float                                              RandomStartPosition;                                      // 0x0694(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Speed;                                                    // 0x0698(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsMoving;                                                 // 0x069C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x069D(0x0003) MISSED OFFSET
	float                                              WalkCyclePlayRate;                                        // 0x06A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x06A4(0x000C) MISSED OFFSET
};

// ScriptStruct FSD.EnemyDebris
// 0x0018
struct FEnemyDebris
{
	float                                              InfluenceRange;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class UDebrisBase*>                         Debris;                                                   // 0x0008(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct FSD.SpawnRarityItem
// 0x0008
struct FSpawnRarityItem
{
	float                                              Duration;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Rarity;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.SpawnRarityModifierItem
// 0x0008
struct FSpawnRarityModifierItem
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.SpawnQueueItem
// 0x0080
struct FSpawnQueueItem
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty FSD.SpawnQueueItem.enemyClass
	class UEnemyDescriptor*                            enemy;                                                    // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // 0x0030(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0040(0x0040) MISSED OFFSET
};

// ScriptStruct FSD.SpawnEffectItem
// 0x0030 (0x003C - 0x000C)
struct FSpawnEffectItem : public FFastArraySerializerItem
{
	ECreatureSize                                      CreatureSize;                                             // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FVector_NetQuantize                         Location;                                                 // 0x0010(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0028(0x0014) MISSED OFFSET
};

// ScriptStruct FSD.SpawnEffectsArray
// 0x0018 (0x00C8 - 0x00B0)
struct FSpawnEffectsArray : public FFastArraySerializer
{
	TArray<struct FSpawnEffectItem>                    Items;                                                    // 0x00B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.WaveEntry
// 0x0038
struct FWaveEntry
{
	class UClass*                                      WaveControllerLoaded;                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x000C(0x0028) UNKNOWN PROPERTY: SoftClassProperty FSD.WaveEntry.WaveController
};

// ScriptStruct FSD.FakeMoverPropulsion
// 0x0014
struct FFakeMoverPropulsion
{
	float                                              Speed;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AirAcceleration;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AirDeceleration;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GroundAcceleration;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GroundDeceleration;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.FakeMoverTarget
// 0x001C
struct FFakeMoverTarget
{
	float                                              InfluenceDistance;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetDistance;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GetCloserAirAcceleration;                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GetAwayAirAcceleration;                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GetCloserGroundAcceleration;                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GetAwayGroundAcceleration;                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDistance;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.FakeMoveState
// 0x0024
struct FFakeMoveState
{
	struct FVector                                     Pos1;                                                     // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Pos2;                                                     // 0x000C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Vel;                                                      // 0x0018(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.FlareMeta
// 0x0024
struct FFlareMeta
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Inhibit;                                                  // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              InvRadius;                                                // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Pos;                                                      // 0x0014(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               Moving;                                                   // 0x0020(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct FSD.FloatPerkRank
// 0x0008
struct FFloatPerkRank
{
	int                                                Tier;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.FloatPerkRankValue
// 0x0008
struct FFloatPerkRankValue
{
	int                                                RankIndex;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.FloatPerkEffect
// 0x0030
struct FFloatPerkEffect
{
	class UFloatPerkActivation*                        PerkActivation;                                           // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       FormattedDescription;                                     // 0x0008(0x0018) (Edit)
	TArray<struct FFloatPerkRankValue>                 RankValues;                                               // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FSD.LayeredNoise
// 0x0010
struct FLayeredNoise
{
	class UFloodFillSettings*                          Noise;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.FormationDataItem
// 0x0010
struct FFormationDataItem
{
	struct FVector                                     Direction;                                                // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              distance;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct FSD.BlueprintFriend
// 0x0038
struct FBlueprintFriend
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     RealName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EFriendOnlineStatusEnum                            OnlineStatus;                                             // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FString                                     UniqueNetId;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct FSD.PendingRewardsStats
// 0x00B0
struct FPendingRewardsStats
{
	TMap<class UResourceData*, float>                  AllResources;                                             // 0x0000(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TMap<class UResourceData*, float>                  CollectedResources;                                       // 0x0050(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	bool                                               PrimaryObjectiveCompleted;                                // 0x00A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               SecondaryObjectiveCompleted;                              // 0x00A1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00A2(0x0002) MISSED OFFSET
	float                                              TimePlayed;                                               // 0x00A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                EnemiesKilled;                                            // 0x00A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.XPReward
// 0x0020
struct FXPReward
{
	struct FText                                       Description;                                              // 0x0000(0x0018) (Edit, BlueprintVisible)
	int                                                XP;                                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.PendingRewards
// 0x0190
struct FPendingRewards
{
	struct FPendingRewardsStats                        StartStats;                                               // 0x0000(0x00B0) (Transient)
	struct FPendingRewardsStats                        EndStats;                                                 // 0x00B0(0x00B0) (Transient)
	TArray<struct FCreditsReward>                      CreditsRewardEntries;                                     // 0x0160(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                CreditsReward;                                            // 0x0170(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	TArray<struct FXPReward>                           XPRewardEntries;                                          // 0x0178(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                XPReward;                                                 // 0x0188(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasData;                                                 // 0x018C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsRecording;                                             // 0x018D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWasRewarded;                                             // 0x018E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x018F(0x0001) MISSED OFFSET
};

// ScriptStruct FSD.GameStateSeamlessTravelStorage
// 0x0150
struct FGameStateSeamlessTravelStorage
{
	class UDifficultySetting*                          ChosenDifficulty;                                         // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<class UPlayer*, bool>                         PlayerShouldStartInMedbay;                                // 0x0008(0x0050) (ZeroConstructor, Transient)
	TMap<class UResourceData*, float>                  Resources;                                                // 0x0058(0x0050) (ZeroConstructor, Transient)
	float                                              MissionTime;                                              // 0x00A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TMap<struct FName, float>                          StoredFloatValues;                                        // 0x00B0(0x0050) (ZeroConstructor, Transient)
	TMap<struct FName, int>                            StoredIntValues;                                          // 0x0100(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.BossFight
// 0x0018
struct FBossFight
{
	TWeakObjectPtr<class AActor>                       BossActor;                                                // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UEnemyComponent>              EnemyComponent;                                           // 0x0008(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UEnemyHealthComponent>        HealthComponent;                                          // 0x0010(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct FSD.FadeData
// 0x0040
struct FFadeData
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDebugOutput;                                         // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UClass*                                      WidgetType;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UUserWidget>                  Widget;                                                   // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              CurrentFade;                                              // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TargetFade;                                               // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FadeSpeed;                                                // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Delay;                                                    // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFadeWorldOnly;                                           // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCapFramerate;                                            // 0x0029(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	struct FString                                     DebugMsg;                                                 // 0x0030(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.SpaceRigNotification
// 0x0040
struct FSpaceRigNotification
{
	struct FText                                       Text;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  Icon;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IconColor;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.DiscordRichPresenceData
// 0x00B8
struct FDiscordRichPresenceData
{
	struct FString                                     State;                                                    // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     details;                                                  // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                startTimestamp;                                           // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                endTimestamp;                                             // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     largeImageKey;                                            // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     largeImageText;                                           // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     smallImageKey;                                            // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     smallImageText;                                           // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     partyId;                                                  // 0x0068(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                partySize;                                                // 0x0078(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                partyMax;                                                 // 0x007C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     matchSecret;                                              // 0x0080(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     joinSecret;                                               // 0x0090(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     spectateSecret;                                           // 0x00A0(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               instance;                                                 // 0x00B0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.FSDChatMessage
// 0x0038
struct FFSDChatMessage
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	EChatMessageType                                   MsgType;                                                  // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Sender;                                                   // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EChatSenderType                                    SenderType;                                               // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FString                                     Msg;                                                      // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.GeneratedMissionGroup
// 0x0010
struct FGeneratedMissionGroup
{
	TArray<class UGeneratedMission*>                   AvailableMissions;                                        // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.FSDTagsAttitude
// 0x0018
struct FFSDTagsAttitude
{
	struct FGameplayTag                                Friendly;                                                 // 0x0000(0x0008) (Edit)
	struct FGameplayTag                                Neutral;                                                  // 0x0008(0x0008) (Edit)
	struct FGameplayTag                                Hostile;                                                  // 0x0010(0x0008) (Edit)
};

// ScriptStruct FSD.FSDTagsRoot
// 0x0018
struct FFSDTagsRoot
{
	struct FFSDTagsAttitude                            Attitude;                                                 // 0x0000(0x0018) (Edit)
};

// ScriptStruct FSD.ReplicatedObjectives
// 0x0018
struct FReplicatedObjectives
{
	bool                                               HasReplicated;                                            // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UObjective*>                          Objectives;                                               // 0x0008(0x0010) (ExportObject, ZeroConstructor, Transient)
};

// ScriptStruct FSD.GeneratedMissionSeed
// 0x0040
struct FGeneratedMissionSeed
{
	int                                                Seed;                                                     // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                GlobalSeed;                                               // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UBiome*                                      Biome;                                                    // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMissionTemplate*                            Template;                                                 // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMissionComplexity*                          ComplexityLimit;                                          // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMissionDuration*                            DurationLimit;                                            // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMissionMutator*                             Mutator;                                                  // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMissionWarning*                             Warning;                                                  // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	EMissionStructure                                  MissionStructure;                                         // 0x0038(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.FSDLocalizedChatMessage
// 0x0048
struct FFSDLocalizedChatMessage
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	EChatMessageType                                   MsgType;                                                  // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Sender;                                                   // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       Msg;                                                      // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FText>                               Arguments;                                                // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.ScaledEffect
// 0x0010
struct FScaledEffect
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.HUDElementData
// 0x0008
struct FHUDElementData
{
	EHUDVisibilityMode                                 Mode;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Version;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.HUDElements
// 0x0078
struct FHUDElements
{
	struct FHUDElementData                             OnScreenHelp;                                             // 0x0000(0x0008)
	struct FHUDElementData                             EnemyHealth;                                              // 0x0008(0x0008)
	struct FHUDElementData                             RadarDepth;                                               // 0x0010(0x0008)
	struct FHUDElementData                             PlayerHealthShield;                                       // 0x0018(0x0008)
	struct FHUDElementData                             PlayerNameClassIcon;                                      // 0x0020(0x0008)
	struct FHUDElementData                             PlayerItems;                                              // 0x0028(0x0008)
	struct FHUDElementData                             PlayerResources;                                          // 0x0030(0x0008)
	struct FHUDElementData                             WeaponInfo;                                               // 0x0038(0x0008)
	struct FHUDElementData                             Grenades;                                                 // 0x0040(0x0008)
	struct FHUDElementData                             FlashLight;                                               // 0x0048(0x0008)
	struct FHUDElementData                             Flares;                                                   // 0x0050(0x0008)
	struct FHUDElementData                             Crosshair;                                                // 0x0058(0x0008)
	struct FHUDElementData                             Objectives;                                               // 0x0060(0x0008)
	struct FHUDElementData                             TeamDisplay;                                              // 0x0068(0x0008)
	struct FHUDElementData                             SentryGunDisplay;                                         // 0x0070(0x0008)
};

// ScriptStruct FSD.CharacterOptions
// 0x0001
struct FCharacterOptions
{
	bool                                               GrapplingHookAutoSwitch;                                  // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.CustomKeyBinding
// 0x0030
struct FCustomKeyBinding
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EKeyBindingAxis                                    ActionAxis;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FKey                                        Key;                                                      // 0x0010(0x0018) (Edit, BlueprintVisible)
	int                                                Index;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ControllerSettings
// 0x000C
struct FControllerSettings
{
	float                                              AimInnerDeadZone;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AimSensitivity;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AimOuterAcceleration;                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.PlayerProgress
// 0x0008
struct FPlayerProgress
{
	int                                                PlayerRank;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PlayerStars;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.CharacterProgress
// 0x0020
struct FCharacterProgress
{
	class UClass*                                      CharacterClass;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentXP;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NextLevelXP;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TimesRetired;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.EndMissionResult
// 0x0060
struct FEndMissionResult
{
	struct FPlayerProgress                             PreviousPlayerProgress;                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly)
	struct FPlayerProgress                             PlayerProgress;                                           // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly)
	struct FCharacterProgress                          PreviousCharacterProgress;                                // 0x0010(0x0020) (BlueprintVisible, BlueprintReadOnly)
	struct FCharacterProgress                          CharacterProgress;                                        // 0x0030(0x0020) (BlueprintVisible, BlueprintReadOnly)
	class USchematic*                                  RewardedSchematic;                                        // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bReadyForUse;                                             // 0x0058(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.MissionStatCounter
// 0x0024
struct FMissionStatCounter
{
	struct FGuid                                       PlayerClassID;                                            // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MissionStatID;                                            // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.MissionStatSave
// 0x0018
struct FMissionStatSave
{
	TArray<struct FMissionStatCounter>                 Counters;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               bCharacterLevelUpFixed;                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bBoughtVanityItemsFixed;                                  // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bBoughtEquipmentUpgradesFixed;                            // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCampaignsCompletedFixed;                                 // 0x0013(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               WeaponUpgradesFixed;                                      // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct FSD.MilestoneCounter
// 0x0014
struct FMilestoneCounter
{
	struct FGuid                                       KPIGuid;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                Tier;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.MilestoneSave
// 0x0010
struct FMilestoneSave
{
	TArray<struct FMilestoneCounter>                   ClaimedKPIRewards;                                        // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.PerkClaimEntry
// 0x0014
struct FPerkClaimEntry
{
	struct FGuid                                       PerkID;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                currentRank;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.PerkClaimsSave
// 0x0010
struct FPerkClaimsSave
{
	TArray<struct FPerkClaimEntry>                     PerkEntries;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.PerkEquipEntry
// 0x0020
struct FPerkEquipEntry
{
	struct FGuid                                       characterID;                                              // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               PerkIDs;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.CharacterPerksSave
// 0x0010
struct FCharacterPerksSave
{
	TArray<struct FPerkEquipEntry>                     CharacterPerks;                                           // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.SchematicSave
// 0x0038
struct FSchematicSave
{
	TArray<struct FGuid>                               ForgedSchematics;                                         // 0x0000(0x0010) (ZeroConstructor)
	struct FGuid                                       PendingReward;                                            // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               OwnedSchematics;                                          // 0x0020(0x0010) (ZeroConstructor)
	bool                                               bFirstSchematicMessageShown;                              // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.UnLockedMissionParameters
// 0x0020
struct FUnLockedMissionParameters
{
	TArray<struct FGuid>                               UnLockedComplexities;                                     // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FGuid>                               UnLockedDurations;                                        // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.ActiveCampaignItem
// 0x0014
struct FActiveCampaignItem
{
	struct FGuid                                       CampaignID;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                Progress;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.WeeklyCampaignItem
// 0x000C
struct FWeeklyCampaignItem
{
	int                                                LastCompletedWeek;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LastStartedWeek;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RewardedProgress;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.CampaignSave
// 0x0048
struct FCampaignSave
{
	struct FActiveCampaignItem                         ActiveCampaign;                                           // 0x0000(0x0014)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FGuid>                               CompletedCampaigns;                                       // 0x0018(0x0010) (ZeroConstructor)
	int                                                ActiveCampaignWeek;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FWeeklyCampaignItem                         WeeklySave;                                               // 0x002C(0x000C)
	struct FWeeklyCampaignItem                         MaxtrixCoreHuntSave;                                      // 0x0038(0x000C)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.DeepDiveSaveRewardItem
// 0x0014
struct FDeepDiveSaveRewardItem
{
	struct FGuid                                       RewardID;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                Stage;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.DeepDiveItem
// 0x0038
struct FDeepDiveItem
{
	int                                                Progress;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BestTime;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FDeepDiveSaveRewardItem>             Rewards;                                                  // 0x0010(0x0010) (ZeroConstructor)
	bool                                               HasEverCompleted;                                         // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FGuid>                               RewardsGiven;                                             // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.DeepDiveSave
// 0x0070
struct FDeepDiveSave
{
	struct FDeepDiveItem                               NormalSave;                                               // 0x0000(0x0038)
	struct FDeepDiveItem                               EliteSave;                                                // 0x0038(0x0038)
};

// ScriptStruct FSD.CharacterVanityLoadout
// 0x0080
struct FCharacterVanityLoadout
{
	struct FGuid                                       EquippedHeadItemID;                                       // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedBeardItemID;                                      // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedArmorItemID;                                      // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedBeardColorItemID;                                 // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedSkinColorItemID;                                  // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedEyebrowsItemID;                                   // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedMoustacheItemID;                                  // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedSideburnsItemID;                                  // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.CharacterVanitySave
// 0x0128
struct FCharacterVanitySave
{
	TArray<struct FCharacterVanityLoadout>             Loadouts;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FGuid>                               UnLockedVanityItemIDs;                                    // 0x0010(0x0010) (ZeroConstructor)
	struct FGuid                                       EquippedHeadItemID;                                       // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedBeardItemID;                                      // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedArmorItemID;                                      // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedBeardColorItemID;                                 // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedSkinColorItemID;                                  // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedEyebrowsItemID;                                   // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedMoustacheItemID;                                  // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedSideburnsItemID;                                  // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData)
	class UHeadVanityItem*                             EquippedHeadItem;                                         // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBeardVanityItem*                            EquippedBeardItem;                                        // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UArmorVanityItem*                            EquippedArmorSetItem;                                     // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBeardColorVanityItem*                       EquippedBeardColor;                                       // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class USkinColorVanityItem*                        EquippedSkinColor;                                        // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UVanityItem*>                         UnLockedVanityItems;                                      // 0x00C8(0x0010) (ZeroConstructor)
	TMap<EVanitySlot, struct FGuid>                    NewVanityItems;                                           // 0x00D8(0x0050) (ZeroConstructor)
};

// ScriptStruct FSD.ItemLoadout
// 0x0084
struct FItemLoadout
{
	struct FGuid                                       PrimaryWeapon;                                            // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SecondaryWeapon;                                          // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       TraversalTool;                                            // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ClassTool;                                                // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Armor;                                                    // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Flare;                                                    // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MiningTool;                                               // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Grenade;                                                  // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                IconIndex;                                                // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.VictoryPoseSave
// 0x0030
struct FVictoryPoseSave
{
	struct FGuid                                       EquippedVictoryPose;                                      // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               UnlockedVictoryPoses;                                     // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FGuid>                               EquippedVictoryPoses;                                     // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.CharacterSave
// 0x0220
struct FCharacterSave
{
	struct FGuid                                       SavegameID;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                XP;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               HasCompletedRetirementCampaign;                           // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                TimesRetired;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RetiredCharacterLevels;                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               HasSeenRetirementRewardScreen;                            // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UClass*                                      CharacterClass;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FCharacterVanitySave                        Vanity;                                                   // 0x0030(0x0128)
	int                                                SelectedLoadout;                                          // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FItemLoadout                                Loadout;                                                  // 0x015C(0x0084)
	TArray<struct FItemLoadout>                        Loadouts;                                                 // 0x01E0(0x0010) (ZeroConstructor)
	struct FVictoryPoseSave                            VictoryPose;                                              // 0x01F0(0x0030)
};

// ScriptStruct FSD.ForgingSave
// 0x0008
struct FForgingSave
{
	int                                                XP;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AwardsGiven;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.DrinkSave
// 0x0058
struct FDrinkSave
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty FSD.DrinkSave.UnlockedDrinks
	bool                                               HasUnlockedSpecial;                                       // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.ItemUpgradeSelection
// 0x0058
struct FItemUpgradeSelection
{
	struct FGuid                                       WeaponID;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               EquippedUpgrades;                                         // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FGuid>                               PermanentUpgrades;                                        // 0x0020(0x0010) (ZeroConstructor)
	struct FGuid                                       EquippedOverclock;                                        // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EquippedSkin;                                             // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               OverclockingUnlocked;                                     // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.UpgradeLoadout
// 0x0050
struct FUpgradeLoadout
{
	TMap<struct FGuid, struct FItemUpgradeSelection>   Loadout;                                                  // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct FSD.ItemNotificationInfo
// 0x0004
struct FItemNotificationInfo
{
	int                                                NotificationFlags;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.SkinList
// 0x0050
struct FSkinList
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty FSD.SkinList.Skins
};

// ScriptStruct FSD.EventRewardSaveItem
// 0x0020
struct FEventRewardSaveItem
{
	struct FGuid                                       CategoryID;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               ClassOptions;                                             // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.EventRewardSave
// 0x0050
struct FEventRewardSave
{
	TMap<struct FGuid, struct FEventRewardSaveItem>    PendingRewards;                                           // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct FSD.UINotificationItem
// 0x0010
struct FUINotificationItem
{
	TArray<struct FGuid>                               NotificationIDs;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.ItemUINotifications
// 0x0068
struct FItemUINotifications
{
	TArray<struct FUINotificationItem>                 UINotifications;                                          // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0010(0x0050) UNKNOWN PROPERTY: SetProperty FSD.ItemUINotifications.UINotificationSet
	class UFSDSaveGame*                                SaveGame;                                                 // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.ResourcesSave
// 0x00A0
struct FResourcesSave
{
	TMap<struct FGuid, float>                          OwnedResources;                                           // 0x0000(0x0050) (ZeroConstructor)
	TMap<class UResourceData*, float>                  Resources;                                                // 0x0050(0x0050) (ZeroConstructor)
};

// ScriptStruct FSD.WatchedTutorial
// 0x0018
struct FWatchedTutorial
{
	struct FString                                     TutorialName;                                             // 0x0000(0x0010) (ZeroConstructor)
	int                                                count;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ConsoleOptionsInSaveGame
// 0x00D0
struct FConsoleOptionsInSaveGame
{
	struct FControllerSettings                         ControllerSettings;                                       // 0x0000(0x000C)
	struct FHUDElements                                HUDElements;                                              // 0x000C(0x0078)
	bool                                               SaveGameOptionsValid;                                     // 0x0084(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bTutorialHintsEnabled;                                    // 0x0085(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowFPS;                                                 // 0x0086(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowNetInfo;                                             // 0x0087(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HeadbobbingScale;                                         // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              UIDPIScale;                                               // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              volumeMaster;                                             // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              volumeSFX;                                                // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              volumeMusic;                                              // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               InvertMouse;                                              // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	struct FString                                     Language;                                                 // 0x00A8(0x0010) (ZeroConstructor)
	struct FCharacterOptions                           CharacterOptions;                                         // 0x00B8(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	TArray<struct FCustomKeyBinding>                   CustomKeyBindings;                                        // 0x00C0(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.OptionsInSaveGame
// 0x0008
struct FOptionsInSaveGame
{
	bool                                               SaveGameOptionsValid;                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ScreenMode;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.ItemRefundResourceItem
// 0x0018
struct FItemRefundResourceItem
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	float                                              amount;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ItemRefundListItem
// 0x0068
struct FItemRefundListItem
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	TMap<struct FGuid, struct FItemRefundResourceItem> Resources;                                                // 0x0010(0x0050) (Edit, ZeroConstructor, EditConst)
	float                                              CreditCost;                                               // 0x0060(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.WidgetPing
// 0x0020
struct FWidgetPing
{
	TWeakObjectPtr<class UWidget>                      Widget;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct FSD.WidgetFade
// 0x001C
struct FWidgetFade
{
	TWeakObjectPtr<class UUserWidget>                  Widget;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0008(0x0014) MISSED OFFSET
};

// ScriptStruct FSD.WidgetTextCounter
// 0x001C
struct FWidgetTextCounter
{
	TWeakObjectPtr<class UTextBlock>                   Widget;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0008(0x0014) MISSED OFFSET
};

// ScriptStruct FSD.CustomCounter
// 0x0028
struct FCustomCounter
{
	struct FScriptDelegate                             OnCount;                                                  // 0x0000(0x0014) (ZeroConstructor, InstancedReference)
	TWeakObjectPtr<class UObject>                      Owner;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.WidgetMover
// 0x0028
struct FWidgetMover
{
	TWeakObjectPtr<class UWidget>                      Widget;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct FSD.UpgradeCostItem
// 0x0010
struct FUpgradeCostItem
{
	TArray<int>                                        Amounts;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FSD.GVisibilityGroups
// 0x0058
struct FGVisibilityGroups
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty FSD.GVisibilityGroups.AllGroups
	class UHUDVisibilityGroup*                         EnemyHealth;                                              // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.GDMissionStats
// 0x00F0
struct FGDMissionStats
{
	class UMissionStat*                                TimePlayed;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                DistanceTravelled;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                EnemiesKilled;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                MineralsMined;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                MissionCompleted;                                         // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                SoloMissionCompleted;                                     // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                SecondaryMissionCompleted;                                // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                CharacterLevelUp;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                VanityItemsBought;                                        // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                ItemUpgradesBought;                                       // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                DrinkablesConsumed;                                       // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                DrinkableRoundsOrdered;                                   // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                CampaignMissionsCompleted;                                // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                CampaignsCompleted;                                       // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                TimesDowned;                                              // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                TimesPassedOut;                                           // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                WeaponsUnlockedStat;                                      // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                DeepDivesCompleted;                                       // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                EliteDeepDivesCompleted;                                  // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                CosmeticsCrafted;                                         // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                WeaponSkinsCrafted;                                       // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                WeaponOverclocksCrafted;                                  // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                CraftingMasteryLevel;                                     // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                DefendBlackBoxObjectivesCompleted;                        // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                RepairMiniMuleObjectivesCompleted;                        // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                DeepDiveCompletedBestTime;                                // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                EliteDeepDiveCompletedBestTime;                           // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMissionStat*                                SpecialBeersUnlocked;                                     // 0x00D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UMissionStat*>                        AllMissionStats;                                          // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct FSD.GDMilestones
// 0x0010
struct FGDMilestones
{
	TArray<class UMilestoneAsset*>                     Milestones;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.GDPerks
// 0x0020
struct FGDPerks
{
	TArray<class UPerkAsset*>                          PerkAssets;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        RequiredClaimsPerTier;                                    // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FSD.GDBarMenu
// 0x0010
struct FGDBarMenu
{
	TArray<class UDrinkableDataAsset*>                 Drinkables;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.GDItemCategoryIDs
// 0x0030
struct FGDItemCategoryIDs
{
	class UCategoryID*                                 OverclockID;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCategoryID*                                 ItemSkinID;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCategoryID*                                 VanityID;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCategoryID*                                 WeaponID;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCategoryID*                                 CraftingID;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCategoryID*                                 ForgeID;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.GDDamageClasses
// 0x0040
struct FGDDamageClasses
{
	class UDamageClass*                                Falling;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDamageClass*                                Fire;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDamageClass*                                Heat;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDamageClass*                                Physical;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDamageClass*                                Kinetic;                                                  // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDamageClass*                                Explosive;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDamageClass*                                Cold;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDamageClass*                                Ice;                                                      // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.GDStats
// 0x00F0
struct FGDStats
{
	class UPawnStat*                                   MaxAmmo;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   MaxShields;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   MaxHealth;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   DamageResistance;                                         // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   FireResistance;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   ColdResistance;                                           // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   MeleeAttackDamage;                                        // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   MovementSpeed;                                            // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   SprintSpeed;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   CarryingSpeedModifier;                                    // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   ReviveSpeed;                                              // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   DepositSpeed;                                             // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   RessuplySpeed;                                            // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   RedSugarHeal;                                             // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   CarryingCapacity;                                         // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   ZiplineSpeed;                                             // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   MaxAcceleration;                                          // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   GroundFriction;                                           // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   BreakingDeceleration;                                     // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   SlideDownIce;                                             // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   FriendlyFire;                                             // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   FlareThrowingStrength;                                    // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   CaveLeechSense;                                           // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   IronWill;                                                 // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   MorkiteMining;                                            // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   GoldMining;                                               // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   RockMiningStrength;                                       // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   DirtMiningStrength;                                       // 0x00D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   ResourceMiningStrength;                                   // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   PowerAttackCooldownRate;                                  // 0x00E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.GDResources
// 0x00D8
struct FGDResources
{
	class UResourceData*                               CreditsResource;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               MOMResource;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               GoldResource;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               NitraResource;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               HollomiteResource;                                        // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               MagniteResource;                                          // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               NeromiteResource;                                         // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               QuantriteResource;                                        // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               UmaniteResource;                                          // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               CropaniteResource;                                        // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               DystrumResource;                                          // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               IronResource;                                             // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               EnorResource;                                             // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               BismorResource;                                           // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               Barly1;                                                   // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               Barly2;                                                   // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               Barly3;                                                   // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               Barly4;                                                   // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGemResourceData*                            JadizResource;                                            // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGemResourceData*                            BittergemResource;                                        // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGemResourceData*                            MotherlodeGemResource;                                    // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               RedSugarResource;                                         // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UResourceData*                               BlankSchematics;                                          // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UResourceData*>                       CraftingResources;                                        // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<class UResourceData*>                       AllResources;                                             // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct FSD.GDTerrainTypes
// 0x0050
struct FGDTerrainTypes
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FSD.GDTerrainTypes.Rock
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FSD.GDTerrainTypes.Dirt
};

// ScriptStruct FSD.GDGameStatsTracking
// 0x0020
struct FGDGameStatsTracking
{
	struct FGameplayTagContainer                       TotalEnemyKillsFilter;                                    // 0x0000(0x0020) (Edit)
};

// ScriptStruct FSD.GDAudio
// 0x0040
struct FGDAudio
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FSD.GDAudio.FirstPersonHitscanAttenuationOverride
	class UClass*                                      ReverbActor;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SmallCaveRadius;                                          // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MediumCaveRadius;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LargeCaveRadius;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.GDDifficulty
// 0x0010
struct FGDDifficulty
{
	TArray<class UDifficultySetting*>                  DifficultySettings;                                       // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.RetirementCostItem
// 0x0050
struct FRetirementCostItem
{
	TMap<class UResourceData*, int>                    RetirementCost;                                           // 0x0000(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.GDCharacterRetirement
// 0x00C0
struct FGDCharacterRetirement
{
	TMap<class UPlayerCharacterID*, class UClass*>     Campaigns;                                                // 0x0000(0x0050) (Edit, ZeroConstructor)
	TMap<class UPlayerCharacterID*, struct FRetirementCostItem> RetirementCost;                                           // 0x0050(0x0050) (Edit, ZeroConstructor)
	TArray<float>                                      CreditsCostMultipliers;                                   // 0x00A0(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      ResourceCostMultipliers;                                  // 0x00B0(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FSD.GDPlayerAndCharacterProgression
// 0x00A0
struct FGDPlayerAndCharacterProgression
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty FSD.GDPlayerAndCharacterProgression.RankedHeroClasses
	unsigned char                                      UnknownData01[0x10];                                      // 0x0010(0x0010) UNKNOWN PROPERTY: ArrayProperty FSD.GDPlayerAndCharacterProgression.TestHeroClasses
	TArray<class UClass*>                              LoadedClasses;                                            // 0x0020(0x0010) (ZeroConstructor, Transient)
	TArray<struct FText>                               PlayerRankNames;                                          // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        CharacterXPLevels;                                        // 0x0040(0x0010) (Edit, ZeroConstructor)
	TMap<struct FGuid, class UPlayerCharacterID*>      PlayerCharacterIDs;                                       // 0x0050(0x0050) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct FSD.TrackPositionList
// 0x0038
struct FTrackPositionList
{
	struct FName                                       TrackName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Positions;                                                // 0x0008(0x0010) (ZeroConstructor)
	TArray<TWeakObjectPtr<class UGemTracker>>          Trackers;                                                 // 0x0018(0x0010) (ExportObject, ZeroConstructor)
	TArray<TWeakObjectPtr<class UMaterialInstanceDynamic>> DynamicMaterials;                                         // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.GMMutatorItem
// 0x0010
struct FGMMutatorItem
{
	TArray<class UMutator*>                            Mutators;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
};

// ScriptStruct FSD.PartyAnalyticsInformation
// 0x0014
struct FPartyAnalyticsInformation
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct FSD.DeepDiveAnalyticsInformation
// 0x000C
struct FDeepDiveAnalyticsInformation
{
	bool                                               WasDeepDive;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                LastDeepDiveStage;                                        // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EliteDeepDive;                                            // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsReplay;                                                 // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct FSD.StateStats
// 0x0014
struct FStateStats
{
	float                                              MaxAcceleration;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxPawnSpeed;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinSlowdownAngle;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxSlowdownAngle;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxBreakingDeceleration;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.HealthBarLooks
// 0x0020
struct FHealthBarLooks
{
	struct FLinearColor                                HealthColor;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DamageColor;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.HUDVisibilityRegisteredWidget
// 0x000C
struct FHUDVisibilityRegisteredWidget
{
	TWeakObjectPtr<class UWidget>                      Widget;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ItemSkinOwners
// 0x0010
struct FItemSkinOwners
{
	TArray<class UItemID*>                             Items;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.ItemUpgradeStatText
// 0x0020
struct FItemUpgradeStatText
{
	struct FText                                       StatText;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               IsAdventageous;                                           // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.UpgradeValues
// 0x001C
struct FUpgradeValues
{
	float                                              BaseValue;                                                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              UpgradedValue;                                            // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              UpgradedPercentageValue;                                  // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              OldUpgradedValue;                                         // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              OldUpgradedPercentageValue;                               // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentValue;                                             // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	EUpgradeCalucationType                             CalculationType;                                          // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EItemPreviewStatus                                 PreviewStatus;                                            // 0x0019(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
};

// ScriptStruct FSD.GearStatEntry
// 0x0068
struct FGearStatEntry
{
	struct FText                                       Text;                                                     // 0x0000(0x0018) (BlueprintVisible, Transient)
	struct FText                                       Value;                                                    // 0x0018(0x0018) (BlueprintVisible, Transient)
	struct FText                                       BaseValue;                                                // 0x0030(0x0018) (BlueprintVisible, Transient)
	struct FText                                       UpgradeValue;                                             // 0x0048(0x0018) (BlueprintVisible, Transient)
	EItemPreviewStatus                                 PreviewStatus;                                            // 0x0060(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.HoldButton
// 0x0028
struct FHoldButton
{
	struct FText                                       HoldingText;                                              // 0x0000(0x0018) (Edit)
	float                                              HoldStartTime;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HoldDuration;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.LineSegmentCarverPoint
// 0x0024
struct FLineSegmentCarverPoint
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HRange;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VRange;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloorAngle;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CielingNoiseRange;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WallNoiseRange;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloorNoiseRange;                                          // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.LineSegmentFillerPoint
// 0x0024
struct FLineSegmentFillerPoint
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRandRange                                  RandomRange;                                              // 0x000C(0x0008) (Edit)
	struct FRandRange                                  RandomNoiseRange;                                         // 0x0014(0x0008) (Edit)
	struct FRandRange                                  FillAmount;                                               // 0x001C(0x0008) (Edit)
};

// ScriptStruct FSD.LocalizedLanguageInfo
// 0x0038
struct FLocalizedLanguageInfo
{
	struct FString                                     EnglishName;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     NativeName;                                               // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     CodeName;                                                 // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               CommunityTranslated;                                      // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                TranslatedPercent;                                        // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.FSDTranslationProgress
// 0x0018
struct FFSDTranslationProgress
{
	struct FString                                     CodeName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	int                                                TranslatedPercent;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.MilestoneTier
// 0x0008
struct FMilestoneTier
{
	float                                              CompletionCount;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PerkPoints;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.MiningPodDialogs
// 0x0050
struct FMiningPodDialogs
{
	class UDialogDataAsset*                            DepartingIn5Min;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            DepartingIn4Min;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            DepartingIn3Min;                                          // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            DepartingIn2Min;                                          // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            DepartingIn1Min;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            DepartingIn30Sec;                                         // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            DepartingIn10Sec;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            DepartingIn123Sec;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            Departed;                                                 // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset*                            DeepDiveDeparted;                                         // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.MissionHazardSetting
// 0x0020
struct FMissionHazardSetting
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (Edit)
	float                                              HazardBonus;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.MissionBiomeItem
// 0x0010
struct FMissionBiomeItem
{
	class UBiome*                                      Biome;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Rarity;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.MissionTemplateItem
// 0x0010
struct FMissionTemplateItem
{
	class UMissionTemplate*                            Template;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Rarity;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.MultiHitscanHit
// 0x0030
struct FMultiHitscanHit
{
	class UPrimitiveComponent*                         TargetCompoenent;                                         // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UFSDPhysicalMaterial>         PhysicalMaterial;                                         // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector_NetQuantize                         HitLocation;                                              // 0x0010(0x000C) (Transient)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                             // 0x001C(0x000C) (Transient)
	unsigned char                                      BoneIndex;                                                // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               PlayImpactSound;                                          // 0x0029(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               SpawnDecal;                                               // 0x002A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
};

// ScriptStruct FSD.OxygenCallback
// 0x0018
struct FOxygenCallback
{
	struct FScriptDelegate                             Delegate;                                                 // 0x0000(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.PawnAfflictionItem
// 0x0018
struct FPawnAfflictionItem
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<class UAfflictionEffect*>                   Afflictions;                                              // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.AfflictionEntry
// 0x000C (0x0018 - 0x000C)
struct FAfflictionEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UPawnAffliction*                             affliction;                                               // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.AfflictionEntriesArray
// 0x0018 (0x00C8 - 0x00B0)
struct FAfflictionEntriesArray : public FFastArraySerializer
{
	TArray<struct FAfflictionEntry>                    Items;                                                    // 0x00B0(0x0010) (ZeroConstructor)
	class UPawnAfflictionComponent*                    Owner;                                                    // 0x00C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct FSD.PawnStatEntry
// 0x0024 (0x0030 - 0x000C)
struct FPawnStatEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UPawnStat*                                   PawnStat;                                                 // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
	float                                              Value;                                                    // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.PawnStatEntriesArray
// 0x0018 (0x00C8 - 0x00B0)
struct FPawnStatEntriesArray : public FFastArraySerializer
{
	TArray<struct FPawnStatEntry>                      Items;                                                    // 0x00B0(0x0010) (ZeroConstructor)
	class UPawnStatsComponent*                         Owner;                                                    // 0x00C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct FSD.PillarSegment
// 0x0008
struct FPillarSegment
{
	float                                              Scale;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeightOffset;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.DownCameraSettings
// 0x0018
struct FDownCameraSettings
{
	TWeakObjectPtr<class APlayerCharacter>             Target;                                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                TargetIndex;                                              // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MinPitch;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxPitch;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SmoothSpeed;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.AnalogAimSettings
// 0x0040
struct FAnalogAimSettings
{
	bool                                               ShowDebugOutput;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x0001(0x0013) MISSED OFFSET
	struct FVector2D                                   AimRate;                                                  // 0x0014(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 SensitivityCurve;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LookAtStickyness;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StickynessRecoverySpeed;                                  // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StickynessMaxSensitivity;                                 // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ThirdPersonLookRate;                                      // 0x0034(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.CameraSpringSettings
// 0x003C
struct FCameraSpringSettings
{
	bool                                               SpringEnabled;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              StepThreshold;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SpringExtend;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RetractStrength;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RetractDownReduction;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShowDebug;                                                // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              LastSpeedZ;                                               // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     LastLocation;                                             // 0x0020(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     StartSpringLocation;                                      // 0x002C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSpringInitialized;                                       // 0x0038(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
};

// ScriptStruct FSD.HealthRegenerationParams
// 0x0010
struct FHealthRegenerationParams
{
	bool                                               bIsRegenerating;                                          // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DelayAfterDamage;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HealthPerSecond;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetHealthRatio;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.PlayerSphere
// 0x0020
struct FPlayerSphere
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TArray<TWeakObjectPtr<class APlayerCharacter>>     Players;                                                  // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.ProximityTriggerItem
// 0x0028
struct FProximityTriggerItem
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	struct FScriptDelegate                             Callback;                                                 // 0x0018(0x0014) (ZeroConstructor, Transient, InstancedReference)
};

// ScriptStruct FSD.RejoinFloat
// 0x001C
struct FRejoinFloat
{
	struct FGuid                                       ItemKey;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ValueKey;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.RejoinInt
// 0x001C
struct FRejoinInt
{
	struct FGuid                                       ItemKey;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ValueKey;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.PostProcessingBlendable
// 0x0020
struct FPostProcessingBlendable
{
	TScriptInterface<class UBlendableInterface>        Blendable;                                                // 0x0000(0x0030) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.SentryGunMuzzleSetup
// 0x0010
struct FSentryGunMuzzleSetup
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                FireMontage;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.InfluenceSphere
// 0x0010
struct FInfluenceSphere
{
	class UCaveInfluencer*                             Influencer;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ResourceDebris
// 0x0010
struct FResourceDebris
{
	float                                              InfluencerRange;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UDebrisBase*                                 Debris;                                                   // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct FSD.TextStyleOverride
// 0x0090
struct FTextStyleOverride
{
	bool                                               bOverrideFont;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0050) (Edit)
	bool                                               bOverrideColor;                                           // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FSlateColor                                 Color;                                                    // 0x0060(0x0028) (Edit)
	bool                                               bOverrideSize;                                            // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	float                                              SizeScale;                                                // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.RandLinePoint
// 0x002C
struct FRandLinePoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRandRange                                  Range;                                                    // 0x000C(0x0008) (Edit)
	struct FRandRange                                  NoiseRange;                                               // 0x0014(0x0008) (Edit)
	struct FRandRange                                  SkewFactor;                                               // 0x001C(0x0008) (Edit)
	struct FRandRange                                  FillAmount;                                               // 0x0024(0x0008) (Edit)
};

// ScriptStruct FSD.RoomGeneratorGroupInstance
// 0x0010
struct FRoomGeneratorGroupInstance
{
	TArray<class URoomGenerator*>                      Rooms;                                                    // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.SaveGameSnapShot
// 0x00C8
struct FSaveGameSnapShot
{
	TWeakObjectPtr<class UFSDSaveGame>                 SaveGame;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     Filename;                                                 // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	bool                                               IsObsolete;                                               // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                VersionNumber;                                            // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                Credits;                                                  // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TMap<class UClass*, int>                           CharacterLevels;                                          // 0x0028(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TMap<class UClass*, int>                           Resources;                                                // 0x0078(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
};

// ScriptStruct FSD.SaveGameStatePerkItem
// 0x0010
struct FSaveGameStatePerkItem
{
	unsigned char                                      Rank;                                                     // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UPerkAsset*                                  Perk;                                                     // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.ActiveCampaingMission
// 0x000C
struct FActiveCampaingMission
{
	bool                                               HasMission;                                               // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                GlobalSeed;                                               // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MissionSeed;                                              // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.SchematicType
// 0x0070
struct FSchematicType
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FSD.SchematicType.Icon
	struct FLinearColor                                IconTint;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FSD.SchematicType.Frame
	struct FLinearColor                                FrameTint;                                                // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.FriendInfo
// 0x0038
struct FFriendInfo
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     RealName;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               IsOnline;                                                 // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPlaying;                                                // 0x0021(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPlayingThisGame;                                        // 0x0022(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsJoinable;                                               // 0x0023(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HasVoiceSupport;                                          // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FString                                     PresenceStatus;                                           // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.RandomWalkCycleEntry
// 0x000C
struct FRandomWalkCycleEntry
{
	float                                              RandomSelectionWeight;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRandRange                                  Duration;                                                 // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FSD.SoundMixManagerItem
// 0x0010
struct FSoundMixManagerItem
{
	class USoundMix*                                   mix;                                                      // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.DrinkableBarSlot
// 0x0014
struct FDrinkableBarSlot
{
	struct FVector                                     WorldLocation;                                            // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class ADrinkableActor>              DrinkableActor;                                           // 0x000C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.DeepCSGNode
// 0x0004
struct FDeepCSGNode
{
	uint32_t                                           Val;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.DeepCSGFloatPlane
// 0x0020
struct FDeepCSGFloatPlane
{
	struct FVector4                                    Plane;                                                    // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FDeepCSGNode                                Top;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDeepCSGNode                                Bottom;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.DeepCSGFloatTree
// 0x0018
struct FDeepCSGFloatTree
{
	struct FDeepCSGNode                                Root;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FDeepCSGFloatPlane>                  planes;                                                   // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct FSD.ActiveStatusEffect
// 0x0008
struct FActiveStatusEffect
{
	class AActor*                                      Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.ActiveStatusEffectBank
// 0x0040
struct FActiveStatusEffectBank
{
	class UClass*                                      Key;                                                      // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UStatusEffect*                               ActiveEffect;                                             // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
	TArray<struct FActiveStatusEffect>                 Effects;                                                  // 0x0030(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.SteelSeriesLinearColor
// 0x0003
struct FSteelSeriesLinearColor
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) MISSED OFFSET
};

// ScriptStruct FSD.TerrainPlacementBox
// 0x001C
struct FTerrainPlacementBox
{
	struct FVector                                     Min;                                                      // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     Max;                                                      // 0x000C(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	ETerrainPlacementBoxType                           PlacementType;                                            // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct FSD.TextCounterEntry
// 0x0028
struct FTextCounterEntry
{
	class UTextBlock*                                  TextBlock;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       Format;                                                   // 0x0008(0x0018) (Edit, BlueprintVisible)
	int                                                Value;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.TunnelSettingItem
// 0x0010
struct FTunnelSettingItem
{
	class UTunnelSegmentSetting*                       SegmentSetting;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FInt32Interval                              SegmentSize;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.TutorialHint
// 0x0048
struct FTutorialHint
{
	struct FText                                       Text;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ControllerOverrideText;                                   // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Title;                                                    // 0x0030(0x0018) (Edit)
};

// ScriptStruct FSD.UpgradeTier
// 0x0018
struct FUpgradeTier
{
	TArray<class UItemUpgrade*>                        Upgrades;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                RequiredCharacterLevel;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RequiredPlayerRank;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.MasteryItem
// 0x0018
struct FMasteryItem
{
	int                                                NeededMastery;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class UUnlockReward*>                       Unlocks;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.SchematicBankItem
// 0x0020
struct FSchematicBankItem
{
	class USchematicPricingTier*                       PricingTier;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USchematicRarity*                            Rarity;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class USchematic*>                          Schematics;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct FSD.VanityTestCharacterItem
// 0x0010
struct FVanityTestCharacterItem
{
	class USkeletalMesh*                               Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimBP;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.WeightedRoomSelectorItem
// 0x0010
struct FWeightedRoomSelectorItem
{
	class URoomGenerator*                              Room;                                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.WeightedRoomSelector
// 0x0010
struct FWeightedRoomSelector
{
	TArray<struct FWeightedRoomSelectorItem>           Items;                                                    // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct FSD.YesNoPromptSettings
// 0x0040
struct FYesNoPromptSettings
{
	class UClass*                                      WidgetClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       Title;                                                    // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Message;                                                  // 0x0028(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct FSD.ZapperTarget
// 0x0010
struct FZapperTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Timestamp;                                                // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.DiscordUser
// 0x0040
struct FDiscordUser
{
	struct FString                                     userId;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     discriminator;                                            // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     avatar;                                                   // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.DiscordServerData
// 0x0008
struct FDiscordServerData
{
	int                                                presenceCount;                                            // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                memberCount;                                              // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.CharacterViewInfo
// 0x0028
struct FCharacterViewInfo
{
	class UClass*                                      CharacterClass;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UVanityItem*>                         EquippedVanity;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               SurvivedInPod;                                            // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class UVictoryPose*                                VictoryPose;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.CharacterViewScene
// 0x0018
struct FCharacterViewScene
{
	TArray<struct FCharacterViewInfo>                  Characters;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               MissionSuccess;                                           // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.CharacterMeshData
// 0x0028
struct FCharacterMeshData
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PivotOffset;                                              // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AddToFirstPerson;                                         // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.ExampleStruct
// 0x0004
struct FExampleStruct
{
	float                                              Field;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.PricingTierEntry
// 0x0020 (0x0028 - 0x0008)
struct FPricingTierEntry : public FTableRowBase
{
	struct FIRandRange                                 CreditCost;                                               // 0x0008(0x0008) (Edit)
	struct FIRandRange                                 Material1;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FIRandRange                                 Material2;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FIRandRange                                 Material3;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FSD.DeepCSGTree
// 0x0018
struct FDeepCSGTree
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FSD.ChunkOffset
// 0x0006
struct FChunkOffset
{
	int16_t                                            X;                                                        // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            Y;                                                        // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            Z;                                                        // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.ChunkId
// 0x0006
struct FChunkId
{
	int16_t                                            X;                                                        // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            Y;                                                        // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            Z;                                                        // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.CellId
// 0x0006
struct FCellId
{
	int16_t                                            X;                                                        // 0x0000(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	int16_t                                            Y;                                                        // 0x0002(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	int16_t                                            Z;                                                        // 0x0004(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.DeepCSGUtils
// 0x0001
struct FDeepCSGUtils
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FSD.LinearCellId
// 0x0006
struct FLinearCellId
{
	uint16_t                                           X;                                                        // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Y;                                                        // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Z;                                                        // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.EncodedChunkCellId
// 0x0008
struct FEncodedChunkCellId
{
	struct FEncodedChunkId                             ChunkId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           cellOffset;                                               // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct FSD.DeepCSGTreeOperations
// 0x0001
struct FDeepCSGTreeOperations
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FSD.ChunckIDAndOffsetBox
// 0x0012
struct FChunckIDAndOffsetBox
{
	struct FChunkId                                    ChunkId;                                                  // 0x0000(0x0006)
	struct FChunkOffset                                minOffset;                                                // 0x0006(0x0006)
	struct FChunkOffset                                maxOffset;                                                // 0x000C(0x0006)
};

// ScriptStruct FSD.ChunckIDAndOffset
// 0x000C
struct FChunckIDAndOffset
{
	struct FChunkId                                    ChunkId;                                                  // 0x0000(0x0006)
	struct FChunkOffset                                Offset;                                                   // 0x0006(0x0006)
};

// ScriptStruct FSD.CellBox
// 0x000C
struct FCellBox
{
	struct FCellId                                     Min;                                                      // 0x0000(0x0006)
	struct FCellId                                     Max;                                                      // 0x0006(0x0006)
};

// ScriptStruct FSD.TerrainLateJoinIteration
// 0x0028
struct FTerrainLateJoinIteration
{
	int                                                DrillsIndex;                                              // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MeltsIndex;                                               // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PickAxeIndex;                                             // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                FloatingIndex;                                            // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ColliderCarvesIndex;                                      // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MeshCarvesIndex;                                          // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ExplosionsIndex;                                          // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                LateJoinIndex;                                            // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                DebrisIndex;                                              // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ChunkVisibilityIndex;                                     // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.EnemyGroupDescriptorSpawnItem
// 0x0010
struct FEnemyGroupDescriptorSpawnItem
{
	class UEnemyDescriptor*                            enemy;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                count;                                                    // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.EnemySpawnParamsEntry
// 0x0028 (0x0030 - 0x0008)
struct FEnemySpawnParamsEntry : public FTableRowBase
{
	struct FString                                     ItemName;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst)
	float                                              DifficultyRating;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinSpawnCount;                                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxSpawnCount;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Rarity;                                                   // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnAmountModifier;                                      // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.EnemySpawnItem
// 0x0010
struct FEnemySpawnItem
{
	class UEnemyDescriptor*                            enemy;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                count;                                                    // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              VeteranComposition;                                       // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.MUSTBEHERETOCOMPILE
// 0x0001
struct FMUSTBEHERETOCOMPILE
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FSD.Formation
// 0x0020
struct FFormation
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UFormationData*                              FormationData;                                            // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FSD.FormationID
// 0x0008
struct FFormationID
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.DamageData
// 0x0018
struct FDamageData
{
	class UFSDPhysicalMaterial*                        Bodypart;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.SoundClassManagerItem
// 0x000C
struct FSoundClassManagerItem
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct FSD.GIPawnStats
// 0x0020
struct FGIPawnStats
{
	class UPawnStat*                                   MovmementSpeed;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   MeleeAttackDamage;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   DamageResistance;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPawnStat*                                   FireResistance;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.TesterName
// 0x0020 (0x0028 - 0x0008)
struct FTesterName : public FTableRowBase
{
	struct FString                                     SteamID;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     SteamProfileName;                                         // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSD.TipsTableRow
// 0x0068 (0x0070 - 0x0008)
struct FTipsTableRow : public FTableRowBase
{
	struct FText                                       Header;                                                   // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       InputText;                                                // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       InputTextControllerOverride;                              // 0x0050(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              TimeToDisplay;                                            // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ResourcePouchItem
// 0x0010
struct FResourcePouchItem
{
	class UResourceData*                               Resource;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.PlanetZoneItem
// 0x0028
struct FPlanetZoneItem
{
	TArray<class UBiome*>                              Biomes;                                                   // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct FSD.PathCell
// 0x0010
struct FPathCell
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.PathDebugNode
// 0x0020
struct FPathDebugNode
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FSD.DebrisPatchResource
// 0x0018
struct FDebrisPatchResource
{
	class UDebrisPatchComponent*                       Debris;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.DebrisVeinResource
// 0x0018
struct FDebrisVeinResource
{
	class UDebrisVeinComponent*                        Debris;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.TerrainPlacementDebugItem
// 0x0060
struct FTerrainPlacementDebugItem
{
	TArray<struct FTerrainPlacementBox>                TerrainCheckers;                                          // 0x0000(0x0010) (ZeroConstructor, Transient)
	bool                                               BoxGood;                                                  // 0x0010(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               CapsuleGood;                                              // 0x0011(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EDebrisColliderType                                CapsuleType;                                              // 0x0012(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0013(0x0001) MISSED OFFSET
	struct FDebrisCapsule                              Capsule;                                                  // 0x0014(0x001C) (Transient)
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (Transient, IsPlainOldData)
};

// ScriptStruct FSD.PLSResource
// 0x0010
struct FPLSResource
{
	class UResourceData*                               Resource;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AmountToGenerate;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ExposedProperty
// 0x0001
struct FExposedProperty
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FSD.ExposedFloat
// 0x0027 (0x0028 - 0x0001)
struct FExposedFloat : public FExposedProperty
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Description;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              MinValue;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.ExposableFloat
// 0x0028
struct FExposableFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Exposed;                                                  // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              MinValue;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.RecoilImpulse
// 0x000C
struct FRecoilImpulse
{
	float                                              Rotation;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Impulse;                                                  // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.ResourceInitalizer
// 0x0010
struct FResourceInitalizer
{
	class UResourceData*                               Resource;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAmount;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.SchematicGADataEntry
// 0x0028 (0x0030 - 0x0008)
struct FSchematicGADataEntry : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
	int                                                SchematicGAID;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     SchematicName;                                            // 0x0020(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct FSD.SpiderAnimInstanceProxy
// 0x0000 (0x0690 - 0x0690)
struct FSpiderAnimInstanceProxy : public FAnimInstanceProxy
{

};

// ScriptStruct FSD.CraftableDataEntry
// 0x0030 (0x0038 - 0x0008)
struct FCraftableDataEntry : public FTableRowBase
{
	struct FString                                     ItemName;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst)
	int                                                PlayerRank;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Credits;                                                  // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Jadiz;                                                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Magnite;                                                  // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Croppa;                                                   // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Umanite;                                                  // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Enor;                                                     // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Bismor;                                                   // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.VanityDataEntry
// 0x0020 (0x0058 - 0x0038)
struct FVanityDataEntry : public FCraftableDataEntry
{
	struct FString                                     Character;                                                // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FString                                     Category;                                                 // 0x0048(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FSD.WeakpointChannel
// 0x0028
struct FWeakpointChannel
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	class UFSDPhysicalMaterial*                        WeakPointMaterial;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.WeakpointTask
// 0x0128
struct FWeakpointTask
{
	unsigned char                                      UnknownData00[0x128];                                     // 0x0000(0x0128) MISSED OFFSET
};

// ScriptStruct FSD.WeaponHitCounterEffectItem
// 0x0008
struct FWeaponHitCounterEffectItem
{
	TWeakObjectPtr<class AActor>                       Target;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FSD.XPSettings
// 0x000C
struct FXPSettings
{
	float                                              XP_PerGold;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              XP_PerKill;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              XP_OnSurvivedLevel;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
