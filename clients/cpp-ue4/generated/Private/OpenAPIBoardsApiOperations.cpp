/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPIBoardsApiOperations.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Dom/JsonObject.h"
#include "Templates/SharedPointer.h"
#include "HttpModule.h"
#include "PlatformHttp.h"

namespace OpenAPI
{

FString OpenAPIBoardsApi::BoardSectionsCreateRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("board_id"), ToStringFormatArg(BoardId) } };

	FString Path = FString::Format(TEXT("/boards/{board_id}/sections"), PathParams);

	return Path;
}

void OpenAPIBoardsApi::BoardSectionsCreateRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, OpenAPIBoardSection);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIBoardSection) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIBoardSection) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIBoardsApi::BoardSectionsCreateResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 201:
		SetResponseString(TEXT("response"));
		break;
	case 400:
		SetResponseString(TEXT("Invalid board section parameters."));
		break;
	case 403:
		SetResponseString(TEXT("Not authorized to create board sections."));
		break;
	case 409:
		SetResponseString(TEXT("Could not get exclusive access to the board to create a new section."));
		break;
	case 500:
		SetResponseString(TEXT("Could not create a new board section."));
		break;
	case 0:
	default:
		SetResponseString(TEXT("Unexpected error"));
		break;
	}
}

bool OpenAPIBoardsApi::BoardSectionsCreateResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIBoardsApi::BoardSectionsDeleteRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("board_id"), ToStringFormatArg(BoardId) },
	{ TEXT("section_id"), ToStringFormatArg(SectionId) } };

	FString Path = FString::Format(TEXT("/boards/{board_id}/sections/{section_id}"), PathParams);

	return Path;
}

void OpenAPIBoardsApi::BoardSectionsDeleteRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("DELETE"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Form parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);
		Writer->WriteObjectStart();
		Writer->WriteObjectEnd();
		Writer->Close();
		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIBoardsApi::BoardSectionsDeleteResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 204:
		SetResponseString(TEXT("Board section deleted successfully"));
		break;
	case 403:
		SetResponseString(TEXT("Not authorized to delete board section."));
		break;
	case 404:
		SetResponseString(TEXT("Board section not found."));
		break;
	case 409:
		SetResponseString(TEXT("Board section conflict."));
		break;
	case 0:
	default:
		SetResponseString(TEXT("Unexpected error"));
		break;
	}
}

bool OpenAPIBoardsApi::BoardSectionsDeleteResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return true;
}

FString OpenAPIBoardsApi::BoardSectionsListRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("board_id"), ToStringFormatArg(BoardId) } };

	FString Path = FString::Format(TEXT("/boards/{board_id}/sections"), PathParams);

	TArray<FString> QueryParams;
	if(Bookmark.IsSet())
	{
		QueryParams.Add(FString(TEXT("bookmark=")) + ToUrlString(Bookmark.GetValue()));
	}
	if(PageSize.IsSet())
	{
		QueryParams.Add(FString(TEXT("page_size=")) + ToUrlString(PageSize.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void OpenAPIBoardsApi::BoardSectionsListRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Form parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);
		Writer->WriteObjectStart();
		Writer->WriteObjectEnd();
		Writer->Close();
		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIBoardsApi::BoardSectionsListResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("response"));
		break;
	case 0:
	default:
		SetResponseString(TEXT("Unexpected error"));
		break;
	}
}

bool OpenAPIBoardsApi::BoardSectionsListResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIBoardsApi::BoardSectionsListPinsRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("board_id"), ToStringFormatArg(BoardId) },
	{ TEXT("section_id"), ToStringFormatArg(SectionId) } };

	FString Path = FString::Format(TEXT("/boards/{board_id}/sections/{section_id}/pins"), PathParams);

	TArray<FString> QueryParams;
	if(Bookmark.IsSet())
	{
		QueryParams.Add(FString(TEXT("bookmark=")) + ToUrlString(Bookmark.GetValue()));
	}
	if(PageSize.IsSet())
	{
		QueryParams.Add(FString(TEXT("page_size=")) + ToUrlString(PageSize.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void OpenAPIBoardsApi::BoardSectionsListPinsRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Form parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);
		Writer->WriteObjectStart();
		Writer->WriteObjectEnd();
		Writer->Close();
		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIBoardsApi::BoardSectionsListPinsResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("response"));
		break;
	case 403:
		SetResponseString(TEXT("Not authorized to access Pins on board section."));
		break;
	case 404:
		SetResponseString(TEXT("Board or section not found."));
		break;
	case 409:
		SetResponseString(TEXT("Board section conflict."));
		break;
	case 0:
	default:
		SetResponseString(TEXT("Unexpected error"));
		break;
	}
}

