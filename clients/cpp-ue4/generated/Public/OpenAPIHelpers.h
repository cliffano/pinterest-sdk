/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"

#include "Serialization/JsonSerializer.h"
#include "Dom/JsonObject.h"
#include "Misc/Base64.h"
#include "PlatformHttp.h"

class IHttpRequest;

namespace OpenAPI
{

typedef TSharedRef<TJsonWriter<>> JsonWriter;

//////////////////////////////////////////////////////////////////////////

class OPENAPI_API HttpFileInput
{
public:
	explicit HttpFileInput(const TCHAR* InFilePath);
	explicit HttpFileInput(const FString& InFilePath);

	// This will automatically set the content type if not already set
    void SetFilePath(const TCHAR* InFilePath);
	void SetFilePath(const FString& InFilePath);

    // Optional if it can be deduced from the FilePath
    void SetContentType(const TCHAR* ContentType);

	HttpFileInput& operator=(const HttpFileInput& Other) = default;
	HttpFileInput& operator=(const FString& InFilePath) { SetFilePath(*InFilePath); return*this; }
	HttpFileInput& operator=(const TCHAR* InFilePath) { SetFilePath(InFilePath); return*this; }

	const FString& GetFilePath() const { return FilePath; }
	const FString& GetContentType() const { return ContentType; }

	// Returns the filename with extension
	FString GetFilename() const;

private:
    FString FilePath;
    FString ContentType;
};

//////////////////////////////////////////////////////////////////////////

class HttpMultipartFormData
{
public:
	void SetBoundary(const TCHAR* InBoundary);
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest);

	void AddStringPart(const TCHAR* Name, const TCHAR* Data);
	void AddJsonPart(const TCHAR* Name, const FString& JsonString);
	void AddBinaryPart(const TCHAR* Name, const TArray<uint8>& ByteArray);
	void AddFilePart(const TCHAR* Name, const HttpFileInput& File);

private:
	void AppendString(const TCHAR* Str);
	const FString& GetBoundary() const;

	mutable FString Boundary;
	TArray<uint8> FormData;

	static const TCHAR* Delimiter;
	static const TCHAR* Newline;
};

//////////////////////////////////////////////////////////////////////////

// Decodes Base64Url encoded strings, see https://en.wikipedia.org/wiki/Base64#Variants_summary_table
template<typename T>
bool Base64UrlDecode(const FString& Base64String, T& Value)
{
	FString TmpCopy(Base64String);
	TmpCopy.ReplaceInline(TEXT("-"), TEXT("+"));
	TmpCopy.ReplaceInline(TEXT("_"), TEXT("/"));

	return FBase64::Decode(TmpCopy, Value);
}

// Encodes strings in Base64Url, see https://en.wikipedia.org/wiki/Base64#Variants_summary_table
template<typename T>
FString Base64UrlEncode(const T& Value)
{
	FString Base64String = FBase64::Encode(Value);
	Base64String.ReplaceInline(TEXT("+"), TEXT("-"));
	Base64String.ReplaceInline(TEXT("/"), TEXT("_"));
	return Base64String;
}

template<typename T>
inline auto ToString(const T& Value)
	-> typename std::enable_if<std::is_same<decltype(::LexToString(Value)), FString>::value, FString>::type
{
	return ::LexToString(Value);
}

template<typename T>
inline auto ToString(const T& EnumModelValue)
	-> typename std::enable_if<std::is_same<decltype(T::EnumToString(EnumModelValue.Value)), FString>::value, FString>::type
{
	return T::EnumToString(EnumModelValue.Value);
}

inline FString ToString(const Model& Value)
{
	FString String;
	JsonWriter Writer = TJsonWriterFactory<>::Create(&String);
	Value.WriteJson(Writer);
	Writer->Close();
	return String;
}

inline FString ToString(const FDateTime& Value)
{
	return Value.ToIso8601();
}

inline FString ToString(const FGuid& Value)
{
	return Value.ToString(EGuidFormats::DigitsWithHyphens);
}

inline FString ToString(const TArray<uint8>& Value)
{
	return FBase64::Encode(Value);
}

