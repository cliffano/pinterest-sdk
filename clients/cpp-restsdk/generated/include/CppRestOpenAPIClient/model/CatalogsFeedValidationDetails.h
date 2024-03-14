/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * CatalogsFeedValidationDetails.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedValidationDetails_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedValidationDetails_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/CatalogsFeedValidationErrors.h"
#include "CppRestOpenAPIClient/model/CatalogsFeedValidationWarnings.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class CatalogsFeedValidationErrors;
class CatalogsFeedValidationWarnings;

/// <summary>
/// 
/// </summary>
class  CatalogsFeedValidationDetails
    : public ModelBase
{
public:
    CatalogsFeedValidationDetails();
    virtual ~CatalogsFeedValidationDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CatalogsFeedValidationDetails members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsFeedValidationErrors> getErrors() const;
    bool errorsIsSet() const;
    void unsetErrors();

    void setErrors(const std::shared_ptr<CatalogsFeedValidationErrors>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsFeedValidationWarnings> getWarnings() const;
    bool warningsIsSet() const;
    void unsetWarnings();

    void setWarnings(const std::shared_ptr<CatalogsFeedValidationWarnings>& value);


protected:
    std::shared_ptr<CatalogsFeedValidationErrors> m_Errors;
    bool m_ErrorsIsSet;
    std::shared_ptr<CatalogsFeedValidationWarnings> m_Warnings;
    bool m_WarningsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedValidationDetails_H_ */
