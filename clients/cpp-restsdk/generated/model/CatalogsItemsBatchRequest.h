/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * CatalogsItemsBatchRequest.h
 *
 * Request object of catalogs items batch
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsItemsBatchRequest_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsItemsBatchRequest_H_


#include "ModelBase.h"

#include "model/Country.h"
#include "model/Language.h"
#include "model/BatchOperation.h"
#include "model/ItemBatchRecord.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Request object of catalogs items batch
/// </summary>
class  CatalogsItemsBatchRequest
    : public ModelBase
{
public:
    CatalogsItemsBatchRequest();
    virtual ~CatalogsItemsBatchRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CatalogsItemsBatchRequest members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Country> getCountry() const;
    bool countryIsSet() const;
    void unsetCountry();

    void setCountry(const std::shared_ptr<Country>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Language> getLanguage() const;
    bool languageIsSet() const;
    void unsetLanguage();

    void setLanguage(const std::shared_ptr<Language>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BatchOperation> getOperation() const;
    bool operationIsSet() const;
    void unsetOperation();

    void setOperation(const std::shared_ptr<BatchOperation>& value);

    /// <summary>
    /// Array with catalogs items
    /// </summary>
    std::vector<std::shared_ptr<ItemBatchRecord>>& getItems();
    bool itemsIsSet() const;
    void unsetItems();

    void setItems(const std::vector<std::shared_ptr<ItemBatchRecord>>& value);


protected:
    std::shared_ptr<Country> m_Country;
    bool m_CountryIsSet;
    std::shared_ptr<Language> m_Language;
    bool m_LanguageIsSet;
    std::shared_ptr<BatchOperation> m_Operation;
    bool m_OperationIsSet;
    std::vector<std::shared_ptr<ItemBatchRecord>> m_Items;
    bool m_ItemsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsItemsBatchRequest_H_ */