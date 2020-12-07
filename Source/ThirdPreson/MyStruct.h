#include "CoreMinimal.h"
#include "FMyStruct.generated.h"

USTRUCT(BlueprintType)
strcut FMyStruct 
{
	GENERATED_BODY()
	
	URPOPERTY(EditAnywhere,BlueprintReadWrite)    //将字段公开给蓝图访问
		int32 index;
	URPOPERTY(EditAnywhere,BlueprintReadWrite)    //将字段公开给蓝图访问
		FText NickName;
	URPOPERTY(EditAnywhere,BlueprintReadWrite)    //将字段公开给蓝图访问
		int32 kill;
	URPOPERTY(EditAnywhere,BlueprintReadWrite)    //将字段公开给蓝图访问
		int32 death;
}
