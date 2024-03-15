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
 * CatalogsHotelProductGroupFiltersAnyOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsHotelProductGroupFiltersAnyOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsHotelProductGroupFiltersAnyOf_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/CatalogsHotelProductGroupFilterKeys.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  CatalogsHotelProductGroupFiltersAnyOf
    : public ModelBase
{
public:
    CatalogsHotelProductGroupFiltersAnyOf();
    virtual ~CatalogsHotelProductGroupFiltersAnyOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CatalogsHotelProductGroupFiltersAnyOf members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<CatalogsHotelProductGroupFilterKeys>>& getAnyOf();
    bool anyOfIsSet() const;
    void unsetAny_of();

    void setAnyOf(const std::vector<std::shared_ptr<CatalogsHotelProductGroupFilterKeys>>& value);


protected:
    std::vector<std::shared_ptr<CatalogsHotelProductGroupFilterKeys>> m_Any_of;
    bool m_Any_ofIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsHotelProductGroupFiltersAnyOf_H_ */