bool OpenAPIBoardsApi::BoardSectionsListPinsResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIBoardsApi::BoardSectionsUpdateRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("board_id"), ToStringFormatArg(BoardId) },
	{ TEXT("section_id"), ToStringFormatArg(SectionId) } };

	FString Path = FString::Format(TEXT("/boards/{board_id}/sections/{section_id}"), PathParams);

	return Path;
}

void OpenAPIBoardsApi::BoardSectionsUpdateRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("PATCH"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, OpenAPIBoardSection);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIBoardSection) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIBoardSection) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIBoardsApi::BoardSectionsUpdateResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("response"));
		break;
	case 400:
		SetResponseString(TEXT("Invalid board section parameters."));
		break;
	case 403:
		SetResponseString(TEXT("Not authorized to update board section."));
		break;
	case 409:
		SetResponseString(TEXT("Board section conflict."));
		break;
	case 0:
	default:
		SetResponseString(TEXT("Unexpected error"));
		break;
	}
}

bool OpenAPIBoardsApi::BoardSectionsUpdateResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIBoardsApi::BoardsCreateRequest::ComputePath() const
{
	FString Path(TEXT("/boards"));
	return Path;
}

void OpenAPIBoardsApi::BoardsCreateRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, OpenAPIBoard);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIBoard) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIBoard) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIBoardsApi::BoardsCreateResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 201:
		SetResponseString(TEXT("response"));
		break;
	case 400:
		SetResponseString(TEXT("The board name is invalid or duplicated."));
		break;
	case 0:
	default:
		SetResponseString(TEXT("Unexpected error"));
		break;
	}
}

bool OpenAPIBoardsApi::BoardsCreateResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIBoardsApi::BoardsDeleteRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("board_id"), ToStringFormatArg(BoardId) } };

	FString Path = FString::Format(TEXT("/boards/{board_id}"), PathParams);

	return Path;
}

void OpenAPIBoardsApi::BoardsDeleteRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("DELETE"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Form parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);
		Writer->WriteObjectStart();
		Writer->WriteObjectEnd();
		Writer->Close();
		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIBoardsApi::BoardsDeleteResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 204:
		SetResponseString(TEXT("Board deleted successfully"));
		break;
	case 403:
		SetResponseString(TEXT("Not authorized to delete the board."));
		break;
	case 404:
		SetResponseString(TEXT("Board not found."));
		break;
	case 409:
		SetResponseString(TEXT("Could not get exclusive access to delete the board."));
		break;
	case 429:
		SetResponseString(TEXT("This request exceeded a rate limit. This can happen if the client exceeds one of the published rate limits or if multiple write operations are applied to an object within a short time window."));
		break;
	case 0:
	default:
		SetResponseString(TEXT("Unexpected error"));
		break;
	}
}

bool OpenAPIBoardsApi::BoardsDeleteResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return true;
}

FString OpenAPIBoardsApi::BoardsGetRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("board_id"), ToStringFormatArg(BoardId) } };

	FString Path = FString::Format(TEXT("/boards/{board_id}"), PathParams);

	return Path;
}

void OpenAPIBoardsApi::BoardsGetRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Form parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);
		Writer->WriteObjectStart();
		Writer->WriteObjectEnd();
		Writer->Close();
		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIBoardsApi::BoardsGetResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("response"));
		break;
	case 404:
		SetResponseString(TEXT("Board not found."));
		break;
	case 0:
	default:
		SetResponseString(TEXT("Unexpected error"));
		break;
	}
}

bool OpenAPIBoardsApi::BoardsGetResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

