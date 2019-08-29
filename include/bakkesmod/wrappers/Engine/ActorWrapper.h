#pragma once
template<class T> class ArrayWrapper;
template<typename T> class StructArrayWrapper;
#include "../WrapperStructs.h"
#include ".././Engine/ObjectWrapper.h"
class PrimitiveComponentWrapper;

class BAKKESMOD_PLUGIN_IMPORT ActorWrapper : public ObjectWrapper {
public:
	CONSTRUCTORS(ActorWrapper)

	//BEGIN SELF IMPLEMENTED
	Vector GetLocation();
	void SetLocation(const Vector location);
	Vector GetVelocity();
	void SetVelocity(const Vector velocity);
	void AddVelocity(const Vector velocity);
	Rotator GetRotation();
	void SetRotation(const Rotator rotation);
	void SetTorque(const Vector torq);
	void Stop();
	Vector GetAngularVelocity();
	void SetAngularVelocity(const Vector v, bool addToCurrent);
	bool IsNull();
	//END SELF IMPLEMENTED

	//AUTO-GENERATED FROM FIELDS
	float GetDrawScale();
	void SetDrawScale(float newDrawScale);
	Vector GetDrawScale3D();
	void SetDrawScale3D(Vector newDrawScale3D);
	Vector GetPrePivot();
	void SetPrePivot(Vector newPrePivot);
	UnrealColor GetEditorIconColor();
	void SetEditorIconColor(UnrealColor newEditorIconColor);
	float GetCustomTimeDilation();
	void SetCustomTimeDilation(float newCustomTimeDilation);
	unsigned char GetPhysics();
	void SetPhysics(unsigned char newPhysics);
	unsigned char GetRemoteRole();
	void SetRemoteRole(unsigned char newRemoteRole);
	unsigned char GetRole();
	void SetRole(unsigned char newRole);
	unsigned char GetCollisionType();
	void SetCollisionType(unsigned char newCollisionType);
	unsigned char GetReplicatedCollisionType();
	void SetReplicatedCollisionType(unsigned char newReplicatedCollisionType);
	ActorWrapper GetOwner();
	ActorWrapper GetBase();
	unsigned long GetbStatic();
	unsigned long GetbHidden();
	unsigned long GetbHiddenSelf();
	void SetbHiddenSelf(unsigned long newbHiddenSelf);
	unsigned long GetbNoDelete();
	void SetbNoDelete(unsigned long newbNoDelete);
	unsigned long GetbDeleteMe();
	void SetbDeleteMe(unsigned long newbDeleteMe);
	unsigned long GetbTicked();
	void SetbTicked(unsigned long newbTicked);
	unsigned long GetbOnlyOwnerSee();
	void SetbOnlyOwnerSee(unsigned long newbOnlyOwnerSee);
	unsigned long GetbTickIsDisabled();
	void SetbTickIsDisabled(unsigned long newbTickIsDisabled);
	unsigned long GetbWorldGeometry();
	void SetbWorldGeometry(unsigned long newbWorldGeometry);
	unsigned long GetbIgnoreRigidBodyPawns();
	void SetbIgnoreRigidBodyPawns(unsigned long newbIgnoreRigidBodyPawns);
	unsigned long GetbOrientOnSlope();
	void SetbOrientOnSlope(unsigned long newbOrientOnSlope);
	unsigned long GetbIsMoving();
	unsigned long GetbAlwaysEncroachCheck();
	void SetbAlwaysEncroachCheck(unsigned long newbAlwaysEncroachCheck);
	unsigned long GetbHasAlternateTargetLocation();
	unsigned long GetbAlwaysRelevant();
	unsigned long GetbReplicateInstigator();
	unsigned long GetbReplicateMovement();
	unsigned long GetbUpdateSimulatedPosition();
	void SetbUpdateSimulatedPosition(unsigned long newbUpdateSimulatedPosition);
	unsigned long GetbDemoRecording();
	void SetbDemoRecording(unsigned long newbDemoRecording);
	unsigned long GetbDemoOwner();
	void SetbDemoOwner(unsigned long newbDemoOwner);
	unsigned long GetbForceDemoRelevant();
	void SetbForceDemoRelevant(unsigned long newbForceDemoRelevant);
	unsigned long GetbNetInitialRotation();
	void SetbNetInitialRotation(unsigned long newbNetInitialRotation);
	unsigned long GetbReplicateRigidBodyLocation();
	void SetbReplicateRigidBodyLocation(unsigned long newbReplicateRigidBodyLocation);
	unsigned long GetbKillDuringLevelTransition();
	void SetbKillDuringLevelTransition(unsigned long newbKillDuringLevelTransition);
	unsigned long GetbPostRenderIfNotVisible();
	void SetbPostRenderIfNotVisible(unsigned long newbPostRenderIfNotVisible);
	unsigned long GetbForceNetUpdate();
	void SetbForceNetUpdate(unsigned long newbForceNetUpdate);
	unsigned long GetbForcePacketUpdate();
	void SetbForcePacketUpdate(unsigned long newbForcePacketUpdate);
	unsigned long GetbPendingNetUpdate();
	void SetbPendingNetUpdate(unsigned long newbPendingNetUpdate);
	unsigned long GetbGameRelevant();
	void SetbGameRelevant(unsigned long newbGameRelevant);
	unsigned long GetbMovable();
	void SetbMovable(unsigned long newbMovable);
	unsigned long GetbCanTeleport();
	void SetbCanTeleport(unsigned long newbCanTeleport);
	unsigned long GetbAlwaysTick();
	void SetbAlwaysTick(unsigned long newbAlwaysTick);
	unsigned long GetbBlocksNavigation();
	void SetbBlocksNavigation(unsigned long newbBlocksNavigation);
	unsigned long GetBlockRigidBody();
	void SetBlockRigidBody(unsigned long newBlockRigidBody);
	unsigned long GetbCollideWhenPlacing();
	void SetbCollideWhenPlacing(unsigned long newbCollideWhenPlacing);
	unsigned long GetbCollideActors();
	void SetbCollideActors(unsigned long newbCollideActors);
	unsigned long GetbCollideWorld();
	void SetbCollideWorld(unsigned long newbCollideWorld);
	unsigned long GetbCollideComplex();
	void SetbCollideComplex(unsigned long newbCollideComplex);
	unsigned long GetbBlockActors();
	void SetbBlockActors(unsigned long newbBlockActors);
	unsigned long GetbBlocksTeleport();
	void SetbBlocksTeleport(unsigned long newbBlocksTeleport);
	unsigned long GetbPhysRigidBodyOutOfWorldCheck();
	void SetbPhysRigidBodyOutOfWorldCheck(unsigned long newbPhysRigidBodyOutOfWorldCheck);
	unsigned long GetbComponentOutsideWorld();
	unsigned long GetbRigidBodyWasAwake();
	void SetbRigidBodyWasAwake(unsigned long newbRigidBodyWasAwake);
	unsigned long GetbCallRigidBodyWakeEvents();
	void SetbCallRigidBodyWakeEvents(unsigned long newbCallRigidBodyWakeEvents);
	unsigned long GetbBounce();
	void SetbBounce(unsigned long newbBounce);
	unsigned long GetbEditable();
	void SetbEditable(unsigned long newbEditable);
	unsigned long GetbLockLocation();
	void SetbLockLocation(unsigned long newbLockLocation);
	float GetNetUpdateTime();
	void SetNetUpdateTime(float newNetUpdateTime);
	float GetNetUpdateFrequency();
	void SetNetUpdateFrequency(float newNetUpdateFrequency);
	float GetNetPriority();
	void SetNetPriority(float newNetPriority);
	float GetLastNetUpdateTime();
	float GetLastForcePacketUpdateTime();
	void SetLastForcePacketUpdateTime(float newLastForcePacketUpdateTime);
	float GetTimeSinceLastTick();
	float GetLifeSpan();
	float GetCreationTime();
	float GetLastRenderTime();
	unsigned long long GetHiddenEditorViews();
	void SetHiddenEditorViews(unsigned long long newHiddenEditorViews);
	ArrayWrapper<ActorWrapper> GetAttached();
	Vector GetRelativeLocation();
	void SetRelativeLocation(Vector newRelativeLocation);
	Rotator GetRelativeRotation();
	void SetRelativeRotation(Rotator newRelativeRotation);
	PrimitiveComponentWrapper GetCollisionComponent();

