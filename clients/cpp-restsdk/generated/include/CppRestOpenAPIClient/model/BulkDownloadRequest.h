/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * BulkDownloadRequest.h
 *
 * Ad entities to get in bulk request.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BulkDownloadRequest_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BulkDownloadRequest_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/BulkOutputFormat.h"
#include "CppRestOpenAPIClient/model/BulkDownloadRequest_campaign_filter.h"
#include <cpprest/details/basic_types.h>
#include <vector>
#include "CppRestOpenAPIClient/model/BulkEntityType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class BulkDownloadRequest_campaign_filter;

/// <summary>
/// Ad entities to get in bulk request.
/// </summary>
class  BulkDownloadRequest
    : public ModelBase
{
public:
    BulkDownloadRequest();
    virtual ~BulkDownloadRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BulkDownloadRequest members

    /// <summary>
    /// All entity types specified will be downloaded. Fewer types result in faster downloads.
    /// </summary>
    std::vector<BulkEntityType>& getEntityTypes();
    bool entityTypesIsSet() const;
    void unsetEntity_types();

    void setEntityTypes(const std::vector<BulkEntityType>& value);

    /// <summary>
    /// All entities specified by these IDs as well as their children and grandchildren will be downloaded if the entity type is one of the types requested to be downloaded.
    /// </summary>
    std::vector<utility::string_t>& getEntityIds();
    bool entityIdsIsSet() const;
    void unsetEntity_ids();

    void setEntityIds(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Unix UTC timestamp to retrieve all entities that have changed since this time.
    /// </summary>
    utility::string_t getUpdatedSince() const;
    bool updatedSinceIsSet() const;
    void unsetUpdated_since();

    void setUpdatedSince(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BulkDownloadRequest_campaign_filter> getCampaignFilter() const;
    bool campaignFilterIsSet() const;
    void unsetCampaign_filter();

    void setCampaignFilter(const std::shared_ptr<BulkDownloadRequest_campaign_filter>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BulkOutputFormat> getOutputFormat() const;
    bool outputFormatIsSet() const;
    void unsetOutput_format();

    void setOutputFormat(const std::shared_ptr<BulkOutputFormat>& value);


protected:
    std::vector<BulkEntityType> m_Entity_types;
    bool m_Entity_typesIsSet;
    std::vector<utility::string_t> m_Entity_ids;
    bool m_Entity_idsIsSet;
    utility::string_t m_Updated_since;
    bool m_Updated_sinceIsSet;
    std::shared_ptr<BulkDownloadRequest_campaign_filter> m_Campaign_filter;
    bool m_Campaign_filterIsSet;
    std::shared_ptr<BulkOutputFormat> m_Output_format;
    bool m_Output_formatIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BulkDownloadRequest_H_ */