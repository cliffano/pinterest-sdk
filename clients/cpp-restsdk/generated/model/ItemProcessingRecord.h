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
 * ItemProcessingRecord.h
 *
 * Object describing an item processing record
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ItemProcessingRecord_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ItemProcessingRecord_H_


#include "ModelBase.h"

#include "model/ItemProcessingStatus.h"
#include <cpprest/details/basic_types.h>
#include "model/ItemValidationEvent.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Object describing an item processing record
/// </summary>
class  ItemProcessingRecord
    : public ModelBase
{
public:
    ItemProcessingRecord();
    virtual ~ItemProcessingRecord();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ItemProcessingRecord members

    /// <summary>
    /// The catalog item id in the merchant namespace
    /// </summary>
    utility::string_t getItemId() const;
    bool itemIdIsSet() const;
    void unsetItem_id();

    void setItemId(const utility::string_t& value);

    /// <summary>
    /// Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail.
    /// </summary>
    std::vector<std::shared_ptr<ItemValidationEvent>>& getErrors();
    bool errorsIsSet() const;
    void unsetErrors();

    void setErrors(const std::vector<std::shared_ptr<ItemValidationEvent>>& value);

    /// <summary>
    /// Array with the validation warnings for the item processing record
    /// </summary>
    std::vector<std::shared_ptr<ItemValidationEvent>>& getWarnings();
    bool warningsIsSet() const;
    void unsetWarnings();

    void setWarnings(const std::vector<std::shared_ptr<ItemValidationEvent>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ItemProcessingStatus> getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const std::shared_ptr<ItemProcessingStatus>& value);


protected:
    utility::string_t m_Item_id;
    bool m_Item_idIsSet;
    std::vector<std::shared_ptr<ItemValidationEvent>> m_Errors;
    bool m_ErrorsIsSet;
    std::vector<std::shared_ptr<ItemValidationEvent>> m_Warnings;
    bool m_WarningsIsSet;
    std::shared_ptr<ItemProcessingStatus> m_Status;
    bool m_StatusIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ItemProcessingRecord_H_ */
