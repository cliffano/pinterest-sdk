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

#include "OAIIntegrationRecord.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIIntegrationRecord::OAIIntegrationRecord(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIIntegrationRecord::OAIIntegrationRecord() {
    this->initializeModel();
}

OAIIntegrationRecord::~OAIIntegrationRecord() {}

void OAIIntegrationRecord::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_external_business_id_isSet = false;
    m_external_business_id_isValid = false;

    m_connected_merchant_id_isSet = false;
    m_connected_merchant_id_isValid = false;

    m_connected_user_id_isSet = false;
    m_connected_user_id_isValid = false;

    m_connected_advertiser_id_isSet = false;
    m_connected_advertiser_id_isValid = false;

    m_connected_lba_id_isSet = false;
    m_connected_lba_id_isValid = false;

    m_connected_tag_id_isSet = false;
    m_connected_tag_id_isValid = false;

    m_partner_access_token_isSet = false;
    m_partner_access_token_isValid = false;

    m_partner_refresh_token_isSet = false;
    m_partner_refresh_token_isValid = false;

    m_partner_primary_email_isSet = false;
    m_partner_primary_email_isValid = false;

    m_partner_access_token_expiry_isSet = false;
    m_partner_access_token_expiry_isValid = false;

    m_partner_refresh_token_expiry_isSet = false;
    m_partner_refresh_token_expiry_isValid = false;

    m_scopes_isSet = false;
    m_scopes_isValid = false;

    m_partner_metadata_isSet = false;
    m_partner_metadata_isValid = false;

    m_additional_id_1_isSet = false;
    m_additional_id_1_isValid = false;

    m_created_time_isSet = false;
    m_created_time_isValid = false;

    m_updated_time_isSet = false;
    m_updated_time_isValid = false;
}

void OAIIntegrationRecord::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIIntegrationRecord::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_external_business_id_isValid = ::OpenAPI::fromJsonValue(m_external_business_id, json[QString("external_business_id")]);
    m_external_business_id_isSet = !json[QString("external_business_id")].isNull() && m_external_business_id_isValid;

    m_connected_merchant_id_isValid = ::OpenAPI::fromJsonValue(m_connected_merchant_id, json[QString("connected_merchant_id")]);
    m_connected_merchant_id_isSet = !json[QString("connected_merchant_id")].isNull() && m_connected_merchant_id_isValid;

    m_connected_user_id_isValid = ::OpenAPI::fromJsonValue(m_connected_user_id, json[QString("connected_user_id")]);
    m_connected_user_id_isSet = !json[QString("connected_user_id")].isNull() && m_connected_user_id_isValid;

    m_connected_advertiser_id_isValid = ::OpenAPI::fromJsonValue(m_connected_advertiser_id, json[QString("connected_advertiser_id")]);
    m_connected_advertiser_id_isSet = !json[QString("connected_advertiser_id")].isNull() && m_connected_advertiser_id_isValid;

    m_connected_lba_id_isValid = ::OpenAPI::fromJsonValue(m_connected_lba_id, json[QString("connected_lba_id")]);
    m_connected_lba_id_isSet = !json[QString("connected_lba_id")].isNull() && m_connected_lba_id_isValid;

    m_connected_tag_id_isValid = ::OpenAPI::fromJsonValue(m_connected_tag_id, json[QString("connected_tag_id")]);
    m_connected_tag_id_isSet = !json[QString("connected_tag_id")].isNull() && m_connected_tag_id_isValid;

    m_partner_access_token_isValid = ::OpenAPI::fromJsonValue(m_partner_access_token, json[QString("partner_access_token")]);
    m_partner_access_token_isSet = !json[QString("partner_access_token")].isNull() && m_partner_access_token_isValid;

    m_partner_refresh_token_isValid = ::OpenAPI::fromJsonValue(m_partner_refresh_token, json[QString("partner_refresh_token")]);
    m_partner_refresh_token_isSet = !json[QString("partner_refresh_token")].isNull() && m_partner_refresh_token_isValid;

    m_partner_primary_email_isValid = ::OpenAPI::fromJsonValue(m_partner_primary_email, json[QString("partner_primary_email")]);
    m_partner_primary_email_isSet = !json[QString("partner_primary_email")].isNull() && m_partner_primary_email_isValid;

    m_partner_access_token_expiry_isValid = ::OpenAPI::fromJsonValue(m_partner_access_token_expiry, json[QString("partner_access_token_expiry")]);
    m_partner_access_token_expiry_isSet = !json[QString("partner_access_token_expiry")].isNull() && m_partner_access_token_expiry_isValid;

    m_partner_refresh_token_expiry_isValid = ::OpenAPI::fromJsonValue(m_partner_refresh_token_expiry, json[QString("partner_refresh_token_expiry")]);
    m_partner_refresh_token_expiry_isSet = !json[QString("partner_refresh_token_expiry")].isNull() && m_partner_refresh_token_expiry_isValid;

    m_scopes_isValid = ::OpenAPI::fromJsonValue(m_scopes, json[QString("scopes")]);
    m_scopes_isSet = !json[QString("scopes")].isNull() && m_scopes_isValid;

    m_partner_metadata_isValid = ::OpenAPI::fromJsonValue(m_partner_metadata, json[QString("partner_metadata")]);
    m_partner_metadata_isSet = !json[QString("partner_metadata")].isNull() && m_partner_metadata_isValid;

    m_additional_id_1_isValid = ::OpenAPI::fromJsonValue(m_additional_id_1, json[QString("additional_id_1")]);
    m_additional_id_1_isSet = !json[QString("additional_id_1")].isNull() && m_additional_id_1_isValid;

    m_created_time_isValid = ::OpenAPI::fromJsonValue(m_created_time, json[QString("created_time")]);
    m_created_time_isSet = !json[QString("created_time")].isNull() && m_created_time_isValid;

    m_updated_time_isValid = ::OpenAPI::fromJsonValue(m_updated_time, json[QString("updated_time")]);
    m_updated_time_isSet = !json[QString("updated_time")].isNull() && m_updated_time_isValid;
}

