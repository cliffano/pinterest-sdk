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
 * MaxPriceFilter.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_MaxPriceFilter_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_MaxPriceFilter_H_


#include "ModelBase.h"

#include "model/CatalogsProductGroupPricingCriteria.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  MaxPriceFilter
    : public ModelBase
{
public:
    MaxPriceFilter();
    virtual ~MaxPriceFilter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MaxPriceFilter members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupPricingCriteria> getMAXPRICE() const;
    bool mAXPRICEIsSet() const;
    void unsetMAX_PRICE();

    void setMAXPRICE(const std::shared_ptr<CatalogsProductGroupPricingCriteria>& value);


protected:
    std::shared_ptr<CatalogsProductGroupPricingCriteria> m_MAX_PRICE;
    bool m_MAX_PRICEIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_MaxPriceFilter_H_ */
