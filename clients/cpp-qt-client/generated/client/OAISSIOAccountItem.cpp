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

#include "OAISSIOAccountItem.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISSIOAccountItem::OAISSIOAccountItem(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISSIOAccountItem::OAISSIOAccountItem() {
    this->initializeModel();
}

OAISSIOAccountItem::~OAISSIOAccountItem() {}

void OAISSIOAccountItem::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_io_terms_id_isSet = false;
    m_io_terms_id_isValid = false;

    m_io_terms_isSet = false;
    m_io_terms_isValid = false;

    m_us_terms_id_isSet = false;
    m_us_terms_id_isValid = false;

    m_us_terms_isSet = false;
    m_us_terms_isValid = false;

    m_row_terms_id_isSet = false;
    m_row_terms_id_isValid = false;

    m_row_terms_isSet = false;
    m_row_terms_isValid = false;

    m_io_type_isSet = false;
    m_io_type_isValid = false;

    m_addresses_isSet = false;
    m_addresses_isValid = false;
}

void OAISSIOAccountItem::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISSIOAccountItem::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_io_terms_id_isValid = ::OpenAPI::fromJsonValue(m_io_terms_id, json[QString("io_terms_id")]);
    m_io_terms_id_isSet = !json[QString("io_terms_id")].isNull() && m_io_terms_id_isValid;

    m_io_terms_isValid = ::OpenAPI::fromJsonValue(m_io_terms, json[QString("io_terms")]);
    m_io_terms_isSet = !json[QString("io_terms")].isNull() && m_io_terms_isValid;

    m_us_terms_id_isValid = ::OpenAPI::fromJsonValue(m_us_terms_id, json[QString("us_terms_id")]);
    m_us_terms_id_isSet = !json[QString("us_terms_id")].isNull() && m_us_terms_id_isValid;

    m_us_terms_isValid = ::OpenAPI::fromJsonValue(m_us_terms, json[QString("us_terms")]);
    m_us_terms_isSet = !json[QString("us_terms")].isNull() && m_us_terms_isValid;

    m_row_terms_id_isValid = ::OpenAPI::fromJsonValue(m_row_terms_id, json[QString("row_terms_id")]);
    m_row_terms_id_isSet = !json[QString("row_terms_id")].isNull() && m_row_terms_id_isValid;

    m_row_terms_isValid = ::OpenAPI::fromJsonValue(m_row_terms, json[QString("row_terms")]);
    m_row_terms_isSet = !json[QString("row_terms")].isNull() && m_row_terms_isValid;

    m_io_type_isValid = ::OpenAPI::fromJsonValue(m_io_type, json[QString("io_type")]);
    m_io_type_isSet = !json[QString("io_type")].isNull() && m_io_type_isValid;

    m_addresses_isValid = ::OpenAPI::fromJsonValue(m_addresses, json[QString("addresses")]);
    m_addresses_isSet = !json[QString("addresses")].isNull() && m_addresses_isValid;
}

QString OAISSIOAccountItem::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISSIOAccountItem::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_io_terms_id_isSet) {
        obj.insert(QString("io_terms_id"), ::OpenAPI::toJsonValue(m_io_terms_id));
    }
    if (m_io_terms_isSet) {
        obj.insert(QString("io_terms"), ::OpenAPI::toJsonValue(m_io_terms));
    }
    if (m_us_terms_id_isSet) {
        obj.insert(QString("us_terms_id"), ::OpenAPI::toJsonValue(m_us_terms_id));
    }
    if (m_us_terms_isSet) {
        obj.insert(QString("us_terms"), ::OpenAPI::toJsonValue(m_us_terms));
    }
    if (m_row_terms_id_isSet) {
        obj.insert(QString("row_terms_id"), ::OpenAPI::toJsonValue(m_row_terms_id));
    }
    if (m_row_terms_isSet) {
        obj.insert(QString("row_terms"), ::OpenAPI::toJsonValue(m_row_terms));
    }
    if (m_io_type_isSet) {
        obj.insert(QString("io_type"), ::OpenAPI::toJsonValue(m_io_type));
    }
    if (m_addresses.size() > 0) {
        obj.insert(QString("addresses"), ::OpenAPI::toJsonValue(m_addresses));
    }
    return obj;
}

