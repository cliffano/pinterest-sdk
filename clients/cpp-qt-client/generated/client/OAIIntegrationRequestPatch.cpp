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

#include "OAIIntegrationRequestPatch.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIIntegrationRequestPatch::OAIIntegrationRequestPatch(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIIntegrationRequestPatch::OAIIntegrationRequestPatch() {
    this->initializeModel();
}

OAIIntegrationRequestPatch::~OAIIntegrationRequestPatch() {}

void OAIIntegrationRequestPatch::initializeModel() {

    m_connected_merchant_id_isSet = false;
    m_connected_merchant_id_isValid = false;

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

    m_additional_id_1_isSet = false;
    m_additional_id_1_isValid = false;

    m_partner_metadata_isSet = false;
    m_partner_metadata_isValid = false;
}

void OAIIntegrationRequestPatch::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIIntegrationRequestPatch::fromJsonObject(QJsonObject json) {

    m_connected_merchant_id_isValid = ::OpenAPI::fromJsonValue(m_connected_merchant_id, json[QString("connected_merchant_id")]);
    m_connected_merchant_id_isSet = !json[QString("connected_merchant_id")].isNull() && m_connected_merchant_id_isValid;

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

    m_additional_id_1_isValid = ::OpenAPI::fromJsonValue(m_additional_id_1, json[QString("additional_id_1")]);
    m_additional_id_1_isSet = !json[QString("additional_id_1")].isNull() && m_additional_id_1_isValid;

    m_partner_metadata_isValid = ::OpenAPI::fromJsonValue(m_partner_metadata, json[QString("partner_metadata")]);
    m_partner_metadata_isSet = !json[QString("partner_metadata")].isNull() && m_partner_metadata_isValid;
}

