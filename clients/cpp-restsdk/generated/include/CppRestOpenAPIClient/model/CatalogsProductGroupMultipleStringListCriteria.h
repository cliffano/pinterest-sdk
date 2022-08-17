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
 * CatalogsProductGroupMultipleStringListCriteria.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsProductGroupMultipleStringListCriteria_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsProductGroupMultipleStringListCriteria_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  CatalogsProductGroupMultipleStringListCriteria
    : public ModelBase
{
public:
    CatalogsProductGroupMultipleStringListCriteria();
    virtual ~CatalogsProductGroupMultipleStringListCriteria();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CatalogsProductGroupMultipleStringListCriteria members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::vector<utility::string_t>>& getValues();
    bool valuesIsSet() const;
    void unsetValues();

    void setValues(const std::vector<std::vector<utility::string_t>>& value);

    /// <summary>
    /// 
    /// </summary>
    bool isNegated() const;
    bool negatedIsSet() const;
    void unsetNegated();

    void setNegated(bool value);


protected:
    std::vector<std::vector<utility::string_t>> m_Values;
    bool m_ValuesIsSet;
    bool m_Negated;
    bool m_NegatedIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsProductGroupMultipleStringListCriteria_H_ */
