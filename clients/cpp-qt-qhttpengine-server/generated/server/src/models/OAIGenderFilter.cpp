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

#include "OAIGenderFilter.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIGenderFilter::OAIGenderFilter(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGenderFilter::OAIGenderFilter() {
    this->initializeModel();
}

OAIGenderFilter::~OAIGenderFilter() {}

void OAIGenderFilter::initializeModel() {

    m_gender_isSet = false;
    m_gender_isValid = false;
}

void OAIGenderFilter::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGenderFilter::fromJsonObject(QJsonObject json) {

    m_gender_isValid = ::OpenAPI::fromJsonValue(gender, json[QString("GENDER")]);
    m_gender_isSet = !json[QString("GENDER")].isNull() && m_gender_isValid;
}

QString OAIGenderFilter::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGenderFilter::asJsonObject() const {
    QJsonObject obj;
    if (m_gender_isSet) {
        obj.insert(QString("GENDER"), ::OpenAPI::toJsonValue(gender));
    }
    return obj;
}

OAICatalogsProductGroupMultipleGenderCriteria OAIGenderFilter::getGender() const {
    return gender;
}
void OAIGenderFilter::setGender(const OAICatalogsProductGroupMultipleGenderCriteria &gender) {
    this->gender = gender;
    this->m_gender_isSet = true;
}

bool OAIGenderFilter::is_gender_Set() const{
    return m_gender_isSet;
}

bool OAIGenderFilter::is_gender_Valid() const{
    return m_gender_isValid;
}

bool OAIGenderFilter::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_gender_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGenderFilter::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_gender_isValid && true;
}

} // namespace OpenAPI
