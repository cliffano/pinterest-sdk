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

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_io_terms_id_isValid = ::OpenAPI::fromJsonValue(io_terms_id, json[QString("io_terms_id")]);
    m_io_terms_id_isSet = !json[QString("io_terms_id")].isNull() && m_io_terms_id_isValid;

    m_io_terms_isValid = ::OpenAPI::fromJsonValue(io_terms, json[QString("io_terms")]);
    m_io_terms_isSet = !json[QString("io_terms")].isNull() && m_io_terms_isValid;

    m_us_terms_id_isValid = ::OpenAPI::fromJsonValue(us_terms_id, json[QString("us_terms_id")]);
    m_us_terms_id_isSet = !json[QString("us_terms_id")].isNull() && m_us_terms_id_isValid;

    m_us_terms_isValid = ::OpenAPI::fromJsonValue(us_terms, json[QString("us_terms")]);
    m_us_terms_isSet = !json[QString("us_terms")].isNull() && m_us_terms_isValid;

    m_row_terms_id_isValid = ::OpenAPI::fromJsonValue(row_terms_id, json[QString("row_terms_id")]);
    m_row_terms_id_isSet = !json[QString("row_terms_id")].isNull() && m_row_terms_id_isValid;

    m_row_terms_isValid = ::OpenAPI::fromJsonValue(row_terms, json[QString("row_terms")]);
    m_row_terms_isSet = !json[QString("row_terms")].isNull() && m_row_terms_isValid;

    m_io_type_isValid = ::OpenAPI::fromJsonValue(io_type, json[QString("io_type")]);
    m_io_type_isSet = !json[QString("io_type")].isNull() && m_io_type_isValid;

    m_addresses_isValid = ::OpenAPI::fromJsonValue(addresses, json[QString("addresses")]);
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
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_io_terms_id_isSet) {
        obj.insert(QString("io_terms_id"), ::OpenAPI::toJsonValue(io_terms_id));
    }
    if (m_io_terms_isSet) {
        obj.insert(QString("io_terms"), ::OpenAPI::toJsonValue(io_terms));
    }
    if (m_us_terms_id_isSet) {
        obj.insert(QString("us_terms_id"), ::OpenAPI::toJsonValue(us_terms_id));
    }
    if (m_us_terms_isSet) {
        obj.insert(QString("us_terms"), ::OpenAPI::toJsonValue(us_terms));
    }
    if (m_row_terms_id_isSet) {
        obj.insert(QString("row_terms_id"), ::OpenAPI::toJsonValue(row_terms_id));
    }
    if (m_row_terms_isSet) {
        obj.insert(QString("row_terms"), ::OpenAPI::toJsonValue(row_terms));
    }
    if (m_io_type_isSet) {
        obj.insert(QString("io_type"), ::OpenAPI::toJsonValue(io_type));
    }
    if (addresses.size() > 0) {
        obj.insert(QString("addresses"), ::OpenAPI::toJsonValue(addresses));
    }
    return obj;
}

QString OAISSIOAccountItem::getId() const {
    return id;
}
void OAISSIOAccountItem::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAISSIOAccountItem::is_id_Set() const{
    return m_id_isSet;
}

bool OAISSIOAccountItem::is_id_Valid() const{
    return m_id_isValid;
}

QString OAISSIOAccountItem::getIoTermsId() const {
    return io_terms_id;
}
void OAISSIOAccountItem::setIoTermsId(const QString &io_terms_id) {
    this->io_terms_id = io_terms_id;
    this->m_io_terms_id_isSet = true;
}

bool OAISSIOAccountItem::is_io_terms_id_Set() const{
    return m_io_terms_id_isSet;
}

bool OAISSIOAccountItem::is_io_terms_id_Valid() const{
    return m_io_terms_id_isValid;
}

QString OAISSIOAccountItem::getIoTerms() const {
    return io_terms;
}
void OAISSIOAccountItem::setIoTerms(const QString &io_terms) {
    this->io_terms = io_terms;
    this->m_io_terms_isSet = true;
}

bool OAISSIOAccountItem::is_io_terms_Set() const{
    return m_io_terms_isSet;
}

bool OAISSIOAccountItem::is_io_terms_Valid() const{
    return m_io_terms_isValid;
}

QString OAISSIOAccountItem::getUsTermsId() const {
    return us_terms_id;
}
void OAISSIOAccountItem::setUsTermsId(const QString &us_terms_id) {
    this->us_terms_id = us_terms_id;
    this->m_us_terms_id_isSet = true;
}

bool OAISSIOAccountItem::is_us_terms_id_Set() const{
    return m_us_terms_id_isSet;
}

bool OAISSIOAccountItem::is_us_terms_id_Valid() const{
    return m_us_terms_id_isValid;
}

QString OAISSIOAccountItem::getUsTerms() const {
    return us_terms;
}
void OAISSIOAccountItem::setUsTerms(const QString &us_terms) {
    this->us_terms = us_terms;
    this->m_us_terms_isSet = true;
}

bool OAISSIOAccountItem::is_us_terms_Set() const{
    return m_us_terms_isSet;
}

bool OAISSIOAccountItem::is_us_terms_Valid() const{
    return m_us_terms_isValid;
}

QString OAISSIOAccountItem::getRowTermsId() const {
    return row_terms_id;
}
void OAISSIOAccountItem::setRowTermsId(const QString &row_terms_id) {
    this->row_terms_id = row_terms_id;
    this->m_row_terms_id_isSet = true;
}

bool OAISSIOAccountItem::is_row_terms_id_Set() const{
    return m_row_terms_id_isSet;
}

bool OAISSIOAccountItem::is_row_terms_id_Valid() const{
    return m_row_terms_id_isValid;
}

QString OAISSIOAccountItem::getRowTerms() const {
    return row_terms;
}
void OAISSIOAccountItem::setRowTerms(const QString &row_terms) {
    this->row_terms = row_terms;
    this->m_row_terms_isSet = true;
}

bool OAISSIOAccountItem::is_row_terms_Set() const{
    return m_row_terms_isSet;
}

bool OAISSIOAccountItem::is_row_terms_Valid() const{
    return m_row_terms_isValid;
}

QString OAISSIOAccountItem::getIoType() const {
    return io_type;
}
void OAISSIOAccountItem::setIoType(const QString &io_type) {
    this->io_type = io_type;
    this->m_io_type_isSet = true;
}

bool OAISSIOAccountItem::is_io_type_Set() const{
    return m_io_type_isSet;
}

bool OAISSIOAccountItem::is_io_type_Valid() const{
    return m_io_type_isValid;
}

QList<OAISSIOAccountAddress> OAISSIOAccountItem::getAddresses() const {
    return addresses;
}
void OAISSIOAccountItem::setAddresses(const QList<OAISSIOAccountAddress> &addresses) {
    this->addresses = addresses;
    this->m_addresses_isSet = true;
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

        if (addresses.size() > 0) {
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
