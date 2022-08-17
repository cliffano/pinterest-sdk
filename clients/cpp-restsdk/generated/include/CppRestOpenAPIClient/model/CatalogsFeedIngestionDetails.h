/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * CatalogsFeedIngestionDetails.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedIngestionDetails_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedIngestionDetails_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/CatalogsFeedIngestionErrors.h"
#include "CppRestOpenAPIClient/model/CatalogsFeedIngestionInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class CatalogsFeedIngestionErrors;
class CatalogsFeedIngestionInfo;

/// <summary>
/// 
/// </summary>
class  CatalogsFeedIngestionDetails
    : public ModelBase
{
public:
    CatalogsFeedIngestionDetails();
    virtual ~CatalogsFeedIngestionDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CatalogsFeedIngestionDetails members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsFeedIngestionErrors> getErrors() const;
    bool errorsIsSet() const;
    void unsetErrors();

    void setErrors(const std::shared_ptr<CatalogsFeedIngestionErrors>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsFeedIngestionInfo> getInfo() const;
    bool infoIsSet() const;
    void unsetInfo();

    void setInfo(const std::shared_ptr<CatalogsFeedIngestionInfo>& value);


protected:
    std::shared_ptr<CatalogsFeedIngestionErrors> m_Errors;
    bool m_ErrorsIsSet;
    std::shared_ptr<CatalogsFeedIngestionInfo> m_Info;
    bool m_InfoIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedIngestionDetails_H_ */