template<typename T>
inline FString ToUrlString(const T& Value)
{
	return FPlatformHttp::UrlEncode(ToString(Value));
}

inline FString ToUrlString(const TArray<uint8>& Value)
{
	return Base64UrlEncode(Value);
}

template<typename T>
inline FString CollectionToUrlString(const TArray<T>& Collection, const TCHAR* Separator)
{
	FString Output;
	if(Collection.Num() == 0)
		return Output;

	Output += ToUrlString(Collection[0]);
	for(int i = 1; i < Collection.Num(); i++)
	{
		Output += FString::Format(TEXT("{0}{1}"), { Separator, *ToUrlString(Collection[i]) });
	}
	return Output;
}

template<typename T>
inline FString CollectionToUrlString_csv(const TArray<T>& Collection, const TCHAR* BaseName)
{
	return CollectionToUrlString(Collection, TEXT(","));
}

template<typename T>
inline FString CollectionToUrlString_ssv(const TArray<T>& Collection, const TCHAR* BaseName)
{
	return CollectionToUrlString(Collection, TEXT(" "));
}

template<typename T>
inline FString CollectionToUrlString_tsv(const TArray<T>& Collection, const TCHAR* BaseName)
{
	return CollectionToUrlString(Collection, TEXT("\t"));
}

template<typename T>
inline FString CollectionToUrlString_pipes(const TArray<T>& Collection, const TCHAR* BaseName)
{
	return CollectionToUrlString(Collection, TEXT("|"));
}

template<typename T>
inline FString CollectionToUrlString_multi(const TArray<T>& Collection, const TCHAR* BaseName)
{
	FString Output;
	if(Collection.Num() == 0)
		return Output;

	Output += FString::Format(TEXT("{0}={1}"), { FStringFormatArg(BaseName), ToUrlString(Collection[0]) });
	for(int i = 1; i < Collection.Num(); i++)
	{
		Output += FString::Format(TEXT("&{0}={1}"), { FStringFormatArg(BaseName), ToUrlString(Collection[i]) });
	}
	return Output;
}


template <typename T>
inline FString CollectionToUrlString_multi(const TSet<T>& Collection, const TCHAR* BaseName)
{
	FString Output;
	if (Collection.Num() == 0)
	{
		return Output;
	}

	int32 Index = 0;
	for (typename TSet<T>::TConstIterator Iter = Collection.CreateConstIterator(); Iter; ++Iter)
	{
		if (Index == 0)
		{
			Output += FString::Format(TEXT("{0}={1}"), { FStringFormatArg(BaseName), ToUrlString(*Iter) });
			Index++;
			continue;
		}
		Output += FString::Format(TEXT("&{0}={1}"), { FStringFormatArg(BaseName), ToUrlString(*Iter) });
	}
	return Output;
}
	
//////////////////////////////////////////////////////////////////////////

inline void WriteJsonValue(JsonWriter& Writer, const TSharedPtr<FJsonValue>& Value)
{
	if (Value.IsValid())
	{
		FJsonSerializer::Serialize(Value.ToSharedRef(), "", Writer, false);
	}
	else
	{
		Writer->WriteObjectStart();
		Writer->WriteObjectEnd();
	}
}

inline void WriteJsonValue(JsonWriter& Writer, const TSharedPtr<FJsonObject>& Value)
{
	if (Value.IsValid())
	{
		FJsonSerializer::Serialize(Value.ToSharedRef(), Writer, false);
	}
	else
	{
		Writer->WriteObjectStart();
		Writer->WriteObjectEnd();
	}
}

