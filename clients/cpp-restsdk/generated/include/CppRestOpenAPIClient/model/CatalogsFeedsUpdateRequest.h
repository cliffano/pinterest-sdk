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
 * CatalogsFeedsUpdateRequest.h
 *
 * Request object for updating a feed.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedsUpdateRequest_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedsUpdateRequest_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/CatalogsFeedCredentials.h"
#include "CppRestOpenAPIClient/model/ProductAvailabilityType.h"
#include "CppRestOpenAPIClient/model/NullableCurrency.h"
#include "CppRestOpenAPIClient/model/CatalogsFormat.h"
#include "CppRestOpenAPIClient/model/CatalogsFeedProcessingSchedule.h"
#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/CatalogsStatus.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class CatalogsFeedCredentials;
class CatalogsFeedProcessingSchedule;

/// <summary>
/// Request object for updating a feed.
/// </summary>
class  CatalogsFeedsUpdateRequest
    : public ModelBase
{
public:
    CatalogsFeedsUpdateRequest();
    virtual ~CatalogsFeedsUpdateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CatalogsFeedsUpdateRequest members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ProductAvailabilityType> getDefaultAvailability() const;
    bool defaultAvailabilityIsSet() const;
    void unsetDefault_availability();

    void setDefaultAvailability(const std::shared_ptr<ProductAvailabilityType>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<NullableCurrency> getDefaultCurrency() const;
    bool defaultCurrencyIsSet() const;
    void unsetDefault_currency();

    void setDefaultCurrency(const std::shared_ptr<NullableCurrency>& value);

    /// <summary>
    /// A human-friendly name associated to a given feed.
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsFormat> getFormat() const;
    bool formatIsSet() const;
    void unsetFormat();

    void setFormat(const std::shared_ptr<CatalogsFormat>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsFeedCredentials> getCredentials() const;
    bool credentialsIsSet() const;
    void unsetCredentials();

    void setCredentials(const std::shared_ptr<CatalogsFeedCredentials>& value);

    /// <summary>
    /// The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
    /// </summary>
    utility::string_t getLocation() const;
    bool locationIsSet() const;
    void unsetLocation();

    void setLocation(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsFeedProcessingSchedule> getPreferredProcessingSchedule() const;
    bool preferredProcessingScheduleIsSet() const;
    void unsetPreferred_processing_schedule();

    void setPreferredProcessingSchedule(const std::shared_ptr<CatalogsFeedProcessingSchedule>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsStatus> getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const std::shared_ptr<CatalogsStatus>& value);


protected:
    std::shared_ptr<ProductAvailabilityType> m_Default_availability;
    bool m_Default_availabilityIsSet;
    std::shared_ptr<NullableCurrency> m_Default_currency;
    bool m_Default_currencyIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    std::shared_ptr<CatalogsFormat> m_Format;
    bool m_FormatIsSet;
    std::shared_ptr<CatalogsFeedCredentials> m_Credentials;
    bool m_CredentialsIsSet;
    utility::string_t m_Location;
    bool m_LocationIsSet;
    std::shared_ptr<CatalogsFeedProcessingSchedule> m_Preferred_processing_schedule;
    bool m_Preferred_processing_scheduleIsSet;
    std::shared_ptr<CatalogsStatus> m_Status;
    bool m_StatusIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedsUpdateRequest_H_ */
