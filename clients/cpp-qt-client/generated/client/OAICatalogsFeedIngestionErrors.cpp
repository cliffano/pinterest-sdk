/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICatalogsFeedIngestionErrors.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsFeedIngestionErrors::OAICatalogsFeedIngestionErrors(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsFeedIngestionErrors::OAICatalogsFeedIngestionErrors() {
    this->initializeModel();
}

OAICatalogsFeedIngestionErrors::~OAICatalogsFeedIngestionErrors() {}

void OAICatalogsFeedIngestionErrors::initializeModel() {

    m_image_download_error_isSet = false;
    m_image_download_error_isValid = false;

    m_line_level_internal_error_isSet = false;
    m_line_level_internal_error_isValid = false;

    m_large_product_count_decrease_isSet = false;
    m_large_product_count_decrease_isValid = false;

    m_account_flagged_isSet = false;
    m_account_flagged_isValid = false;
}

void OAICatalogsFeedIngestionErrors::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogsFeedIngestionErrors::fromJsonObject(QJsonObject json) {

    m_image_download_error_isValid = ::OpenAPI::fromJsonValue(m_image_download_error, json[QString("IMAGE_DOWNLOAD_ERROR")]);
    m_image_download_error_isSet = !json[QString("IMAGE_DOWNLOAD_ERROR")].isNull() && m_image_download_error_isValid;

    m_line_level_internal_error_isValid = ::OpenAPI::fromJsonValue(m_line_level_internal_error, json[QString("LINE_LEVEL_INTERNAL_ERROR")]);
    m_line_level_internal_error_isSet = !json[QString("LINE_LEVEL_INTERNAL_ERROR")].isNull() && m_line_level_internal_error_isValid;

    m_large_product_count_decrease_isValid = ::OpenAPI::fromJsonValue(m_large_product_count_decrease, json[QString("LARGE_PRODUCT_COUNT_DECREASE")]);
    m_large_product_count_decrease_isSet = !json[QString("LARGE_PRODUCT_COUNT_DECREASE")].isNull() && m_large_product_count_decrease_isValid;

    m_account_flagged_isValid = ::OpenAPI::fromJsonValue(m_account_flagged, json[QString("ACCOUNT_FLAGGED")]);
    m_account_flagged_isSet = !json[QString("ACCOUNT_FLAGGED")].isNull() && m_account_flagged_isValid;
}

QString OAICatalogsFeedIngestionErrors::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogsFeedIngestionErrors::asJsonObject() const {
    QJsonObject obj;
    if (m_image_download_error_isSet) {
        obj.insert(QString("IMAGE_DOWNLOAD_ERROR"), ::OpenAPI::toJsonValue(m_image_download_error));
    }
    if (m_line_level_internal_error_isSet) {
        obj.insert(QString("LINE_LEVEL_INTERNAL_ERROR"), ::OpenAPI::toJsonValue(m_line_level_internal_error));
    }
    if (m_large_product_count_decrease_isSet) {
        obj.insert(QString("LARGE_PRODUCT_COUNT_DECREASE"), ::OpenAPI::toJsonValue(m_large_product_count_decrease));
    }
    if (m_account_flagged_isSet) {
        obj.insert(QString("ACCOUNT_FLAGGED"), ::OpenAPI::toJsonValue(m_account_flagged));
    }
    return obj;
}

qint32 OAICatalogsFeedIngestionErrors::getImageDownloadError() const {
    return m_image_download_error;
}
void OAICatalogsFeedIngestionErrors::setImageDownloadError(const qint32 &image_download_error) {
    m_image_download_error = image_download_error;
    m_image_download_error_isSet = true;
}

bool OAICatalogsFeedIngestionErrors::is_image_download_error_Set() const{
    return m_image_download_error_isSet;
}

bool OAICatalogsFeedIngestionErrors::is_image_download_error_Valid() const{
    return m_image_download_error_isValid;
}

qint32 OAICatalogsFeedIngestionErrors::getLineLevelInternalError() const {
    return m_line_level_internal_error;
}
void OAICatalogsFeedIngestionErrors::setLineLevelInternalError(const qint32 &line_level_internal_error) {
    m_line_level_internal_error = line_level_internal_error;
    m_line_level_internal_error_isSet = true;
}

bool OAICatalogsFeedIngestionErrors::is_line_level_internal_error_Set() const{
    return m_line_level_internal_error_isSet;
}

bool OAICatalogsFeedIngestionErrors::is_line_level_internal_error_Valid() const{
    return m_line_level_internal_error_isValid;
}

qint32 OAICatalogsFeedIngestionErrors::getLargeProductCountDecrease() const {
    return m_large_product_count_decrease;
}
void OAICatalogsFeedIngestionErrors::setLargeProductCountDecrease(const qint32 &large_product_count_decrease) {
    m_large_product_count_decrease = large_product_count_decrease;
    m_large_product_count_decrease_isSet = true;
}

bool OAICatalogsFeedIngestionErrors::is_large_product_count_decrease_Set() const{
    return m_large_product_count_decrease_isSet;
}

bool OAICatalogsFeedIngestionErrors::is_large_product_count_decrease_Valid() const{
    return m_large_product_count_decrease_isValid;
}

qint32 OAICatalogsFeedIngestionErrors::getAccountFlagged() const {
    return m_account_flagged;
}
void OAICatalogsFeedIngestionErrors::setAccountFlagged(const qint32 &account_flagged) {
    m_account_flagged = account_flagged;
    m_account_flagged_isSet = true;
}

bool OAICatalogsFeedIngestionErrors::is_account_flagged_Set() const{
    return m_account_flagged_isSet;
}

bool OAICatalogsFeedIngestionErrors::is_account_flagged_Valid() const{
    return m_account_flagged_isValid;
}

bool OAICatalogsFeedIngestionErrors::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_image_download_error_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_line_level_internal_error_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_large_product_count_decrease_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_account_flagged_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICatalogsFeedIngestionErrors::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
