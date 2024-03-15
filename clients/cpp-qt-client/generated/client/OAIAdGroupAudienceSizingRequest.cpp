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

#include "OAIAdGroupAudienceSizingRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAdGroupAudienceSizingRequest::OAIAdGroupAudienceSizingRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAdGroupAudienceSizingRequest::OAIAdGroupAudienceSizingRequest() {
    this->initializeModel();
}

OAIAdGroupAudienceSizingRequest::~OAIAdGroupAudienceSizingRequest() {}

void OAIAdGroupAudienceSizingRequest::initializeModel() {

    m_auto_targeting_enabled_isSet = false;
    m_auto_targeting_enabled_isValid = false;

    m_placement_group_isSet = false;
    m_placement_group_isValid = false;

    m_creative_types_isSet = false;
    m_creative_types_isValid = false;

    m_targeting_spec_isSet = false;
    m_targeting_spec_isValid = false;

    m_product_group_ids_isSet = false;
    m_product_group_ids_isValid = false;

    m_keywords_isSet = false;
    m_keywords_isValid = false;
}

void OAIAdGroupAudienceSizingRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAdGroupAudienceSizingRequest::fromJsonObject(QJsonObject json) {

    m_auto_targeting_enabled_isValid = ::OpenAPI::fromJsonValue(m_auto_targeting_enabled, json[QString("auto_targeting_enabled")]);
    m_auto_targeting_enabled_isSet = !json[QString("auto_targeting_enabled")].isNull() && m_auto_targeting_enabled_isValid;

    m_placement_group_isValid = ::OpenAPI::fromJsonValue(m_placement_group, json[QString("placement_group")]);
    m_placement_group_isSet = !json[QString("placement_group")].isNull() && m_placement_group_isValid;

    m_creative_types_isValid = ::OpenAPI::fromJsonValue(m_creative_types, json[QString("creative_types")]);
    m_creative_types_isSet = !json[QString("creative_types")].isNull() && m_creative_types_isValid;

    m_targeting_spec_isValid = ::OpenAPI::fromJsonValue(m_targeting_spec, json[QString("targeting_spec")]);
    m_targeting_spec_isSet = !json[QString("targeting_spec")].isNull() && m_targeting_spec_isValid;

    m_product_group_ids_isValid = ::OpenAPI::fromJsonValue(m_product_group_ids, json[QString("product_group_ids")]);
    m_product_group_ids_isSet = !json[QString("product_group_ids")].isNull() && m_product_group_ids_isValid;

    m_keywords_isValid = ::OpenAPI::fromJsonValue(m_keywords, json[QString("keywords")]);
    m_keywords_isSet = !json[QString("keywords")].isNull() && m_keywords_isValid;
}

QString OAIAdGroupAudienceSizingRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAdGroupAudienceSizingRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_auto_targeting_enabled_isSet) {
        obj.insert(QString("auto_targeting_enabled"), ::OpenAPI::toJsonValue(m_auto_targeting_enabled));
    }
    if (m_placement_group.isSet()) {
        obj.insert(QString("placement_group"), ::OpenAPI::toJsonValue(m_placement_group));
    }
    if (m_creative_types.size() > 0) {
        obj.insert(QString("creative_types"), ::OpenAPI::toJsonValue(m_creative_types));
    }
    if (m_targeting_spec.isSet()) {
        obj.insert(QString("targeting_spec"), ::OpenAPI::toJsonValue(m_targeting_spec));
    }
    if (m_product_group_ids.size() > 0) {
        obj.insert(QString("product_group_ids"), ::OpenAPI::toJsonValue(m_product_group_ids));
    }
    if (m_keywords.size() > 0) {
        obj.insert(QString("keywords"), ::OpenAPI::toJsonValue(m_keywords));
    }
    return obj;
}

bool OAIAdGroupAudienceSizingRequest::isAutoTargetingEnabled() const {
    return m_auto_targeting_enabled;
}
void OAIAdGroupAudienceSizingRequest::setAutoTargetingEnabled(const bool &auto_targeting_enabled) {
    m_auto_targeting_enabled = auto_targeting_enabled;
    m_auto_targeting_enabled_isSet = true;
}

bool OAIAdGroupAudienceSizingRequest::is_auto_targeting_enabled_Set() const{
    return m_auto_targeting_enabled_isSet;
}

bool OAIAdGroupAudienceSizingRequest::is_auto_targeting_enabled_Valid() const{
    return m_auto_targeting_enabled_isValid;
}

OAIPlacementGroupType OAIAdGroupAudienceSizingRequest::getPlacementGroup() const {
    return m_placement_group;
}
void OAIAdGroupAudienceSizingRequest::setPlacementGroup(const OAIPlacementGroupType &placement_group) {
    m_placement_group = placement_group;
    m_placement_group_isSet = true;
}

bool OAIAdGroupAudienceSizingRequest::is_placement_group_Set() const{
    return m_placement_group_isSet;
}

bool OAIAdGroupAudienceSizingRequest::is_placement_group_Valid() const{
    return m_placement_group_isValid;
}

QList<QString> OAIAdGroupAudienceSizingRequest::getCreativeTypes() const {
    return m_creative_types;
}
void OAIAdGroupAudienceSizingRequest::setCreativeTypes(const QList<QString> &creative_types) {
    m_creative_types = creative_types;
    m_creative_types_isSet = true;
}

bool OAIAdGroupAudienceSizingRequest::is_creative_types_Set() const{
    return m_creative_types_isSet;
}

bool OAIAdGroupAudienceSizingRequest::is_creative_types_Valid() const{
    return m_creative_types_isValid;
}

OAITargetingSpec OAIAdGroupAudienceSizingRequest::getTargetingSpec() const {
    return m_targeting_spec;
}
void OAIAdGroupAudienceSizingRequest::setTargetingSpec(const OAITargetingSpec &targeting_spec) {
    m_targeting_spec = targeting_spec;
    m_targeting_spec_isSet = true;
}

bool OAIAdGroupAudienceSizingRequest::is_targeting_spec_Set() const{
    return m_targeting_spec_isSet;
}

bool OAIAdGroupAudienceSizingRequest::is_targeting_spec_Valid() const{
    return m_targeting_spec_isValid;
}

QList<QString> OAIAdGroupAudienceSizingRequest::getProductGroupIds() const {
    return m_product_group_ids;
}
void OAIAdGroupAudienceSizingRequest::setProductGroupIds(const QList<QString> &product_group_ids) {
    m_product_group_ids = product_group_ids;
    m_product_group_ids_isSet = true;
}

bool OAIAdGroupAudienceSizingRequest::is_product_group_ids_Set() const{
    return m_product_group_ids_isSet;
}

bool OAIAdGroupAudienceSizingRequest::is_product_group_ids_Valid() const{
    return m_product_group_ids_isValid;
}

QList<OAIAdGroupAudienceSizingRequest_keywords_inner> OAIAdGroupAudienceSizingRequest::getKeywords() const {
    return m_keywords;
}
void OAIAdGroupAudienceSizingRequest::setKeywords(const QList<OAIAdGroupAudienceSizingRequest_keywords_inner> &keywords) {
    m_keywords = keywords;
    m_keywords_isSet = true;
}

bool OAIAdGroupAudienceSizingRequest::is_keywords_Set() const{
    return m_keywords_isSet;
}

bool OAIAdGroupAudienceSizingRequest::is_keywords_Valid() const{
    return m_keywords_isValid;
}

bool OAIAdGroupAudienceSizingRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_auto_targeting_enabled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_placement_group.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_creative_types.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_targeting_spec.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_product_group_ids.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_keywords.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAdGroupAudienceSizingRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
