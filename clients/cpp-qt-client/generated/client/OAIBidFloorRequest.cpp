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

#include "OAIBidFloorRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBidFloorRequest::OAIBidFloorRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBidFloorRequest::OAIBidFloorRequest() {
    this->initializeModel();
}

OAIBidFloorRequest::~OAIBidFloorRequest() {}

void OAIBidFloorRequest::initializeModel() {

    m_bid_floor_specs_isSet = false;
    m_bid_floor_specs_isValid = false;

    m_targeting_spec_isSet = false;
    m_targeting_spec_isValid = false;
}

void OAIBidFloorRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBidFloorRequest::fromJsonObject(QJsonObject json) {

    m_bid_floor_specs_isValid = ::OpenAPI::fromJsonValue(bid_floor_specs, json[QString("bid_floor_specs")]);
    m_bid_floor_specs_isSet = !json[QString("bid_floor_specs")].isNull() && m_bid_floor_specs_isValid;

    m_targeting_spec_isValid = ::OpenAPI::fromJsonValue(targeting_spec, json[QString("targeting_spec")]);
    m_targeting_spec_isSet = !json[QString("targeting_spec")].isNull() && m_targeting_spec_isValid;
}

QString OAIBidFloorRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBidFloorRequest::asJsonObject() const {
    QJsonObject obj;
    if (bid_floor_specs.size() > 0) {
        obj.insert(QString("bid_floor_specs"), ::OpenAPI::toJsonValue(bid_floor_specs));
    }
    if (targeting_spec.isSet()) {
        obj.insert(QString("targeting_spec"), ::OpenAPI::toJsonValue(targeting_spec));
    }
    return obj;
}

QList<OAIBidFloorSpec> OAIBidFloorRequest::getBidFloorSpecs() const {
    return bid_floor_specs;
}
void OAIBidFloorRequest::setBidFloorSpecs(const QList<OAIBidFloorSpec> &bid_floor_specs) {
    this->bid_floor_specs = bid_floor_specs;
    this->m_bid_floor_specs_isSet = true;
}

bool OAIBidFloorRequest::is_bid_floor_specs_Set() const{
    return m_bid_floor_specs_isSet;
}

bool OAIBidFloorRequest::is_bid_floor_specs_Valid() const{
    return m_bid_floor_specs_isValid;
}

OAITargetingSpec_1 OAIBidFloorRequest::getTargetingSpec() const {
    return targeting_spec;
}
void OAIBidFloorRequest::setTargetingSpec(const OAITargetingSpec_1 &targeting_spec) {
    this->targeting_spec = targeting_spec;
    this->m_targeting_spec_isSet = true;
}

bool OAIBidFloorRequest::is_targeting_spec_Set() const{
    return m_targeting_spec_isSet;
}

bool OAIBidFloorRequest::is_targeting_spec_Valid() const{
    return m_targeting_spec_isValid;
}

bool OAIBidFloorRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (bid_floor_specs.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (targeting_spec.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBidFloorRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_bid_floor_specs_isValid && true;
}

} // namespace OpenAPI