inline FString ToString(const OpenAPIBoardsApi::BoardsListRequest::PrivacyEnum& Value)
{
	switch (Value)
	{
	case OpenAPIBoardsApi::BoardsListRequest::PrivacyEnum::_Public:
		return TEXT("PUBLIC");
	case OpenAPIBoardsApi::BoardsListRequest::PrivacyEnum::_Protected:
		return TEXT("PROTECTED");
	case OpenAPIBoardsApi::BoardsListRequest::PrivacyEnum::Secret:
		return TEXT("SECRET");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIBoardsApi::BoardsListRequest::PrivacyEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIBoardsApi::BoardsListRequest::EnumToString(const OpenAPIBoardsApi::BoardsListRequest::PrivacyEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIBoardsApi::BoardsListRequest::PrivacyEnum& Value)
{
	static TMap<FString, OpenAPIBoardsApi::BoardsListRequest::PrivacyEnum> StringToEnum = { 
		{ TEXT("PUBLIC"), OpenAPIBoardsApi::BoardsListRequest::PrivacyEnum::_Public },
		{ TEXT("PROTECTED"), OpenAPIBoardsApi::BoardsListRequest::PrivacyEnum::_Protected },
		{ TEXT("SECRET"), OpenAPIBoardsApi::BoardsListRequest::PrivacyEnum::Secret }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIBoardsApi::BoardsListRequest::EnumFromString(const FString& EnumAsString, OpenAPIBoardsApi::BoardsListRequest::PrivacyEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIBoardsApi::BoardsListRequest::PrivacyEnum& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIBoardsApi::BoardsListRequest::PrivacyEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIBoardsApi::BoardsListRequest::PrivacyEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

FString OpenAPIBoardsApi::BoardsListRequest::ComputePath() const
{
	FString Path(TEXT("/boards"));
	TArray<FString> QueryParams;
	if(Bookmark.IsSet())
	{
		QueryParams.Add(FString(TEXT("bookmark=")) + ToUrlString(Bookmark.GetValue()));
	}
	if(PageSize.IsSet())
	{
		QueryParams.Add(FString(TEXT("page_size=")) + ToUrlString(PageSize.GetValue()));
	}
	if(Privacy.IsSet())
	{
		QueryParams.Add(FString(TEXT("privacy=")) + ToUrlString(Privacy.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void OpenAPIBoardsApi::BoardsListRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Form parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);
		Writer->WriteObjectStart();
		Writer->WriteObjectEnd();
		Writer->Close();
		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIBoardsApi::BoardsListResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("response"));
		break;
	case 0:
	default:
		SetResponseString(TEXT("Unexpected error"));
		break;
	}
}

bool OpenAPIBoardsApi::BoardsListResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIBoardsApi::BoardsListPinsRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("board_id"), ToStringFormatArg(BoardId) } };

	FString Path = FString::Format(TEXT("/boards/{board_id}/pins"), PathParams);

	TArray<FString> QueryParams;
	if(Bookmark.IsSet())
	{
		QueryParams.Add(FString(TEXT("bookmark=")) + ToUrlString(Bookmark.GetValue()));
	}
	if(PageSize.IsSet())
	{
		QueryParams.Add(FString(TEXT("page_size=")) + ToUrlString(PageSize.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void OpenAPIBoardsApi::BoardsListPinsRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Form parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);
		Writer->WriteObjectStart();
		Writer->WriteObjectEnd();
		Writer->Close();
		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIBoardsApi::BoardsListPinsResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("response"));
		break;
	case 404:
		SetResponseString(TEXT("Board not found."));
		break;
	case 0:
	default:
		SetResponseString(TEXT("Unexpected error"));
		break;
	}
}

bool OpenAPIBoardsApi::BoardsListPinsResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIBoardsApi::BoardsUpdateRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("board_id"), ToStringFormatArg(BoardId) } };

	FString Path = FString::Format(TEXT("/boards/{board_id}"), PathParams);

	return Path;
}

void OpenAPIBoardsApi::BoardsUpdateRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("PATCH"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, OpenAPIBoardUpdate);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIBoardUpdate) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIBoardUpdate) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIBoardsApi::BoardsUpdateResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("response"));
		break;
	case 400:
		SetResponseString(TEXT("Invalid board parameters."));
		break;
	case 403:
		SetResponseString(TEXT("Not authorized to update the board."));
		break;
	case 429:
		SetResponseString(TEXT("This request exceeded a rate limit. This can happen if the client exceeds one of the published rate limits or if multiple write operations are applied to an object within a short time window."));
		break;
	case 0:
	default:
		SetResponseString(TEXT("Unexpected error"));
		break;
	}
}

bool OpenAPIBoardsApi::BoardsUpdateResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

}
