/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIItemGroupIdFilter.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIItemGroupIdFilter::OAIItemGroupIdFilter(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIItemGroupIdFilter::OAIItemGroupIdFilter() {
    this->initializeModel();
}

OAIItemGroupIdFilter::~OAIItemGroupIdFilter() {}

void OAIItemGroupIdFilter::initializeModel() {

    m_item_group_id_isSet = false;
    m_item_group_id_isValid = false;
}

void OAIItemGroupIdFilter::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIItemGroupIdFilter::fromJsonObject(QJsonObject json) {

    m_item_group_id_isValid = ::OpenAPI::fromJsonValue(item_group_id, json[QString("ITEM_GROUP_ID")]);
    m_item_group_id_isSet = !json[QString("ITEM_GROUP_ID")].isNull() && m_item_group_id_isValid;
}

QString OAIItemGroupIdFilter::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIItemGroupIdFilter::asJsonObject() const {
    QJsonObject obj;
    if (m_item_group_id_isSet) {
        obj.insert(QString("ITEM_GROUP_ID"), ::OpenAPI::toJsonValue(item_group_id));
    }
    return obj;
}

OAICatalogsProductGroupMultipleStringCriteria OAIItemGroupIdFilter::getItemGroupId() const {
    return item_group_id;
}
void OAIItemGroupIdFilter::setItemGroupId(const OAICatalogsProductGroupMultipleStringCriteria &item_group_id) {
    this->item_group_id = item_group_id;
    this->m_item_group_id_isSet = true;
}

bool OAIItemGroupIdFilter::is_item_group_id_Set() const{
    return m_item_group_id_isSet;
}

bool OAIItemGroupIdFilter::is_item_group_id_Valid() const{
    return m_item_group_id_isValid;
}

bool OAIItemGroupIdFilter::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_item_group_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIItemGroupIdFilter::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_item_group_id_isValid && true;
}

} // namespace OpenAPI
