/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * CatalogsFeedsCreateRequest_default_locale.h
 *
 * The locale used within a feed for product descriptions.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedsCreateRequest_default_locale_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedsCreateRequest_default_locale_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/CatalogsLocale.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// The locale used within a feed for product descriptions.
/// </summary>
class  CatalogsFeedsCreateRequest_default_locale
    : public ModelBase
{
public:
    CatalogsFeedsCreateRequest_default_locale();
    virtual ~CatalogsFeedsCreateRequest_default_locale();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CatalogsFeedsCreateRequest_default_locale members


protected:
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedsCreateRequest_default_locale_H_ */