QString OAISSIOAccountItem::getId() const {
    return m_id;
}
void OAISSIOAccountItem::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAISSIOAccountItem::is_id_Set() const{
    return m_id_isSet;
}

bool OAISSIOAccountItem::is_id_Valid() const{
    return m_id_isValid;
}

QString OAISSIOAccountItem::getIoTermsId() const {
    return m_io_terms_id;
}
void OAISSIOAccountItem::setIoTermsId(const QString &io_terms_id) {
    m_io_terms_id = io_terms_id;
    m_io_terms_id_isSet = true;
}

bool OAISSIOAccountItem::is_io_terms_id_Set() const{
    return m_io_terms_id_isSet;
}

bool OAISSIOAccountItem::is_io_terms_id_Valid() const{
    return m_io_terms_id_isValid;
}

QString OAISSIOAccountItem::getIoTerms() const {
    return m_io_terms;
}
void OAISSIOAccountItem::setIoTerms(const QString &io_terms) {
    m_io_terms = io_terms;
    m_io_terms_isSet = true;
}

bool OAISSIOAccountItem::is_io_terms_Set() const{
    return m_io_terms_isSet;
}

bool OAISSIOAccountItem::is_io_terms_Valid() const{
    return m_io_terms_isValid;
}

QString OAISSIOAccountItem::getUsTermsId() const {
    return m_us_terms_id;
}
void OAISSIOAccountItem::setUsTermsId(const QString &us_terms_id) {
    m_us_terms_id = us_terms_id;
    m_us_terms_id_isSet = true;
}

bool OAISSIOAccountItem::is_us_terms_id_Set() const{
    return m_us_terms_id_isSet;
}

bool OAISSIOAccountItem::is_us_terms_id_Valid() const{
    return m_us_terms_id_isValid;
}

QString OAISSIOAccountItem::getUsTerms() const {
    return m_us_terms;
}
void OAISSIOAccountItem::setUsTerms(const QString &us_terms) {
    m_us_terms = us_terms;
    m_us_terms_isSet = true;
}

bool OAISSIOAccountItem::is_us_terms_Set() const{
    return m_us_terms_isSet;
}

bool OAISSIOAccountItem::is_us_terms_Valid() const{
    return m_us_terms_isValid;
}

QString OAISSIOAccountItem::getRowTermsId() const {
    return m_row_terms_id;
}
void OAISSIOAccountItem::setRowTermsId(const QString &row_terms_id) {
    m_row_terms_id = row_terms_id;
    m_row_terms_id_isSet = true;
}

bool OAISSIOAccountItem::is_row_terms_id_Set() const{
    return m_row_terms_id_isSet;
}

bool OAISSIOAccountItem::is_row_terms_id_Valid() const{
    return m_row_terms_id_isValid;
}

QString OAISSIOAccountItem::getRowTerms() const {
    return m_row_terms;
}
void OAISSIOAccountItem::setRowTerms(const QString &row_terms) {
    m_row_terms = row_terms;
    m_row_terms_isSet = true;
}

bool OAISSIOAccountItem::is_row_terms_Set() const{
    return m_row_terms_isSet;
}

bool OAISSIOAccountItem::is_row_terms_Valid() const{
    return m_row_terms_isValid;
}

QString OAISSIOAccountItem::getIoType() const {
    return m_io_type;
}
void OAISSIOAccountItem::setIoType(const QString &io_type) {
    m_io_type = io_type;
    m_io_type_isSet = true;
}

bool OAISSIOAccountItem::is_io_type_Set() const{
    return m_io_type_isSet;
}

bool OAISSIOAccountItem::is_io_type_Valid() const{
    return m_io_type_isValid;
}

QList<OAISSIOAccountAddress> OAISSIOAccountItem::getAddresses() const {
    return m_addresses;
}
void OAISSIOAccountItem::setAddresses(const QList<OAISSIOAccountAddress> &addresses) {
    m_addresses = addresses;
    m_addresses_isSet = true;
}

bool OAISSIOAccountItem::is_addresses_Set() const{
    return m_addresses_isSet;
}

bool OAISSIOAccountItem::is_addresses_Valid() const{
    return m_addresses_isValid;
}

bool OAISSIOAccountItem::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_io_terms_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_io_terms_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_us_terms_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_us_terms_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_row_terms_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_row_terms_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_io_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_addresses.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISSIOAccountItem::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
