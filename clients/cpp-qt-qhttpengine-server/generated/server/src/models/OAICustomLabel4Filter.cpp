/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICustomLabel4Filter.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustomLabel4Filter::OAICustomLabel4Filter(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustomLabel4Filter::OAICustomLabel4Filter() {
    this->initializeModel();
}

OAICustomLabel4Filter::~OAICustomLabel4Filter() {}

void OAICustomLabel4Filter::initializeModel() {

    m_custom_label_4_isSet = false;
    m_custom_label_4_isValid = false;
}

void OAICustomLabel4Filter::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustomLabel4Filter::fromJsonObject(QJsonObject json) {

    m_custom_label_4_isValid = ::OpenAPI::fromJsonValue(custom_label_4, json[QString("CUSTOM_LABEL_4")]);
    m_custom_label_4_isSet = !json[QString("CUSTOM_LABEL_4")].isNull() && m_custom_label_4_isValid;
}

QString OAICustomLabel4Filter::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustomLabel4Filter::asJsonObject() const {
    QJsonObject obj;
    if (m_custom_label_4_isSet) {
        obj.insert(QString("CUSTOM_LABEL_4"), ::OpenAPI::toJsonValue(custom_label_4));
    }
    return obj;
}

OAICatalogsProductGroupMultipleStringCriteria OAICustomLabel4Filter::getCustomLabel4() const {
    return custom_label_4;
}
void OAICustomLabel4Filter::setCustomLabel4(const OAICatalogsProductGroupMultipleStringCriteria &custom_label_4) {
    this->custom_label_4 = custom_label_4;
    this->m_custom_label_4_isSet = true;
}

bool OAICustomLabel4Filter::is_custom_label_4_Set() const{
    return m_custom_label_4_isSet;
}

bool OAICustomLabel4Filter::is_custom_label_4_Valid() const{
    return m_custom_label_4_isValid;
}

bool OAICustomLabel4Filter::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_custom_label_4_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustomLabel4Filter::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_custom_label_4_isValid && true;
}

} // namespace OpenAPI
