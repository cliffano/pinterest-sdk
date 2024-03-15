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

#include "OAIAdGroupAudienceSizingResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAdGroupAudienceSizingResponse::OAIAdGroupAudienceSizingResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAdGroupAudienceSizingResponse::OAIAdGroupAudienceSizingResponse() {
    this->initializeModel();
}

OAIAdGroupAudienceSizingResponse::~OAIAdGroupAudienceSizingResponse() {}

void OAIAdGroupAudienceSizingResponse::initializeModel() {

    m_audience_size_lower_bound_isSet = false;
    m_audience_size_lower_bound_isValid = false;

    m_audience_size_upper_bound_isSet = false;
    m_audience_size_upper_bound_isValid = false;
}

void OAIAdGroupAudienceSizingResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAdGroupAudienceSizingResponse::fromJsonObject(QJsonObject json) {

    m_audience_size_lower_bound_isValid = ::OpenAPI::fromJsonValue(audience_size_lower_bound, json[QString("audience_size_lower_bound")]);
    m_audience_size_lower_bound_isSet = !json[QString("audience_size_lower_bound")].isNull() && m_audience_size_lower_bound_isValid;

    m_audience_size_upper_bound_isValid = ::OpenAPI::fromJsonValue(audience_size_upper_bound, json[QString("audience_size_upper_bound")]);
    m_audience_size_upper_bound_isSet = !json[QString("audience_size_upper_bound")].isNull() && m_audience_size_upper_bound_isValid;
}

QString OAIAdGroupAudienceSizingResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAdGroupAudienceSizingResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_audience_size_lower_bound_isSet) {
        obj.insert(QString("audience_size_lower_bound"), ::OpenAPI::toJsonValue(audience_size_lower_bound));
    }
    if (m_audience_size_upper_bound_isSet) {
        obj.insert(QString("audience_size_upper_bound"), ::OpenAPI::toJsonValue(audience_size_upper_bound));
    }
    return obj;
}

double OAIAdGroupAudienceSizingResponse::getAudienceSizeLowerBound() const {
    return audience_size_lower_bound;
}
void OAIAdGroupAudienceSizingResponse::setAudienceSizeLowerBound(const double &audience_size_lower_bound) {
    this->audience_size_lower_bound = audience_size_lower_bound;
    this->m_audience_size_lower_bound_isSet = true;
}

bool OAIAdGroupAudienceSizingResponse::is_audience_size_lower_bound_Set() const{
    return m_audience_size_lower_bound_isSet;
}

bool OAIAdGroupAudienceSizingResponse::is_audience_size_lower_bound_Valid() const{
    return m_audience_size_lower_bound_isValid;
}

double OAIAdGroupAudienceSizingResponse::getAudienceSizeUpperBound() const {
    return audience_size_upper_bound;
}
void OAIAdGroupAudienceSizingResponse::setAudienceSizeUpperBound(const double &audience_size_upper_bound) {
    this->audience_size_upper_bound = audience_size_upper_bound;
    this->m_audience_size_upper_bound_isSet = true;
}

bool OAIAdGroupAudienceSizingResponse::is_audience_size_upper_bound_Set() const{
    return m_audience_size_upper_bound_isSet;
}

bool OAIAdGroupAudienceSizingResponse::is_audience_size_upper_bound_Valid() const{
    return m_audience_size_upper_bound_isValid;
}

bool OAIAdGroupAudienceSizingResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_audience_size_lower_bound_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_audience_size_upper_bound_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAdGroupAudienceSizingResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI