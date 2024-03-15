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
 * AdAccountsCountryResponse.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_AdAccountsCountryResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_AdAccountsCountryResponse_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <vector>
#include "CppRestOpenAPIClient/model/AdAccountsCountryResponseData.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class AdAccountsCountryResponseData;

/// <summary>
/// 
/// </summary>
class  AdAccountsCountryResponse
    : public ModelBase
{
public:
    AdAccountsCountryResponse();
    virtual ~AdAccountsCountryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AdAccountsCountryResponse members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<AdAccountsCountryResponseData>>& getItems();
    bool itemsIsSet() const;
    void unsetItems();

    void setItems(const std::vector<std::shared_ptr<AdAccountsCountryResponseData>>& value);


protected:
    std::vector<std::shared_ptr<AdAccountsCountryResponseData>> m_Items;
    bool m_ItemsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_AdAccountsCountryResponse_H_ */
