/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICatalogsListProductsByFilterRequest_oneOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsListProductsByFilterRequest_oneOf::OAICatalogsListProductsByFilterRequest_oneOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsListProductsByFilterRequest_oneOf::OAICatalogsListProductsByFilterRequest_oneOf() {
    this->initializeModel();
}

OAICatalogsListProductsByFilterRequest_oneOf::~OAICatalogsListProductsByFilterRequest_oneOf() {}

void OAICatalogsListProductsByFilterRequest_oneOf::initializeModel() {

    m_feed_id_isSet = false;
    m_feed_id_isValid = false;

    m_filters_isSet = false;
    m_filters_isValid = false;
}

void OAICatalogsListProductsByFilterRequest_oneOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogsListProductsByFilterRequest_oneOf::fromJsonObject(QJsonObject json) {

    m_feed_id_isValid = ::OpenAPI::fromJsonValue(feed_id, json[QString("feed_id")]);
    m_feed_id_isSet = !json[QString("feed_id")].isNull() && m_feed_id_isValid;

    m_filters_isValid = ::OpenAPI::fromJsonValue(filters, json[QString("filters")]);
    m_filters_isSet = !json[QString("filters")].isNull() && m_filters_isValid;
}

QString OAICatalogsListProductsByFilterRequest_oneOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogsListProductsByFilterRequest_oneOf::asJsonObject() const {
    QJsonObject obj;
    if (m_feed_id_isSet) {
        obj.insert(QString("feed_id"), ::OpenAPI::toJsonValue(feed_id));
    }
    if (filters.isSet()) {
        obj.insert(QString("filters"), ::OpenAPI::toJsonValue(filters));
    }
    return obj;
}

QString OAICatalogsListProductsByFilterRequest_oneOf::getFeedId() const {
    return feed_id;
}
void OAICatalogsListProductsByFilterRequest_oneOf::setFeedId(const QString &feed_id) {
    this->feed_id = feed_id;
    this->m_feed_id_isSet = true;
}

bool OAICatalogsListProductsByFilterRequest_oneOf::is_feed_id_Set() const{
    return m_feed_id_isSet;
}

bool OAICatalogsListProductsByFilterRequest_oneOf::is_feed_id_Valid() const{
    return m_feed_id_isValid;
}

OAICatalogsProductGroupFilters OAICatalogsListProductsByFilterRequest_oneOf::getFilters() const {
    return filters;
}
void OAICatalogsListProductsByFilterRequest_oneOf::setFilters(const OAICatalogsProductGroupFilters &filters) {
    this->filters = filters;
    this->m_filters_isSet = true;
}

bool OAICatalogsListProductsByFilterRequest_oneOf::is_filters_Set() const{
    return m_filters_isSet;
}

bool OAICatalogsListProductsByFilterRequest_oneOf::is_filters_Valid() const{
    return m_filters_isValid;
}

bool OAICatalogsListProductsByFilterRequest_oneOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_feed_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (filters.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICatalogsListProductsByFilterRequest_oneOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_feed_id_isValid && m_filters_isValid && true;
}

} // namespace OpenAPI
