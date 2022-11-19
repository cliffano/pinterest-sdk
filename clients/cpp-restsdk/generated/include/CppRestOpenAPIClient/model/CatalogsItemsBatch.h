/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * CatalogsItemsBatch.h
 *
 * Object describing the catalogs items batch
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsItemsBatch_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsItemsBatch_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/BatchOperationStatus.h"
#include "CppRestOpenAPIClient/model/ItemProcessingRecord.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class ItemProcessingRecord;

/// <summary>
/// Object describing the catalogs items batch
/// </summary>
class  CatalogsItemsBatch
    : public ModelBase
{
public:
    CatalogsItemsBatch();
    virtual ~CatalogsItemsBatch();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CatalogsItemsBatch members

    /// <summary>
    /// Array with the catalogs items processing records part of the catalogs items batch
    /// </summary>
    std::vector<std::shared_ptr<ItemProcessingRecord>>& getItems();
    bool itemsIsSet() const;
    void unsetItems();

    void setItems(const std::vector<std::shared_ptr<ItemProcessingRecord>>& value);

    /// <summary>
    /// Id of the catalogs items batch
    /// </summary>
    utility::string_t getBatchId() const;
    bool batchIdIsSet() const;
    void unsetBatch_id();

    void setBatchId(const utility::string_t& value);

    /// <summary>
    /// Time of the batch creation: YYYY-MM-DD&#39;T&#39;hh:mm:ssTZD
    /// </summary>
    utility::datetime getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetCreated_time();

    void setCreatedTime(const utility::datetime& value);

    /// <summary>
    /// Time of the batch completion: YYYY-MM-DD&#39;T&#39;hh:mm:ssTZD
    /// </summary>
    utility::datetime getCompletedTime() const;
    bool completedTimeIsSet() const;
    void unsetCompleted_time();

    void setCompletedTime(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BatchOperationStatus> getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const std::shared_ptr<BatchOperationStatus>& value);


protected:
    std::vector<std::shared_ptr<ItemProcessingRecord>> m_Items;
    bool m_ItemsIsSet;
    utility::string_t m_Batch_id;
    bool m_Batch_idIsSet;
    utility::datetime m_Created_time;
    bool m_Created_timeIsSet;
    utility::datetime m_Completed_time;
    bool m_Completed_timeIsSet;
    std::shared_ptr<BatchOperationStatus> m_Status;
    bool m_StatusIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsItemsBatch_H_ */
