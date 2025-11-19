// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Target Unity version: 2021.3.0 - 2023.1.99

// ******************************************************************************
//* IL2CPP application-specific method definition addresses and signatures
// ******************************************************************************

using namespace app;

// God Mode & Hit effect
DO_APP_FUNC(0x01228F90, bool, AdventureActor_OnHitActor, (AdventureActor* __this, HitBox* hitBox, int32_t uniqueAttackId, int32_t onceAttackTargetCount, LogicEntity* actor, DeterministicRaycastHit* raycastHit, bool* damaged, GameObject* hurtEffectPrefab, bool isHittedEffectScale, bool effectIgnoreTimeScale, MethodInfo* method));
DO_APP_FUNC(0x015C9190, List_1_LogicEntity_*, AdventureModuleController_get_playerActors, (AdventureModuleController* __this, MethodInfo* method));
DO_APP_FUNC(0x0168A610, bool, AreaEffectEntity_OnHitActor, (AreaEffectEntity* __this, HitBox* hitBox, int32_t uniqueAttackId, int32_t onceAttackTargetCount, LogicEntity* entity, DeterministicRaycastHit* raycastHit, bool* damaged, GameObject* hurtEffectPrefab, bool isHittedEffectScale, bool effectIgnoreTimeScale, MethodInfo* method));
DO_APP_FUNC(0x01690770, bool, AreaEffect_AttackComponent_OnHitActor, (AreaEffect_AttackComponent* __this, HitBox* hitBox, int32_t uniqueAttackId, int32_t onceAttackTargetCount, LogicEntity* entity, DeterministicRaycastHit* raycastHit, bool* damaged, GameObject* hurtEffectPrefab, bool isHittedEffectScale, bool effectIgnoreTimeScale, MethodInfo* method));
DO_APP_FUNC(0x016F2A40, bool, AdventureWeapon_OnHitActor, (AdventureWeapon* __this, HitBox* hitBox, int32_t uniqueAttackId, int32_t onceAttackTargetCount, LogicEntity* actor, DeterministicRaycastHit* raycastHit, bool* damaged, GameObject* hurtEffectPrefab, bool isHittedEffectScale, bool effectIgnoreTimeScale, MethodInfo* method));
DO_APP_FUNC(0x016D93F0, bool, AdventureBulletBase_OnHitActor, (AdventureBulletBase* __this, HitBox* hitBox, int32_t uniqueAttackId, int32_t onceAttackTargetCount, LogicEntity* actor, DeterministicRaycastHit* raycastHit, bool* damaged, GameObject* hurtEffectPrefab, bool isHittedEffectScale, bool effectIgnoreTimeScale, MethodInfo* method));
DO_APP_FUNC(0x016F3BD0, int32_t, AdventureWeapon_get_uniqueAttackId, (AdventureWeapon* __this, MethodInfo* method));

// No Cooldown
DO_APP_FUNC(0x0149F640, void, PlayerSkillCd_ReduceSkillSection, (PlayerSkillCd* __this, int32_t skillId, bool beginResume, MethodInfo* method));
DO_APP_FUNC(0x0149FD90, void, PlayerSkillCd_ResetUseInterval, (PlayerSkillCd* __this, int32_t skillId, MethodInfo* method));

// Unlimited Energy
DO_APP_FUNC(0x0149D3D0, void, PlayerSkillCd_ClearEnergy, (PlayerSkillCd* __this, MethodInfo* method));
DO_APP_FUNC(0x014A6DF0, void, SkillInfo_set_currentEnergy, (SkillInfo* __this, FP value, MethodInfo* method));
DO_APP_FUNC(0x014A6DB0, int32_t, SkillInfo_get_totalEnergy, (SkillInfo* __this, MethodInfo* method));
DO_APP_FUNC(0x011E18A0, void, AdventureSkill_InitSkill, (AdventureSkill* __this, int32_t skillId, GameObject* owner, List_1_UnityEngine_GameObject_* targets, SkillLauncherType__Enum skillLauncherType, bool isInterruptAttack, bool isBreakable, SkillPhaseFeatureFlag__Enum skillCastBehaviourType, SkillCountdownTiming__Enum countdownTiming, Action_1_Boolean_* finishCallback, Action_1_TrueSync_FP_* beginCDForMonsterCallback, bool ingoreCDAndEnergy, MethodInfo* method));
DO_APP_FUNC(0x0134C010, iFP, AttributeList_GetAttributeValue, (AttributeList* __this, GameEnum_effectAttributeType__Enum type, MethodInfo* method));

// Mob Vacuum
DO_APP_FUNC(0x012373C0, void, AdventureActor_SyncMovementLocation_1, (AdventureActor* __this, bool clearPath, MethodInfo* method));
DO_APP_FUNC(0x015BC080, List_1_LogicEntity_*, AdventureModuleController_get_monsterActors, (AdventureModuleController* __this, MethodInfo* method));
DO_APP_FUNC(0x015C7D00, void, AdventureModuleController_Update, (AdventureModuleController* __this, MethodInfo* method));
DO_APP_FUNC(0x009615E0, TSVector2, TrueSyncTransform_get_Position, (TrueSyncTransform* __this, MethodInfo* method));
DO_APP_FUNC(0x0111EC00, void, TrueSyncTransform_set_Position, (TrueSyncTransform* __this, TSVector2 value, MethodInfo* method));
DO_APP_FUNC(0x0111EB40, void, TrueSyncTransform_set_PositionY, (TrueSyncTransform* __this, FP value, MethodInfo* method));
DO_APP_FUNC(0x0111E560, TSVector2, TrueSyncTransform_get_Forward, (TrueSyncTransform* __this, MethodInfo* method));
DO_APP_FUNC(0x05323F00, TSVector2, TSVector2_op_Addition, (TSVector2 value1, TSVector2 value2, MethodInfo* method));
DO_APP_FUNC(0x053241F0, TSVector2, TSVector2_op_Multiply_1, (TSVector2 value, FP scaleFactor, MethodInfo* method));
DO_APP_FUNC(0x01114040, FP, CommonHelper_GetTerrainHeight_1, (TSVector2 targetPosition, FP defaultPostionY, MethodInfo* method));

// Instant Break
DO_APP_FUNC(0x015CA540, iFP, SpecialAttributeList_GetAttributeValue, (SpecialAttributeList* __this, GameEnum_specialAttributeType__Enum type, MethodInfo* method));
DO_APP_FUNC(0x01492F70, bool, MonsterToughnessInfo_DamageToToughness, (MonsterToughnessInfo* __this, AdventureActor* from, int32_t damage, IList_1_System_Int32_* hitDamageTag, MethodInfo* method));

// Always Crit
DO_APP_FUNC(0x01028240, iFP, ActorAdditionalAttrInfo_get_critRate, (ActorAdditionalAttrInfo* __this, MethodInfo* method));

DO_APP_FUNC(0x052FC1E0, FP, FP_op_Implicit_3, (int32_t value, MethodInfo* method));
DO_APP_FUNC(0x0530FEF0, FP, iFP_get_Value, (iFP* __this, MethodInfo* method));
DO_APP_FUNC(0x05310BB0, iFP, iFP_op_Implicit, (FP val, MethodInfo* method));

// Singleton
DO_APP_FUNC(0x00012F90, void*, Singleton_GetInstance, (MethodInfo* method));
DO_APP_FUNC_METHODINFO(0x07053F00, Singleton_1_AdventureModuleController__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x07048910, Singleton_1_AdventurePlayerController__get_Instance__MethodInfo);