/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ConditionFilter.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ConditionFilter_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ConditionFilter_H_


#include "ModelBase.h"

#include "model/CatalogsProductGroupMultipleStringCriteria.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ConditionFilter
    : public ModelBase
{
public:
    ConditionFilter();
    virtual ~ConditionFilter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ConditionFilter members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> getCONDITION() const;
    bool cONDITIONIsSet() const;
    void unsetCONDITION();

    void setCONDITION(const std::shared_ptr<CatalogsProductGroupMultipleStringCriteria>& value);


protected:
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> m_CONDITION;
    bool m_CONDITIONIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ConditionFilter_H_ */
