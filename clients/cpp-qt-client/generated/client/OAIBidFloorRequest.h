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

/*
 * OAIBidFloorRequest.h
 *
 * 
 */

#ifndef OAIBidFloorRequest_H
#define OAIBidFloorRequest_H

#include <QJsonObject>

#include "OAIBidFloorSpec.h"
#include "OAITargetingSpec_1.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIBidFloorSpec;
class OAITargetingSpec_1;

class OAIBidFloorRequest : public OAIObject {
public:
    OAIBidFloorRequest();
    OAIBidFloorRequest(QString json);
    ~OAIBidFloorRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIBidFloorSpec> getBidFloorSpecs() const;
    void setBidFloorSpecs(const QList<OAIBidFloorSpec> &bid_floor_specs);
    bool is_bid_floor_specs_Set() const;
    bool is_bid_floor_specs_Valid() const;

    OAITargetingSpec_1 getTargetingSpec() const;
    void setTargetingSpec(const OAITargetingSpec_1 &targeting_spec);
    bool is_targeting_spec_Set() const;
    bool is_targeting_spec_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIBidFloorSpec> m_bid_floor_specs;
    bool m_bid_floor_specs_isSet;
    bool m_bid_floor_specs_isValid;

    OAITargetingSpec_1 m_targeting_spec;
    bool m_targeting_spec_isSet;
    bool m_targeting_spec_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBidFloorRequest)

#endif // OAIBidFloorRequest_H
