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
 * ItemGroupIdFilter.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ItemGroupIdFilter_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ItemGroupIdFilter_H_


#include "ModelBase.h"

#include "model/CatalogsProductGroupMultipleStringCriteria.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ItemGroupIdFilter
    : public ModelBase
{
public:
    ItemGroupIdFilter();
    virtual ~ItemGroupIdFilter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ItemGroupIdFilter members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> getITEMGROUPID() const;
    bool iTEMGROUPIDIsSet() const;
    void unsetITEM_GROUP_ID();

    void setITEMGROUPID(const std::shared_ptr<CatalogsProductGroupMultipleStringCriteria>& value);


protected:
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> m_ITEM_GROUP_ID;
    bool m_ITEM_GROUP_IDIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ItemGroupIdFilter_H_ */
