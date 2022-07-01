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
 * GoogleProductCategory2Filter.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_GoogleProductCategory2Filter_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_GoogleProductCategory2Filter_H_


#include "ModelBase.h"

#include "model/CatalogsProductGroupMultipleStringListCriteria.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  GoogleProductCategory2Filter
    : public ModelBase
{
public:
    GoogleProductCategory2Filter();
    virtual ~GoogleProductCategory2Filter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GoogleProductCategory2Filter members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> getGOOGLEPRODUCTCATEGORY2() const;
    bool gOOGLEPRODUCTCATEGORY2IsSet() const;
    void unsetGOOGLE_PRODUCT_CATEGORY_2();

    void setGOOGLEPRODUCTCATEGORY2(const std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria>& value);


protected:
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> m_GOOGLE_PRODUCT_CATEGORY_2;
    bool m_GOOGLE_PRODUCT_CATEGORY_2IsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_GoogleProductCategory2Filter_H_ */
