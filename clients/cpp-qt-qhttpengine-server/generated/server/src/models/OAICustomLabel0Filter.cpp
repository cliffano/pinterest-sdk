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

#include "OAICustomLabel0Filter.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustomLabel0Filter::OAICustomLabel0Filter(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustomLabel0Filter::OAICustomLabel0Filter() {
    this->initializeModel();
}

OAICustomLabel0Filter::~OAICustomLabel0Filter() {}

void OAICustomLabel0Filter::initializeModel() {

    m_custom_label_0_isSet = false;
    m_custom_label_0_isValid = false;
}

void OAICustomLabel0Filter::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustomLabel0Filter::fromJsonObject(QJsonObject json) {

    m_custom_label_0_isValid = ::OpenAPI::fromJsonValue(custom_label_0, json[QString("CUSTOM_LABEL_0")]);
    m_custom_label_0_isSet = !json[QString("CUSTOM_LABEL_0")].isNull() && m_custom_label_0_isValid;
}

QString OAICustomLabel0Filter::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustomLabel0Filter::asJsonObject() const {
    QJsonObject obj;
    if (m_custom_label_0_isSet) {
        obj.insert(QString("CUSTOM_LABEL_0"), ::OpenAPI::toJsonValue(custom_label_0));
    }
    return obj;
}

OAICatalogsProductGroupMultipleStringCriteria OAICustomLabel0Filter::getCustomLabel0() const {
    return custom_label_0;
}
void OAICustomLabel0Filter::setCustomLabel0(const OAICatalogsProductGroupMultipleStringCriteria &custom_label_0) {
    this->custom_label_0 = custom_label_0;
    this->m_custom_label_0_isSet = true;
}

bool OAICustomLabel0Filter::is_custom_label_0_Set() const{
    return m_custom_label_0_isSet;
}

bool OAICustomLabel0Filter::is_custom_label_0_Valid() const{
    return m_custom_label_0_isValid;
}

bool OAICustomLabel0Filter::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_custom_label_0_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustomLabel0Filter::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_custom_label_0_isValid && true;
}

} // namespace OpenAPI
