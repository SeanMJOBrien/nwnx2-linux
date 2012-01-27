#ifndef _CNWSCOMBATROUND_H_
#define _CNWSCOMBATROUND_H_
#include "nwndef.h"
#include "CNWSCombatAttackData.h"
#include "CNWSCreature.h"

class CNWSCombatRound
{
public:
	int AddAction(CNWSCombatRoundAction *);
	int AddAttackOfOpportunity(unsigned long);
	int AddCircleKickAttack(unsigned long);
	int AddCleaveAttack(unsigned long, int);
	int AddCombatStepAction(unsigned long, unsigned long);
	int AddEquipAction(unsigned long, unsigned long);
	int AddParryAttack(unsigned long);
	int AddParryIndex();
	int AddReaction(int, int);
	int AddSpecialAttack(unsigned short);
	int AddSpellAction();
	int AddUnequipAction(unsigned long, unsigned long, unsigned char, unsigned char);
	int AddWhirlwindAttack(unsigned long, int);
	int CalculateOffHandAttacks();
	int CheckActionLengthAtTime(unsigned long, int, int);
	int CheckActionLength(unsigned long, int);
	int ClearAllAttacks();
	int ClearAllSpecialAttacks();
	int DecrementPauseTimer(int);
	int DecrementRoundLength(int, int);
	int EndCombatRound();
	int GetActionPending();
	int GetAction();
	int GetAttackActionPending();
	int GetAttack(int);
	int GetCombatStepRequired(unsigned long);
	int GetCurrentAttackWeapon(int);
	int GetExtraAttack();
	int GetNewAttackID();
	int GetNumSpecialAttacks();
	int GetOffHandAttack();
	int GetSpecialAttackID(int);
	int GetSpecialAttack(int);
	int GetSpellActionPending();
	int GetTotalAttacks();
	int GetWeaponAttackType();
	int HasCreatureWeapons();
	int IncrementTimer(int);
	int InitializeAttackActions(unsigned long);
	int InitializeCombatModes();
	int InitializeNumberOfAttacks();
	int InsertSpecialAttack(unsigned short, int);
	int LoadCombatRound(CResGFF *, CResStruct *);
	int RecomputeRound();
	int RemoveAllActions();
	int RemoveSpecialAttack(int);
	int RemoveSpellAction();
	int SaveCombatRound(CResGFF *, CResStruct *);
	int SetCurrentAttack(unsigned char);
	int SetDeflectArrow(int);
	int SetPauseTimer(int, int);
	int SetRoundPaused(int, unsigned long);
	int SignalCombatRoundStarted();
	int StartCombatRoundCast(unsigned long);
	int StartCombatRound(unsigned long);
	int UpdateAttackTargetForAllActions(unsigned long);
	~CNWSCombatRound();
	CNWSCombatRound(CNWSCreature *);

	/* 0x0/0 */ CNWSCombatAttackData AttackData[50];
	/* 0x20D0/8400 */ void *SpecialAttackList;
	/* 0x20D4/8404 */ unsigned long SpecialAttackCount;
	/* 0x20D8/8408 */ unsigned long field_20D8;
	/* 0x20DC/8412 */ unsigned long SpecAttackIdList;
	/* 0x20E0/8416 */ unsigned long SpecialAttackIdCount;
	/* 0x20E4/8420 */ unsigned long field_20E4;
	/* 0x20E8/8424 */ unsigned long AttackID;
	/* 0x20EC/8428 */ unsigned long RoundStarted;
	/* 0x20F0/8432 */ unsigned long SpellCastRound;
	/* 0x20F4/8436 */ unsigned long Timer;
	/* 0x20F8/8440 */ unsigned long RoundLength;
	/* 0x20FC/8444 */ unsigned long OverlapAmount;
	/* 0x2100/8448 */ unsigned long BleedTimer;
	/* 0x2104/8452 */ unsigned long RoundPaused;
	/* 0x2108/8456 */ unsigned long RoundPausedBy;
	/* 0x210C/8460 */ unsigned long PauseTimer;
	/* 0x2110/8464 */ unsigned long InfinitePause;
	/* 0x2114/8468 */ char CurrentAttack;
	/* 0x2115/8469 */ char AttackGroup;
	/* 0x2118/8472 */ char rsvd1[2];
	/* 0x2118/8472 */ unsigned long DeflectArrow;
	/* 0x211C/8476 */ unsigned long WeaponSucks;
	/* 0x2120/8480 */ unsigned long EpicDodgeUsed;
	/* 0x2124/8484 */ unsigned long ParryIndex;
	/* 0x2128/8488 */ unsigned long NumAOOs;
	/* 0x212C/8492 */ unsigned long NumCleaves;
	/* 0x2130/8496 */ unsigned long NumCircleKicks;
	/* 0x2134/8500 */ unsigned long NewAttack;
	/* 0x2138/8504 */ unsigned long OnHandAttacks;
	/* 0x213C/8508 */ unsigned long OffHandAttacks;
	/* 0x2140/8512 */ unsigned long OffHandTaken;
	/* 0x2144/8516 */ unsigned long ExtraTaken;
	/* 0x2148/8520 */ unsigned long AdditAttacks;
	/* 0x214C/8524 */ unsigned long EffectAttacks;
	/* 0x2150/8528 */ unsigned long ParryActions;
	/* 0x2154/8532 */ unsigned long DodgeTarget;
	/* 0x2158/8536 */ unsigned long SchedActionList;
	/* 0x215C/8540 */ CNWSCreature *Creature;
};
#endif
