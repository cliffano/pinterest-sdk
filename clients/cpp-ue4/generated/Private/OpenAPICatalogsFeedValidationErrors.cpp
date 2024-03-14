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

#include "OpenAPICatalogsFeedValidationErrors.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICatalogsFeedValidationErrors::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (FetchError.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("FETCH_ERROR")); WriteJsonValue(Writer, FetchError.GetValue());
	}
	if (FetchInactiveFeedError.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("FETCH_INACTIVE_FEED_ERROR")); WriteJsonValue(Writer, FetchInactiveFeedError.GetValue());
	}
	if (EncodingError.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ENCODING_ERROR")); WriteJsonValue(Writer, EncodingError.GetValue());
	}
	if (DelimiterError.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("DELIMITER_ERROR")); WriteJsonValue(Writer, DelimiterError.GetValue());
	}
	if (RequiredColumnsMissing.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("REQUIRED_COLUMNS_MISSING")); WriteJsonValue(Writer, RequiredColumnsMissing.GetValue());
	}
	if (ImageLinkInvalid.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("IMAGE_LINK_INVALID")); WriteJsonValue(Writer, ImageLinkInvalid.GetValue());
	}
	if (ItemidMissing.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ITEMID_MISSING")); WriteJsonValue(Writer, ItemidMissing.GetValue());
	}
	if (TitleMissing.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("TITLE_MISSING")); WriteJsonValue(Writer, TitleMissing.GetValue());
	}
	if (DescriptionMissing.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("DESCRIPTION_MISSING")); WriteJsonValue(Writer, DescriptionMissing.GetValue());
	}
	if (ProductLinkMissing.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("PRODUCT_LINK_MISSING")); WriteJsonValue(Writer, ProductLinkMissing.GetValue());
	}
	if (ImageLinkMissing.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("IMAGE_LINK_MISSING")); WriteJsonValue(Writer, ImageLinkMissing.GetValue());
	}
	if (AvailabilityInvalid.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("AVAILABILITY_INVALID")); WriteJsonValue(Writer, AvailabilityInvalid.GetValue());
	}
	if (ProductPriceInvalid.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("PRODUCT_PRICE_INVALID")); WriteJsonValue(Writer, ProductPriceInvalid.GetValue());
	}
	if (LinkFormatInvalid.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("LINK_FORMAT_INVALID")); WriteJsonValue(Writer, LinkFormatInvalid.GetValue());
	}
	if (ParseLineError.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("PARSE_LINE_ERROR")); WriteJsonValue(Writer, ParseLineError.GetValue());
	}
	if (AdwordsFormatInvalid.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ADWORDS_FORMAT_INVALID")); WriteJsonValue(Writer, AdwordsFormatInvalid.GetValue());
	}
	if (InternalServiceError.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("INTERNAL_SERVICE_ERROR")); WriteJsonValue(Writer, InternalServiceError.GetValue());
	}
	if (NoVerifiedDomain.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("NO_VERIFIED_DOMAIN")); WriteJsonValue(Writer, NoVerifiedDomain.GetValue());
	}
	if (AdultInvalid.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ADULT_INVALID")); WriteJsonValue(Writer, AdultInvalid.GetValue());
	}
	if (ImageLinkLengthTooLong.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("IMAGE_LINK_LENGTH_TOO_LONG")); WriteJsonValue(Writer, ImageLinkLengthTooLong.GetValue());
	}
	if (InvalidDomain.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("INVALID_DOMAIN")); WriteJsonValue(Writer, InvalidDomain.GetValue());
	}
	if (FeedLengthTooLong.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("FEED_LENGTH_TOO_LONG")); WriteJsonValue(Writer, FeedLengthTooLong.GetValue());
	}
	if (LinkLengthTooLong.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("LINK_LENGTH_TOO_LONG")); WriteJsonValue(Writer, LinkLengthTooLong.GetValue());
	}
	if (MalformedXml.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("MALFORMED_XML")); WriteJsonValue(Writer, MalformedXml.GetValue());
	}
	if (PriceMissing.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("PRICE_MISSING")); WriteJsonValue(Writer, PriceMissing.GetValue());
	}
	if (FeedTooSmall.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("FEED_TOO_SMALL")); WriteJsonValue(Writer, FeedTooSmall.GetValue());
	}
	if (MaxItemsPerItemGroupExceeded.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED")); WriteJsonValue(Writer, MaxItemsPerItemGroupExceeded.GetValue());
	}
	if (ItemMainImageDownloadFailure.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE")); WriteJsonValue(Writer, ItemMainImageDownloadFailure.GetValue());
	}
	if (PinjoinContentUnsafe.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("PINJOIN_CONTENT_UNSAFE")); WriteJsonValue(Writer, PinjoinContentUnsafe.GetValue());
	}
	if (BlocklistedImageSignature.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("BLOCKLISTED_IMAGE_SIGNATURE")); WriteJsonValue(Writer, BlocklistedImageSignature.GetValue());
	}
	if (ListPriceInvalid.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("LIST_PRICE_INVALID")); WriteJsonValue(Writer, ListPriceInvalid.GetValue());
	}
	if (PriceCannotBeDetermined.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("PRICE_CANNOT_BE_DETERMINED")); WriteJsonValue(Writer, PriceCannotBeDetermined.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPICatalogsFeedValidationErrors::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("FETCH_ERROR"), FetchError);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("FETCH_INACTIVE_FEED_ERROR"), FetchInactiveFeedError);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ENCODING_ERROR"), EncodingError);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("DELIMITER_ERROR"), DelimiterError);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("REQUIRED_COLUMNS_MISSING"), RequiredColumnsMissing);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("IMAGE_LINK_INVALID"), ImageLinkInvalid);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ITEMID_MISSING"), ItemidMissing);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("TITLE_MISSING"), TitleMissing);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("DESCRIPTION_MISSING"), DescriptionMissing);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("PRODUCT_LINK_MISSING"), ProductLinkMissing);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("IMAGE_LINK_MISSING"), ImageLinkMissing);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("AVAILABILITY_INVALID"), AvailabilityInvalid);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("PRODUCT_PRICE_INVALID"), ProductPriceInvalid);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("LINK_FORMAT_INVALID"), LinkFormatInvalid);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("PARSE_LINE_ERROR"), ParseLineError);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ADWORDS_FORMAT_INVALID"), AdwordsFormatInvalid);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("INTERNAL_SERVICE_ERROR"), InternalServiceError);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("NO_VERIFIED_DOMAIN"), NoVerifiedDomain);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ADULT_INVALID"), AdultInvalid);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("IMAGE_LINK_LENGTH_TOO_LONG"), ImageLinkLengthTooLong);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("INVALID_DOMAIN"), InvalidDomain);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("FEED_LENGTH_TOO_LONG"), FeedLengthTooLong);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("LINK_LENGTH_TOO_LONG"), LinkLengthTooLong);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("MALFORMED_XML"), MalformedXml);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("PRICE_MISSING"), PriceMissing);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("FEED_TOO_SMALL"), FeedTooSmall);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED"), MaxItemsPerItemGroupExceeded);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE"), ItemMainImageDownloadFailure);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("PINJOIN_CONTENT_UNSAFE"), PinjoinContentUnsafe);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("BLOCKLISTED_IMAGE_SIGNATURE"), BlocklistedImageSignature);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("LIST_PRICE_INVALID"), ListPriceInvalid);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("PRICE_CANNOT_BE_DETERMINED"), PriceCannotBeDetermined);

	return ParseSuccess;
}

}