QString OAIIntegrationRecord::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIIntegrationRecord::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_external_business_id_isSet) {
        obj.insert(QString("external_business_id"), ::OpenAPI::toJsonValue(m_external_business_id));
    }
    if (m_connected_merchant_id_isSet) {
        obj.insert(QString("connected_merchant_id"), ::OpenAPI::toJsonValue(m_connected_merchant_id));
    }
    if (m_connected_user_id_isSet) {
        obj.insert(QString("connected_user_id"), ::OpenAPI::toJsonValue(m_connected_user_id));
    }
    if (m_connected_advertiser_id_isSet) {
        obj.insert(QString("connected_advertiser_id"), ::OpenAPI::toJsonValue(m_connected_advertiser_id));
    }
    if (m_connected_lba_id_isSet) {
        obj.insert(QString("connected_lba_id"), ::OpenAPI::toJsonValue(m_connected_lba_id));
    }
    if (m_connected_tag_id_isSet) {
        obj.insert(QString("connected_tag_id"), ::OpenAPI::toJsonValue(m_connected_tag_id));
    }
    if (m_partner_access_token_isSet) {
        obj.insert(QString("partner_access_token"), ::OpenAPI::toJsonValue(m_partner_access_token));
    }
    if (m_partner_refresh_token_isSet) {
        obj.insert(QString("partner_refresh_token"), ::OpenAPI::toJsonValue(m_partner_refresh_token));
    }
    if (m_partner_primary_email_isSet) {
        obj.insert(QString("partner_primary_email"), ::OpenAPI::toJsonValue(m_partner_primary_email));
    }
    if (m_partner_access_token_expiry_isSet) {
        obj.insert(QString("partner_access_token_expiry"), ::OpenAPI::toJsonValue(m_partner_access_token_expiry));
    }
    if (m_partner_refresh_token_expiry_isSet) {
        obj.insert(QString("partner_refresh_token_expiry"), ::OpenAPI::toJsonValue(m_partner_refresh_token_expiry));
    }
    if (m_scopes_isSet) {
        obj.insert(QString("scopes"), ::OpenAPI::toJsonValue(m_scopes));
    }
    if (m_partner_metadata_isSet) {
        obj.insert(QString("partner_metadata"), ::OpenAPI::toJsonValue(m_partner_metadata));
    }
    if (m_additional_id_1_isSet) {
        obj.insert(QString("additional_id_1"), ::OpenAPI::toJsonValue(m_additional_id_1));
    }
    if (m_created_time_isSet) {
        obj.insert(QString("created_time"), ::OpenAPI::toJsonValue(m_created_time));
    }
    if (m_updated_time_isSet) {
        obj.insert(QString("updated_time"), ::OpenAPI::toJsonValue(m_updated_time));
    }
    return obj;
}

QString OAIIntegrationRecord::getId() const {
    return m_id;
}
void OAIIntegrationRecord::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIIntegrationRecord::is_id_Set() const{
    return m_id_isSet;
}

