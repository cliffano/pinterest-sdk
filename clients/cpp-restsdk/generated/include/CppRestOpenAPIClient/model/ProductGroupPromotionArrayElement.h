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
 * ProductGroupPromotionArrayElement.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ProductGroupPromotionArrayElement_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ProductGroupPromotionArrayElement_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/Exception.h"
#include "CppRestOpenAPIClient/model/ProductGroupPromotion.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class ProductGroupPromotion;
class Exception;

/// <summary>
/// 
/// </summary>
class  ProductGroupPromotionArrayElement
    : public ModelBase
{
public:
    ProductGroupPromotionArrayElement();
    virtual ~ProductGroupPromotionArrayElement();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ProductGroupPromotionArrayElement members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ProductGroupPromotion> getData() const;
    bool dataIsSet() const;
    void unsetData();

    void setData(const std::shared_ptr<ProductGroupPromotion>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Exception> getExceptions() const;
    bool exceptionsIsSet() const;
    void unsetExceptions();

    void setExceptions(const std::shared_ptr<Exception>& value);


protected:
    std::shared_ptr<ProductGroupPromotion> m_Data;
    bool m_DataIsSet;
    std::shared_ptr<Exception> m_Exceptions;
    bool m_ExceptionsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ProductGroupPromotionArrayElement_H_ */