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
 * SSIOAccountResponse.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_SSIOAccountResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_SSIOAccountResponse_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/SSIOAccountPMPName.h"
#include <cpprest/details/basic_types.h>
#include <vector>
#include "CppRestOpenAPIClient/model/SSIOAccountItem.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class SSIOAccountItem;
class SSIOAccountPMPName;

/// <summary>
/// 
/// </summary>
class  SSIOAccountResponse
    : public ModelBase
{
public:
    SSIOAccountResponse();
    virtual ~SSIOAccountResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SSIOAccountResponse members

    /// <summary>
    /// Advertiser eligible to create order lines
    /// </summary>
    bool isEligible() const;
    bool eligibleIsSet() const;
    void unsetEligible();

    void setEligible(bool value);

    /// <summary>
    /// Advertiser eligible to update order lines
    /// </summary>
    bool isCanEdit() const;
    bool canEditIsSet() const;
    void unsetCan_edit();

    void setCanEdit(bool value);

    /// <summary>
    /// An array of Salesforce account information that includes address, io terms, etc.
    /// </summary>
    std::vector<std::shared_ptr<SSIOAccountItem>>& getBilltoInfos();
    bool billtoInfosIsSet() const;
    void unsetBillto_infos();

    void setBilltoInfos(const std::vector<std::shared_ptr<SSIOAccountItem>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCurrency() const;
    bool currencyIsSet() const;
    void unsetCurrency();

    void setCurrency(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<SSIOAccountPMPName>>& getPmpNames();
    bool pmpNamesIsSet() const;
    void unsetPmp_names();

    void setPmpNames(const std::vector<std::shared_ptr<SSIOAccountPMPName>>& value);

    /// <summary>
    /// Error indicator from Salesforce which could be \&quot;No Error\&quot;
    /// </summary>
    utility::string_t getError() const;
    bool errorIsSet() const;
    void unsetError();

    void setError(const utility::string_t& value);


protected:
    bool m_Eligible;
    bool m_EligibleIsSet;
    bool m_Can_edit;
    bool m_Can_editIsSet;
    std::vector<std::shared_ptr<SSIOAccountItem>> m_Billto_infos;
    bool m_Billto_infosIsSet;
    utility::string_t m_Currency;
    bool m_CurrencyIsSet;
    std::vector<std::shared_ptr<SSIOAccountPMPName>> m_Pmp_names;
    bool m_Pmp_namesIsSet;
    utility::string_t m_Error;
    bool m_ErrorIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_SSIOAccountResponse_H_ */