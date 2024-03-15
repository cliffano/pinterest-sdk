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
 * OpenAPICatalogsHotelAttributesAllOfMainImage
 *
 * The main hotel image
 */
class OPENAPI_API OpenAPICatalogsHotelAttributesAllOfMainImage : public Model
{
public:
    virtual ~OpenAPICatalogsHotelAttributesAllOfMainImage() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* <p><= 2000 characters</p> <p>The link to the main hotel image. Image should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your hotel. The URL of your main_image.link must be accessible by the Pinterest user-agent, and send the accurate image. Please make sure there is no template or placeholder image at the link. Must start with http:// or https://.</p> */
	TOptional<FString> Link;
	/* Tag appended to the image that identifies image category or details. There can be multiple tags associated with an image */
	TOptional<TArray<FString>> Tag;
};

}
