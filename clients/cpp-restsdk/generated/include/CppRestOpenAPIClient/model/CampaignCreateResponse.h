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
 * CampaignCreateResponse.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CampaignCreateResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CampaignCreateResponse_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/CampaignCreateResponseItem.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class CampaignCreateResponseItem;

/// <summary>
/// 
/// </summary>
class  CampaignCreateResponse
    : public ModelBase
{
public:
    CampaignCreateResponse();
    virtual ~CampaignCreateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CampaignCreateResponse members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<CampaignCreateResponseItem>>& getItems();
    bool itemsIsSet() const;
    void unsetItems();

    void setItems(const std::vector<std::shared_ptr<CampaignCreateResponseItem>>& value);


protected:
    std::vector<std::shared_ptr<CampaignCreateResponseItem>> m_Items;
    bool m_ItemsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CampaignCreateResponse_H_ */
