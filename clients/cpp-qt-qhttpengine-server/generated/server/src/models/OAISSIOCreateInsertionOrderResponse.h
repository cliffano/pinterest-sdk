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
 * OAISSIOCreateInsertionOrderResponse.h
 *
 * 
 */

#ifndef OAISSIOCreateInsertionOrderResponse_H
#define OAISSIOCreateInsertionOrderResponse_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAISSIOCreateInsertionOrderResponse : public OAIObject {
public:
    OAISSIOCreateInsertionOrderResponse();
    OAISSIOCreateInsertionOrderResponse(QString json);
    ~OAISSIOCreateInsertionOrderResponse() override;

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

Q_DECLARE_METATYPE(OpenAPI::OAISSIOCreateInsertionOrderResponse)

#endif // OAISSIOCreateInsertionOrderResponse_H
