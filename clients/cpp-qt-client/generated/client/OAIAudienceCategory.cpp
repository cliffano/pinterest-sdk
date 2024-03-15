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

#include "OAIAudienceCategory.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAudienceCategory::OAIAudienceCategory(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAudienceCategory::OAIAudienceCategory() {
    this->initializeModel();
}

OAIAudienceCategory::~OAIAudienceCategory() {}

void OAIAudienceCategory::initializeModel() {

    m_key_isSet = false;
    m_key_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_ratio_isSet = false;
    m_ratio_isValid = false;

    m_index_isSet = false;
    m_index_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_subcategories_isSet = false;
    m_subcategories_isValid = false;
}

void OAIAudienceCategory::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAudienceCategory::fromJsonObject(QJsonObject json) {

    m_key_isValid = ::OpenAPI::fromJsonValue(m_key, json[QString("key")]);
    m_key_isSet = !json[QString("key")].isNull() && m_key_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_ratio_isValid = ::OpenAPI::fromJsonValue(m_ratio, json[QString("ratio")]);
    m_ratio_isSet = !json[QString("ratio")].isNull() && m_ratio_isValid;

    m_index_isValid = ::OpenAPI::fromJsonValue(m_index, json[QString("index")]);
    m_index_isSet = !json[QString("index")].isNull() && m_index_isValid;

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_subcategories_isValid = ::OpenAPI::fromJsonValue(m_subcategories, json[QString("subcategories")]);
    m_subcategories_isSet = !json[QString("subcategories")].isNull() && m_subcategories_isValid;
}

QString OAIAudienceCategory::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAudienceCategory::asJsonObject() const {
    QJsonObject obj;
    if (m_key_isSet) {
        obj.insert(QString("key"), ::OpenAPI::toJsonValue(m_key));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_ratio_isSet) {
        obj.insert(QString("ratio"), ::OpenAPI::toJsonValue(m_ratio));
    }
    if (m_index_isSet) {
        obj.insert(QString("index"), ::OpenAPI::toJsonValue(m_index));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_subcategories.size() > 0) {
        obj.insert(QString("subcategories"), ::OpenAPI::toJsonValue(m_subcategories));
    }
    return obj;
}

QString OAIAudienceCategory::getKey() const {
    return m_key;
}
void OAIAudienceCategory::setKey(const QString &key) {
    m_key = key;
    m_key_isSet = true;
}

bool OAIAudienceCategory::is_key_Set() const{
    return m_key_isSet;
}

bool OAIAudienceCategory::is_key_Valid() const{
    return m_key_isValid;
}

QString OAIAudienceCategory::getName() const {
    return m_name;
}
void OAIAudienceCategory::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIAudienceCategory::is_name_Set() const{
    return m_name_isSet;
}

bool OAIAudienceCategory::is_name_Valid() const{
    return m_name_isValid;
}

double OAIAudienceCategory::getRatio() const {
    return m_ratio;
}
void OAIAudienceCategory::setRatio(const double &ratio) {
    m_ratio = ratio;
    m_ratio_isSet = true;
}

bool OAIAudienceCategory::is_ratio_Set() const{
    return m_ratio_isSet;
}

bool OAIAudienceCategory::is_ratio_Valid() const{
    return m_ratio_isValid;
}

double OAIAudienceCategory::getIndex() const {
    return m_index;
}
void OAIAudienceCategory::setIndex(const double &index) {
    m_index = index;
    m_index_isSet = true;
}

bool OAIAudienceCategory::is_index_Set() const{
    return m_index_isSet;
}

bool OAIAudienceCategory::is_index_Valid() const{
    return m_index_isValid;
}

QString OAIAudienceCategory::getId() const {
    return m_id;
}
void OAIAudienceCategory::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIAudienceCategory::is_id_Set() const{
    return m_id_isSet;
}

bool OAIAudienceCategory::is_id_Valid() const{
    return m_id_isValid;
}

QList<OAIAudienceSubcategory> OAIAudienceCategory::getSubcategories() const {
    return m_subcategories;
}
void OAIAudienceCategory::setSubcategories(const QList<OAIAudienceSubcategory> &subcategories) {
    m_subcategories = subcategories;
    m_subcategories_isSet = true;
}

bool OAIAudienceCategory::is_subcategories_Set() const{
    return m_subcategories_isSet;
}

bool OAIAudienceCategory::is_subcategories_Valid() const{
    return m_subcategories_isValid;
}

bool OAIAudienceCategory::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_key_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ratio_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_index_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_subcategories.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAudienceCategory::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
