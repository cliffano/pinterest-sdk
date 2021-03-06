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
 * CatalogsFeedsCreateRequest.h
 *
 * Request object for creating a feed. Please, be aware that \&quot;default_country\&quot; and \&quot;default_locale\&quot; are not required in the spec for forward compatibility but for now the API will not accept requests without those fields.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedsCreateRequest_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedsCreateRequest_H_


#include "ModelBase.h"

#include "model/Country.h"
#include "model/NullableCurrency.h"
#include <cpprest/details/basic_types.h>
#include "model/CatalogsFormat.h"
#include "model/ProductAvailabilityType.h"
#include "model/CatalogsFeedCredentials.h"
#include "model/CatalogsFeedProcessingSchedule.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Request object for creating a feed. Please, be aware that \&quot;default_country\&quot; and \&quot;default_locale\&quot; are not required in the spec for forward compatibility but for now the API will not accept requests without those fields.
/// </summary>
class  CatalogsFeedsCreateRequest
    : public ModelBase
{
public:
    CatalogsFeedsCreateRequest();
    virtual ~CatalogsFeedsCreateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CatalogsFeedsCreateRequest members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Country> getDefaultCountry() const;
    bool defaultCountryIsSet() const;
    void unsetDefault_country();

    void setDefaultCountry(const std::shared_ptr<Country>& value);

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
    /// The locale used within a feed for product descriptions.
    /// </summary>
    utility::string_t getDefaultLocale() const;
    bool defaultLocaleIsSet() const;
    void unsetDefault_locale();

    void setDefaultLocale(const utility::string_t& value);

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


protected:
    std::shared_ptr<Country> m_Default_country;
    bool m_Default_countryIsSet;
    std::shared_ptr<ProductAvailabilityType> m_Default_availability;
    bool m_Default_availabilityIsSet;
    std::shared_ptr<NullableCurrency> m_Default_currency;
    bool m_Default_currencyIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    std::shared_ptr<CatalogsFormat> m_Format;
    bool m_FormatIsSet;
    utility::string_t m_Default_locale;
    bool m_Default_localeIsSet;
    std::shared_ptr<CatalogsFeedCredentials> m_Credentials;
    bool m_CredentialsIsSet;
    utility::string_t m_Location;
    bool m_LocationIsSet;
    std::shared_ptr<CatalogsFeedProcessingSchedule> m_Preferred_processing_schedule;
    bool m_Preferred_processing_scheduleIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedsCreateRequest_H_ */
