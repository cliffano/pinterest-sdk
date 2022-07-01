/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ProductType0Filter.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ProductType0Filter_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ProductType0Filter_H_


#include "ModelBase.h"

#include "model/CatalogsProductGroupMultipleStringListCriteria.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ProductType0Filter
    : public ModelBase
{
public:
    ProductType0Filter();
    virtual ~ProductType0Filter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ProductType0Filter members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> getPRODUCTTYPE0() const;
    bool pRODUCTTYPE0IsSet() const;
    void unsetPRODUCT_TYPE_0();

    void setPRODUCTTYPE0(const std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria>& value);


protected:
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> m_PRODUCT_TYPE_0;
    bool m_PRODUCT_TYPE_0IsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ProductType0Filter_H_ */
