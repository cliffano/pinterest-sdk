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
 * MinPriceFilter.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_MinPriceFilter_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_MinPriceFilter_H_


#include "ModelBase.h"

#include "model/CatalogsProductGroupPricingCriteria.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  MinPriceFilter
    : public ModelBase
{
public:
    MinPriceFilter();
    virtual ~MinPriceFilter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MinPriceFilter members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupPricingCriteria> getMINPRICE() const;
    bool mINPRICEIsSet() const;
    void unsetMIN_PRICE();

    void setMINPRICE(const std::shared_ptr<CatalogsProductGroupPricingCriteria>& value);


protected:
    std::shared_ptr<CatalogsProductGroupPricingCriteria> m_MIN_PRICE;
    bool m_MIN_PRICEIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_MinPriceFilter_H_ */