QString OAIIntegrationRequestPatch::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIIntegrationRequestPatch::asJsonObject() const {
    QJsonObject obj;
    if (m_connected_merchant_id_isSet) {
        obj.insert(QString("connected_merchant_id"), ::OpenAPI::toJsonValue(m_connected_merchant_id));
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
    if (m_additional_id_1_isSet) {
        obj.insert(QString("additional_id_1"), ::OpenAPI::toJsonValue(m_additional_id_1));
    }
    if (m_partner_metadata_isSet) {
        obj.insert(QString("partner_metadata"), ::OpenAPI::toJsonValue(m_partner_metadata));
    }
    return obj;
}

QString OAIIntegrationRequestPatch::getConnectedMerchantId() const {
    return m_connected_merchant_id;
}
void OAIIntegrationRequestPatch::setConnectedMerchantId(const QString &connected_merchant_id) {
    m_connected_merchant_id = connected_merchant_id;
    m_connected_merchant_id_isSet = true;
}

bool OAIIntegrationRequestPatch::is_connected_merchant_id_Set() const{
    return m_connected_merchant_id_isSet;
}

bool OAIIntegrationRequestPatch::is_connected_merchant_id_Valid() const{
    return m_connected_merchant_id_isValid;
}

QString OAIIntegrationRequestPatch::getConnectedAdvertiserId() const {
    return m_connected_advertiser_id;
}
void OAIIntegrationRequestPatch::setConnectedAdvertiserId(const QString &connected_advertiser_id) {
    m_connected_advertiser_id = connected_advertiser_id;
    m_connected_advertiser_id_isSet = true;
}

bool OAIIntegrationRequestPatch::is_connected_advertiser_id_Set() const{
    return m_connected_advertiser_id_isSet;
}

bool OAIIntegrationRequestPatch::is_connected_advertiser_id_Valid() const{
    return m_connected_advertiser_id_isValid;
}

QString OAIIntegrationRequestPatch::getConnectedLbaId() const {
    return m_connected_lba_id;
}
void OAIIntegrationRequestPatch::setConnectedLbaId(const QString &connected_lba_id) {
    m_connected_lba_id = connected_lba_id;
    m_connected_lba_id_isSet = true;
}

bool OAIIntegrationRequestPatch::is_connected_lba_id_Set() const{
    return m_connected_lba_id_isSet;
}

bool OAIIntegrationRequestPatch::is_connected_lba_id_Valid() const{
    return m_connected_lba_id_isValid;
}

QString OAIIntegrationRequestPatch::getConnectedTagId() const {
    return m_connected_tag_id;
}
void OAIIntegrationRequestPatch::setConnectedTagId(const QString &connected_tag_id) {
    m_connected_tag_id = connected_tag_id;
    m_connected_tag_id_isSet = true;
}

bool OAIIntegrationRequestPatch::is_connected_tag_id_Set() const{
    return m_connected_tag_id_isSet;
}

bool OAIIntegrationRequestPatch::is_connected_tag_id_Valid() const{
    return m_connected_tag_id_isValid;
}

QString OAIIntegrationRequestPatch::getPartnerAccessToken() const {
    return m_partner_access_token;
}
void OAIIntegrationRequestPatch::setPartnerAccessToken(const QString &partner_access_token) {
    m_partner_access_token = partner_access_token;
    m_partner_access_token_isSet = true;
}

bool OAIIntegrationRequestPatch::is_partner_access_token_Set() const{
    return m_partner_access_token_isSet;
}

bool OAIIntegrationRequestPatch::is_partner_access_token_Valid() const{
    return m_partner_access_token_isValid;
}

QString OAIIntegrationRequestPatch::getPartnerRefreshToken() const {
    return m_partner_refresh_token;
}
void OAIIntegrationRequestPatch::setPartnerRefreshToken(const QString &partner_refresh_token) {
    m_partner_refresh_token = partner_refresh_token;
    m_partner_refresh_token_isSet = true;
}

bool OAIIntegrationRequestPatch::is_partner_refresh_token_Set() const{
    return m_partner_refresh_token_isSet;
}

bool OAIIntegrationRequestPatch::is_partner_refresh_token_Valid() const{
    return m_partner_refresh_token_isValid;
}

QString OAIIntegrationRequestPatch::getPartnerPrimaryEmail() const {
    return m_partner_primary_email;
}
void OAIIntegrationRequestPatch::setPartnerPrimaryEmail(const QString &partner_primary_email) {
    m_partner_primary_email = partner_primary_email;
    m_partner_primary_email_isSet = true;
}

bool OAIIntegrationRequestPatch::is_partner_primary_email_Set() const{
    return m_partner_primary_email_isSet;
}

bool OAIIntegrationRequestPatch::is_partner_primary_email_Valid() const{
    return m_partner_primary_email_isValid;
}

double OAIIntegrationRequestPatch::getPartnerAccessTokenExpiry() const {
    return m_partner_access_token_expiry;
}
void OAIIntegrationRequestPatch::setPartnerAccessTokenExpiry(const double &partner_access_token_expiry) {
    m_partner_access_token_expiry = partner_access_token_expiry;
    m_partner_access_token_expiry_isSet = true;
}

bool OAIIntegrationRequestPatch::is_partner_access_token_expiry_Set() const{
    return m_partner_access_token_expiry_isSet;
}

bool OAIIntegrationRequestPatch::is_partner_access_token_expiry_Valid() const{
    return m_partner_access_token_expiry_isValid;
}

double OAIIntegrationRequestPatch::getPartnerRefreshTokenExpiry() const {
    return m_partner_refresh_token_expiry;
}
void OAIIntegrationRequestPatch::setPartnerRefreshTokenExpiry(const double &partner_refresh_token_expiry) {
    m_partner_refresh_token_expiry = partner_refresh_token_expiry;
    m_partner_refresh_token_expiry_isSet = true;
}

bool OAIIntegrationRequestPatch::is_partner_refresh_token_expiry_Set() const{
    return m_partner_refresh_token_expiry_isSet;
}

bool OAIIntegrationRequestPatch::is_partner_refresh_token_expiry_Valid() const{
    return m_partner_refresh_token_expiry_isValid;
}

QString OAIIntegrationRequestPatch::getScopes() const {
    return m_scopes;
}
void OAIIntegrationRequestPatch::setScopes(const QString &scopes) {
    m_scopes = scopes;
    m_scopes_isSet = true;
}

bool OAIIntegrationRequestPatch::is_scopes_Set() const{
    return m_scopes_isSet;
}

bool OAIIntegrationRequestPatch::is_scopes_Valid() const{
    return m_scopes_isValid;
}

QString OAIIntegrationRequestPatch::getAdditionalId1() const {
    return m_additional_id_1;
}
void OAIIntegrationRequestPatch::setAdditionalId1(const QString &additional_id_1) {
    m_additional_id_1 = additional_id_1;
    m_additional_id_1_isSet = true;
}

bool OAIIntegrationRequestPatch::is_additional_id_1_Set() const{
    return m_additional_id_1_isSet;
}

bool OAIIntegrationRequestPatch::is_additional_id_1_Valid() const{
    return m_additional_id_1_isValid;
}

QString OAIIntegrationRequestPatch::getPartnerMetadata() const {
    return m_partner_metadata;
}
void OAIIntegrationRequestPatch::setPartnerMetadata(const QString &partner_metadata) {
    m_partner_metadata = partner_metadata;
    m_partner_metadata_isSet = true;
}

bool OAIIntegrationRequestPatch::is_partner_metadata_Set() const{
    return m_partner_metadata_isSet;
}

bool OAIIntegrationRequestPatch::is_partner_metadata_Valid() const{
    return m_partner_metadata_isValid;
}

bool OAIIntegrationRequestPatch::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_connected_merchant_id_isSet) {
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

        if (m_additional_id_1_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_partner_metadata_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIIntegrationRequestPatch::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI