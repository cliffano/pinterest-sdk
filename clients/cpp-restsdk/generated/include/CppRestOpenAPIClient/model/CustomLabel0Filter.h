/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * CustomLabel0Filter.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CustomLabel0Filter_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CustomLabel0Filter_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/CatalogsProductGroupMultipleStringCriteria.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  CustomLabel0Filter
    : public ModelBase
{
public:
    CustomLabel0Filter();
    virtual ~CustomLabel0Filter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CustomLabel0Filter members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> getCUSTOMLABEL0() const;
    bool cUSTOMLABEL0IsSet() const;
    void unsetCUSTOM_LABEL_0();

    void setCUSTOMLABEL0(const std::shared_ptr<CatalogsProductGroupMultipleStringCriteria>& value);


protected:
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> m_CUSTOM_LABEL_0;
    bool m_CUSTOM_LABEL_0IsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CustomLabel0Filter_H_ */
