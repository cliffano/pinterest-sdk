/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"

namespace OpenAPI
{

/*
 * OpenAPICatalogsItemValidationIssue
 *
 * 
 */
class OPENAPI_API OpenAPICatalogsItemValidationIssue : public Model
{
public:
    virtual ~OpenAPICatalogsItemValidationIssue() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	enum class Values
	{
		AdLinkFormatWarning,
		AdLinkSameAsLink,
		AdditionalImageLinkLengthTooLong,
		AdditionalImageLinkWarning,
		AdultInvalid,
		AdwordsFormatInvalid,
		AdwordsFormatWarning,
		AdwordsSameAsLink,
		AgeGroupInvalid,
		AndroidDeepLinkInvalid,
		AvailabilityDateInvalid,
		AvailabilityInvalid,
		BlocklistedImageSignature,
		CountryDoesNotMapToCurrency,
		CustomLabelLengthTooLong,
		DescriptionLengthTooLong,
		DescriptionMissing,
		DuplicateProducts,
		ExpirationDateInvalid,
		GenderInvalid,
		GtinInvalid,
		ImageLinkInvalid,
		ImageLinkLengthTooLong,
		ImageLinkMissing,
		ImageLinkWarning,
		InvalidDomain,
		IosDeepLinkInvalid,
		IsBundleInvalid,
		ItemAdditionalImageDownloadFailure,
		ItemMainImageDownloadFailure,
		ItemidMissing,
		LinkFormatInvalid,
		LinkFormatWarning,
		LinkLengthTooLong,
		ListPriceInvalid,
		MaxItemsPerItemGroupExceeded,
		MinAdPriceInvalid,
		MpnInvalid,
		MultipackInvalid,
		OptionalConditionInvalid,
		OptionalConditionMissing,
		OptionalProductCategoryInvalid,
		OptionalProductCategoryMissing,
		ParseLineError,
		PinjoinContentUnsafe,
		PriceCannotBeDetermined,
		PriceMissing,
		ProductCategoryDepthWarning,
		ProductLinkMissing,
		ProductPriceInvalid,
		ProductTypeLengthTooLong,
		SaleDateInvalid,
		SalesPriceInvalid,
		SalesPriceTooHigh,
		SalesPriceTooLow,
		ShippingInvalid,
		ShippingHeightInvalid,
		ShippingWeightInvalid,
		ShippingWidthInvalid,
		SizeSystemInvalid,
		SizeTypeInvalid,
		TaxInvalid,
		TitleLengthTooLong,
		TitleMissing,
		TooManyAdditionalImageLinks,
		UtmSourceAutoCorrected,
		WeightUnitInvalid,
  	};

	Values Value;

	static FString EnumToString(const Values& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, Values& EnumValue);
};

}
