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
 * ProductType1Filter.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ProductType1Filter_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ProductType1Filter_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/CatalogsProductGroupMultipleStringListCriteria.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ProductType1Filter
    : public ModelBase
{
public:
    ProductType1Filter();
    virtual ~ProductType1Filter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ProductType1Filter members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> getPRODUCTTYPE1() const;
    bool pRODUCTTYPE1IsSet() const;
    void unsetPRODUCT_TYPE_1();

    void setPRODUCTTYPE1(const std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria>& value);


protected:
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> m_PRODUCT_TYPE_1;
    bool m_PRODUCT_TYPE_1IsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ProductType1Filter_H_ */