inline void WriteJsonValue(JsonWriter& Writer, const TArray<uint8>& Value)
{
	Writer->WriteValue(FBase64::Encode(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const FDateTime& Value)
{
	Writer->WriteValue(Value.ToIso8601());
}

inline void WriteJsonValue(JsonWriter& Writer, const FGuid& Value)
{
	Writer->WriteValue(Value.ToString(EGuidFormats::DigitsWithHyphens));
}

inline void WriteJsonValue(JsonWriter& Writer, const Model& Value)
{
	Value.WriteJson(Writer);
}

template<typename T, typename std::enable_if<!std::is_base_of<Model, T>::value, int>::type = 0>
inline void WriteJsonValue(JsonWriter& Writer, const T& Value)
{
	Writer->WriteValue(Value);
}

template<typename T>
inline void WriteJsonValue(JsonWriter& Writer, const TArray<T>& Value)
{
	Writer->WriteArrayStart();
	for (const auto& Element : Value)
	{
		WriteJsonValue(Writer, Element);
	}
	Writer->WriteArrayEnd();
}

template<typename T>
inline void WriteJsonValue(JsonWriter& Writer, const TMap<FString, T>& Value)
{
	Writer->WriteObjectStart();
	for (const auto& It : Value)
	{
		Writer->WriteIdentifierPrefix(It.Key);
		WriteJsonValue(Writer, It.Value);
	}
	Writer->WriteObjectEnd();
}

//////////////////////////////////////////////////////////////////////////

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, FString& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		Value = TmpValue;
		return true;
	}
	else
		return false;
}

OPENAPI_API bool ParseDateTime(const FString& DateTimeString, FDateTime& OutDateTime);

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, FDateTime& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		return ParseDateTime(TmpValue, Value);
	}
	else
		return false;
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, FGuid& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		return FGuid::Parse(TmpValue, Value);
	}
	else
		return false;
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, bool& Value)
{
	bool TmpValue;
	if (JsonValue->TryGetBool(TmpValue))
	{
		Value = TmpValue;
		return true;
	}
	else
		return false;
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, TSharedPtr<FJsonValue>& JsonObjectValue)
{
	JsonObjectValue = JsonValue;
	return true;
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, TSharedPtr<FJsonObject>& JsonObjectValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (JsonValue->TryGetObject(Object))
	{
		JsonObjectValue = *Object;
		return true;
	}
	return false;
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, TArray<uint8>& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		FBase64::Decode(TmpValue, Value);
		return true;
	}
	else
		return false;
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, Model& Value)
{
	return Value.FromJson(JsonValue);
}

template<typename T, typename std::enable_if<!std::is_base_of<Model, T>::value, int>::type = 0>
inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, T& Value)
{
	T TmpValue;
	if (JsonValue->TryGetNumber(TmpValue))
	{
		Value = TmpValue;
		return true;
	}
	else
		return false;
}

template<typename T>
inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, TArray<T>& ArrayValue)
{
	const TArray<TSharedPtr<FJsonValue>>* JsonArray;
	if (JsonValue->TryGetArray(JsonArray))
	{
		bool ParseSuccess = true;
		const int32 Count = JsonArray->Num();
		ArrayValue.Reset(Count);
		for (int i = 0; i < Count; i++)
		{
			T TmpValue;
			ParseSuccess &= TryGetJsonValue((*JsonArray)[i], TmpValue);
			ArrayValue.Emplace(MoveTemp(TmpValue));
		}
		return ParseSuccess;
	}
	return false;
}

template<typename T>
inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, TMap<FString, T>& MapValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (JsonValue->TryGetObject(Object))
	{
		MapValue.Reset();
		bool ParseSuccess = true;
		for (const auto& It : (*Object)->Values)
		{
			T TmpValue;
			ParseSuccess &= TryGetJsonValue(It.Value, TmpValue);
			MapValue.Emplace(It.Key, MoveTemp(TmpValue));
		}
		return ParseSuccess;
	}
	return false;
}

template<typename T>
inline bool TryGetJsonValue(const TSharedPtr<FJsonObject>& JsonObject, const FString& Key, T& Value)
{
	const TSharedPtr<FJsonValue> JsonValue = JsonObject->TryGetField(Key);
	if (JsonValue.IsValid() && !JsonValue->IsNull())
	{
		return TryGetJsonValue(JsonValue, Value);
	}
	return false;
}

template<typename T>
inline bool TryGetJsonValue(const TSharedPtr<FJsonObject>& JsonObject, const FString& Key, TOptional<T>& OptionalValue)
{
	if(JsonObject->HasField(Key))
	{
		T Value;
		if (TryGetJsonValue(JsonObject, Key, Value))
		{
			OptionalValue = Value;
			return true;
		}
		else
			return false;
	}
	return true; // Absence of optional value is not a parsing error
}

}
