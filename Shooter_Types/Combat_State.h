#pragma once

UENUM(BlueprintType)
enum class ECombat_State : uint8
{
    ECS_Unoccupied UMETA(DisplayName = "Unoccupied"),
    ECS_Reloading UMETA(DisplayName = "Reloading"),
    ECS_Throwing_Grenade UMETA(DisplayName = "Throwing_Grenade"),

    ECS_MAX UMETA(DisplayName = "Default MAX")
};