bool OAIIntegrationRecord::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIIntegrationRecord::getExternalBusinessId() const {
    return m_external_business_id;
}
void OAIIntegrationRecord::setExternalBusinessId(const QString &external_business_id) {
    m_external_business_id = external_business_id;
    m_external_business_id_isSet = true;
}

bool OAIIntegrationRecord::is_external_business_id_Set() const{
    return m_external_business_id_isSet;
}

bool OAIIntegrationRecord::is_external_business_id_Valid() const{
    return m_external_business_id_isValid;
}

QString OAIIntegrationRecord::getConnectedMerchantId() const {
    return m_connected_merchant_id;
}
void OAIIntegrationRecord::setConnectedMerchantId(const QString &connected_merchant_id) {
    m_connected_merchant_id = connected_merchant_id;
    m_connected_merchant_id_isSet = true;
}

bool OAIIntegrationRecord::is_connected_merchant_id_Set() const{
    return m_connected_merchant_id_isSet;
}

bool OAIIntegrationRecord::is_connected_merchant_id_Valid() const{
    return m_connected_merchant_id_isValid;
}

QString OAIIntegrationRecord::getConnectedUserId() const {
    return m_connected_user_id;
}
void OAIIntegrationRecord::setConnectedUserId(const QString &connected_user_id) {
    m_connected_user_id = connected_user_id;
    m_connected_user_id_isSet = true;
}

bool OAIIntegrationRecord::is_connected_user_id_Set() const{
    return m_connected_user_id_isSet;
}

bool OAIIntegrationRecord::is_connected_user_id_Valid() const{
    return m_connected_user_id_isValid;
}

QString OAIIntegrationRecord::getConnectedAdvertiserId() const {
    return m_connected_advertiser_id;
}
void OAIIntegrationRecord::setConnectedAdvertiserId(const QString &connected_advertiser_id) {
    m_connected_advertiser_id = connected_advertiser_id;
    m_connected_advertiser_id_isSet = true;
}

bool OAIIntegrationRecord::is_connected_advertiser_id_Set() const{
    return m_connected_advertiser_id_isSet;
}

bool OAIIntegrationRecord::is_connected_advertiser_id_Valid() const{
    return m_connected_advertiser_id_isValid;
}

QString OAIIntegrationRecord::getConnectedLbaId() const {
    return m_connected_lba_id;
}
void OAIIntegrationRecord::setConnectedLbaId(const QString &connected_lba_id) {
    m_connected_lba_id = connected_lba_id;
    m_connected_lba_id_isSet = true;
}

bool OAIIntegrationRecord::is_connected_lba_id_Set() const{
    return m_connected_lba_id_isSet;
}

bool OAIIntegrationRecord::is_connected_lba_id_Valid() const{
    return m_connected_lba_id_isValid;
}

QString OAIIntegrationRecord::getConnectedTagId() const {
    return m_connected_tag_id;
}
void OAIIntegrationRecord::setConnectedTagId(const QString &connected_tag_id) {
    m_connected_tag_id = connected_tag_id;
    m_connected_tag_id_isSet = true;
}

bool OAIIntegrationRecord::is_connected_tag_id_Set() const{
    return m_connected_tag_id_isSet;
}

bool OAIIntegrationRecord::is_connected_tag_id_Valid() const{
    return m_connected_tag_id_isValid;
}

QString OAIIntegrationRecord::getPartnerAccessToken() const {
    return m_partner_access_token;
}
void OAIIntegrationRecord::setPartnerAccessToken(const QString &partner_access_token) {
    m_partner_access_token = partner_access_token;
    m_partner_access_token_isSet = true;
}

bool OAIIntegrationRecord::is_partner_access_token_Set() const{
    return m_partner_access_token_isSet;
}

bool OAIIntegrationRecord::is_partner_access_token_Valid() const{
    return m_partner_access_token_isValid;
}

QString OAIIntegrationRecord::getPartnerRefreshToken() const {
    return m_partner_refresh_token;
}
void OAIIntegrationRecord::setPartnerRefreshToken(const QString &partner_refresh_token) {
    m_partner_refresh_token = partner_refresh_token;
    m_partner_refresh_token_isSet = true;
}

bool OAIIntegrationRecord::is_partner_refresh_token_Set() const{
    return m_partner_refresh_token_isSet;
}

bool OAIIntegrationRecord::is_partner_refresh_token_Valid() const{
    return m_partner_refresh_token_isValid;
}

QString OAIIntegrationRecord::getPartnerPrimaryEmail() const {
    return m_partner_primary_email;
}
void OAIIntegrationRecord::setPartnerPrimaryEmail(const QString &partner_primary_email) {
    m_partner_primary_email = partner_primary_email;
    m_partner_primary_email_isSet = true;
}

