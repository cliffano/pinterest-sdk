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

    m_line_level_internal_error_isSet = false;
    m_line_level_internal_error_isValid = false;

    m_large_product_count_decrease_isSet = false;
    m_large_product_count_decrease_isValid = false;

    m_account_flagged_isSet = false;
    m_account_flagged_isValid = false;

    m_image_level_internal_error_isSet = false;
    m_image_level_internal_error_isValid = false;

    m_image_file_not_accessible_isSet = false;
    m_image_file_not_accessible_isValid = false;

    m_image_malformed_url_isSet = false;
    m_image_malformed_url_isValid = false;

    m_image_file_not_found_isSet = false;
    m_image_file_not_found_isValid = false;

    m_image_invalid_file_isSet = false;
    m_image_invalid_file_isValid = false;
}

void OAICatalogsFeedIngestionErrors::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogsFeedIngestionErrors::fromJsonObject(QJsonObject json) {

    m_line_level_internal_error_isValid = ::OpenAPI::fromJsonValue(line_level_internal_error, json[QString("LINE_LEVEL_INTERNAL_ERROR")]);
    m_line_level_internal_error_isSet = !json[QString("LINE_LEVEL_INTERNAL_ERROR")].isNull() && m_line_level_internal_error_isValid;

    m_large_product_count_decrease_isValid = ::OpenAPI::fromJsonValue(large_product_count_decrease, json[QString("LARGE_PRODUCT_COUNT_DECREASE")]);
    m_large_product_count_decrease_isSet = !json[QString("LARGE_PRODUCT_COUNT_DECREASE")].isNull() && m_large_product_count_decrease_isValid;

    m_account_flagged_isValid = ::OpenAPI::fromJsonValue(account_flagged, json[QString("ACCOUNT_FLAGGED")]);
    m_account_flagged_isSet = !json[QString("ACCOUNT_FLAGGED")].isNull() && m_account_flagged_isValid;

    m_image_level_internal_error_isValid = ::OpenAPI::fromJsonValue(image_level_internal_error, json[QString("IMAGE_LEVEL_INTERNAL_ERROR")]);
    m_image_level_internal_error_isSet = !json[QString("IMAGE_LEVEL_INTERNAL_ERROR")].isNull() && m_image_level_internal_error_isValid;

    m_image_file_not_accessible_isValid = ::OpenAPI::fromJsonValue(image_file_not_accessible, json[QString("IMAGE_FILE_NOT_ACCESSIBLE")]);
    m_image_file_not_accessible_isSet = !json[QString("IMAGE_FILE_NOT_ACCESSIBLE")].isNull() && m_image_file_not_accessible_isValid;

    m_image_malformed_url_isValid = ::OpenAPI::fromJsonValue(image_malformed_url, json[QString("IMAGE_MALFORMED_URL")]);
    m_image_malformed_url_isSet = !json[QString("IMAGE_MALFORMED_URL")].isNull() && m_image_malformed_url_isValid;

    m_image_file_not_found_isValid = ::OpenAPI::fromJsonValue(image_file_not_found, json[QString("IMAGE_FILE_NOT_FOUND")]);
    m_image_file_not_found_isSet = !json[QString("IMAGE_FILE_NOT_FOUND")].isNull() && m_image_file_not_found_isValid;

    m_image_invalid_file_isValid = ::OpenAPI::fromJsonValue(image_invalid_file, json[QString("IMAGE_INVALID_FILE")]);
    m_image_invalid_file_isSet = !json[QString("IMAGE_INVALID_FILE")].isNull() && m_image_invalid_file_isValid;
}

QString OAICatalogsFeedIngestionErrors::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogsFeedIngestionErrors::asJsonObject() const {
    QJsonObject obj;
    if (m_line_level_internal_error_isSet) {
        obj.insert(QString("LINE_LEVEL_INTERNAL_ERROR"), ::OpenAPI::toJsonValue(line_level_internal_error));
    }
    if (m_large_product_count_decrease_isSet) {
        obj.insert(QString("LARGE_PRODUCT_COUNT_DECREASE"), ::OpenAPI::toJsonValue(large_product_count_decrease));
    }
    if (m_account_flagged_isSet) {
        obj.insert(QString("ACCOUNT_FLAGGED"), ::OpenAPI::toJsonValue(account_flagged));
    }
    if (m_image_level_internal_error_isSet) {
        obj.insert(QString("IMAGE_LEVEL_INTERNAL_ERROR"), ::OpenAPI::toJsonValue(image_level_internal_error));
    }
    if (m_image_file_not_accessible_isSet) {
        obj.insert(QString("IMAGE_FILE_NOT_ACCESSIBLE"), ::OpenAPI::toJsonValue(image_file_not_accessible));
    }
    if (m_image_malformed_url_isSet) {
        obj.insert(QString("IMAGE_MALFORMED_URL"), ::OpenAPI::toJsonValue(image_malformed_url));
    }
    if (m_image_file_not_found_isSet) {
        obj.insert(QString("IMAGE_FILE_NOT_FOUND"), ::OpenAPI::toJsonValue(image_file_not_found));
    }
    if (m_image_invalid_file_isSet) {
        obj.insert(QString("IMAGE_INVALID_FILE"), ::OpenAPI::toJsonValue(image_invalid_file));
    }
    return obj;
}

