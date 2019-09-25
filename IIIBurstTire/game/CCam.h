#pragma once
#include "..\address.h"
#include "CVector.h"
#include "CEntity.h"
#include "CPed.h"
#include "CVehicle.h"

#pragma pack(push, 1)
class CCam
{
public:
	char m_bBelowMinDist;
	char m_bBehindPlayerDesired;
	char m_bCamLookingAtVector;
	char m_bCollisionChecksOn;
	char m_bFixingBeta;
	char m_bTheHeightFixerVehicleIsATrain;
	char m_bLookBehindCamWasInFront;
	char m_bLookingBehind;
	char m_bLookingLeft;
	char m_bLookingRight;
	char m_bResetStatics;
	char m_bRotating;
	__int16 m_nMode;
	char _pad0[2];
	__int32 m_nFinishTime;
	int m_nDoCollisionChecksOnFrameNum;
	int m_nDoCollisionCheckEveryNumOfFrames;
	int m_nFrameNumWereAt;
	int m_nRunningVectorArrayPos;
	int m_nRunningVectorCounter;
	float m_nDirectionWasLooking;
	float m_fMaxRoleAngle;
	float m_fRoll;
	float m_fRollSpeed;
	float m_fSyphonModeTargetZOffSet;
	float m_fAmountFractionObscured;
	float m_fAlphaSpeedOverOneFrame;
	float field_44;
	float field_48;
	float m_fBufferedTargetBeta;
	float m_fBufferedTargetOrientation;
	float m_fBufferedTargetOrientationSpeed;
	float m_fCamBufferedHeight;
	float m_fCamBufferedHeightSpeed;
	float m_fCloseInPedHeightOffset;
	float m_fCloseInPedHeightOffsetSpeed;
	float m_fCloseInCarHeightOffset;
	float m_fCloseInCarHeightOffsetSpeed;
	float m_fDimensionOfHighestNearCar;
	float m_fDistanceBeforeChanges;
	float m_fFovSpeedOverOneFrame;
	float m_fMinDistAwayFromCamWhenInterPolating;
	float m_fPedBetweenCameraHeightOffset;
	float m_fPlayerInFrontSyphonAngleOffSet;
	float m_fRadiusForDead;
	float m_fRealGroundDist;
	float m_fTargetBeta;
	float m_fTimeElapsedFloat;
	float field_98;
	float field_9C;
	float field_A0;
	float field_A4;
	float m_fVerticalAngle;
	float m_fAlphaSpeed;
	float m_fFOV;
	float m_fFOVSpeed;
	float m_fHorizontalAngle;
	float m_fBetaSpeed;
	float m_fDistance;
	float m_fDistanceSpeed;
	float m_fCaMinDistance;
	float m_fCaMaxDistance;
	float m_fSpeedVar;
	float field_D4;
	float field_D8;
	float field_DC;
	float field_E0;
	float field_E4;
	float field_E8;
	float field_EC;
	float field_F0;
	float field_F4;
	CVector m_vecTarget;
	CVector field_104;
	CVector field_110;
	CVector field_11C;
	CVector field_128;
	CVector field_134;
	CVector m_vecFront;
	CVector m_vecSource;
	CVector m_vecSourceBeforeLookBehind;
	CVector m_vecUp;
	CVector m_vecPreviousVectors[2];
	CEntity *m_pCamTargetEntity;
	float m_fCameraDistance;
	float m_fIdealAlpha;
	float m_fPlayerVelocity;
	CVehicle *m_pLastCarEntered;
	CPed *m_pLastPedLookedAt;
	char m_bFirstPersonRunAboutActive;
	char _pad1[3];

};
#pragma pack(pop)
