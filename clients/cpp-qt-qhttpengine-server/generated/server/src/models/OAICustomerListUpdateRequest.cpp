/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICustomerListUpdateRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustomerListUpdateRequest::OAICustomerListUpdateRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustomerListUpdateRequest::OAICustomerListUpdateRequest() {
    this->initializeModel();
}

OAICustomerListUpdateRequest::~OAICustomerListUpdateRequest() {}

void OAICustomerListUpdateRequest::initializeModel() {

    m_records_isSet = false;
    m_records_isValid = false;

    m_operation_type_isSet = false;
    m_operation_type_isValid = false;

    m_exceptions_isSet = false;
    m_exceptions_isValid = false;
}

void OAICustomerListUpdateRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustomerListUpdateRequest::fromJsonObject(QJsonObject json) {

    m_records_isValid = ::OpenAPI::fromJsonValue(records, json[QString("records")]);
    m_records_isSet = !json[QString("records")].isNull() && m_records_isValid;

    m_operation_type_isValid = ::OpenAPI::fromJsonValue(operation_type, json[QString("operation_type")]);
    m_operation_type_isSet = !json[QString("operation_type")].isNull() && m_operation_type_isValid;

    m_exceptions_isValid = ::OpenAPI::fromJsonValue(exceptions, json[QString("exceptions")]);
    m_exceptions_isSet = !json[QString("exceptions")].isNull() && m_exceptions_isValid;
}

QString OAICustomerListUpdateRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustomerListUpdateRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_records_isSet) {
        obj.insert(QString("records"), ::OpenAPI::toJsonValue(records));
    }
    if (operation_type.isSet()) {
        obj.insert(QString("operation_type"), ::OpenAPI::toJsonValue(operation_type));
    }
    if (m_exceptions_isSet) {
        obj.insert(QString("exceptions"), ::OpenAPI::toJsonValue(exceptions));
    }
    return obj;
}

QString OAICustomerListUpdateRequest::getRecords() const {
    return records;
}
void OAICustomerListUpdateRequest::setRecords(const QString &records) {
    this->records = records;
    this->m_records_isSet = true;
}

bool OAICustomerListUpdateRequest::is_records_Set() const{
    return m_records_isSet;
}

bool OAICustomerListUpdateRequest::is_records_Valid() const{
    return m_records_isValid;
}

OAIUserListOperationType OAICustomerListUpdateRequest::getOperationType() const {
    return operation_type;
}
void OAICustomerListUpdateRequest::setOperationType(const OAIUserListOperationType &operation_type) {
    this->operation_type = operation_type;
    this->m_operation_type_isSet = true;
}

bool OAICustomerListUpdateRequest::is_operation_type_Set() const{
    return m_operation_type_isSet;
}

bool OAICustomerListUpdateRequest::is_operation_type_Valid() const{
    return m_operation_type_isValid;
}

OAIException OAICustomerListUpdateRequest::getExceptions() const {
    return exceptions;
}
void OAICustomerListUpdateRequest::setExceptions(const OAIException &exceptions) {
    this->exceptions = exceptions;
    this->m_exceptions_isSet = true;
}

bool OAICustomerListUpdateRequest::is_exceptions_Set() const{
    return m_exceptions_isSet;
}

bool OAICustomerListUpdateRequest::is_exceptions_Valid() const{
    return m_exceptions_isValid;
}

bool OAICustomerListUpdateRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_records_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (operation_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_exceptions_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustomerListUpdateRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_records_isValid && m_operation_type_isValid && true;
}

} // namespace OpenAPI
