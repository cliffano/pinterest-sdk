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

#include "OAIAudienceInsightsResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAudienceInsightsResponse::OAIAudienceInsightsResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAudienceInsightsResponse::OAIAudienceInsightsResponse() {
    this->initializeModel();
}

OAIAudienceInsightsResponse::~OAIAudienceInsightsResponse() {}

void OAIAudienceInsightsResponse::initializeModel() {

    m_categories_isSet = false;
    m_categories_isValid = false;

    m_demographics_isSet = false;
    m_demographics_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_date_isSet = false;
    m_date_isValid = false;

    m_size_isSet = false;
    m_size_isValid = false;

    m_size_is_upper_bound_isSet = false;
    m_size_is_upper_bound_isValid = false;
}

void OAIAudienceInsightsResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAudienceInsightsResponse::fromJsonObject(QJsonObject json) {

    m_categories_isValid = ::OpenAPI::fromJsonValue(m_categories, json[QString("categories")]);
    m_categories_isSet = !json[QString("categories")].isNull() && m_categories_isValid;

    m_demographics_isValid = ::OpenAPI::fromJsonValue(m_demographics, json[QString("demographics")]);
    m_demographics_isSet = !json[QString("demographics")].isNull() && m_demographics_isValid;

    m_type_isValid = ::OpenAPI::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_date_isValid = ::OpenAPI::fromJsonValue(m_date, json[QString("date")]);
    m_date_isSet = !json[QString("date")].isNull() && m_date_isValid;

    m_size_isValid = ::OpenAPI::fromJsonValue(m_size, json[QString("size")]);
    m_size_isSet = !json[QString("size")].isNull() && m_size_isValid;

    m_size_is_upper_bound_isValid = ::OpenAPI::fromJsonValue(m_size_is_upper_bound, json[QString("size_is_upper_bound")]);
    m_size_is_upper_bound_isSet = !json[QString("size_is_upper_bound")].isNull() && m_size_is_upper_bound_isValid;
}

QString OAIAudienceInsightsResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAudienceInsightsResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_categories.size() > 0) {
        obj.insert(QString("categories"), ::OpenAPI::toJsonValue(m_categories));
    }
    if (m_demographics.isSet()) {
        obj.insert(QString("demographics"), ::OpenAPI::toJsonValue(m_demographics));
    }
    if (m_type.isSet()) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(m_type));
    }
    if (m_date_isSet) {
        obj.insert(QString("date"), ::OpenAPI::toJsonValue(m_date));
    }
    if (m_size_isSet) {
        obj.insert(QString("size"), ::OpenAPI::toJsonValue(m_size));
    }
    if (m_size_is_upper_bound_isSet) {
        obj.insert(QString("size_is_upper_bound"), ::OpenAPI::toJsonValue(m_size_is_upper_bound));
    }
    return obj;
}

QList<OAIAudienceCategory> OAIAudienceInsightsResponse::getCategories() const {
    return m_categories;
}
void OAIAudienceInsightsResponse::setCategories(const QList<OAIAudienceCategory> &categories) {
    m_categories = categories;
    m_categories_isSet = true;
}

bool OAIAudienceInsightsResponse::is_categories_Set() const{
    return m_categories_isSet;
}

bool OAIAudienceInsightsResponse::is_categories_Valid() const{
    return m_categories_isValid;
}

OAIAudienceDemographics OAIAudienceInsightsResponse::getDemographics() const {
    return m_demographics;
}
void OAIAudienceInsightsResponse::setDemographics(const OAIAudienceDemographics &demographics) {
    m_demographics = demographics;
    m_demographics_isSet = true;
}

bool OAIAudienceInsightsResponse::is_demographics_Set() const{
    return m_demographics_isSet;
}

bool OAIAudienceInsightsResponse::is_demographics_Valid() const{
    return m_demographics_isValid;
}

OAIAudienceInsightType OAIAudienceInsightsResponse::getType() const {
    return m_type;
}
void OAIAudienceInsightsResponse::setType(const OAIAudienceInsightType &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIAudienceInsightsResponse::is_type_Set() const{
    return m_type_isSet;
}

bool OAIAudienceInsightsResponse::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIAudienceInsightsResponse::getDate() const {
    return m_date;
}
void OAIAudienceInsightsResponse::setDate(const QString &date) {
    m_date = date;
    m_date_isSet = true;
}

bool OAIAudienceInsightsResponse::is_date_Set() const{
    return m_date_isSet;
}

bool OAIAudienceInsightsResponse::is_date_Valid() const{
    return m_date_isValid;
}

qint32 OAIAudienceInsightsResponse::getSize() const {
    return m_size;
}
void OAIAudienceInsightsResponse::setSize(const qint32 &size) {
    m_size = size;
    m_size_isSet = true;
}

bool OAIAudienceInsightsResponse::is_size_Set() const{
    return m_size_isSet;
}

bool OAIAudienceInsightsResponse::is_size_Valid() const{
    return m_size_isValid;
}

bool OAIAudienceInsightsResponse::isSizeIsUpperBound() const {
    return m_size_is_upper_bound;
}
void OAIAudienceInsightsResponse::setSizeIsUpperBound(const bool &size_is_upper_bound) {
    m_size_is_upper_bound = size_is_upper_bound;
    m_size_is_upper_bound_isSet = true;
}

bool OAIAudienceInsightsResponse::is_size_is_upper_bound_Set() const{
    return m_size_is_upper_bound_isSet;
}

bool OAIAudienceInsightsResponse::is_size_is_upper_bound_Valid() const{
    return m_size_is_upper_bound_isValid;
}

bool OAIAudienceInsightsResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_categories.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_demographics.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_size_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_size_is_upper_bound_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAudienceInsightsResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
