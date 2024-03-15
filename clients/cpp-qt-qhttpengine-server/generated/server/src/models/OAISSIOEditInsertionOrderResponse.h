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

/*
 * OAISSIOEditInsertionOrderResponse.h
 *
 * 
 */

#ifndef OAISSIOEditInsertionOrderResponse_H
#define OAISSIOEditInsertionOrderResponse_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAISSIOEditInsertionOrderResponse : public OAIObject {
public:
    OAISSIOEditInsertionOrderResponse();
    OAISSIOEditInsertionOrderResponse(QString json);
    ~OAISSIOEditInsertionOrderResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getPinOrderId() const;
    void setPinOrderId(const QString &pin_order_id);
    bool is_pin_order_id_Set() const;
    bool is_pin_order_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString pin_order_id;
    bool m_pin_order_id_isSet;
    bool m_pin_order_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISSIOEditInsertionOrderResponse)

#endif // OAISSIOEditInsertionOrderResponse_H