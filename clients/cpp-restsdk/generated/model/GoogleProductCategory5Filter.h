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
 * GoogleProductCategory5Filter.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_GoogleProductCategory5Filter_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_GoogleProductCategory5Filter_H_


#include "ModelBase.h"

#include "model/CatalogsProductGroupMultipleStringListCriteria.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  GoogleProductCategory5Filter
    : public ModelBase
{
public:
    GoogleProductCategory5Filter();
    virtual ~GoogleProductCategory5Filter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GoogleProductCategory5Filter members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> getGOOGLEPRODUCTCATEGORY5() const;
    bool gOOGLEPRODUCTCATEGORY5IsSet() const;
    void unsetGOOGLE_PRODUCT_CATEGORY_5();

    void setGOOGLEPRODUCTCATEGORY5(const std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria>& value);


protected:
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> m_GOOGLE_PRODUCT_CATEGORY_5;
    bool m_GOOGLE_PRODUCT_CATEGORY_5IsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_GoogleProductCategory5Filter_H_ */
