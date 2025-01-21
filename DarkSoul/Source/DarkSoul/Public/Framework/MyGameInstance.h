// Fill out your copyright notice in the Description page of Project Settings.
// GameInstance��ȫ��Ψһ����������������ʼ����ʱ����Ѿ����ɣ�һֱ���ڵ�����ر�
// ��Ҫ����Ϊ��Ϸ����ȫ����ʱ���ݣ���Ҫ�־û�������Ҫ��SaveGame

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class DARKSOUL_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	// ���캯��
	UMyGameInstance();
	// �������ݳ�Ա
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyGameInstance")
	FString AppID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyGameInstance")
	FString AppKey;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyGameInstance")
	FString AppName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyGameInstance")
	FString AppVersion;


};
