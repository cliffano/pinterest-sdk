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
 * CatalogsProductGroupPricingCriteria.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsProductGroupPricingCriteria_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsProductGroupPricingCriteria_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  CatalogsProductGroupPricingCriteria
    : public ModelBase
{
public:
    CatalogsProductGroupPricingCriteria();
    virtual ~CatalogsProductGroupPricingCriteria();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CatalogsProductGroupPricingCriteria members

    /// <summary>
    /// 
    /// </summary>
    bool isInclusion() const;
    bool inclusionIsSet() const;
    void unsetInclusion();

    void setInclusion(bool value);

    /// <summary>
    /// 
    /// </summary>
    double getValues() const;
    bool valuesIsSet() const;
    void unsetValues();

    void setValues(double value);

    /// <summary>
    /// 
    /// </summary>
    bool isNegated() const;
    bool negatedIsSet() const;
    void unsetNegated();

    void setNegated(bool value);


protected:
    bool m_Inclusion;
    bool m_InclusionIsSet;
    double m_Values;
    bool m_ValuesIsSet;
    bool m_Negated;
    bool m_NegatedIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsProductGroupPricingCriteria_H_ */
