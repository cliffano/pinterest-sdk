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

#include "OAICustomerList.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustomerList::OAICustomerList(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustomerList::OAICustomerList() {
    this->initializeModel();
}

OAICustomerList::~OAICustomerList() {}

void OAICustomerList::initializeModel() {

    m_ad_account_id_isSet = false;
    m_ad_account_id_isValid = false;

    m_created_time_isSet = false;
    m_created_time_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_num_batches_isSet = false;
    m_num_batches_isValid = false;

    m_num_removed_user_records_isSet = false;
    m_num_removed_user_records_isValid = false;

    m_num_uploaded_user_records_isSet = false;
    m_num_uploaded_user_records_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_updated_time_isSet = false;
    m_updated_time_isValid = false;

    m_exceptions_isSet = false;
    m_exceptions_isValid = false;
}

void OAICustomerList::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustomerList::fromJsonObject(QJsonObject json) {

    m_ad_account_id_isValid = ::OpenAPI::fromJsonValue(ad_account_id, json[QString("ad_account_id")]);
    m_ad_account_id_isSet = !json[QString("ad_account_id")].isNull() && m_ad_account_id_isValid;

    m_created_time_isValid = ::OpenAPI::fromJsonValue(created_time, json[QString("created_time")]);
    m_created_time_isSet = !json[QString("created_time")].isNull() && m_created_time_isValid;

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_num_batches_isValid = ::OpenAPI::fromJsonValue(num_batches, json[QString("num_batches")]);
    m_num_batches_isSet = !json[QString("num_batches")].isNull() && m_num_batches_isValid;

    m_num_removed_user_records_isValid = ::OpenAPI::fromJsonValue(num_removed_user_records, json[QString("num_removed_user_records")]);
    m_num_removed_user_records_isSet = !json[QString("num_removed_user_records")].isNull() && m_num_removed_user_records_isValid;

    m_num_uploaded_user_records_isValid = ::OpenAPI::fromJsonValue(num_uploaded_user_records, json[QString("num_uploaded_user_records")]);
    m_num_uploaded_user_records_isSet = !json[QString("num_uploaded_user_records")].isNull() && m_num_uploaded_user_records_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_type_isValid = ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_updated_time_isValid = ::OpenAPI::fromJsonValue(updated_time, json[QString("updated_time")]);
    m_updated_time_isSet = !json[QString("updated_time")].isNull() && m_updated_time_isValid;

    m_exceptions_isValid = ::OpenAPI::fromJsonValue(exceptions, json[QString("exceptions")]);
    m_exceptions_isSet = !json[QString("exceptions")].isNull() && m_exceptions_isValid;
}

QString OAICustomerList::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustomerList::asJsonObject() const {
    QJsonObject obj;
    if (m_ad_account_id_isSet) {
        obj.insert(QString("ad_account_id"), ::OpenAPI::toJsonValue(ad_account_id));
    }
    if (m_created_time_isSet) {
        obj.insert(QString("created_time"), ::OpenAPI::toJsonValue(created_time));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (m_num_batches_isSet) {
        obj.insert(QString("num_batches"), ::OpenAPI::toJsonValue(num_batches));
    }
    if (m_num_removed_user_records_isSet) {
        obj.insert(QString("num_removed_user_records"), ::OpenAPI::toJsonValue(num_removed_user_records));
    }
    if (m_num_uploaded_user_records_isSet) {
        obj.insert(QString("num_uploaded_user_records"), ::OpenAPI::toJsonValue(num_uploaded_user_records));
    }
    if (m_status_isSet) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(status));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
    if (m_updated_time_isSet) {
        obj.insert(QString("updated_time"), ::OpenAPI::toJsonValue(updated_time));
    }
    if (m_exceptions_isSet) {
        obj.insert(QString("exceptions"), ::OpenAPI::toJsonValue(exceptions));
    }
    return obj;
}

QString OAICustomerList::getAdAccountId() const {
    return ad_account_id;
}
void OAICustomerList::setAdAccountId(const QString &ad_account_id) {
    this->ad_account_id = ad_account_id;
    this->m_ad_account_id_isSet = true;
}

bool OAICustomerList::is_ad_account_id_Set() const{
    return m_ad_account_id_isSet;
}

bool OAICustomerList::is_ad_account_id_Valid() const{
    return m_ad_account_id_isValid;
}

double OAICustomerList::getCreatedTime() const {
    return created_time;
}
void OAICustomerList::setCreatedTime(const double &created_time) {
    this->created_time = created_time;
    this->m_created_time_isSet = true;
}

bool OAICustomerList::is_created_time_Set() const{
    return m_created_time_isSet;
}

bool OAICustomerList::is_created_time_Valid() const{
    return m_created_time_isValid;
}

QString OAICustomerList::getId() const {
    return id;
}
void OAICustomerList::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAICustomerList::is_id_Set() const{
    return m_id_isSet;
}

bool OAICustomerList::is_id_Valid() const{
    return m_id_isValid;
}

QString OAICustomerList::getName() const {
    return name;
}
void OAICustomerList::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAICustomerList::is_name_Set() const{
    return m_name_isSet;
}

bool OAICustomerList::is_name_Valid() const{
    return m_name_isValid;
}

double OAICustomerList::getNumBatches() const {
    return num_batches;
}
void OAICustomerList::setNumBatches(const double &num_batches) {
    this->num_batches = num_batches;
    this->m_num_batches_isSet = true;
}

bool OAICustomerList::is_num_batches_Set() const{
    return m_num_batches_isSet;
}

bool OAICustomerList::is_num_batches_Valid() const{
    return m_num_batches_isValid;
}

double OAICustomerList::getNumRemovedUserRecords() const {
    return num_removed_user_records;
}
void OAICustomerList::setNumRemovedUserRecords(const double &num_removed_user_records) {
    this->num_removed_user_records = num_removed_user_records;
    this->m_num_removed_user_records_isSet = true;
}

bool OAICustomerList::is_num_removed_user_records_Set() const{
    return m_num_removed_user_records_isSet;
}

bool OAICustomerList::is_num_removed_user_records_Valid() const{
    return m_num_removed_user_records_isValid;
}

double OAICustomerList::getNumUploadedUserRecords() const {
    return num_uploaded_user_records;
}
void OAICustomerList::setNumUploadedUserRecords(const double &num_uploaded_user_records) {
    this->num_uploaded_user_records = num_uploaded_user_records;
    this->m_num_uploaded_user_records_isSet = true;
}

bool OAICustomerList::is_num_uploaded_user_records_Set() const{
    return m_num_uploaded_user_records_isSet;
}

bool OAICustomerList::is_num_uploaded_user_records_Valid() const{
    return m_num_uploaded_user_records_isValid;
}

QString OAICustomerList::getStatus() const {
    return status;
}
void OAICustomerList::setStatus(const QString &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool OAICustomerList::is_status_Set() const{
    return m_status_isSet;
}

bool OAICustomerList::is_status_Valid() const{
    return m_status_isValid;
}

QString OAICustomerList::getType() const {
    return type;
}
void OAICustomerList::setType(const QString &type) {
    this->type = type;
    this->m_type_isSet = true;
}

bool OAICustomerList::is_type_Set() const{
    return m_type_isSet;
}

bool OAICustomerList::is_type_Valid() const{
    return m_type_isValid;
}

double OAICustomerList::getUpdatedTime() const {
    return updated_time;
}
void OAICustomerList::setUpdatedTime(const double &updated_time) {
    this->updated_time = updated_time;
    this->m_updated_time_isSet = true;
}

bool OAICustomerList::is_updated_time_Set() const{
    return m_updated_time_isSet;
}

bool OAICustomerList::is_updated_time_Valid() const{
    return m_updated_time_isValid;
}

OAIObject OAICustomerList::getExceptions() const {
    return exceptions;
}
void OAICustomerList::setExceptions(const OAIObject &exceptions) {
    this->exceptions = exceptions;
    this->m_exceptions_isSet = true;
}

bool OAICustomerList::is_exceptions_Set() const{
    return m_exceptions_isSet;
}

bool OAICustomerList::is_exceptions_Valid() const{
    return m_exceptions_isValid;
}

bool OAICustomerList::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_ad_account_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_num_batches_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_num_removed_user_records_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_num_uploaded_user_records_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_status_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_updated_time_isSet) {
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

bool OAICustomerList::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
