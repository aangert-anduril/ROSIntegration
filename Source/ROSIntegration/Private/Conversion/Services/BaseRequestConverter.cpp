#include "Conversion/Services/BaseRequestConverter.h"


UBaseRequestConverter::UBaseRequestConverter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}


bool UBaseRequestConverter::ConvertOutgoingRequest(TSharedPtr<FROSBaseServiceRequest> Request, bson_t** BSONRequest) {
	return false;
}