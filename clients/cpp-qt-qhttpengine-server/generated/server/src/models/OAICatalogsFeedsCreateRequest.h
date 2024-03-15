/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICatalogsFeedsCreateRequest.h
 *
 * Request object for creating a feed. Please, be aware that \&quot;default_country\&quot; and \&quot;default_locale\&quot; are not required in the spec for forward compatibility but for now the API will not accept requests without those fields.
 */

#ifndef OAICatalogsFeedsCreateRequest_H
#define OAICatalogsFeedsCreateRequest_H

#include <QJsonObject>

#include "OAICatalogsFeedCredentials.h"
#include "OAICatalogsFeedProcessingSchedule.h"
#include "OAICatalogsFeedsCreateRequest_default_locale.h"
#include "OAICatalogsFormat.h"
#include "OAICountry.h"
#include "OAINullableCurrency.h"
#include "OAIProductAvailabilityType.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsFeedsCreateRequest : public OAIObject {
public:
    OAICatalogsFeedsCreateRequest();
    OAICatalogsFeedsCreateRequest(QString json);
    ~OAICatalogsFeedsCreateRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAINullableCurrency getDefaultCurrency() const;
    void setDefaultCurrency(const OAINullableCurrency &default_currency);
    bool is_default_currency_Set() const;
    bool is_default_currency_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    OAICatalogsFormat getFormat() const;
    void setFormat(const OAICatalogsFormat &format);
    bool is_format_Set() const;
    bool is_format_Valid() const;

    OAICatalogsFeedsCreateRequest_default_locale getDefaultLocale() const;
    void setDefaultLocale(const OAICatalogsFeedsCreateRequest_default_locale &default_locale);
    bool is_default_locale_Set() const;
    bool is_default_locale_Valid() const;

    OAICatalogsFeedCredentials getCredentials() const;
    void setCredentials(const OAICatalogsFeedCredentials &credentials);
    bool is_credentials_Set() const;
    bool is_credentials_Valid() const;

    QString getLocation() const;
    void setLocation(const QString &location);
    bool is_location_Set() const;
    bool is_location_Valid() const;

    OAICatalogsFeedProcessingSchedule getPreferredProcessingSchedule() const;
    void setPreferredProcessingSchedule(const OAICatalogsFeedProcessingSchedule &preferred_processing_schedule);
    bool is_preferred_processing_schedule_Set() const;
    bool is_preferred_processing_schedule_Valid() const;

    OAICountry getDefaultCountry() const;
    void setDefaultCountry(const OAICountry &default_country);
    bool is_default_country_Set() const;
    bool is_default_country_Valid() const;

    OAIProductAvailabilityType getDefaultAvailability() const;
    void setDefaultAvailability(const OAIProductAvailabilityType &default_availability);
    bool is_default_availability_Set() const;
    bool is_default_availability_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAINullableCurrency default_currency;
    bool m_default_currency_isSet;
    bool m_default_currency_isValid;

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    OAICatalogsFormat format;
    bool m_format_isSet;
    bool m_format_isValid;

    OAICatalogsFeedsCreateRequest_default_locale default_locale;
    bool m_default_locale_isSet;
    bool m_default_locale_isValid;

    OAICatalogsFeedCredentials credentials;
    bool m_credentials_isSet;
    bool m_credentials_isValid;

    QString location;
    bool m_location_isSet;
    bool m_location_isValid;

    OAICatalogsFeedProcessingSchedule preferred_processing_schedule;
    bool m_preferred_processing_schedule_isSet;
    bool m_preferred_processing_schedule_isValid;

    OAICountry default_country;
    bool m_default_country_isSet;
    bool m_default_country_isValid;

    OAIProductAvailabilityType default_availability;
    bool m_default_availability_isSet;
    bool m_default_availability_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsFeedsCreateRequest)

#endif // OAICatalogsFeedsCreateRequest_H
