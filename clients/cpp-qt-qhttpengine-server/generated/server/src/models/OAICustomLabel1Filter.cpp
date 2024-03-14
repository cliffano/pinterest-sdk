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

#include "OAICustomLabel1Filter.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustomLabel1Filter::OAICustomLabel1Filter(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustomLabel1Filter::OAICustomLabel1Filter() {
    this->initializeModel();
}

OAICustomLabel1Filter::~OAICustomLabel1Filter() {}

void OAICustomLabel1Filter::initializeModel() {

    m_custom_label_1_isSet = false;
    m_custom_label_1_isValid = false;
}

void OAICustomLabel1Filter::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustomLabel1Filter::fromJsonObject(QJsonObject json) {

    m_custom_label_1_isValid = ::OpenAPI::fromJsonValue(custom_label_1, json[QString("CUSTOM_LABEL_1")]);
    m_custom_label_1_isSet = !json[QString("CUSTOM_LABEL_1")].isNull() && m_custom_label_1_isValid;
}

QString OAICustomLabel1Filter::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustomLabel1Filter::asJsonObject() const {
    QJsonObject obj;
    if (m_custom_label_1_isSet) {
        obj.insert(QString("CUSTOM_LABEL_1"), ::OpenAPI::toJsonValue(custom_label_1));
    }
    return obj;
}

OAICatalogsProductGroupMultipleStringCriteria OAICustomLabel1Filter::getCustomLabel1() const {
    return custom_label_1;
}
void OAICustomLabel1Filter::setCustomLabel1(const OAICatalogsProductGroupMultipleStringCriteria &custom_label_1) {
    this->custom_label_1 = custom_label_1;
    this->m_custom_label_1_isSet = true;
}

bool OAICustomLabel1Filter::is_custom_label_1_Set() const{
    return m_custom_label_1_isSet;
}

bool OAICustomLabel1Filter::is_custom_label_1_Valid() const{
    return m_custom_label_1_isValid;
}

bool OAICustomLabel1Filter::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_custom_label_1_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustomLabel1Filter::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_custom_label_1_isValid && true;
}

} // namespace OpenAPI
