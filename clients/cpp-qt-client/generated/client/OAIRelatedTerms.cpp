/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIRelatedTerms.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIRelatedTerms::OAIRelatedTerms(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIRelatedTerms::OAIRelatedTerms() {
    this->initializeModel();
}

OAIRelatedTerms::~OAIRelatedTerms() {}

void OAIRelatedTerms::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_related_term_count_isSet = false;
    m_related_term_count_isValid = false;

    m_related_terms_list_isSet = false;
    m_related_terms_list_isValid = false;
}

void OAIRelatedTerms::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIRelatedTerms::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_related_term_count_isValid = ::OpenAPI::fromJsonValue(related_term_count, json[QString("related_term_count")]);
    m_related_term_count_isSet = !json[QString("related_term_count")].isNull() && m_related_term_count_isValid;

    m_related_terms_list_isValid = ::OpenAPI::fromJsonValue(related_terms_list, json[QString("related_terms_list")]);
    m_related_terms_list_isSet = !json[QString("related_terms_list")].isNull() && m_related_terms_list_isValid;
}

QString OAIRelatedTerms::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIRelatedTerms::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_related_term_count_isSet) {
        obj.insert(QString("related_term_count"), ::OpenAPI::toJsonValue(related_term_count));
    }
    if (related_terms_list.size() > 0) {
        obj.insert(QString("related_terms_list"), ::OpenAPI::toJsonValue(related_terms_list));
    }
    return obj;
}

QString OAIRelatedTerms::getId() const {
    return id;
}
void OAIRelatedTerms::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIRelatedTerms::is_id_Set() const{
    return m_id_isSet;
}

bool OAIRelatedTerms::is_id_Valid() const{
    return m_id_isValid;
}

qint32 OAIRelatedTerms::getRelatedTermCount() const {
    return related_term_count;
}
void OAIRelatedTerms::setRelatedTermCount(const qint32 &related_term_count) {
    this->related_term_count = related_term_count;
    this->m_related_term_count_isSet = true;
}

bool OAIRelatedTerms::is_related_term_count_Set() const{
    return m_related_term_count_isSet;
}

bool OAIRelatedTerms::is_related_term_count_Valid() const{
    return m_related_term_count_isValid;
}

QList<OAIRelatedTerms_related_terms_list_inner> OAIRelatedTerms::getRelatedTermsList() const {
    return related_terms_list;
}
void OAIRelatedTerms::setRelatedTermsList(const QList<OAIRelatedTerms_related_terms_list_inner> &related_terms_list) {
    this->related_terms_list = related_terms_list;
    this->m_related_terms_list_isSet = true;
}

bool OAIRelatedTerms::is_related_terms_list_Set() const{
    return m_related_terms_list_isSet;
}

bool OAIRelatedTerms::is_related_terms_list_Valid() const{
    return m_related_terms_list_isValid;
}

bool OAIRelatedTerms::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_related_term_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (related_terms_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIRelatedTerms::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