bool OAIIntegrationRecord::is_partner_primary_email_Set() const{
    return m_partner_primary_email_isSet;
}

bool OAIIntegrationRecord::is_partner_primary_email_Valid() const{
    return m_partner_primary_email_isValid;
}

qint32 OAIIntegrationRecord::getPartnerAccessTokenExpiry() const {
    return m_partner_access_token_expiry;
}
void OAIIntegrationRecord::setPartnerAccessTokenExpiry(const qint32 &partner_access_token_expiry) {
    m_partner_access_token_expiry = partner_access_token_expiry;
    m_partner_access_token_expiry_isSet = true;
}

bool OAIIntegrationRecord::is_partner_access_token_expiry_Set() const{
    return m_partner_access_token_expiry_isSet;
}

bool OAIIntegrationRecord::is_partner_access_token_expiry_Valid() const{
    return m_partner_access_token_expiry_isValid;
}

qint32 OAIIntegrationRecord::getPartnerRefreshTokenExpiry() const {
    return m_partner_refresh_token_expiry;
}
void OAIIntegrationRecord::setPartnerRefreshTokenExpiry(const qint32 &partner_refresh_token_expiry) {
    m_partner_refresh_token_expiry = partner_refresh_token_expiry;
    m_partner_refresh_token_expiry_isSet = true;
}

bool OAIIntegrationRecord::is_partner_refresh_token_expiry_Set() const{
    return m_partner_refresh_token_expiry_isSet;
}

bool OAIIntegrationRecord::is_partner_refresh_token_expiry_Valid() const{
    return m_partner_refresh_token_expiry_isValid;
}

QString OAIIntegrationRecord::getScopes() const {
    return m_scopes;
}
void OAIIntegrationRecord::setScopes(const QString &scopes) {
    m_scopes = scopes;
    m_scopes_isSet = true;
}

bool OAIIntegrationRecord::is_scopes_Set() const{
    return m_scopes_isSet;
}

bool OAIIntegrationRecord::is_scopes_Valid() const{
    return m_scopes_isValid;
}

QString OAIIntegrationRecord::getPartnerMetadata() const {
    return m_partner_metadata;
}
void OAIIntegrationRecord::setPartnerMetadata(const QString &partner_metadata) {
    m_partner_metadata = partner_metadata;
    m_partner_metadata_isSet = true;
}

bool OAIIntegrationRecord::is_partner_metadata_Set() const{
    return m_partner_metadata_isSet;
}

bool OAIIntegrationRecord::is_partner_metadata_Valid() const{
    return m_partner_metadata_isValid;
}

QString OAIIntegrationRecord::getAdditionalId1() const {
    return m_additional_id_1;
}
void OAIIntegrationRecord::setAdditionalId1(const QString &additional_id_1) {
    m_additional_id_1 = additional_id_1;
    m_additional_id_1_isSet = true;
}

bool OAIIntegrationRecord::is_additional_id_1_Set() const{
    return m_additional_id_1_isSet;
}

bool OAIIntegrationRecord::is_additional_id_1_Valid() const{
    return m_additional_id_1_isValid;
}

qint32 OAIIntegrationRecord::getCreatedTime() const {
    return m_created_time;
}
void OAIIntegrationRecord::setCreatedTime(const qint32 &created_time) {
    m_created_time = created_time;
    m_created_time_isSet = true;
}

bool OAIIntegrationRecord::is_created_time_Set() const{
    return m_created_time_isSet;
}

bool OAIIntegrationRecord::is_created_time_Valid() const{
    return m_created_time_isValid;
}

qint32 OAIIntegrationRecord::getUpdatedTime() const {
    return m_updated_time;
}
void OAIIntegrationRecord::setUpdatedTime(const qint32 &updated_time) {
    m_updated_time = updated_time;
    m_updated_time_isSet = true;
}

bool OAIIntegrationRecord::is_updated_time_Set() const{
    return m_updated_time_isSet;
}

bool OAIIntegrationRecord::is_updated_time_Valid() const{
    return m_updated_time_isValid;
}

bool OAIIntegrationRecord::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_external_business_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_connected_merchant_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_connected_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_connected_advertiser_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_connected_lba_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_connected_tag_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_partner_access_token_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_partner_refresh_token_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_partner_primary_email_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_partner_access_token_expiry_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_partner_refresh_token_expiry_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_scopes_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_partner_metadata_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_additional_id_1_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_updated_time_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIIntegrationRecord::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