qint32 OAICatalogsFeedIngestionErrors::getLineLevelInternalError() const {
    return line_level_internal_error;
}
void OAICatalogsFeedIngestionErrors::setLineLevelInternalError(const qint32 &line_level_internal_error) {
    this->line_level_internal_error = line_level_internal_error;
    this->m_line_level_internal_error_isSet = true;
}

bool OAICatalogsFeedIngestionErrors::is_line_level_internal_error_Set() const{
    return m_line_level_internal_error_isSet;
}

bool OAICatalogsFeedIngestionErrors::is_line_level_internal_error_Valid() const{
    return m_line_level_internal_error_isValid;
}

qint32 OAICatalogsFeedIngestionErrors::getLargeProductCountDecrease() const {
    return large_product_count_decrease;
}
void OAICatalogsFeedIngestionErrors::setLargeProductCountDecrease(const qint32 &large_product_count_decrease) {
    this->large_product_count_decrease = large_product_count_decrease;
    this->m_large_product_count_decrease_isSet = true;
}

bool OAICatalogsFeedIngestionErrors::is_large_product_count_decrease_Set() const{
    return m_large_product_count_decrease_isSet;
}

bool OAICatalogsFeedIngestionErrors::is_large_product_count_decrease_Valid() const{
    return m_large_product_count_decrease_isValid;
}

qint32 OAICatalogsFeedIngestionErrors::getAccountFlagged() const {
    return account_flagged;
}
void OAICatalogsFeedIngestionErrors::setAccountFlagged(const qint32 &account_flagged) {
    this->account_flagged = account_flagged;
    this->m_account_flagged_isSet = true;
}

bool OAICatalogsFeedIngestionErrors::is_account_flagged_Set() const{
    return m_account_flagged_isSet;
}

bool OAICatalogsFeedIngestionErrors::is_account_flagged_Valid() const{
    return m_account_flagged_isValid;
}

qint32 OAICatalogsFeedIngestionErrors::getImageLevelInternalError() const {
    return image_level_internal_error;
}
void OAICatalogsFeedIngestionErrors::setImageLevelInternalError(const qint32 &image_level_internal_error) {
    this->image_level_internal_error = image_level_internal_error;
    this->m_image_level_internal_error_isSet = true;
}

bool OAICatalogsFeedIngestionErrors::is_image_level_internal_error_Set() const{
    return m_image_level_internal_error_isSet;
}

bool OAICatalogsFeedIngestionErrors::is_image_level_internal_error_Valid() const{
    return m_image_level_internal_error_isValid;
}

qint32 OAICatalogsFeedIngestionErrors::getImageFileNotAccessible() const {
    return image_file_not_accessible;
}
void OAICatalogsFeedIngestionErrors::setImageFileNotAccessible(const qint32 &image_file_not_accessible) {
    this->image_file_not_accessible = image_file_not_accessible;
    this->m_image_file_not_accessible_isSet = true;
}

bool OAICatalogsFeedIngestionErrors::is_image_file_not_accessible_Set() const{
    return m_image_file_not_accessible_isSet;
}

bool OAICatalogsFeedIngestionErrors::is_image_file_not_accessible_Valid() const{
    return m_image_file_not_accessible_isValid;
}

qint32 OAICatalogsFeedIngestionErrors::getImageMalformedUrl() const {
    return image_malformed_url;
}
void OAICatalogsFeedIngestionErrors::setImageMalformedUrl(const qint32 &image_malformed_url) {
    this->image_malformed_url = image_malformed_url;
    this->m_image_malformed_url_isSet = true;
}

bool OAICatalogsFeedIngestionErrors::is_image_malformed_url_Set() const{
    return m_image_malformed_url_isSet;
}

bool OAICatalogsFeedIngestionErrors::is_image_malformed_url_Valid() const{
    return m_image_malformed_url_isValid;
}

qint32 OAICatalogsFeedIngestionErrors::getImageFileNotFound() const {
    return image_file_not_found;
}
void OAICatalogsFeedIngestionErrors::setImageFileNotFound(const qint32 &image_file_not_found) {
    this->image_file_not_found = image_file_not_found;
    this->m_image_file_not_found_isSet = true;
}

bool OAICatalogsFeedIngestionErrors::is_image_file_not_found_Set() const{
    return m_image_file_not_found_isSet;
}

bool OAICatalogsFeedIngestionErrors::is_image_file_not_found_Valid() const{
    return m_image_file_not_found_isValid;
}

qint32 OAICatalogsFeedIngestionErrors::getImageInvalidFile() const {
    return image_invalid_file;
}
void OAICatalogsFeedIngestionErrors::setImageInvalidFile(const qint32 &image_invalid_file) {
    this->image_invalid_file = image_invalid_file;
    this->m_image_invalid_file_isSet = true;
}

bool OAICatalogsFeedIngestionErrors::is_image_invalid_file_Set() const{
    return m_image_invalid_file_isSet;
}

bool OAICatalogsFeedIngestionErrors::is_image_invalid_file_Valid() const{
    return m_image_invalid_file_isValid;
}

bool OAICatalogsFeedIngestionErrors::isSet() const {
    bool isObjectUpdated = false;
    do {
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

        if (m_image_level_internal_error_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_image_file_not_accessible_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_image_malformed_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_image_file_not_found_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_image_invalid_file_isSet) {
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
