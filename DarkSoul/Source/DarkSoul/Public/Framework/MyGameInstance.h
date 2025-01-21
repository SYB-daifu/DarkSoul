// Fill out your copyright notice in the Description page of Project Settings.
// GameInstance是全局唯一单例，这个在引擎初始化的时候就已经生成，一直存在到引擎关闭
// 主要用于为游戏保存全局临时数据，想要持久化保存需要用SaveGame

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
	// 构造函数
	UMyGameInstance();
	// 基本数据成员
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyGameInstance")
	FString AppID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyGameInstance")
	FString AppKey;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyGameInstance")
	FString AppName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyGameInstance")
	FString AppVersion;


};