	//AUTO-GENERATED FUNCTION PROXIES
	void ForceNetUpdatePacket();
	void ForceNetUpdate2();
	bool WillOverlap(Vector& PosA, Vector& VelA, Vector& PosB, Vector& VelB, float StepSize, float Radius, float* Time);
	void eventReplicationEnded();
	void eventPostDemoRewind();
	bool IsInPersistentLevel(unsigned long bIncludeLevelStreamingPersistent);
	void SetHUDLocation(Vector& NewHUDLocation);
	void eventSpawnedByKismet();
	Vector GetTargetLocation(ActorWrapper RequestedBy, unsigned long bRequestAlternateLoc);
	unsigned char eventScriptGetTeamNum();
	unsigned char GetTeamNum2();
	bool IsPlayerOwned();
	bool IsStationary();
	void eventDebugMessagePlayer(std::string msg);
	Vector GetGravityAcceleration();
	Vector GetGravityDirection();
	float GetGravityZ();
	bool IsOverlapping(ActorWrapper A);
	bool ContainsPoint(Vector& Spot);
	void eventFellOutOfWorld();
	void SetTickIsDisabled(unsigned long bInDisabled);
	void SetPhysics2(unsigned char newPhysics);
	void SetHidden2(unsigned long bNewHidden);
	void ChartData(std::string DataName, float DataValue);
	void DrawDebugString(Vector& TextLocation, std::string Text, ActorWrapper TestBaseActor, UnrealColor& TextColor, float Duration);
	void DrawDebugCone(Vector& Origin, Vector& Direction, float Length, float AngleWidth, float AngleHeight, int NumSides, UnrealColor& DrawColor, unsigned long bPersistentLines);
	Vector GetAggregateBaseVelocity(ActorWrapper TestBase);
	bool IsOwnedBy(ActorWrapper TestActor);
	bool IsBasedOn(ActorWrapper TestActor);
	float GetTerminalVelocity();
private:
	PIMPL
};