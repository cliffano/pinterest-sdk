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
 * OAIConversionEvents_data_inner.h
 *
 * 
 */

#ifndef OAIConversionEvents_data_inner_H
#define OAIConversionEvents_data_inner_H

#include <QJsonObject>

#include "OAIConversionEventsUserData.h"
#include "OAIConversionEvents_data_inner_custom_data.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIConversionEvents_data_inner : public OAIObject {
public:
    OAIConversionEvents_data_inner();
    OAIConversionEvents_data_inner(QString json);
    ~OAIConversionEvents_data_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getEventName() const;
    void setEventName(const QString &event_name);
    bool is_event_name_Set() const;
    bool is_event_name_Valid() const;

    QString getActionSource() const;
    void setActionSource(const QString &action_source);
    bool is_action_source_Set() const;
    bool is_action_source_Valid() const;

    qint64 getEventTime() const;
    void setEventTime(const qint64 &event_time);
    bool is_event_time_Set() const;
    bool is_event_time_Valid() const;

    QString getEventId() const;
    void setEventId(const QString &event_id);
    bool is_event_id_Set() const;
    bool is_event_id_Valid() const;

    QString getEventSourceUrl() const;
    void setEventSourceUrl(const QString &event_source_url);
    bool is_event_source_url_Set() const;
    bool is_event_source_url_Valid() const;

    bool isOptOut() const;
    void setOptOut(const bool &opt_out);
    bool is_opt_out_Set() const;
    bool is_opt_out_Valid() const;

    QString getPartnerName() const;
    void setPartnerName(const QString &partner_name);
    bool is_partner_name_Set() const;
    bool is_partner_name_Valid() const;

    OAIConversionEventsUserData getUserData() const;
    void setUserData(const OAIConversionEventsUserData &user_data);
    bool is_user_data_Set() const;
    bool is_user_data_Valid() const;

    OAIConversionEvents_data_inner_custom_data getCustomData() const;
    void setCustomData(const OAIConversionEvents_data_inner_custom_data &custom_data);
    bool is_custom_data_Set() const;
    bool is_custom_data_Valid() const;

    QString getAppId() const;
    void setAppId(const QString &app_id);
    bool is_app_id_Set() const;
    bool is_app_id_Valid() const;

    QString getAppName() const;
    void setAppName(const QString &app_name);
    bool is_app_name_Set() const;
    bool is_app_name_Valid() const;

    QString getAppVersion() const;
    void setAppVersion(const QString &app_version);
    bool is_app_version_Set() const;
    bool is_app_version_Valid() const;

    QString getDeviceBrand() const;
    void setDeviceBrand(const QString &device_brand);
    bool is_device_brand_Set() const;
    bool is_device_brand_Valid() const;

    QString getDeviceCarrier() const;
    void setDeviceCarrier(const QString &device_carrier);
    bool is_device_carrier_Set() const;
    bool is_device_carrier_Valid() const;

    QString getDeviceModel() const;
    void setDeviceModel(const QString &device_model);
    bool is_device_model_Set() const;
    bool is_device_model_Valid() const;

    QString getDeviceType() const;
    void setDeviceType(const QString &device_type);
    bool is_device_type_Set() const;
    bool is_device_type_Valid() const;

    QString getOsVersion() const;
    void setOsVersion(const QString &os_version);
    bool is_os_version_Set() const;
    bool is_os_version_Valid() const;

    bool isWifi() const;
    void setWifi(const bool &wifi);
    bool is_wifi_Set() const;
    bool is_wifi_Valid() const;

    QString getLanguage() const;
    void setLanguage(const QString &language);
    bool is_language_Set() const;
    bool is_language_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString event_name;
    bool m_event_name_isSet;
    bool m_event_name_isValid;

    QString action_source;
    bool m_action_source_isSet;
    bool m_action_source_isValid;

    qint64 event_time;
    bool m_event_time_isSet;
    bool m_event_time_isValid;

    QString event_id;
    bool m_event_id_isSet;
    bool m_event_id_isValid;

    QString event_source_url;
    bool m_event_source_url_isSet;
    bool m_event_source_url_isValid;

    bool opt_out;
    bool m_opt_out_isSet;
    bool m_opt_out_isValid;

    QString partner_name;
    bool m_partner_name_isSet;
    bool m_partner_name_isValid;

    OAIConversionEventsUserData user_data;
    bool m_user_data_isSet;
    bool m_user_data_isValid;

    OAIConversionEvents_data_inner_custom_data custom_data;
    bool m_custom_data_isSet;
    bool m_custom_data_isValid;

    QString app_id;
    bool m_app_id_isSet;
    bool m_app_id_isValid;

    QString app_name;
    bool m_app_name_isSet;
    bool m_app_name_isValid;

    QString app_version;
    bool m_app_version_isSet;
    bool m_app_version_isValid;

    QString device_brand;
    bool m_device_brand_isSet;
    bool m_device_brand_isValid;

    QString device_carrier;
    bool m_device_carrier_isSet;
    bool m_device_carrier_isValid;

    QString device_model;
    bool m_device_model_isSet;
    bool m_device_model_isValid;

    QString device_type;
    bool m_device_type_isSet;
    bool m_device_type_isValid;

    QString os_version;
    bool m_os_version_isSet;
    bool m_os_version_isValid;

    bool wifi;
    bool m_wifi_isSet;
    bool m_wifi_isValid;

    QString language;
    bool m_language_isSet;
    bool m_language_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIConversionEvents_data_inner)

#endif // OAIConversionEvents_data_inner_H
